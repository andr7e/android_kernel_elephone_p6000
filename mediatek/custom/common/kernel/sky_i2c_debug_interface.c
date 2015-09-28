/* Copyright Statement:
 * This software is used for test i2c device.Can read I2c dev in every bus. Write with the format
 * bus.slave.reg.value. Read shoud not with value format bus.slave.reg
 * bus is the bus num from 0-6
 * slave is the slave addr of the device
 * slave
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */
#include <asm/uaccess.h>
#include <asm/system.h>

#include <mach/mt_gpio.h>
#include <mach/mt_pm_ldo.h>

#include <linux/i2c.h>
#include <linux/platform_device.h>
#include <linux/kernel.h>//for printk
#include <mach/mt_pm_ldo.h>
#include <linux/syscalls.h>
#include <linux/workqueue.h>
#include "custom_date.h"
#include <linux/delay.h>

#define MODE_NAME  "kd_camera_hw"


struct i2c_client *sky_client;
extern struct i2c_adapter	*mt6589_all_i2c_adaps[4];
static int mReg_val;

#define GC2035_WRITE_ID	0x78
/*
struct factory_header{		
	int magic;
	int pcba_test_pass;
	int misc_offset;
	int misc_length;		//include factroy header.
	int fac_offset;
	int fac_length;	
	int pcba_is_test;
	int fac_is_test;
	int checksun;
	int imei;
	int pcba_register_num;		//now the same as pcba_need_test_num.
	int pcba_need_test_num;		//now deciede by init function call or not,  but ftm_PCBA_test_items too(now, not care).
	int pcba_test_ok_num;		
	int pcba_test_fail_num;		
	int pcba_no_test_num;
	int ftm_register_num;			//
	int ftm_need_test_num;		//now decide by read_config function.
	int ftm_test_ok_num;		
	int ftm_test_fail_num;		
	int ftm_no_test_num;
	int version;
};

static struct factory_header fac_h;

static struct delayed_work pcba_delay_work;
static mm_segment_t oldfs;
static void get_pcba_test_result(void)
{
	int fd;
	oldfs = get_fs();
	set_fs(KERNEL_DS);
	fd = sys_open("/dev/misc",O_RDONLY,0);
	if(fd < 0)
	{
		printk("%s:open fail fd = %d\n",__func__,fd);
		set_fs(oldfs);
	}
	sys_lseek(fd,256*1024,0);
	sys_read(fd,&fac_h,sizeof(struct factory_header));
	set_fs(oldfs);
	sys_close(fd);
}
*/
static int iReadRegI2C(u8 *a_pSendData , u16 a_sizeSendData, u8 * a_pRecvData, u16 a_sizeRecvData)
{
    int  i4RetValue = 0;

	//spin_lock(&kdsensor_drv_lock);
	//spin_unlock(&kdsensor_drv_lock);
    //
    i4RetValue = i2c_master_send(sky_client, a_pSendData, a_sizeSendData);
    if (i4RetValue != a_sizeSendData) {
        printk("[CAMERA SENSOR] I2C send failed!!, Addr = 0x%x\n", a_pSendData[0]);
        return -1;
    }

    i4RetValue = i2c_master_recv(sky_client, (char *)a_pRecvData, a_sizeRecvData);
    if (i4RetValue != a_sizeRecvData) {
        printk("[CAMERA SENSOR] I2C read failed!! \n");
        return -1;
    }
    
    return 0;
}
static int iWriteRegI2C(u8 *a_pSendData , u16 a_sizeSendData)
{
    int  i4RetValue = 0;
    int retry = 3;

	sky_client->ext_flag = (sky_client->ext_flag)&(~I2C_DMA_FLAG);

    do {
	  i4RetValue = i2c_master_send(sky_client, a_pSendData, a_sizeSendData);

        if (i4RetValue != a_sizeSendData) {
            printk("[CAMERA SENSOR] I2C send failed!!, Addr = 0x%x, Data = 0x%x \n", a_pSendData[0], a_pSendData[1] );
        }
        else {
            break;
    	}
    } while ((retry--) > 0);

    return 0;
}

static u16 i2cread_reg_16(u16 a_u2Addr )
{
	  u8 in_buff[1] = {0xFF};
      u8 out_buff[2] = {(char)(a_u2Addr >> 8) , (char)(a_u2Addr & 0xFF)};

    if (0 != iReadRegI2C((u8*)out_buff , (u16) sizeof(out_buff), (u8*)in_buff, (u16) sizeof(in_buff))) {
        printk("ERROR: i2cread_reg_16_sensor \n");
    }
    
    return in_buff[0];
}


