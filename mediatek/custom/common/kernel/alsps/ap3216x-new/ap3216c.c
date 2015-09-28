/*
 * This file is part of the AP3216C sensor driver for MTK platform.
 * AP3216C is combined proximity, ambient light sensor and IRLED.
 *
 * Contact: YC Hou <yc.hou@liteonsemi.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 *
 * Filename: ap3216c_mtk.c
 *
 * Summary:
 *	AP3216C sensor dirver.
 *
 * Modification History:
 * Date     By       Summary
 * -------- -------- -------------------------------------------------------
 * 05/11/12 YC		 Original Creation (Test version:1.0)
 * 05/30/12 YC		 Modify AP3216C_check_and_clear_intr return value and exchange
 *                   AP3216C_get_ps_value return value to meet our spec.
 * 05/30/12 YC		 Correct shift number in AP3216C_read_ps.
 * 05/30/12 YC		 Correct ps data formula.
 * 05/31/12 YC		 1. Change the reg in clear int function from low byte to high byte 
 *                      and modify the return value.
 *                   2. Modify the eint_work function to filter als int.
 * 06/04/12 YC		 Add PS high/low threshold instead of using the same value.
 * 07/12/12 YC		 Add wakelock to prevent entering suspend when early suspending.
 *
 */

#include <linux/interrupt.h>
#include <linux/i2c.h>
#include <linux/slab.h>
#include <linux/irq.h>
#include <linux/miscdevice.h>
#include <asm/uaccess.h>
#include <linux/delay.h>
#include <linux/input.h>
#include <linux/workqueue.h>
#include <linux/kobject.h>
#include <linux/earlysuspend.h>
#include <linux/platform_device.h>
#include <asm/atomic.h>
//#include <linux/wakelock.h>



#include <linux/hwmsensor.h>
#include <linux/hwmsen_dev.h>
#include <linux/sensors_io.h>
#include <asm/io.h>
#include <cust_eint.h>
#include <cust_alsps.h>
#include "ap3216c.h"


//#include <mach/mt_devs.h>
#include <mach/mt_typedefs.h>
#include <mach/mt_gpio.h>
#include <mach/mt_pm_ldo.h>
#include <alsps.h>
#ifdef CUSTOM_KERNEL_SENSORHUB
#include <SCP_sensorHub.h>
#endif

#define POWER_NONE_MACRO MT65XX_POWER_NONE

/****************************************************************************** * extern functions*******************************************************************************/
extern void mt_eint_mask(unsigned int eint_num);
extern void mt_eint_unmask(unsigned int eint_num);
extern void mt_eint_set_hw_debounce(unsigned int eint_num, unsigned int ms);
extern void mt_eint_set_polarity(unsigned int eint_num, unsigned int pol);
extern unsigned int mt_eint_set_sens(unsigned int eint_num, unsigned int sens);
extern void mt_eint_registration(unsigned int eint_num, unsigned int flow, void (EINT_FUNC_PTR)(void), unsigned int is_auto_umask);

/******************************************************************************
 * configuration
*******************************************************************************/
/*----------------------------------------------------------------------------*/

#define AP3216C_DEV_NAME     "AP3216C"
/*----------------------------------------------------------------------------*/
#define APS_TAG                  "[ALS/PS] "
#define APS_FUN(f)               printk(KERN_INFO APS_TAG"%s\n", __FUNCTION__)
#define APS_ERR(fmt, args...)    printk(KERN_ERR  APS_TAG"%s %d : "fmt, __FUNCTION__, __LINE__, ##args)
#define APS_LOG(fmt, args...)    printk(APS_TAG fmt, ##args)
#define APS_DBG(fmt, args...)    printk(KERN_INFO APS_TAG fmt, ##args)                 

/*----------------------------------------------------------------------------*/
static struct i2c_client *AP3216C_i2c_client = NULL;
/*----------------------------------------------------------------------------*/
static const struct i2c_device_id AP3216C_i2c_id[] = {{AP3216C_DEV_NAME,0},{}};
static struct i2c_board_info __initdata i2c_ap3216c={ I2C_BOARD_INFO("AP3216C", (0x3C >> 1))};
//static unsigned short AP3216C_force[] = {0x00, 0x3C, I2C_CLIENT_END, I2C_CLIENT_END};
//static const unsigned short *const AP3216C_forces[] = { AP3216C_force, NULL };
//static struct i2c_client_address_data AP3216C_addr_data = { .forces = AP3216C_forces,};
/*----------------------------------------------------------------------------*/
static int AP3216C_i2c_probe(struct i2c_client *client, const struct i2c_device_id *id); 
static int AP3216C_i2c_remove(struct i2c_client *client);
//static int AP3216C_i2c_detect(struct i2c_client *client, int kind, struct i2c_board_info *info);
/*----------------------------------------------------------------------------*/
static int AP3216C_i2c_suspend(struct i2c_client *client, pm_message_t msg);
static int AP3216C_i2c_resume(struct i2c_client *client);

static int AP3216C_local_init(void);
static int AP3216C_remove(void);

static struct AP3216C_priv *g_AP3216C_ptr = NULL;

//struct wake_lock ps_lock;

/*----------------------------------------------------------------------------*/
typedef enum {
    CMC_BIT_ALS    = 1,
    CMC_BIT_PS     = 2,
} CMC_BIT;
/*----------------------------------------------------------------------------*/
struct AP3216C_i2c_addr {    /*define a series of i2c slave address*/
    u8  write_addr;  
    u8  ps_thd;     /*PS INT threshold*/
};
/*----------------------------------------------------------------------------*/
struct AP3216C_priv {
    struct alsps_hw  *hw;
    struct i2c_client *client;
    struct work_struct  eint_work;
    struct work_struct data_work;
#ifdef CUSTOM_KERNEL_SENSORHUB
    struct work_struct init_done_work;
#endif

    /*i2c address group*/
    struct AP3216C_i2c_addr  addr;
    
    /*misc*/
    u16		    als_modulus;
    atomic_t    i2c_retry;
    atomic_t    als_suspend;
    atomic_t    als_debounce;   /*debounce time after enabling als*/
    atomic_t    als_deb_on;     /*indicates if the debounce is on*/
    atomic_t    als_deb_end;    /*the jiffies representing the end of debounce*/
    atomic_t    ps_mask;        /*mask ps: always return far away*/
    atomic_t    ps_debounce;    /*debounce time after enabling ps*/
    atomic_t    ps_deb_on;      /*indicates if the debounce is on*/
    atomic_t    ps_deb_end;     /*the jiffies representing the end of debounce*/
    atomic_t    ps_suspend;


    /*data*/
    u16         als;
    u16          ps;
    u8          _align;
    u16         als_level_num;
    u16         als_value_num;
    u32         als_level[C_CUST_ALS_LEVEL-1];
    u32         als_value[C_CUST_ALS_LEVEL];

    atomic_t    als_cmd_val;    /*the cmd value can't be read, stored in ram*/
    atomic_t    ps_cmd_val;     /*the cmd value can't be read, stored in ram*/
    atomic_t    ps_thd_val_high;   /*the cmd value can't be read, stored in ram*/
	atomic_t    ps_thd_val_low;   /*the cmd value can't be read, stored in ram*/
    ulong       enable;         /*enable mask*/
    ulong       pending_intr;   /*pending interrupt*/

