/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
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

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef BUILD_LK
#include <linux/string.h>
#endif
#include "lcm_drv.h"

#ifdef BUILD_LK
	#include <platform/mt_gpio.h>
#elif defined(BUILD_UBOOT)
	#include <asm/arch/mt_gpio.h>
#else
	#include <mach/mt_gpio.h>
#endif
// ---------------------------------------------------------------------------
//  Local Constants
// ---------------------------------------------------------------------------
#define LCM_ID										0x9605

#define LCM_DSI_CMD_MODE								0

#define FRAME_WIDTH									(540)
#define FRAME_HEIGHT									(960)
#define REGFLAG_DELAY             							0XAA
#define REGFLAG_END_OF_TABLE      						0xAB   // END OF REGISTERS MARKER

static LCM_UTIL_FUNCS lcm_util = {0};

#define SET_RESET_PIN(v)									(lcm_util.set_reset_pin((v)))

#define UDELAY(n) 											(lcm_util.udelay(n))
#define MDELAY(n) 											(lcm_util.mdelay(n))


// ---------------------------------------------------------------------------
//  Local Functions
// ---------------------------------------------------------------------------

#define dsi_set_cmdq_V2(cmd, count, ppara, force_update)				lcm_util.dsi_set_cmdq_V2(cmd, count, ppara, force_update)
#define dsi_set_cmdq(pdata, queue_size, force_update)					lcm_util.dsi_set_cmdq(pdata, queue_size, force_update)
#define wrtie_cmd(cmd)												lcm_util.dsi_write_cmd(cmd)
#define write_regs(addr, pdata, byte_nums)								lcm_util.dsi_write_regs(addr, pdata, byte_nums)
#define read_reg(cmd)												lcm_util.dsi_dcs_read_lcm_reg(cmd)
#define read_reg_v2(cmd, buffer, buffer_size)							lcm_util.dsi_dcs_read_lcm_reg_v2(cmd, buffer, buffer_size)    

struct LCM_setting_table {
    unsigned cmd;
    unsigned char count;
    unsigned char para_list[64];
};



static struct LCM_setting_table lcm_initialization_setting[] = {
	{0x00,1,{0x00}},
	{0xFF,3,{0x96,0x05,0x01}},
	{0x00,1,{0x80}},
	{0xFF,2,{0x96,0x05}},
	{0x00,1,{0x92}},
	{0xFF,2,{0x10,0x02}},

	{0x00,1,{0x00}},
	{0x00,1,{0x00}},
	{0x00,1,{0x00}},
	{0x00,1,{0x00}},
	{0x00,1,{0x00}},
	{0x00,1,{0x00}},
	{0x00,1,{0x00}},
	{0x00,1,{0x00}},

	{0x00,1,{0xB4}},
	{0xC0,1,{0x50}},
	{0x00,1,{0x91}},
	{0xC5,1,{0x76}},
//	{0x00,1,{0x80}},
//	{0xD6,1,{0x18}}, //CE function on

	{0x00,1,{0x00}},
	{0xD8,2,{0x6F,0x6F}},
	{0x00,1,{0x00}},
	{0xd9,1,{0x2C}},  //3C_boyi , 2C_lead

	{0x00,1,{0x89}},
	{0xC0,1,{0x01}},
	{0x00,1,{0xA0}},
	{0xC1,1,{0x00}},
	{0x00,1,{0x80}}, 
	{0xC1,2,{0x36,0x66}},
	{0x00,1,{0xb1}}, 
	{0xC5,1,{0x28}},
	{0x00,1,{0xB2}}, 
	{0xF5,4,{0x15,0x00,0x15,0x00}},
	{0x00,1,{0xC0}}, 
	{0xC5,1,{0x00}},

	{0x00,1,{0x80}},
	{0xC4,1,{0x9C}}, // 放电代码
	{0x00,1,{0x87}},
	{0xC4,1,{0x40}}, // 放电代码

	{0x00,1,{0x84}},
	{0xC4,1,{0x18}}, // TP oncell panel noise improved 20130531