static u8 i2cread_reg(u8 addr)
{
  u8 in_buff[1] = {0xFF};
  u8 out_buff[1];
  
  out_buff[0] = addr;

    if (0 != iReadRegI2C((u8*)out_buff , (u16) sizeof(out_buff), (u8*)in_buff, (u16) sizeof(in_buff))) {
        printk("ERROR: i2cread_reg_sensor \n");
    }

  return in_buff[0];
}

static void i2cwrite_reg_val_16(u8 addr, u8 para)
{
	u8 out_buff[3];

    out_buff[0] = (char)(addr >> 8);
    out_buff[1] = (char)(addr & 0xFF);
	
    out_buff[2] = para;

    iWriteRegI2C((u8*)out_buff , (u16)sizeof(out_buff)); 
}

static void i2cwrite_reg_val(u8 addr, u8 para)
{
	u8 out_buff[2];

    out_buff[0] = addr;
    out_buff[1] = para;

    iWriteRegI2C((u8*)out_buff , (u16)sizeof(out_buff)); 
}

static u8 sky_i2c_read(int bus_num,u32 addr,u32 reg)
{
	struct i2c_client *client = sky_client;
	client->adapter = mt6589_all_i2c_adaps[bus_num];
	client->addr = addr;
	u32 ret = 0;
	if(reg <= 0xff)
		ret = i2cread_reg(reg);
	else
		ret = i2cread_reg_16(reg);

	mReg_val = ret;
	printk("\nsky_i2c_read bus=%x addr=%x reg=%x val=%x\n",bus_num,addr, reg,ret);
	return ret;
}

static void sky_i2c_write(int bus_num,u32 addr,u32 reg,u32 val)
{
	struct i2c_client *client = sky_client;
	client->adapter = mt6589_all_i2c_adaps[bus_num];
	client->addr = addr;
	if(reg <= 0xff)
		i2cwrite_reg_val(reg,val);
	else
		i2cwrite_reg_val_16(reg,val);
	printk("\sky_i2c_write bus=%d addr=%d reg=%d val=%d\n",bus_num,addr, reg,val);
}

static ssize_t read_reg_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t size)
{
	u32 param[4];
	int count=0;
	char *next;
	char val;
	param[0] = simple_strtol(buf, &next, 16);
	while(*next == '.')
	{
		printk("\nsky test param[%d]=%x \n ",count,param[count]);

		++count;
		param[count] = simple_strtol(next+1, &next, 16);
		printk("\nsky test param[%d]=%x \n ",count,param[count]);

	}

	if(count >= 3)
		sky_i2c_write(param[0], param[1], param[2], param[3]);
	else
		sky_i2c_read(param[0], param[1], param[2]);

	return size;
}
#define ENF_PIN 128
#define ENM_PIN 22
static ssize_t read_reg_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	u16 sensor_id=0;
	static int mode = 0;
	if(mode)
	{
		mt_set_gpio_out(ENF_PIN, 1);
		mt_set_gpio_out(ENM_PIN, 1);
		mode = 0;

	}
	else
	{
		mode = 1;

		mt_set_gpio_out(ENF_PIN, 1);
		mt_set_gpio_out(ENM_PIN, 0);
	}	
	return sprintf(buf, "id=%d reg=%x\n", sensor_id,mReg_val);
}

extern int i2c_master_send(const struct i2c_client *client, const char *buf, int count);
extern int i2c_master_recv(const struct i2c_client *client, char *buf, int count); 
static ssize_t device_show(struct device *dev,struct device_attribute *attr, char *buf)
{
	int bus_num = mReg_val;
	struct i2c_client *client = sky_client;
	int i;
	int ret;
	u8 offset = 0x00;										//register
	int len = 0;

	if ((bus_num < 0) || (bus_num >= 3))
		bus_num = 2;
	
	client->adapter = mt6589_all_i2c_adaps[bus_num];		//bus

       len += sprintf(buf + len, "Bus %d :\n", bus_num);
	
	for (i=0; i<=127; i++) {
		client->addr = i;					//address
		ret = i2c_master_send(sky_client, &offset, sizeof(offset));
		if (ret <= 0) {
			;
		}else {
			//u8 data = 0xFF;
			//i2c_master_recv(sky_client, &data, sizeof(data));
			printk("\nbus=%x addr=0x%x err=%d\n",bus_num,i, ret);
			len += sprintf(buf + len, "0x%x ", i);
		}
		msleep(50);
	}
	len += sprintf(buf + len, "\n ");
	return len;;
}
static ssize_t device_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t size)
{
	unsigned int value;
	if (sscanf(buf, "%u", &value) != 1) {
		return -EINVAL;
	} 
	mReg_val = value;
	return size;
}