    /*early suspend*/
#if defined(CONFIG_HAS_EARLYSUSPEND)
    struct early_suspend    early_drv;
#endif     
};
/*----------------------------------------------------------------------------*/
static struct i2c_driver AP3216C_i2c_driver = {	
	.probe      = AP3216C_i2c_probe,
	.remove     = AP3216C_i2c_remove,
//	.detect     = AP3216C_i2c_detect,
	.suspend    = AP3216C_i2c_suspend,
	.resume     = AP3216C_i2c_resume,
	.id_table   = AP3216C_i2c_id,
//	.address_data = &AP3216C_addr_data,
	.driver = {
//		.owner          = THIS_MODULE,
		.name           = AP3216C_DEV_NAME,
	},
};

static struct AP3216C_priv *AP3216C_obj = NULL;
//static struct platform_driver AP3216C_alsps_driver;

static int ap3216c_init_flag =-1; // 0<==>OK -1 <==> fail

static struct alsps_init_info ap3216c_init_info = {
		.name = "ap3216c",
		.init = AP3216C_local_init,
		.uninit = AP3216C_remove,
	
};
/*----------------------------------------------------------------------------*/
int AP3216C_get_addr(struct alsps_hw *hw, struct AP3216C_i2c_addr *addr)
{
	if(!hw || !addr)
	{
		return -EFAULT;
	}
	addr->write_addr= hw->i2c_addr[0];
	return 0;
}
/*----------------------------------------------------------------------------*/
static void AP3216C_power(struct alsps_hw *hw, unsigned int on) 
{
	static unsigned int power_on = 0;

	if(hw->power_id != POWER_NONE_MACRO)
	{
		if(power_on == on)
		{
			APS_LOG("ignore power control: %d\n", on);
		}
		else if(on)
		{
			if(!hwPowerOn(hw->power_id, hw->power_vol, "AP3216C")) 
			{
				APS_ERR("power on fails!!\n");
			}
		}
		else
		{
			if(!hwPowerDown(hw->power_id, "AP3216C")) 
			{
				APS_ERR("power off fail!!\n");   
			}
		}
	}
	power_on = on;
}
/*----------------------------------------------------------------------------*/
static int AP3216C_enable_als(struct i2c_client *client, int enable)
{
		struct AP3216C_priv *obj = i2c_get_clientdata(client);
		u8 databuf[2];	  
		int res = 0;
		u8 buffer[1];
		u8 reg_value[1];
	
		if(client == NULL)
		{
			APS_DBG("CLIENT CANN'T EQUAL NULL\n");
			return -1;
		}
	
		buffer[0]=AP3216C_LSC_ENABLE;
		res = i2c_master_send(client, buffer, 0x1);
		if(res <= 0)
		{
			goto EXIT_ERR;
		}
		res = i2c_master_recv(client, reg_value, 0x1);
		if(res <= 0)
		{
			goto EXIT_ERR;
		}
		
		if(enable)
		{
			databuf[0] = AP3216C_LSC_ENABLE;	
			databuf[1] = reg_value[0] |0x01;
			res = i2c_master_send(client, databuf, 0x2);
			if(res <= 0)
			{
				goto EXIT_ERR;
			}
			atomic_set(&obj->als_deb_on, 1);
			atomic_set(&obj->als_deb_end, jiffies+atomic_read(&obj->als_debounce)/(1000/HZ));
			APS_DBG("AP3216C ALS enable\n");
		}
		else
		{
			databuf[0] = AP3216C_LSC_ENABLE;	
			databuf[1] = reg_value[0] &0xFE;
			res = i2c_master_send(client, databuf, 0x2);
			if(res <= 0)
			{
				goto EXIT_ERR;
			}
			atomic_set(&obj->als_deb_on, 0);
			APS_DBG("AP3216C ALS disable\n");
		}
		return 0;
		
	EXIT_ERR:
		APS_ERR("AP3216C_enable_als fail\n");
		return res;
}