	{0x00,1,{0x80}},
	{0xCB,10,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
	{0x00,1,{0x90}},
	{0xCB,15,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
	{0x00,1,{0xA0}},
	{0xCB,15,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
	{0x00,1,{0xB0}},
	{0xCB,10,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
	{0x00,1,{0xC0}},
	{0xCB,15,{0x00,0x00,0x04,0x04,0x04,0x04,0x00,0x00,0x04,0x04,0x04,0x04,0x00,0x00,0x00}},
	{0x00,1,{0xD0}},
	{0xCB,15,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x00,0x00,0x04,0x04}},
	{0x00,1,{0xE0}},
	{0xCB,10,{0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
	{0x00,1,{0xF0}},
	{0xCB,10,{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff}},
	{0x00,1,{0x80}},
	{0xCC,10,{0x00,0x00,0x26,0x25,0x02,0x06,0x00,0x00,0x0A,0x0E}},
	{0x00,1,{0x90}},
	{0xCC,15,{0x0C,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x25,0x01}},
	{0x00,1,{0xA0}},
	{0xCC,15,{0x05,0x00,0x00,0x09,0x0d,0x0b,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
	{0x00,1,{0xB0}},
	{0xCC,10,{0x00,0x00,0x25,0x26,0x05,0x01,0x00,0x00,0x0f,0x0B}},
	{0x00,1,{0xC0}},
	{0xCC,15,{0x0d,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x25,0x26,0x06}},
	{0x00,1,{0xD0}},
	{0xCC,15,{0x02,0x00,0x00,0x10,0x0C,0x0E,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
	{0x00,1,{0x80}},
	{0xCE,12,{0x87,0x03,0x28,0x86,0x03,0x28,0x00,0x0f,0x00,0x00,0x0f,0x00}},
	{0x00,1,{0x90}},
	{0xCE,14,{0x33,0xBE,0x28,0x33,0xBF,0x28,0xF0,0x00,0x00,0xF0,0x00,0x00,0x00,0x00}},
	{0x00,1,{0xA0}},
	{0xCE,14,{0x38,0x03,0x83,0xC0,0x8A,0x18,0x00,0x38,0x02,0x83,0xC1,0x89,0x18,0x00}},
	{0x00,1,{0xB0}},
	{0xCE,14,{0x38,0x01,0x83,0xC2,0x88,0x18,0x00,0x38,0x00,0x83,0xC3,0x87,0x18,0x00}},
	{0x00,1,{0xC0}},
	{0xCE,14,{0x30,0x00,0x83,0xC4,0x86,0x18,0x00,0x30,0x01,0x83,0xC5,0x85,0x18,0x00}},
	{0x00,1,{0xD0}},
	{0xCE,14,{0x30,0x02,0x83,0xC6,0x84,0x18,0x00,0x30,0x03,0x83,0xC7,0x83,0x18,0x00}},
	{0x00,1,{0xC0}},
	{0xCF,10,{0x01,0x01,0x20,0x20,0x00,0x00,0x01,0x01,0x00,0x00}},

///GAMMA2.2
	{0x00,1,{0x00}},
	{0xE1,16,{0x00,0x10,0x14,0x0C,0x05,0x0E,0x0B,0x0B,0x02,0x06,0x0C,0x08,0x0F,0x11,0x0B,0x03}},
	{0x00,1,{0x00}},
	{0xE2,16,{0x00,0x10,0x14,0x0D,0x05,0x0E,0x0C,0x0B,0x02,0x06,0x0C,0x08,0x0F,0x11,0x0B,0x03}},

	{0x00,1,{0x00}}, //R                 
	{0xEC,34,{0x40,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x03,0x00}},
	{0x00,1,{0x00}}, //G                 
	{0xED,34,{0x40,0x44,0x44,0x34,0x44,0x44,0x34,0x44,0x44,0x44,0x43,0x44,0x44,0x43,0x44,0x44,0x34,0x44,0x44,0x34,0x44,0x44,0x44,0x43,0x44,0x44,0x43,0x44,0x44,0x34,0x44,0x44,0x03,0x00}},
	{0x00,1,{0x00}}, //B                                
	{0xEE,34,{0x40,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x04,0x00}},
//////////////////////////////////////
	{0x00,1,{0xB1}},
	{0xC5,1,{0x28}},

	{0x00,1,{0x80}},
	{0xC4,1,{0x9C}},

	{0x00,1,{0xC0}},
	{0xC5,1,{0x00}},

	{0x00,1,{0xB2}},
	{0xF5,4,{0x15,0x00,0x15,0x00}},

	{0x00,1,{0x93}},
	{0xC5,3,{0x03,0x55,0x55}},

	{0x00,1,{0x80}},
	{0xC1,2,{0x36,0x66}},

	{0x00,1,{0x89}},
	{0xC0,1,{0x01}},

	{0x00,1,{0xA0}},
	{0xC1,1,{0x00}},

	{0x00,1,{0xC5}},
	{0xB0,1,{0x03}},
///////////////////////////////////////
	{0x00,1,{0x00}},
	{0xFF,3,{0xFF,0xFF,0xFF}},

	{0x11,1,{0x00}},
	{REGFLAG_DELAY, 120, {}},
	{0x29,1,{0x00}},	
	{REGFLAG_DELAY, 20, {}},
	
	{REGFLAG_END_OF_TABLE, 0x00, {}}
};

static struct LCM_setting_table lcm_sleep_out_setting[] = {
	// Sleep Out
	{0x11, 1, {0x00}},
	{REGFLAG_DELAY, 20, {}},

	// Display ON
	{0x29, 1, {0x00}},
	{REGFLAG_DELAY, 120, {}},
	{REGFLAG_END_OF_TABLE, 0x00, {}}
};


static struct LCM_setting_table lcm_sleep_mode_in_setting[] = {
	// Display off sequence
	{0x28, 1, {0x00}},
	{REGFLAG_DELAY, 200, {}},

	// Sleep Mode On
	{0x10, 1, {0x00}},
	{REGFLAG_DELAY, 120, {}},
	{REGFLAG_END_OF_TABLE, 0x00, {}}
};
static struct LCM_setting_table lcm_compare_id_setting[] = {
	// Display off sequence
	{0xF0,	5,	{0x55, 0xaa, 0x52,0x08,0x00}},
	{REGFLAG_DELAY, 10, {}},

	{REGFLAG_END_OF_TABLE, 0x00, {}}
};

static void push_table(struct LCM_setting_table *table, unsigned int count, unsigned char force_update)
{
	unsigned int i;

	for(i = 0; i < count; i++) {
		
		unsigned cmd;
		cmd = table[i].cmd;
		
	switch (cmd) {
			
		case REGFLAG_DELAY :
 			MDELAY(table[i].count);
   			break;
				
		case REGFLAG_END_OF_TABLE :
   			break;
				
		default:
			dsi_set_cmdq_V2(cmd, table[i].count, table[i].para_list, force_update);
			MDELAY(2);
		}
	}
	
}


static void init_lcm_registers(void)
{
	unsigned int data_array[16];
}
// ---------------------------------------------------------------------------
//  LCM Driver Implementations
// ---------------------------------------------------------------------------

static void lcm_set_util_funcs(const LCM_UTIL_FUNCS *util)
{
	memcpy(&lcm_util, util, sizeof(LCM_UTIL_FUNCS));
}

static void lcm_get_params(LCM_PARAMS *params)
{
	memset(params, 0, sizeof(LCM_PARAMS));

	params->type   = LCM_TYPE_DSI;

	params->width  = FRAME_WIDTH;
	params->height = FRAME_HEIGHT;

#if (LCM_DSI_CMD_MODE)
	params->dsi.mode   = CMD_MODE;
	params->dsi.switch_mode = SYNC_EVENT_VDO_MODE;
#else
    params->dsi.mode   = SYNC_EVENT_VDO_MODE;
	params->dsi.switch_mode = CMD_MODE;
#endif
	params->dsi.switch_mode_enable = 0;

	// DSI
	/* Command mode setting */
	params->dsi.LANE_NUM				= LCM_TWO_LANE;
	//The following defined the fomat for data coming from LCD engine.
	params->dsi.data_format.color_order 	= LCM_COLOR_ORDER_RGB;
	params->dsi.data_format.trans_seq   	= LCM_DSI_TRANS_SEQ_MSB_FIRST;
	params->dsi.data_format.padding     	= LCM_DSI_PADDING_ON_LSB;
	params->dsi.data_format.format      		= LCM_DSI_FORMAT_RGB888;

	// Highly depends on LCD driver capability.
	params->dsi.packet_size=256;
	//video mode timing

	params->dsi.PS=LCM_PACKED_PS_24BIT_RGB888;

	params->dsi.vertical_sync_active				= 2;
	params->dsi.vertical_backporch					= 8;
	params->dsi.vertical_frontporch					= 10;
	params->dsi.vertical_active_line					= FRAME_HEIGHT;

	params->dsi.horizontal_sync_active				= 10;
	params->dsi.horizontal_backporch				= 20;
	params->dsi.horizontal_frontporch				= 40;
	params->dsi.horizontal_active_pixel				= FRAME_WIDTH;
    	//params->dsi.ssc_disable							= 1;
#ifndef FPGA_EARLY_PORTING
#if (LCM_DSI_CMD_MODE)
	params->dsi.PLL_CLOCK = 200; //this value must be in MTK suggested table
#else
	params->dsi.PLL_CLOCK = 200; //this value must be in MTK suggested table
#endif
#else
	params->dsi.pll_div1 = 0;
	params->dsi.pll_div2 = 0;
	params->dsi.fbk_div = 0x1;
	/*
	params->dsi.pll_div1=1;		// div1=0,1,2,3;div1_real=1,2,4,4 ----0: 546Mbps  1:273Mbps
	params->dsi.pll_div2=0; 		// div2=0,1,2,3;div1_real=1,2,4,4	
	params->dsi.fbk_div =15;   	 // fref=26MHz, fvco=fref*(fbk_div+1)*2/(div1_real*div2_real)
	*/
#endif

	params->dsi.clk_lp_per_line_enable = 0;
	params->dsi.esd_check_enable = 0;// 1;
	params->dsi.customization_esd_check_enable = 0;
	params->dsi.lcm_esd_check_table[0].cmd          = 0;//0x53;
	params->dsi.lcm_esd_check_table[0].count        = 0;// 1;
	params->dsi.lcm_esd_check_table[0].para_list[0] = 0x24;

}

static void lcm_init(void)
{
	unsigned int data_array[16];
	static int count = 0;

	SET_RESET_PIN(1);
	MDELAY(1);
	SET_RESET_PIN(0);
	MDELAY(20);
	SET_RESET_PIN(1);
	MDELAY(20);
	
	push_table(lcm_initialization_setting, sizeof(lcm_initialization_setting) / sizeof(struct LCM_setting_table), 1);
 
}



static void lcm_suspend(void)
{
	unsigned int data_array[16];

	data_array[0]=0x00280500; // Display Off
	dsi_set_cmdq(data_array, 1, 1);
	
	data_array[0] = 0x00100500; // Sleep In
	dsi_set_cmdq(data_array, 1, 1);

	
	SET_RESET_PIN(1);	
	SET_RESET_PIN(0);
	MDELAY(100); // 1ms
	
	SET_RESET_PIN(1);
	MDELAY(120);      

}


static void lcm_resume(void)
{
	lcm_init();

	//push_table(lcm_sleep_out_setting, sizeof(lcm_sleep_out_setting) / sizeof(struct LCM_setting_table), 1);

}


static void lcm_update(unsigned int x, unsigned int y,
                       unsigned int width, unsigned int height)
{
	unsigned int x0 = x;
	unsigned int y0 = y;
	unsigned int x1 = x0 + width - 1;
	unsigned int y1 = y0 + height - 1;

	unsigned char x0_MSB = ((x0>>8)&0xFF);
	unsigned char x0_LSB = (x0&0xFF);
	unsigned char x1_MSB = ((x1>>8)&0xFF);
	unsigned char x1_LSB = (x1&0xFF);
	unsigned char y0_MSB = ((y0>>8)&0xFF);
	unsigned char y0_LSB = (y0&0xFF);
	unsigned char y1_MSB = ((y1>>8)&0xFF);
	unsigned char y1_LSB = (y1&0xFF);

	unsigned int data_array[16];

	data_array[0]= 0x00053902;
	data_array[1]= (x1_MSB<<24)|(x0_LSB<<16)|(x0_MSB<<8)|0x2a;
	data_array[2]= (x1_LSB);
	dsi_set_cmdq(data_array, 3, 1);
	
	data_array[0]= 0x00053902;
	data_array[1]= (y1_MSB<<24)|(y0_LSB<<16)|(y0_MSB<<8)|0x2b;
	data_array[2]= (y1_LSB);
	dsi_set_cmdq(data_array, 3, 1);

	data_array[0]= 0x002c3909;
	dsi_set_cmdq(data_array, 1, 0);

}

static unsigned int lcm_compare_id(void)
{
	unsigned int id = 0;
	unsigned char buffer[5];
	unsigned int array[16];

	SET_RESET_PIN(1);	//NOTE:should reset LCM firstly
	MDELAY(10);
	SET_RESET_PIN(0);
	MDELAY(50);
	SET_RESET_PIN(1);
	MDELAY(50);

	array[0] = 0x00053700;	// read id return two byte,version and id
	dsi_set_cmdq(array, 1, 1);
	read_reg_v2(0xa1, buffer, 5);
	id = ((buffer[2] << 8) | buffer[3]);	//we only need ID

#ifdef BUILD_LK
	printf("[erick-lk]%s,  otm9605a id = 0x%08x\n", __func__, id);
#else
	printk("[erick-k]%s,  otm9605a id = 0x%08x\n", __func__, id);
#endif
    return (LCM_ID == id)?1:0;
}

LCM_DRIVER otm9605a_qhd_dsi_vdo_lcm_drv = 
{
	.name				= "otm9605a_qhd_dsi_vdo",
	.set_util_funcs			= lcm_set_util_funcs,
	.compare_id			= lcm_compare_id,
	.get_params			= lcm_get_params,
	.init				= lcm_init,
	.suspend			= lcm_suspend,
	.resume         		= lcm_resume,
#if (LCM_DSI_CMD_MODE)
	.update				= lcm_update,
#endif
};