/*
	enum MT65XX_POWER_TAG {
	//MT6323 Digital LDO
	MT6323_POWER_LDO_VIO28		=0,
	MT6323_POWER_LDO_VUSB		=1,
	MT6323_POWER_LDO_VMC		=2,
	MT6323_POWER_LDO_VMCH		=3,
	MT6323_POWER_LDO_VEMC_3V3	=4,
	MT6323_POWER_LDO_VGP1		=5,
	MT6323_POWER_LDO_VGP2		=6,
	MT6323_POWER_LDO_VGP3		=7,
	MT6323_POWER_LDO_VCN_1V8	=8,
	MT6323_POWER_LDO_VSIM1		=9,
	MT6323_POWER_LDO_VSIM2		=10,
	MT6323_POWER_LDO_VRTC		=11,
	MT6323_POWER_LDO_VCAM_AF	=12,
	MT6323_POWER_LDO_VIBR		=13,
	MT6323_POWER_LDO_VM		=14,
	MT6323_POWER_LDO_VRF18		=15,
	MT6323_POWER_LDO_VIO18		=16,
	MT6323_POWER_LDO_VCAMD	=17,
	MT6323_POWER_LDO_VCAM_IO	=18,

	//MT6323 Analog LDO
	MT6323_POWER_LDO_VTCXO	=19,
	MT6323_POWER_LDO_VA		=20,
	MT6323_POWER_LDO_VCAMA	=21,
	MT6323_POWER_LDO_VCN33	=22,
	MT6323_POWER_LDO_VCN28	=23,

	//MT6320 Digital LDO
	MT65XX_POWER_LDO_VIO28	=24,
	MT65XX_POWER_LDO_VUSB		=25,
	MT65XX_POWER_LDO_VMC1		=26,
	MT65XX_POWER_LDO_VMCH1	=27,
	MT65XX_POWER_LDO_VEMC_3V3	=28,
	MT65XX_POWER_LDO_VEMC_1V8	=29,
	MT65XX_POWER_LDO_VGP1		=30,
	MT65XX_POWER_LDO_VGP2		=31,
	MT65XX_POWER_LDO_VGP3		=32,
	MT65XX_POWER_LDO_VGP4		=33,
	MT65XX_POWER_LDO_VGP5		=34,
	MT65XX_POWER_LDO_VGP6		=35,
	MT65XX_POWER_LDO_VSIM1	=36,
	MT65XX_POWER_LDO_VSIM2	=37,
	MT65XX_POWER_LDO_VIBR		=38,
	MT65XX_POWER_LDO_VRTC		=39,
	MT65XX_POWER_LDO_VAST		=40,

	//MT6320 Analog LDO
	MT65XX_POWER_LDO_VRF28	=41,
	MT65XX_POWER_LDO_VRF28_2	=42,
	MT65XX_POWER_LDO_VTCXO	=43,
	MT65XX_POWER_LDO_VTCXO_2	=44,
	MT65XX_POWER_LDO_VA		=45,	
	MT65XX_POWER_LDO_VA28		=46,
	MT65XX_POWER_LDO_VCAMA	=47,

	MT65XX_POWER_COUNT_END,
	MT65XX_POWER_NONE = -1
};

#define CAMERA_POWER_VCAM_A  		MT6323_POWER_LDO_VCAMA				(21)
#define CAMERA_POWER_VCAM_D 		MT6323_POWER_LDO_VCAMD     //VCAMD		(17)
#define CAMERA_POWER_VCAM_A2 		MT6323_POWER_LDO_VCAM_AF   //VCAMAF	(12)
#define CAMERA_POWER_VCAM_D2 		MT6323_POWER_LDO_VCAM_IO   //VCAMIO	(18)

gpio87_gpio88_gpio89_gpio90

//set gpio 87 high
		echo 87 1 > pwr_ctrl

//set gpio 90 low
		echo 90 0 > pwr_ctrl

CAMERA_POWER_VCAM_D2	(18)	VOL_1800
CAMERA_POWER_VCAM_A	(21)	VOL_3300
CAMERA_POWER_VCAM_D	(17)	VOL_1500
CAMERA_POWER_VCAM_A2	(12)	VOL_2800
	//echo 18 1800    1 > pwr_ctrl
	echo 21 3300    1 > pwr_ctrl
	echo 17 1500    1 > pwr_ctrl
	echo 12 2800    1 > pwr_ctrl, will cause death, ????
 */