/*----------------------------------------------------------------------------*/
static int AP3216C_enable_ps(struct i2c_client *client, int enable)
{
	struct AP3216C_priv *obj = i2c_get_clientdata(client);
	u8 databuf[2];    
	int res = 0;
	u8 buffer[1];
	u8 reg_value[1];

	if(client == NULL)
	{
		APS_DBG("CLIENT CANN'T EQUAL NULL\n");
		return -1;
	}

	buffer[0]=AP3216C_LSC_ENABLE;
	res = i2c_master_send(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	res = i2c_master_recv(client, reg_value, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	
	if(enable)
	{
		//wake_lock(&ps_lock);
		databuf[0] = AP3216C_LSC_ENABLE;    
		databuf[1] = reg_value[0] |0x02;
		res = i2c_master_send(client, databuf, 0x2);
		if(res <= 0)
		{
			goto EXIT_ERR;
		}
		atomic_set(&obj->ps_deb_on, 1);
		atomic_set(&obj->ps_deb_end, jiffies+atomic_read(&obj->ps_debounce)/(1000/HZ));

		mt_eint_unmask(CUST_EINT_ALS_NUM);
		APS_DBG("AP3216C PS enable\n");
	}
	else
	{
		databuf[0] = AP3216C_LSC_ENABLE;    
		databuf[1] = reg_value[0] &0xfd;
		res = i2c_master_send(client, databuf, 0x2);
		if(res <= 0)
		{
			goto EXIT_ERR;
		}
		atomic_set(&obj->ps_deb_on, 0);
		APS_DBG("AP3216C PS disable\n");

		if(0 == obj->hw->polling_mode_ps)
		{
			cancel_work_sync(&obj->eint_work);
			mt_eint_mask(CUST_EINT_ALS_NUM);
		}
		//wake_unlock(&ps_lock);
	}
	return 0;
	
EXIT_ERR:
	APS_ERR("AP3216C_enable_ps fail\n");
	return res;
}
/*----------------------------------------------------------------------------*/
static int AP3216C_check_and_clear_intr(struct i2c_client *client) 
{
	struct AP3216C_priv *obj = i2c_get_clientdata(client);
	int res;
	u8 buffer[1], ints[1];

	/* Get Int status */
	buffer[0] = AP3216C_LSC_INT_STATUS;
	res = i2c_master_send(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	res = i2c_master_recv(client, ints, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}

	/* Clear ALS int flag */
	buffer[0] = AP3216C_LSC_ADATA_H;
	res = i2c_master_send(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	res = i2c_master_recv(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}

	/* Clear PS int flag */
	buffer[0] = AP3216C_LSC_PDATA_H;
	res = i2c_master_send(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	res = i2c_master_recv(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}

	return ints[0];

EXIT_ERR:
	APS_ERR("AP3216C_check_and_clear_intr fail\n");
	return -1;
}
/*----------------------------------------------------------------------------*/
void AP3216C_eint_func(void)
{
	struct AP3216C_priv *obj = g_AP3216C_ptr;
	if(!obj)
	{
		return;
	}
	
	schedule_work(&obj->eint_work);
}

/*----------------------------------------------------------------------------*/
// This function depends the real hw setting, customers should modify it. 2012/5/10 YC. 
int AP3216C_setup_eint(struct i2c_client *client)
{
	struct AP3216C_priv *obj = i2c_get_clientdata(client);        

	g_AP3216C_ptr = obj;
	
	mt_set_gpio_dir(GPIO_ALS_EINT_PIN, GPIO_DIR_IN);
	mt_set_gpio_mode(GPIO_ALS_EINT_PIN, GPIO_ALS_EINT_PIN_M_EINT);
	mt_set_gpio_pull_enable(GPIO_ALS_EINT_PIN, TRUE);
	mt_set_gpio_pull_select(GPIO_ALS_EINT_PIN, GPIO_PULL_UP);

	//mt65xx_eint_set_sens(CUST_EINT_ALS_NUM, CUST_EINT_ALS_SENSITIVE);
	//mt65xx_eint_set_polarity(CUST_EINT_ALS_NUM, CUST_EINT_ALS_POLARITY);
	mt_eint_set_hw_debounce(CUST_EINT_ALS_NUM, CUST_EINT_ALS_DEBOUNCE_CN);
	mt_eint_registration(CUST_EINT_ALS_NUM, CUST_EINT_ALS_TYPE, AP3216C_eint_func, 0);

	mt_eint_unmask(CUST_EINT_ALS_NUM);  
	return 0;
}

/*----------------------------------------------------------------------------*/
static int AP3216C_init_client(struct i2c_client *client)
{
	struct AP3216C_priv *obj = i2c_get_clientdata(client);
	u8 databuf[2];    
	int res = 0;
   
	databuf[0] = AP3216C_LSC_ENABLE;    
	databuf[1] = 0x00;
	res = i2c_master_send(client, databuf, 0x2);
	if(res <= 0)
	{
		goto EXIT_ERR;
		return AP3216C_ERR_I2C;
	}

	databuf[0] = AP3216C_LSC_INT_LOW_THD_LOW;    
	databuf[1] = atomic_read(&obj->ps_thd_val_low) & 0x03;
	res = i2c_master_send(client, databuf, 0x2);
	if(res <= 0)
	{
		goto EXIT_ERR;
		return AP3216C_ERR_I2C;
	}

	databuf[0] = AP3216C_LSC_INT_HIGH_THD_LOW;    
	databuf[1] = atomic_read(&obj->ps_thd_val_high) & 0x03;
	res = i2c_master_send(client, databuf, 0x2);
	if(res <= 0)
	{
		goto EXIT_ERR;
		return AP3216C_ERR_I2C;
	}

	databuf[0] = AP3216C_LSC_INT_LOW_THD_HIGH;    
	databuf[1] = (atomic_read(&obj->ps_thd_val_low) & 0x3FC) >> 2;
	res = i2c_master_send(client, databuf, 0x2);
	if(res <= 0)
	{
		goto EXIT_ERR;
		return AP3216C_ERR_I2C;
	}

	databuf[0] = AP3216C_LSC_INT_HIGH_THD_HIGH;    
	databuf[1] = (atomic_read(&obj->ps_thd_val_high) & 0x3FC) >> 2;
	res = i2c_master_send(client, databuf, 0x2);
	if(res <= 0)
	{
		goto EXIT_ERR;
		return AP3216C_ERR_I2C;
	}

	if(res = AP3216C_setup_eint(client))
	{
		APS_ERR("setup eint: %d\n", res);
		return res;
	}
	if((res = AP3216C_check_and_clear_intr(client)) < 0)
	{
		APS_ERR("check/clear intr: %d\n", res);
	}
	
	return AP3216C_SUCCESS;

EXIT_ERR:
	APS_ERR("init dev: %d\n", res);
	return res;
}

static ssize_t ap3216c_show_reg(struct device_driver *ddri, char *buf)
{
	int err,i;
	u8 reg[]={0x00,0x01,0x02,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x19,0x1A,0x1B,0x1C,0x1D,
				0x20,0x21,0x22,0x23,0x24,0x28,0x29,0x2A,0x2B,0x2C,0x2D};
	u8 value[26];
	for(i = 0;i < sizeof(reg) /sizeof(reg[0]); i++)
	{
		err = i2c_master_send(AP3216C_i2c_client, &(reg[i]), 0x1);
		err = i2c_master_recv(AP3216C_i2c_client, &(value[i]), 0x1);
	}
	return sprintf(buf,"reg_0x00=%02x\nreg_0x01=%02x\nreg_0x02=%02x\nreg_0x0A=%02x\nreg_0x0B=%02x\nreg_0x0C=%02x\nreg_0x0D=%02x\nreg_0x0E=%02x\nreg_0x0F=%02x\nreg_0x10=%02x\nreg_0x19=%02x\nreg_0x1A=%02x\nreg_0x1B=%02x\nreg_0x1C=%02x\nreg_0x1D=%02x\nreg_0x20=%02x\nreg_0x21=%02x\nreg_0x22=%02x\nreg_0x23=%02x\nreg_0x24=%02x\nreg_0x28=%02x\nreg_0x29=%02x\nreg_0x2A=%02x\nreg_0x2B=%02x\nreg_0x2C=%02x\nreg_0x2D=%02x\n",
		value[0],value[1],value[2],value[3],value[4],value[5],value[6],value[7],value[8],value[9],value[10],value[11],
		value[12],value[13],value[14],value[15],value[16],value[17],value[18],value[19],value[20],value[21],value[22],
		value[23],value[24],value[25]);
}

static ssize_t ap3216c_store_reg(struct device_driver *ddri, const char *buf, size_t count)
{
	char reg,value;
	char databuf[2];
	if(2== sscanf(buf, "%x %x",&reg, &value)) 
	{
		databuf[0] = reg;    
		databuf[1] = value;
		i2c_master_send(AP3216C_i2c_client, databuf, 0x2);
	}
	return count;
}

static ssize_t ap3216c_show_als(struct device_driver *ddri, char *buf)
{
	char buffer[1];
	char als_value_low,als_value_high;
	u16 data;

	buffer[0]=AP3216C_LSC_ADATA_L;
	i2c_master_send(AP3216C_i2c_client, buffer, 0x1);
	i2c_master_recv(AP3216C_i2c_client, &als_value_low, 0x1);
	
	buffer[0]=AP3216C_LSC_ADATA_H;
	i2c_master_send(AP3216C_i2c_client, buffer, 0x1);
	i2c_master_recv(AP3216C_i2c_client, &als_value_high, 0x01);
	
	data = als_value_low | (als_value_high<<8);
	return sprintf(buf,"0x%04x\n",data);
}

static ssize_t ap3216c_show_ps(struct device_driver *ddri, char *buf)
{
	char buffer[1];
	char ps_value_low,ps_value_high;
	u16 data;

	buffer[0]=AP3216C_LSC_PDATA_L;
	i2c_master_send(AP3216C_i2c_client, buffer, 0x1);
	i2c_master_recv(AP3216C_i2c_client, &ps_value_low, 0x1);
	
	buffer[0]=AP3216C_LSC_PDATA_H;
	i2c_master_send(AP3216C_i2c_client, buffer, 0x1);
	i2c_master_recv(AP3216C_i2c_client, &ps_value_high, 0x01);
	
	data = (ps_value_low & 0x0f) | ((ps_value_high & 0x3f) << 4);
	return sprintf(buf,"reg_0x0E = 0x%02x\nreg_0x0F = 0x%02x\n0x%04x\n",ps_value_low,ps_value_high,data);

}

static ssize_t ap3216c_store_ps(struct device_driver *ddri, const char *buf, size_t count)
{	
	#ifdef AP3216C_DEBUG
	int high_thd,low_thd;
	u8 databuf[2];    
	int res = 0;
	
	if(2== sscanf(buf, "%x %x",&high_thd, &low_thd)) 
	{

			printk("AP3216C high=0x%x low=0x%x\n",high_thd,low_thd);
			
			atomic_set(&AP3216C_obj->ps_thd_val_h,  high_thd);
			atomic_set(&AP3216C_obj->ps_thd_val_l,  low_thd);
   	
			databuf[0] = AP3216C_LSC_INT_LOW_THD_LOW;    
			databuf[1] = atomic_read(&AP3216C_obj->ps_thd_val_l) & 0x03;
			res = i2c_master_send(AP3216C_i2c_client, databuf, 0x2);
			if(res <= 0)
				printk("AP3216C I2C Err.\n");

			databuf[0] = AP3216C_LSC_INT_HIGH_THD_LOW;    
			databuf[1] = atomic_read(&AP3216C_obj->ps_thd_val_h) & 0x03;
			res = i2c_master_send(AP3216C_i2c_client, databuf, 0x2);
			if(res <= 0)
				printk("AP3216C I2C Err.\n");

			databuf[0] = AP3216C_LSC_INT_LOW_THD_HIGH;    
			databuf[1] = (atomic_read(&AP3216C_obj->ps_thd_val_l) & 0x3FC) >> 2;
			res = i2c_master_send(AP3216C_i2c_client, databuf, 0x2);
			if(res <= 0)
				printk("AP3216C I2C Err.\n");

			databuf[0] = AP3216C_LSC_INT_HIGH_THD_HIGH;    
			databuf[1] = (atomic_read(&AP3216C_obj->ps_thd_val_h) & 0x3FC) >> 2;
			res = i2c_master_send(AP3216C_i2c_client, databuf, 0x2);
			if(res <= 0)
				printk("AP3216C I2C Err.\n");
	}
	#endif
	return count;
}
static DRIVER_ATTR(reg,     S_IWUSR | S_IRUGO, ap3216c_show_reg,   ap3216c_store_reg);
static DRIVER_ATTR(als,     S_IWUSR | S_IRUGO, ap3216c_show_als,   NULL);
static DRIVER_ATTR(ps,     S_IWUSR | S_IRUGO, ap3216c_show_ps,   ap3216c_store_ps);

static struct driver_attribute *ap3216c_attr_list[] = {
	&driver_attr_reg,
	&driver_attr_als,
	&driver_attr_ps,
};

static int ap3216c_create_attr(struct device_driver *driver) 
{
	int idx, err = 0;
	int num = (int)(sizeof(ap3216c_attr_list)/sizeof(ap3216c_attr_list[0]));
	if (driver == NULL)
	{
		return -EINVAL;
	}

	for(idx = 0; idx < num; idx++)
	{
		if(err = driver_create_file(driver, ap3216c_attr_list[idx]))
		{            
			APS_ERR("driver_create_file (%s) = %d\n", ap3216c_attr_list[idx]->attr.name, err);
			break;
		}
	}    
	return err;
}

static int ap3216c_delete_attr(struct device_driver *driver)
{
	int idx ,err = 0;
	int num = (int)(sizeof(ap3216c_attr_list)/sizeof(ap3216c_attr_list[0]));

	if (!driver)
	return -EINVAL;

	for (idx = 0; idx < num; idx++) 
	{
		driver_remove_file(driver, ap3216c_attr_list[idx]);
	}
	
	return err;
}

/****************************************************************************** 
 * Function Configuration
******************************************************************************/
int AP3216C_read_als(struct i2c_client *client, u16 *data)
{
	struct AP3216C_priv *obj = i2c_get_clientdata(client);	 
	u8 als_value_low[1], als_value_high[1];
	u8 buffer[1];
	int res = 0;
	
	if(client == NULL)
	{
		APS_DBG("CLIENT CANN'T EQUAL NULL\n");
		return -1;
	}

	// get ALS adc count
	buffer[0]=AP3216C_LSC_ADATA_L;
	res = i2c_master_send(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	res = i2c_master_recv(client, als_value_low, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	
	buffer[0]=AP3216C_LSC_ADATA_H;
	res = i2c_master_send(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	res = i2c_master_recv(client, als_value_high, 0x01);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	
	*data = als_value_low[0] | (als_value_high[0]<<8);

	if (*data < 0)
	{
		*data = 0;
		APS_DBG("als_value is invalid!!\n");
		return -1;
	}

	return 0;

EXIT_ERR:
	APS_ERR("AP3216C_read_als fail\n");
	return res;
}
/*----------------------------------------------------------------------------*/
static int AP3216C_get_als_value(struct AP3216C_priv *obj, u16 als)
{
	int idx;
	int invalid = 0;
	for(idx = 0; idx < obj->als_level_num; idx++)
	{
		if(als < obj->hw->als_level[idx])
		{
			break;
		}
	}
	
	if(idx >= obj->als_value_num)
	{
		APS_ERR("exceed range\n"); 
		idx = obj->als_value_num - 1;
	}
	
	if(1 == atomic_read(&obj->als_deb_on))
	{
		unsigned long endt = atomic_read(&obj->als_deb_end);
		if(time_after(jiffies, endt))
		{
			atomic_set(&obj->als_deb_on, 0);
		}
		
		if(1 == atomic_read(&obj->als_deb_on))
		{
			invalid = 1;
		}
	}

	if(!invalid)
	{
		APS_DBG("ALS: %05d => %05d\n", als, obj->hw->als_value[idx]);	
		return obj->hw->als_value[idx];
	}
	else
	{
		APS_ERR("ALS: %05d => %05d (-1)\n", als, obj->hw->als_value[idx]);    
		return -1;
	}
}
/*----------------------------------------------------------------------------*/
int AP3216C_read_ps(struct i2c_client *client, u16 *data)
{
	struct AP3216C_priv *obj = i2c_get_clientdata(client);       
	u8 ps_value_low[1], ps_value_high[1];
	u8 buffer[1];
	int res = 0;

	if(client == NULL)
	{
		APS_DBG("CLIENT CANN'T EQUAL NULL\n");
		return -1;
	}

	buffer[0]=AP3216C_LSC_PDATA_L;
	res = i2c_master_send(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	res = i2c_master_recv(client, ps_value_low, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}

	buffer[0]=AP3216C_LSC_PDATA_H;
	res = i2c_master_send(client, buffer, 0x1);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}
	res = i2c_master_recv(client, ps_value_high, 0x01);
	if(res <= 0)
	{
		goto EXIT_ERR;
	}

	*data = (ps_value_low[0] & 0x0f) | ((ps_value_high[0] & 0x3f) << 4);
	return 0;    

EXIT_ERR:
	APS_ERR("AP3216C_read_ps fail\n");
	return res;
}
/*----------------------------------------------------------------------------*/
/* 
   for AP3216C_get_ps_value:
	return 1 = object close,
	return 0 = object far away. 2012/5/10 YC   // exchange 0 and 1 2012/5/30 YC 
*/
static int AP3216C_get_ps_value(struct AP3216C_priv *obj, u16 ps)
{
	int val;
	int invalid = 0;

	if(ps > atomic_read(&obj->ps_thd_val_high))
		val = 0;  /*close*/
	else if(ps < atomic_read(&obj->ps_thd_val_low))
		val = 1;  /*far away*/

	if(atomic_read(&obj->ps_suspend))
	{
		invalid = 1;
	}
	else if(1 == atomic_read(&obj->ps_deb_on))
	{
		unsigned long endt = atomic_read(&obj->ps_deb_end);
		if(time_after(jiffies, endt))
		{
			atomic_set(&obj->ps_deb_on, 0);
		}
		
		if (1 == atomic_read(&obj->ps_deb_on))
		{
			invalid = 1;
		}
	}

	if(!invalid)
	{
		APS_DBG("PS:  %05d => %05d\n", ps, val);
		return val;
	}	
	else
	{
		return -1;
	}	
}


/*----------------------------------------------------------------------------*/
static void AP3216C_eint_work(struct work_struct *work)
{
	struct AP3216C_priv *obj = (struct AP3216C_priv *)container_of(work, struct AP3216C_priv, eint_work);
	int err;
	int data;
#ifdef CUSTOM_KERNEL_SENSORHUB
    int res = 0;

	data = AP3216C_get_ps_value(obj, obj->ps);
    res = ps_report_interrupt_data(data);
    if(res != 0)
    {
        APS_ERR("%s err: %d\n", __func__, res);
    }
#else //#ifdef CUSTOM_KERNEL_SENSORHUB
	int res = 0;

	if((err = AP3216C_check_and_clear_intr(obj->client)) < 0)
	{
		APS_ERR("AP3216C_eint_work check intrs: %d\n", err);
	}
	else if (err & 0x01)
	{
		// ALS interrupt. User should add their code here if they want to handle ALS Int.
	}
	else if (err & 0x02)
	{
		AP3216C_read_ps(obj->client, &obj->ps);
		data = AP3216C_get_ps_value(obj, obj->ps);

		//let up layer to know
		APS_LOG("ap3216c interrupt value = %d\n", data);
		res = ps_report_interrupt_data(data);	
	}
	
	mt_eint_unmask(CUST_EINT_ALS_NUM);      
#endif //#ifdef CUSTOM_KERNEL_SENSORHUB
}


/****************************************************************************** 
 * Function Configuration
******************************************************************************/
static int AP3216C_open(struct inode *inode, struct file *file)
{
	file->private_data = AP3216C_i2c_client;

	if (!file->private_data)
	{
		APS_ERR("null pointer!!\n");
		return -EINVAL;
	}
	
	return nonseekable_open(inode, file);
}
/*----------------------------------------------------------------------------*/
static int AP3216C_release(struct inode *inode, struct file *file)
{
	file->private_data = NULL;
	return 0;
}
/*----------------------------------------------------------------------------*/
//static int AP3216C_ioctl(struct inode *inode, struct file *file, unsigned int cmd,
//       unsigned long arg)
static int AP3216C_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
	struct i2c_client *client = (struct i2c_client*)file->private_data;
	struct AP3216C_priv *obj = i2c_get_clientdata(client);  
	int err = 0;
	void __user *ptr = (void __user*) arg;
	int dat;
	uint32_t enable;

	switch (cmd)
	{
		case ALSPS_SET_PS_MODE:
			if(copy_from_user(&enable, ptr, sizeof(enable)))
			{
				err = -EFAULT;
				goto err_out;
			}
			if(enable)
			{
				if(err = AP3216C_enable_ps(obj->client, 1))
				{
					APS_ERR("enable ps fail: %d\n", err); 
					goto err_out;
				}
				
				set_bit(CMC_BIT_PS, &obj->enable);
			}
			else
			{
				if(err = AP3216C_enable_ps(obj->client, 0))
				{
					APS_ERR("disable ps fail: %d\n", err); 
					goto err_out;
				}
				
				clear_bit(CMC_BIT_PS, &obj->enable);
			}
			break;

		case ALSPS_GET_PS_MODE:
			enable = test_bit(CMC_BIT_PS, &obj->enable) ? (1) : (0);
			if(copy_to_user(ptr, &enable, sizeof(enable)))
			{
				err = -EFAULT;
				goto err_out;
			}
			break;

		case ALSPS_GET_PS_DATA:    
			if(err = AP3216C_read_ps(obj->client, &obj->ps))
			{
				goto err_out;
			}
			
			dat = AP3216C_get_ps_value(obj, obj->ps);
			if(copy_to_user(ptr, &dat, sizeof(dat)))
			{
				err = -EFAULT;
				goto err_out;
			}  
			break;

		case ALSPS_GET_PS_RAW_DATA:    
			if(err = AP3216C_read_ps(obj->client, &obj->ps))
			{
				goto err_out;
			}
			
			dat = obj->ps;
			if(copy_to_user(ptr, &dat, sizeof(dat)))
			{
				err = -EFAULT;
				goto err_out;
			}  
			break;              

		case ALSPS_SET_ALS_MODE:
			if(copy_from_user(&enable, ptr, sizeof(enable)))
			{
				err = -EFAULT;
				goto err_out;
			}
			if(enable)
			{
				if(err = AP3216C_enable_als(obj->client, 1))
				{
					APS_ERR("enable als fail: %d\n", err); 
					goto err_out;
				}
				set_bit(CMC_BIT_ALS, &obj->enable);
			}
			else
			{
				if(err = AP3216C_enable_als(obj->client, 0))
				{
					APS_ERR("disable als fail: %d\n", err); 
					goto err_out;
				}
				clear_bit(CMC_BIT_ALS, &obj->enable);
			}
			break;

		case ALSPS_GET_ALS_MODE:
			enable = test_bit(CMC_BIT_ALS, &obj->enable) ? (1) : (0);
			if(copy_to_user(ptr, &enable, sizeof(enable)))
			{
				err = -EFAULT;
				goto err_out;
			}
			break;

		case ALSPS_GET_ALS_DATA: 
			if(err = AP3216C_read_als(obj->client, &obj->als))
			{
				goto err_out;
			}

			dat = AP3216C_get_als_value(obj, obj->als);
			if(copy_to_user(ptr, &dat, sizeof(dat)))
			{
				err = -EFAULT;
				goto err_out;
			}              
			break;

		case ALSPS_GET_ALS_RAW_DATA:    
			if(err = AP3216C_read_als(obj->client, &obj->als))
			{
				goto err_out;
			}

			dat = obj->als;
			if(copy_to_user(ptr, &dat, sizeof(dat)))
			{
				err = -EFAULT;
				goto err_out;
			}              
			break;

		default:
			APS_ERR("%s not supported = 0x%04x", __FUNCTION__, cmd);
			err = -ENOIOCTLCMD;
			break;
	}

	err_out:
	return err;    
}
/*----------------------------------------------------------------------------*/
static struct file_operations AP3216C_fops = {
//	.owner = THIS_MODULE,
	.open = AP3216C_open,
	.release = AP3216C_release,
//	.ioctl = AP3216C_ioctl,
	.unlocked_ioctl = AP3216C_ioctl,
};
/*----------------------------------------------------------------------------*/
static struct miscdevice AP3216C_device = {
	.minor = MISC_DYNAMIC_MINOR,
	.name = "als_ps",
	.fops = &AP3216C_fops,
};
/*----------------------------------------------------------------------------*/
static int AP3216C_i2c_suspend(struct i2c_client *client, pm_message_t msg) 
{
	APS_FUN();    
	return 0;
}
/*----------------------------------------------------------------------------*/
static int AP3216C_i2c_resume(struct i2c_client *client)
{
	APS_FUN();
	return 0;
}
/*----------------------------------------------------------------------------*/
static void AP3216C_early_suspend(struct early_suspend *h) 
{   
	struct AP3216C_priv *obj = container_of(h, struct AP3216C_priv, early_drv);   
	int err;
	APS_FUN();    

	if(!obj)
	{
		APS_ERR("null pointer!!\n");
		return;
	}

	atomic_set(&obj->als_suspend, 1);
	if(test_bit(CMC_BIT_ALS, &obj->enable))
	{
		if(err = AP3216C_enable_als(obj->client, 0))
		{
			APS_ERR("disable als fail: %d\n", err); 
		}
	}

}
/*----------------------------------------------------------------------------*/
static void AP3216C_late_resume(struct early_suspend *h)
{   
	struct AP3216C_priv *obj = container_of(h, struct AP3216C_priv, early_drv);         
	int err;
	APS_FUN();

	if(!obj)
	{
		APS_ERR("null pointer!!\n");
		return;
	}

	atomic_set(&obj->als_suspend, 0);
	if(test_bit(CMC_BIT_ALS, &obj->enable))
	{
		if(err = AP3216C_enable_als(obj->client, 1))
		{
			APS_ERR("enable als fail: %d\n", err);        

		}
	}
}

#if 0
int AP3216C_ps_operate(void* self, uint32_t command, void* buff_in, int size_in,
		void* buff_out, int size_out, int* actualout)
{
	int err = 0;
	int value;
	hwm_sensor_data* sensor_data;
	struct AP3216C_priv *obj = (struct AP3216C_priv *)self;
	
	switch (command)
	{
		case SENSOR_DELAY:
			if((buff_in == NULL) || (size_in < sizeof(int)))
			{
				APS_ERR("Set delay parameter error!\n");
				err = -EINVAL;
			}
			// Do nothing
			break;

		case SENSOR_ENABLE:
			if((buff_in == NULL) || (size_in < sizeof(int)))
			{
				APS_ERR("Enable sensor parameter error!\n");
				err = -EINVAL;
			}
			else
			{				
				value = *(int *)buff_in;
				if(value)
				{
					if(err = AP3216C_enable_ps(obj->client, 1))
					{
						APS_ERR("enable ps fail: %d\n", err); 
						return -1;
					}
					set_bit(CMC_BIT_PS, &obj->enable);
				}
				else
				{
					if(err = AP3216C_enable_ps(obj->client, 0))
					{
						APS_ERR("disable ps fail: %d\n", err); 
						return -1;
					}
					clear_bit(CMC_BIT_PS, &obj->enable);
				}
			}
			break;

		case SENSOR_GET_DATA:
			if((buff_out == NULL) || (size_out< sizeof(hwm_sensor_data)))
			{
				APS_ERR("get sensor data parameter error!\n");
				err = -EINVAL;
			}
			else
			{
				sensor_data = (hwm_sensor_data *)buff_out;	
				AP3216C_read_ps(obj->client, &obj->ps);
				
				sensor_data->values[0] = AP3216C_get_ps_value(obj, obj->ps);
				sensor_data->value_divide = 1;
				sensor_data->status = SENSOR_STATUS_ACCURACY_MEDIUM;			
			}
			break;
		default:
			APS_ERR("proxmy sensor operate function no this parameter %d!\n", command);
			err = -1;
			break;
	}
	
	return err;
}

int AP3216C_als_operate(void* self, uint32_t command, void* buff_in, int size_in,
		void* buff_out, int size_out, int* actualout)
{
	int err = 0;
	int value;
	hwm_sensor_data* sensor_data;
	struct AP3216C_priv *obj = (struct AP3216C_priv *)self;

	switch (command)
	{
		case SENSOR_DELAY:
			if((buff_in == NULL) || (size_in < sizeof(int)))
			{
				APS_ERR("Set delay parameter error!\n");
				err = -EINVAL;
			}
			// Do nothing
			break;

		case SENSOR_ENABLE:
			if((buff_in == NULL) || (size_in < sizeof(int)))
			{
				APS_ERR("Enable sensor parameter error!\n");
				err = -EINVAL;
			}
			else
			{
				value = *(int *)buff_in;				
				if(value)
				{
					if(err = AP3216C_enable_als(obj->client, 1))
					{
						APS_ERR("enable als fail: %d\n", err); 
						return -1;
					}
					set_bit(CMC_BIT_ALS, &obj->enable);
					APS_LOG("ap3216c enable=%d\n",value);
				}
				else
				{
					if(err = AP3216C_enable_als(obj->client, 0))
					{
						APS_ERR("disable als fail: %d\n", err); 
						return -1;
					}
					clear_bit(CMC_BIT_ALS, &obj->enable);
					APS_LOG("ap3216c enable=%d\n",value);
				}
				
			}
			break;

		case SENSOR_GET_DATA:
			if((buff_out == NULL) || (size_out< sizeof(hwm_sensor_data)))
			{
				APS_ERR("get sensor data parameter error!\n");
				err = -EINVAL;
			}
			else
			{
				sensor_data = (hwm_sensor_data *)buff_out;
				AP3216C_read_als(obj->client, &obj->als);
				APS_LOG("ap3216c ALS level=%d\n",obj->als);
				#if defined(MTK_AAL_SUPPORT)
				sensor_data->values[0] = obj->als;
				#else			
				sensor_data->values[0] = AP3216C_get_als_value(obj, obj->als);
				APS_LOG("ap3216c ALS value=%d\n",obj->als);
				#endif
				sensor_data->value_divide = 1;
				sensor_data->status = SENSOR_STATUS_ACCURACY_MEDIUM;
			}
			break;
		default:
			APS_ERR("light sensor operate function no this parameter %d!\n", command);
			err = -1;
			break;
	}
	
	return err;
}
#endif
/*--------------------------------------------------------------------------------*/
static int als_open_report_data(int open)
{
	//should queuq work to report event if  is_report_input_direct=true
	return 0;
}
/*--------------------------------------------------------------------------------*/
// if use  this typ of enable , Gsensor only enabled but not report inputEvent to HAL
static int als_enable_nodata(int en)
{
	int res = 0;
	if(!AP3216C_obj)
	{
		APS_ERR("ap3216c_obj is null!!\n");
		return -1;
	}
	APS_LOG("ap3216c_obj als enable value = %d\n", en);

#ifdef CUSTOM_KERNEL_SENSORHUB
    if(en)
	{
		if((res = AP3216C_enable_als(AP3216C_obj->client, 1)))
		{
			APS_ERR("enable als fail: %d\n", res); 
			return -1;
		}
		set_bit(CMC_BIT_ALS, &AP3216C_obj->enable);
	}
	else
	{
		if((res = AP3216C_enable_als(AP3216C_obj->client, 0)))
		{
			APS_ERR("disable als fail: %d\n", res); 
			return -1;
		}
		clear_bit(CMC_BIT_ALS, &AP3216C_obj->enable);
	}
#else //#ifdef CUSTOM_KERNEL_SENSORHUB
    if(en)
	{
		if((res = AP3216C_enable_als(AP3216C_obj->client, 1)))
		{
			APS_ERR("enable als fail: %d\n", res); 
			return -1;
		}
		set_bit(CMC_BIT_ALS, &AP3216C_obj->enable);
	}
	else
	{
		if((res = AP3216C_enable_als(AP3216C_obj->client, 0)))
		{
			APS_ERR("disable als fail: %d\n", res); 
			return -1;
		}
		clear_bit(CMC_BIT_ALS, &AP3216C_obj->enable);
	}
#endif //#ifdef CUSTOM_KERNEL_SENSORHUB
    
	if(res){
		APS_ERR("als_enable_nodata is failed!!\n");
		return -1;
	}
	return 0;
}
/*--------------------------------------------------------------------------------*/
static int als_set_delay(u64 ns)
{
	return 0;
}
/*--------------------------------------------------------------------------------*/
static int als_get_data(int* value, int* status)
{
	int err = 0;

	if(!AP3216C_obj)
	{
		APS_ERR("ap3216c_obj is null!!\n");
		return -1;
	}

#ifdef CUSTOM_KERNEL_SENSORHUB
	if((err = AP3216C_read_als(AP3216C_obj->client, &AP3216C_obj->als)))
	{
		err = -1;
	}
	else
	{
		*value = AP3216C_get_als_value(AP3216C_obj, AP3216C_obj->als);
		*status = SENSOR_STATUS_ACCURACY_MEDIUM;
	}
#else //#ifdef CUSTOM_KERNEL_SENSORHUB
    if((err = AP3216C_read_als(AP3216C_obj->client, &AP3216C_obj->als)))
	{
		err = -1;
	}
	else
	{
		*value = AP3216C_get_als_value(AP3216C_obj, AP3216C_obj->als);
		*status = SENSOR_STATUS_ACCURACY_MEDIUM;
	}
#endif //#ifdef CUSTOM_KERNEL_SENSORHUB

	return err;
}
/*--------------------------------------------------------------------------------*/
// if use  this typ of enable , Gsensor should report inputEvent(x, y, z ,stats, div) to HAL
static int ps_open_report_data(int open)
{
	//should queuq work to report event if  is_report_input_direct=true
	return 0;
}
/*--------------------------------------------------------------------------------*/
// if use  this typ of enable , alsps sensor only enabled but not report inputEvent to HAL
static int ps_enable_nodata(int en)
{
	int res = 0;
	if(!AP3216C_obj)
	{
		APS_ERR("ap3216c_obj is null!!\n");
		return -1;
	}
	APS_LOG("ap3216c_obj als enable value = %d\n", en);

#ifdef CUSTOM_KERNEL_SENSORHUB
    if(en)
	{
		if((res = AP3216C_enable_ps(AP3216C_obj->client, 1)))
		{
			APS_ERR("enable ps fail: %d\n", res); 
			return -1;
		}
		set_bit(CMC_BIT_PS, &AP3216C_obj->enable);
	}
	else
	{
		if((res = AP3216C_enable_ps(AP3216C_obj->client, 0)))
		{
			APS_ERR("disable ps fail: %d\n", res); 
			return -1;
		}
		clear_bit(CMC_BIT_PS, &AP3216C_obj->enable);
	}
#else //#ifdef CUSTOM_KERNEL_SENSORHUB
	if(en)
	{
		if((res = AP3216C_enable_ps(AP3216C_obj->client, 1))!=0)
		{
			APS_ERR("enable ps fail: %d\n", res);
			return -1;
		}
		set_bit(CMC_BIT_PS, &AP3216C_obj->enable);
	}
	else
	{
		if((res = AP3216C_enable_ps(AP3216C_obj->client, 0))!=0)
		{
			APS_ERR("disable ps fail: %d\n", res);
			return -1;
		}
		clear_bit(CMC_BIT_PS, &AP3216C_obj->enable);
	}
#endif //#ifdef CUSTOM_KERNEL_SENSORHUB
    
	if(res){
		APS_ERR("als_enable_nodata is failed!!\n");
		return -1;
	}
    
	return 0;

}
/*--------------------------------------------------------------------------------*/
static int ps_set_delay(u64 ns)
{
	return 0;
}
/*--------------------------------------------------------------------------------*/
static int ps_get_data(int* value, int* status)
{
    int err = 0;

    if(!AP3216C_obj)
	{
		APS_ERR("ap3216c_obj is null!!\n");
		return -1;
	}

#ifdef CUSTOM_KERNEL_SENSORHUB
	if((err = AP3216C_read_ps(AP3216C_obj->client, &AP3216C_obj->ps)))
    {
        err = -1;;
    }
    else
    {
        *value = AP3216C_get_ps_value(AP3216C_obj, AP3216C_obj->ps);
        *status = SENSOR_STATUS_ACCURACY_MEDIUM;
    }
#else //#ifdef CUSTOM_KERNEL_SENSORHUB
	if((err = AP3216C_read_ps(AP3216C_obj->client, &AP3216C_obj->ps)))
    {
        err = -1;;
    }
    else
    {
        *value = AP3216C_get_ps_value(AP3216C_obj, AP3216C_obj->ps);
        *status = SENSOR_STATUS_ACCURACY_MEDIUM;
    }
#endif //#ifdef CUSTOM_KERNEL_SENSORHUB
    
	return err;
}


/*----------------------------------------------------------------------------*/
static int AP3216C_i2c_detect(struct i2c_client *client, int kind, struct i2c_board_info *info) 
{    
	strcpy(info->type, AP3216C_DEV_NAME);
	return 0;
}

/*----------------------------------------------------------------------------*/
static int AP3216C_i2c_probe(struct i2c_client *client, const struct i2c_device_id *id)
{
	struct AP3216C_priv *obj;
    struct als_control_path als_ctl={0};
	struct als_data_path als_data={0};
	struct ps_control_path ps_ctl={0};
	struct ps_data_path ps_data={0};
	int err = 0;

	if(!(obj = kzalloc(sizeof(*obj), GFP_KERNEL)))
	{
		err = -ENOMEM;
		goto exit;
	}
	memset(obj, 0, sizeof(*obj));
	AP3216C_obj = obj;

    //wake_lock_init(&ps_lock,WAKE_LOCK_SUSPEND,"ps wakelock"); 
	obj->hw = get_cust_alsps_hw();
	AP3216C_get_addr(obj->hw, &obj->addr);

	INIT_WORK(&obj->eint_work, AP3216C_eint_work);
	obj->client = client;
	i2c_set_clientdata(client, obj);	
	atomic_set(&obj->als_debounce, 300);
	atomic_set(&obj->als_deb_on, 0);
	atomic_set(&obj->als_deb_end, 0);
	atomic_set(&obj->ps_debounce, 300);
	atomic_set(&obj->ps_deb_on, 0);
	atomic_set(&obj->ps_deb_end, 0);
	atomic_set(&obj->ps_mask, 0);
	atomic_set(&obj->als_suspend, 0);
	atomic_set(&obj->als_cmd_val, 0xDF);
	atomic_set(&obj->ps_cmd_val,  0xC1);
	atomic_set(&obj->ps_thd_val_high,  obj->hw->ps_threshold_high);
	atomic_set(&obj->ps_thd_val_low,  obj->hw->ps_threshold_low);
	obj->enable = 0;
	obj->pending_intr = 0;
	obj->als_level_num = sizeof(obj->hw->als_level)/sizeof(obj->hw->als_level[0]);
	obj->als_value_num = sizeof(obj->hw->als_value)/sizeof(obj->hw->als_value[0]);  
	obj->als_modulus = (400*100*40)/(1*1500);

	BUG_ON(sizeof(obj->als_level) != sizeof(obj->hw->als_level));
	memcpy(obj->als_level, obj->hw->als_level, sizeof(obj->als_level));
	BUG_ON(sizeof(obj->als_value) != sizeof(obj->hw->als_value));
	memcpy(obj->als_value, obj->hw->als_value, sizeof(obj->als_value));
	atomic_set(&obj->i2c_retry, 3);
	set_bit(CMC_BIT_ALS, &obj->enable);
	set_bit(CMC_BIT_PS, &obj->enable);

	
	AP3216C_i2c_client = client;

	
	if(err = AP3216C_init_client(client))
	{
		goto exit_init_failed;
	}
	APS_LOG("AP3216C_init_client() OK!\n");

	if(err = misc_register(&AP3216C_device))
	{
		APS_ERR("AP3216C_device register failed\n");
		goto exit_misc_device_register_failed;
	}
	/*------------------------ap3216c attribute file for debug--------------------------------------*/
	if((err = ap3216c_create_attr(&ap3216c_init_info.platform_diver_addr->driver)))
	{
		APS_ERR("create attribute err = %d\n", err);
		goto exit_create_attr_failed;
	}
	/*------------------------ap3216c attribute file for debug--------------------------------------*/
	als_ctl.open_report_data= als_open_report_data;
	als_ctl.enable_nodata = als_enable_nodata;
	als_ctl.set_delay  = als_set_delay;
	als_ctl.is_report_input_direct = false;
#ifdef CUSTOM_KERNEL_SENSORHUB
	als_ctl.is_support_batch = true;
#else
    als_ctl.is_support_batch = false;
#endif
	
	err = als_register_control_path(&als_ctl);
	if(err)
	{
		APS_ERR("register fail = %d\n", err);
		goto exit_register_path_failed;
	}

	als_data.get_data = als_get_data;
	als_data.vender_div = 100;
	err = als_register_data_path(&als_data);	
	if(err)
	{
		APS_ERR("tregister fail = %d\n", err);
		goto exit_register_path_failed;
	}

	
	ps_ctl.open_report_data= ps_open_report_data;
	ps_ctl.enable_nodata = ps_enable_nodata;
	ps_ctl.set_delay  = ps_set_delay;
	ps_ctl.is_report_input_direct = true;
#ifdef CUSTOM_KERNEL_SENSORHUB
	ps_ctl.is_support_batch = true;
#else
    ps_ctl.is_support_batch = false;
#endif
	
	err = ps_register_control_path(&ps_ctl);
	if(err)
	{
		APS_ERR("register fail = %d\n", err);
		goto exit_register_path_failed;
	}

	ps_data.get_data = ps_get_data;
	ps_data.vender_div = 100;
	err = ps_register_data_path(&ps_data);	
	if(err)
	{
		APS_ERR("tregister fail = %d\n", err);
		goto exit_register_path_failed;
	}

#if defined(CONFIG_HAS_EARLYSUSPEND)
	obj->early_drv.level    = EARLY_SUSPEND_LEVEL_DISABLE_FB - 1,
	obj->early_drv.suspend  = AP3216C_early_suspend,
	obj->early_drv.resume   = AP3216C_late_resume,    
	register_early_suspend(&obj->early_drv);

#endif
	ap3216c_init_flag = 0;
	APS_LOG("%s: OK\n", __func__);
	return 0;

	exit_register_path_failed:
	ap3216c_delete_attr(&ap3216c_init_info.platform_diver_addr->driver);
	exit_create_attr_failed:
	misc_deregister(&AP3216C_device);
	exit_misc_device_register_failed:
	exit_init_failed:
	exit_kfree:
	kfree(obj);
	exit:
	AP3216C_i2c_client = NULL;           
	APS_ERR("%s: err = %d\n", __func__, err);
	ap3216c_init_flag = -1;
	return err;
}
/*----------------------------------------------------------------------------*/
static int AP3216C_i2c_remove(struct i2c_client *client)
{
	int err;	

	/*------------------------ap3216c attribute file for debug--------------------------------------*/	
	if((err = ap3216c_delete_attr(&ap3216c_init_info.platform_diver_addr->driver)))
	{
		APS_ERR("ap3216c_delete_attr fail: %d\n", err);
	} 
	/*----------------------------------------------------------------------------------------*/

	if(err = misc_deregister(&AP3216C_device))
	{
		APS_ERR("misc_deregister fail: %d\n", err);    
	}
	
	AP3216C_i2c_client = NULL;
	i2c_unregister_device(client);
	kfree(i2c_get_clientdata(client));

	return 0;
}
/*----------------------------------------------------------------------------*/
static int AP3216C_local_init(void) 
{
	struct alsps_hw *hw = get_cust_alsps_hw();

	AP3216C_power(hw, 1);    
	//AP3216C_force[0] = hw->i2c_num;
	//AP3216C_force[1] = hw->i2c_addr[0];
	//APS_DBG("I2C = %d, addr =0x%x\n",AP3216C_force[0],AP3216C_force[1]);
	if(i2c_add_driver(&AP3216C_i2c_driver))
	{
		APS_ERR("add driver error\n");
		return -1;
	}
	if(-1 == ap3216c_init_flag)
	{
	   return -1;
	}
	return 0;
}
/*----------------------------------------------------------------------------*/
static int AP3216C_remove(void)
{
	struct alsps_hw *hw = get_cust_alsps_hw();
	APS_FUN();    
	AP3216C_power(hw, 0);    
	i2c_del_driver(&AP3216C_i2c_driver);
	return 0;
}
/*----------------------------------------------------------------------------*/
static int __init AP3216C_init(void)
{
	APS_FUN();
	struct alsps_hw *hw = get_cust_alsps_hw();
	APS_LOG("%s: i2c_number=%d\n", __func__,hw->i2c_num); 
	i2c_register_board_info(hw->i2c_num, &i2c_ap3216c, 1);
	//i2c_register_board_info(0, &i2c_ap3216c, 1);
	alsps_driver_add(&ap3216c_init_info);
	return 0;
}
/*----------------------------------------------------------------------------*/
static void __exit AP3216C_exit(void)
{
	APS_FUN();
}
/*----------------------------------------------------------------------------*/
module_init(AP3216C_init);
module_exit(AP3216C_exit);
/*----------------------------------------------------------------------------*/
MODULE_AUTHOR("YC Hou");
MODULE_DESCRIPTION("AP3216C driver");
MODULE_LICENSE("GPL");