static ssize_t pwr_ctrl_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t size)
{
	int pin;
	int level;
	int voltage;
	int power_id;
	int on_off;

	if(2 == sscanf(buf, "%d %d",&pin, &level)) {
		mt_set_gpio_mode(pin,GPIO_MODE_00);
		mt_set_gpio_dir(pin,GPIO_DIR_OUT);

		if (0 != level) 
			mt_set_gpio_out(pin,GPIO_OUT_ONE);
		else
			mt_set_gpio_out(pin,GPIO_OUT_ZERO);
	}

	if(3 == sscanf(buf, "%d %d %d",&power_id, &voltage, &on_off)) {
		if ((power_id < MT6325_POWER_LDO_VTCXO0) || (power_id >= MT65XX_POWER_COUNT_END))
			goto __end;

		if ((voltage <= VOL_DEFAULT) || (voltage > VOL_3600))
			goto __end;
		
		if (on_off)
			hwPowerOn(power_id, voltage, MODE_NAME);
		else
			hwPowerDown(power_id, MODE_NAME);
	}
__end:	
	return size;
}

static ssize_t power_on_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	u16 sensor_id=0;
	static int mode = 0;
	if(mode)
	{
		mt_set_gpio_out(ENF_PIN, 0);
		mt_set_gpio_out(ENM_PIN, 0);
		mode = 0;

	}
	else
	{
		mode = 1;

		mt_set_gpio_out(ENF_PIN, 1);
		mt_set_gpio_out(ENM_PIN, 0);
	}	
	return sprintf(buf, "id=%d reg=%x\n", sensor_id,mReg_val);
}
static ssize_t power_on_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t size)
{
	u32 param[4];
	int count=0;
	char *next;
	char val;
	param[0] = simple_strtol(buf, &next, 10);
	printk("\nsky test param[%d]=%d \n ",count,param[count]);

	while(*next == '.')
	{

		++count;
		param[count] = simple_strtol(next+1, &next, 10);
		printk("\nsky test param[%d]=%d \n ",count,param[count]);

	}
	if(count > 0)
	{//v2.8=11 v1.8=7 v1.5=6;VGP2 VCAMA
		hwPowerOn(param[0] , param[1] ,MODE_NAME);
	}
	else
		hwPowerDown(param[0] ,MODE_NAME);

	return size;
}
/*
#define SKY_REPORT_HEADER_MAGIC	(0x12345678)
static ssize_t pcba_test_result_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	if (SKY_REPORT_HEADER_MAGIC == fac_h.magic)
		fac_h.pcba_test_pass = 1;

	fac_h.pcba_test_pass = 1;		//pcba test pass temporary
	return sprintf(buf,"%s\n" ,fac_h.pcba_test_pass? "pass":"fail");
}
*/

#define mt65xx_sync_writel(v, a) \
        do {    \
            *(volatile unsigned int *)(a) = (v);    \
            dsb(); \
        } while (0)

static ssize_t address_show(struct device *dev,struct device_attribute *attr, char *buf)
{
	//__va(addr)
	unsigned int value, addr;
	addr = (unsigned int)mReg_val;
	if ((addr >= 0xC0000000) && (addr <= 0xFFFFFFFF)) {
		value = *(volatile unsigned int *)addr;
	} else if ((addr >= 0x10000000) && (addr <= 0x1FFFFFFF)) {
		addr |= 0xF0000000;
		value = *(volatile unsigned int *)addr;
	} else {
		printk("address may be error.");
		value = *(volatile unsigned int *)addr;
	}
	return sprintf(buf,"addr=0x%x val=0x%x\n" ,addr,value);
}

static ssize_t address_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t size)
{
	unsigned int addr;
	int value;

	if(2 == sscanf(buf, "%x %x %x",&addr, &value)) {
		if ((addr >= 0xC0000000) && (addr <= 0xFFFFFFFF)) {
			mt65xx_sync_writel(value, addr);
		}else if ((addr >= 0x10000000) && (addr <= 0x1FFFFFFF)) {
			addr |= 0xF0000000;
			mt65xx_sync_writel(value, addr);
		} else {
			printk("address may be error!");
			mt65xx_sync_writel(value, addr);
		}
		mReg_val = addr;
	}
	
	if (1 == sscanf(buf, "%x", &addr)) {
		mReg_val = addr;
	}
	
	return size;
}


/***************for custom virtual date*********start******************/

struct custom_virtual_date custom_date = 
{
};

static struct kobject *custom_date_kobj;

static ssize_t cpu_name_show(struct kobject *kobj,struct kobj_attribute *attr, char *buf)
{
	return sprintf(buf,"%s\n" ,custom_date.cpu_name[0]? custom_date.cpu_name:"defalut");
}

static ssize_t cpu_name_store(struct kobject *kobj,struct kobj_attribute *attr, const char *buf, size_t size)
{
	char value[50];
	sscanf(buf,"%s", value);	
	strcpy(custom_date.cpu_name,value);
	return size;
}
static struct kobj_attribute cpu_name_attr = {
	.attr = {
		.name = "cpu_name",
		.mode = 0644,
	},
    	.show = &cpu_name_show,
	.store = &cpu_name_store,
};

static ssize_t cpufreq_max_show(struct kobject *kobj,struct kobj_attribute *attr, char *buf)
{
	return sprintf(buf,"%d\n" ,custom_date.cpufreq_max);
}

static ssize_t cpufreq_max_store(struct kobject *kobj,struct kobj_attribute *attr, const char *buf, size_t size)
{
	unsigned int value;
	sscanf(buf,"%d", &value);	
	custom_date.cpufreq_max = value;
	return size;
}

static struct kobj_attribute cpufreq_max_attr = {
	.attr = {
		.name = "cpufreq_max",
		.mode = 0644,
	},
    	.show = &cpufreq_max_show,
	.store = &cpufreq_max_store,
};

static ssize_t cpu_num_show(struct kobject *kobj,struct kobj_attribute *attr, char *buf)
{
	return sprintf(buf,"%d\n" ,custom_date.cpu_num);
}

static ssize_t cpu_num_store(struct kobject *kobj,struct kobj_attribute *attr, const char *buf, size_t size)
{
	char value;
	char i;
	char num = 2;
	char cpu[5] = {0};
	sscanf(buf,"%d", &value);	
	custom_date.cpu_num = value;
	if(custom_date.cpu_num > num)
		num = custom_date.cpu_num;

	for(i = 2;i < num; i++)
	{
		cpu[0] = 'c';
		cpu[1] = 'p';
		cpu[2] = 'u';
		cpu[3] = (char)('0'+i);
		cpu[4] = '\0';
		printk("%s\n",cpu);
		kobject_create_and_add(cpu, &cpu_subsys.dev_root->kobj);
	}
	return size;
}

static struct kobj_attribute cpu_num_attr = {
	.attr = {
		.name = "cpu_num",
		.mode = 0644,
	},
    	.show = &cpu_num_show,
	.store = &cpu_num_store,
};

static ssize_t cpu_id_show(struct kobject *kobj,struct kobj_attribute *attr, char *buf)
{
	return sprintf(buf,"%d\n" ,custom_date.cpu_id);
}

static ssize_t cpu_id_store(struct kobject *kobj,struct kobj_attribute *attr, const char *buf, size_t size)
{
	char value;
	sscanf(buf,"%d", &value);	
	custom_date.cpu_id = value;
	return size;
}

static struct kobj_attribute cpu_id_attr = {
	.attr = {
		.name = "cpu_id",
		.mode = 0644,
	},
    	.show = &cpu_id_show,
	.store = &cpu_id_store,
};

static ssize_t mem_total_show(struct kobject *kobj,struct kobj_attribute *attr, char *buf)
{
	return sprintf(buf,"%d\n" ,custom_date.mem_total);
}

static ssize_t mem_total_store(struct kobject *kobj,struct kobj_attribute *attr, const char *buf, size_t size)
{
	unsigned int value;
	sscanf(buf,"%d", &value);
	custom_date.mem_total = value;
	return size;
}

static struct kobj_attribute mem_total_attr = {
	.attr = {
		.name = "mem_total",
		.mode = 0644,
	},
	.show = &mem_total_show,
	.store = &mem_total_store,
};

static ssize_t mem_free_show(struct kobject *kobj,struct kobj_attribute *attr, char *buf)
{
	return sprintf(buf,"%d\n" ,custom_date.mem_free);
}

static ssize_t mem_free_store(struct kobject *kobj,struct kobj_attribute *attr, const char *buf, size_t size)
{
	unsigned int value;
	sscanf(buf,"%d", &value);
	custom_date.mem_free = value;
	return size;
}

static struct kobj_attribute mem_free_attr = {
	.attr = {
		.name = "mem_free",
		.mode = 0644,
	},
	.show = &mem_free_show,
	.store = &mem_free_store,
};

static struct attribute *custom_date_attrs[] = {
	&cpu_name_attr.attr,
	&cpufreq_max_attr.attr,
	&cpu_num_attr.attr,
	&cpu_id_attr.attr,
	&mem_total_attr.attr,
	&mem_free_attr.attr,
	NULL
};

static struct attribute_group custom_date_attr_group = {
	.attrs = custom_date_attrs,
};

static struct kobject *custom_camera_kobj;
int camera_custfunc_flag = 0;
EXPORT_SYMBLE(camera_custfunc_flag);
static ssize_t camera_custfunc_show(struct kobject *kobj,struct kobj_attribute *attr, char *buf)
{
	return sprintf(buf,"%d\n" ,camera_custfunc_flag);
}

static ssize_t camera_custfunc_store(struct kobject *kobj,struct kobj_attribute *attr, const char *buf, size_t size)
{
	unsigned int value;
	sscanf(buf,"%d", &value);
	camera_custfunc_flag = value;
	return size;
}

static struct kobj_attribute camera_custfunc_attr = {
	.attr = {
		.name = "camera_custfunc",
		.mode = 0666,
	},
	.show = &camera_custfunc_show,
	.store = &camera_custfunc_store,
};



DEVICE_ATTR(read_reg,      0666, read_reg_show,  read_reg_store);

DEVICE_ATTR(power_on,      0666, power_on_show,  power_on_store);

//DEVICE_ATTR(pcba_test_result,      0644, pcba_test_result_show,  NULL);

DEVICE_ATTR(device, 0666, device_show, device_store);

DEVICE_ATTR(pwr_ctrl, 0666, NULL, pwr_ctrl_store);
DEVICE_ATTR(address, 0666, address_show, address_store);

#define SKY_I2C_DRVNAME  "sky_i2c_test"

static struct i2c_board_info __initdata i2c_devs1={I2C_BOARD_INFO(SKY_I2C_DRVNAME, 0x11 >>1)};

static const struct i2c_device_id sky_i2c_id[] = {{SKY_I2C_DRVNAME,0},{}};

static int sky_i2c_probe(struct i2c_client *client, const struct i2c_device_id *id)
{
    sky_client = client;
    return 0;
}

struct i2c_driver sky_i2c_driver = {
    .probe = sky_i2c_probe,
    .driver.name = SKY_I2C_DRVNAME,
    .id_table = sky_i2c_id,
};
extern struct workqueue_struct *system_freezable_wq;
static int sky_camera_probe(struct platform_device *pdev)
{
       i2c_register_board_info(1, &i2c_devs1, 1);
	i2c_add_driver(&sky_i2c_driver);
	device_create_file(&pdev->dev,&dev_attr_read_reg);
	device_create_file(&pdev->dev,&dev_attr_power_on);
	device_create_file(&pdev->dev,&dev_attr_device);
	device_create_file(&pdev->dev,&dev_attr_pwr_ctrl);
	device_create_file(&pdev->dev,&dev_attr_address);

	/********for pcba test**************/
	//device_create_file(&pdev->dev,&dev_attr_pcba_test_result);
	//INIT_DELAYED_WORK(&pcba_delay_work, get_pcba_test_result);
	//queue_delayed_work(system_freezable_wq, &pcba_delay_work, msecs_to_jiffies(3000));


	/********for custom virtual date**************/
	custom_date_kobj = kobject_create_and_add("custom_date", NULL);
	if(custom_date_kobj)
		sysfs_create_group(custom_date_kobj,&custom_date_attr_group);

	custom_camera_kobj = kobject_create_and_add("custom_camera", NULL);
	if(custom_camera_kobj)
		sysfs_create_file(custom_camera_kobj, &camera_custfunc_attr);

	return 0;
}

static struct platform_driver sky_test_driver = {
    .probe		= sky_camera_probe,
    .driver		= {
        .name	= "sky_i2c_test",
        .owner	= THIS_MODULE,
    }
};
static struct platform_device sky_test_device  = {
	.name			= "sky_i2c_test",
	.id			= -1,
};

static int __init sky_test_init(void)
{
	platform_device_register(&sky_test_device);
	return platform_driver_register(&sky_test_driver);
}

module_init(sky_test_init);
