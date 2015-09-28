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

#ifndef _CAMERA_AE_PLINETABLE_GC2235RAW_H
#define _CAMERA_AE_PLINETABLE_GC2235RAW_H

#include "camera_custom_AEPlinetable.h"
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {25012,1152,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.78  BV=2.51
    {25012,1152,1120, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.88  BV=2.41
    {25012,1280,1080, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.98  BV=2.31
    {25012,1408,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.08  BV=2.21
    {33337,1152,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.77  BV=2.11
    {33337,1152,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.86  BV=2.01
    {33337,1280,1064, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.96  BV=1.92
    {33337,1408,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.07  BV=1.81
    {41662,1152,1088, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.84  BV=1.71
    {41662,1280,1056, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.95  BV=1.60
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {49987,1280,1080, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.98  BV=1.31
    {49987,1408,1048, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.08  BV=1.22
    {49987,1536,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.18  BV=1.11
    {49987,1664,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.29  BV=1.01
    {49987,1664,1096, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.38  BV=0.91
    {49987,1792,1088, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.48  BV=0.81
    {49987,2048,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.58  BV=0.71
    {49987,2176,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.68  BV=0.61
    {49987,2304,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.78  BV=0.52
    {58312,2048,1080, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=6.66  BV=0.41
    {58312,2304,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=6.75  BV=0.32
    {66674,2176,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.67  BV=0.21
    {74999,2048,1032, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=6.60  BV=0.11
    {74999,2176,1048, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=6.71  BV=0.00
    {83324,2048,1072, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=6.65  BV=-0.10
    {91649,2048,1056, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=6.63  BV=-0.21
    {100011,2048,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100011,2176,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.68  BV=-0.39
    {100011,2304,1056, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.80  BV=-0.51
    {100011,2432,1064, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.89  BV=-0.60
    {100011,2688,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.00  BV=-0.71
    {100011,2816,1064, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.10  BV=-0.81
    {100011,3072,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.19  BV=-0.90
    {108336,3072,1032, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=7.18  BV=-1.00
    {116661,3072,1024, 0, 0, 0},  //TV = 3.10(3153 lines)  AV=2.97  SV=7.17  BV=-1.10
    {124986,3072,1032, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.18  BV=-1.21
    {124986,3200,1056, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.27  BV=-1.30
    {124986,3456,1048, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.37  BV=-1.40
    {124986,3712,1040, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.47  BV=-1.49
    {124986,3968,1048, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.57  BV=-1.60
    {124986,4352,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.67  BV=-1.70
    {124986,4608,1040, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.78  BV=-1.81
    {124986,4992,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.87  BV=-1.90
    {124986,5248,1040, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.96  BV=-1.99
    {124986,5632,1040, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=8.07  BV=-2.10
    {124986,6144,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=8.17  BV=-2.20
    {124986,6528,1032, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=8.27  BV=-2.30
    {124986,7040,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=8.37  BV=-2.40
    {133311,7040,1032, 0, 0, 0},  //TV = 2.91(3603 lines)  AV=2.97  SV=8.38  BV=-2.50
    {141673,7086,1032, 0, 0, 0},  //TV = 2.82(3829 lines)  AV=2.97  SV=8.39  BV=-2.60
    {149998,7086,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=8.41  BV=-2.70
    {158323,7086,1064, 0, 0, 0},  //TV = 2.66(4279 lines)  AV=2.97  SV=8.43  BV=-2.80
    {175010,7040,1040, 0, 0, 0},  //TV = 2.51(4730 lines)  AV=2.97  SV=8.39  BV=-2.90
    {183335,7086,1056, 0, 0, 0},  //TV = 2.45(4955 lines)  AV=2.97  SV=8.42  BV=-3.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sPreviewPLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {20017,1152,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.80  BV=2.81
    {20017,1280,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.91  BV=2.71
    {20017,1280,1096, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.00  BV=2.61
    {20017,1408,1072, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.11  BV=2.50
    {20017,1536,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.20  BV=2.41
    {20017,1664,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.30  BV=2.32
    {30007,1152,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,1280,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,1280,1104, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,1408,1088, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.13  BV=1.90
    {39997,1152,1064, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.81  BV=1.80
    {39997,1280,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.91  BV=1.71
    {39997,1280,1096, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.00  BV=1.61
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {49987,1280,1080, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.98  BV=1.31
    {49987,1408,1048, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.08  BV=1.22
    {49987,1536,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.18  BV=1.11
    {49987,1664,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.29  BV=1.01
    {49987,1664,1096, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.38  BV=0.91
    {49987,1792,1088, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.48  BV=0.81
    {49987,2048,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.58  BV=0.71
    {49987,2176,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.68  BV=0.61
    {49987,2304,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.78  BV=0.52
    {60014,2048,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.62  BV=0.41
    {60014,2176,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.73  BV=0.30
    {70004,2048,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=6.61  BV=0.20
    {70004,2176,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=6.69  BV=0.11
    {79994,2048,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=6.62  BV=-0.00
    {79994,2176,1056, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=6.72  BV=-0.10
    {89984,2048,1064, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=6.64  BV=-0.20
    {100011,2048,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100011,2176,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.68  BV=-0.39
    {100011,2304,1056, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.80  BV=-0.51
    {100011,2432,1064, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.89  BV=-0.60
    {100011,2688,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.00  BV=-0.71
    {100011,2816,1064, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.10  BV=-0.81
    {100011,3072,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100011,3328,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.30  BV=-1.00
    {110001,3200,1040, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=7.25  BV=-1.10
    {119991,3200,1024, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.23  BV=-1.20
    {119991,3328,1056, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.33  BV=-1.30
    {119991,3584,1048, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.43  BV=-1.40
    {119991,3840,1048, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.53  BV=-1.50
    {119991,4224,1024, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.63  BV=-1.60
    {119991,4480,1040, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.74  BV=-1.71
    {119991,4864,1024, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.83  BV=-1.80
    {119991,5120,1040, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.93  BV=-1.90
    {119991,5504,1040, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.03  BV=-2.00
    {119991,5888,1040, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.13  BV=-2.10
    {119991,6400,1024, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.23  BV=-2.20
    {119991,6784,1032, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.32  BV=-2.29
    {119991,7086,1056, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.42  BV=-2.39
    {129981,7086,1048, 0, 0, 0},  //TV = 2.94(3513 lines)  AV=2.97  SV=8.41  BV=-2.49
    {140008,7086,1048, 0, 0, 0},  //TV = 2.84(3784 lines)  AV=2.97  SV=8.41  BV=-2.60
    {149998,7086,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=8.41  BV=-2.70
    {159988,7086,1048, 0, 0, 0},  //TV = 2.64(4324 lines)  AV=2.97  SV=8.41  BV=-2.79
    {170015,7086,1064, 0, 0, 0},  //TV = 2.56(4595 lines)  AV=2.97  SV=8.43  BV=-2.90
    {180005,7086,1072, 0, 0, 0},  //TV = 2.47(4865 lines)  AV=2.97  SV=8.44  BV=-3.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_PreviewAutoTable =
{
    AETABLE_RPEVIEW_AUTO,    //eAETableID
    126,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -30,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sPreviewPLineTable_60Hz,
    sPreviewPLineTable_50Hz,
    NULL,
};

static strEvPline sCapturePLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {25012,1152,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.78  BV=2.51
    {25012,1152,1120, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.88  BV=2.41
    {25012,1280,1080, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.98  BV=2.31
    {25012,1408,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.08  BV=2.21
    {33337,1152,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.77  BV=2.11
    {33337,1152,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.86  BV=2.01
    {33337,1280,1064, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.96  BV=1.92
    {33337,1408,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.07  BV=1.81
    {41662,1152,1088, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.84  BV=1.71
    {41662,1280,1056, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.95  BV=1.60
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {49987,1280,1080, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.98  BV=1.31
    {49987,1408,1048, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.08  BV=1.22
    {49987,1536,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.18  BV=1.11
    {49987,1664,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.29  BV=1.01
    {49987,1664,1096, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.38  BV=0.91
    {49987,1792,1088, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.48  BV=0.81
    {49987,2048,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.58  BV=0.71
    {49987,2176,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.68  BV=0.61
    {49987,2304,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.78  BV=0.52
    {58312,2048,1080, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=6.66  BV=0.41
    {58312,2304,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=6.75  BV=0.32
    {66674,2176,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.67  BV=0.21
    {74999,2048,1032, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=6.60  BV=0.11
    {74999,2176,1048, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=6.71  BV=0.00
    {83324,2048,1072, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=6.65  BV=-0.10
    {91649,2048,1056, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=6.63  BV=-0.21
    {100011,2048,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100011,2176,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.68  BV=-0.39
    {100011,2304,1056, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.80  BV=-0.51
    {100011,2432,1064, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.89  BV=-0.60
    {100011,2688,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.00  BV=-0.71
    {100011,2816,1064, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.10  BV=-0.81
    {100011,3072,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.19  BV=-0.90
    {108336,3072,1032, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=7.18  BV=-1.00
    {116661,3072,1024, 0, 0, 0},  //TV = 3.10(3153 lines)  AV=2.97  SV=7.17  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCapturePLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {20017,1152,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.80  BV=2.81
    {20017,1280,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.91  BV=2.71
    {20017,1280,1096, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.00  BV=2.61
    {20017,1408,1072, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.11  BV=2.50
    {20017,1536,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.20  BV=2.41
    {20017,1664,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.30  BV=2.32
    {30007,1152,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,1280,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,1280,1104, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,1408,1088, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.13  BV=1.90
    {39997,1152,1064, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.81  BV=1.80
    {39997,1280,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.91  BV=1.71
    {39997,1280,1096, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.00  BV=1.61
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {49987,1280,1080, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.98  BV=1.31
    {49987,1408,1048, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.08  BV=1.22
    {49987,1536,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.18  BV=1.11
    {49987,1664,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.29  BV=1.01
    {49987,1664,1096, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.38  BV=0.91
    {49987,1792,1088, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.48  BV=0.81
    {49987,2048,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.58  BV=0.71
    {49987,2176,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.68  BV=0.61
    {49987,2304,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.78  BV=0.52
    {60014,2048,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.62  BV=0.41
    {60014,2176,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.73  BV=0.30
    {70004,2048,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=6.61  BV=0.20
    {70004,2176,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=6.69  BV=0.11
    {79994,2048,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=6.62  BV=-0.00
    {79994,2176,1056, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=6.72  BV=-0.10
    {89984,2048,1064, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=6.64  BV=-0.20
    {100011,2048,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100011,2176,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.68  BV=-0.39
    {100011,2304,1056, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.80  BV=-0.51
    {100011,2432,1064, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.89  BV=-0.60
    {100011,2688,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.00  BV=-0.71
    {100011,2816,1064, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.10  BV=-0.81
    {100011,3072,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100011,3328,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.30  BV=-1.00
    {110001,3200,1040, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=7.25  BV=-1.10
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureAutoTable =
{
    AETABLE_CAPTURE_AUTO,    //eAETableID
    107,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -11,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCapturePLineTable_60Hz,
    sCapturePLineTable_50Hz,
    NULL,
};

static strEvPline sVideoPLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.48  BV=3.40
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {8325,2304,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.77  BV=3.11
    {8325,2432,1048, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.87  BV=3.01
    {8325,2560,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.97  BV=2.91
    {8325,2816,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.07  BV=2.81
    {8325,3072,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.17  BV=2.71
    {8325,3200,1048, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.26  BV=2.62
    {8325,3456,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.36  BV=2.52
    {8325,3712,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.47  BV=2.41
    {8325,3968,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.56  BV=2.32
    {16650,2176,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.67  BV=2.21
    {16650,2304,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.77  BV=2.11
    {16650,2432,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.87  BV=2.01
    {16650,2688,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.98  BV=1.90
    {16650,2816,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.07  BV=1.81
    {25012,2048,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.58  BV=1.71
    {25012,2176,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.67  BV=1.62
    {25012,2304,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.79  BV=1.50
    {25012,2432,1064, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.89  BV=1.40
    {25012,2688,1032, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.99  BV=1.30
    {33189,2176,1024, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=6.67  BV=1.21
    {33189,2304,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=6.77  BV=1.12
    {33189,2432,1056, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=6.88  BV=1.01
    {33189,2688,1024, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=6.98  BV=0.91
    {33189,2816,1040, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.07  BV=0.82
    {33189,3072,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.18  BV=0.70
    {33189,3200,1056, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.27  BV=0.61
    {33189,3456,1048, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.37  BV=0.51
    {33189,3712,1048, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.48  BV=0.41
    {33189,3968,1048, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.57  BV=0.31
    {33189,4352,1024, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.67  BV=0.21
    {33189,4608,1040, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.78  BV=0.11
    {33189,4992,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.88  BV=0.00
    {41662,4224,1040, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.65  BV=-0.10
    {41662,4608,1024, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.75  BV=-0.20
    {49987,4096,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.60  BV=-0.30
    {49987,4352,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.69  BV=-0.40
    {49987,4736,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.79  BV=-0.50
    {58312,4352,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=7.67  BV=-0.60
    {58312,4608,1040, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=7.78  BV=-0.71
    {66526,4352,1032, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=7.68  BV=-0.80
    {66526,4608,1040, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=7.78  BV=-0.90
    {66526,4992,1032, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=7.88  BV=-1.00
    {66526,5376,1024, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=7.98  BV=-1.10
    {66526,5760,1024, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=8.08  BV=-1.20
    {66526,6144,1032, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=8.18  BV=-1.30
    {66526,6656,1024, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=8.29  BV=-1.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoPLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.48  BV=3.40
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8843,2048,1024, 0, 0, 0},  //TV = 6.82(239 lines)  AV=2.97  SV=6.58  BV=3.21
    {9472,2048,1024, 0, 0, 0},  //TV = 6.72(256 lines)  AV=2.97  SV=6.58  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {9990,2304,1056, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.80  BV=2.82
    {9990,2560,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.91  BV=2.71
    {9990,2688,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.00  BV=2.62
    {9990,2944,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.11  BV=2.51
    {9990,3072,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.20  BV=2.41
    {9990,3328,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.31  BV=2.31
    {9990,3584,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.41  BV=2.20
    {9990,3840,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.50  BV=2.11
    {20017,2048,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.61  BV=2.01
    {20017,2176,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.69  BV=1.92
    {20017,2304,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.80  BV=1.81
    {20017,2560,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.91  BV=1.71
    {20017,2688,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.01  BV=1.60
    {20017,2944,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.11  BV=1.50
    {30007,2048,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.63  BV=1.40
    {30007,2176,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,2304,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,2560,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.92  BV=1.11
    {30007,2688,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.02  BV=1.01
    {30007,2944,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.12  BV=0.91
    {30007,3072,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.21  BV=0.82
    {30007,3328,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,3584,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.43  BV=0.60
    {30007,3840,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.51  BV=0.52
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.71  BV=0.32
    {30007,4736,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.82  BV=0.21
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {39997,4096,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.62  BV=-0.00
    {39997,4480,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.71  BV=-0.10
    {39997,4736,1040, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.82  BV=-0.20
    {49987,4096,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.60  BV=-0.30
    {49987,4352,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.69  BV=-0.40
    {49987,4736,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.79  BV=-0.50
    {60014,4224,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.63  BV=-0.60
    {60014,4480,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.73  BV=-0.70
    {60014,4864,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.83  BV=-0.80
    {60014,5120,1040, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.93  BV=-0.90
    {60014,5504,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.02  BV=-0.99
    {60014,5888,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.12  BV=-1.09
    {60014,6400,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.23  BV=-1.20
    {60014,6784,1040, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.34  BV=-1.31
    {60014,7086,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.43  BV=-1.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoAutoTable =
{
    AETABLE_VIDEO_AUTO,    //eAETableID
    110,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -14,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoPLineTable_60Hz,
    sVideoPLineTable_50Hz,
    NULL,
};

static strEvPline sVideo1PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.48  BV=3.40
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {8325,2304,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.77  BV=3.11
    {8325,2432,1048, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.87  BV=3.01
    {8325,2560,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.97  BV=2.91
    {8325,2816,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.07  BV=2.81
    {8325,3072,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.17  BV=2.71
    {8325,3200,1056, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.27  BV=2.61
    {8325,3456,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.36  BV=2.52
    {8325,3712,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.47  BV=2.41
    {8325,3968,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.56  BV=2.32
    {8325,4352,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.67  BV=2.21
    {8325,4608,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.78  BV=2.10
    {8325,4992,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.87  BV=2.01
    {8325,5248,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.96  BV=1.91
    {8325,5632,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.07  BV=1.81
    {8325,6144,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.17  BV=1.71
    {8325,6528,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.27  BV=1.61
    {8325,7040,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.37  BV=1.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo1PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.48  BV=3.40
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {8325,2304,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.77  BV=3.11
    {8325,2432,1048, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.87  BV=3.01
    {8325,2560,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.97  BV=2.91
    {8325,2816,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.07  BV=2.81
    {8325,3072,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.17  BV=2.71
    {8325,3200,1056, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.27  BV=2.61
    {8325,3456,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.36  BV=2.52
    {8325,3712,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.47  BV=2.41
    {8325,3968,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.56  BV=2.32
    {8325,4352,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.67  BV=2.21
    {8325,4608,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.78  BV=2.10
    {8325,4992,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.87  BV=2.01
    {8325,5248,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.96  BV=1.91
    {8325,5632,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.07  BV=1.81
    {8325,6144,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.17  BV=1.71
    {8325,6528,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.27  BV=1.61
    {8325,7040,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.37  BV=1.51
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video1AutoTable =
{
    AETABLE_VIDEO1_AUTO,    //eAETableID
    81,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    15,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo1PLineTable_60Hz,
    sVideo1PLineTable_50Hz,
    NULL,
};

static strEvPline sVideo2PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5550,1152,1024, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=5.75  BV=4.71
    {5550,1152,1096, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=5.85  BV=4.61
    {5550,1280,1064, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=5.96  BV=4.50
    {5550,1408,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.06  BV=4.41
    {5550,1408,1104, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.15  BV=4.31
    {5550,1536,1088, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.26  BV=4.21
    {5550,1664,1080, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.36  BV=4.10
    {5550,1792,1072, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.46  BV=4.01
    {5550,1920,1064, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.55  BV=3.92
    {5550,2048,1080, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.66  BV=3.80
    {5550,2304,1024, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.75  BV=3.71
    {5550,2432,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.86  BV=3.61
    {5550,2560,1056, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.95  BV=3.51
    {5550,2816,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.06  BV=3.41
    {5550,2944,1056, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.15  BV=3.31
    {5550,3200,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.25  BV=3.21
    {5550,3456,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.36  BV=3.10
    {5550,3712,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.45  BV=3.01
    {5550,3968,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.55  BV=2.91
    {5550,4224,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.65  BV=2.81
    {5550,4608,1024, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.75  BV=2.71
    {5550,4864,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.86  BV=2.61
    {5550,5248,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.95  BV=2.51
    {5550,5632,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=8.06  BV=2.41
    {5550,6016,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=8.16  BV=2.30
    {5550,6528,1024, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=8.26  BV=2.21
    {5550,6912,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=8.35  BV=2.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo2PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5550,1152,1024, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=5.75  BV=4.71
    {5550,1152,1096, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=5.85  BV=4.61
    {5550,1280,1064, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=5.96  BV=4.50
    {5550,1408,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.06  BV=4.41
    {5550,1408,1104, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.15  BV=4.31
    {5550,1536,1088, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.26  BV=4.21
    {5550,1664,1080, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.36  BV=4.10
    {5550,1792,1072, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.46  BV=4.01
    {5550,1920,1064, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.55  BV=3.92
    {5550,2048,1080, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.66  BV=3.80
    {5550,2304,1024, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.75  BV=3.71
    {5550,2432,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.86  BV=3.61
    {5550,2560,1056, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=6.95  BV=3.51
    {5550,2816,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.06  BV=3.41
    {5550,2944,1056, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.15  BV=3.31
    {5550,3200,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.25  BV=3.21
    {5550,3456,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.36  BV=3.10
    {5550,3712,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.45  BV=3.01
    {5550,3968,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.55  BV=2.91
    {5550,4224,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.65  BV=2.81
    {5550,4608,1024, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.75  BV=2.71
    {5550,4864,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.86  BV=2.61
    {5550,5248,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=7.95  BV=2.51
    {5550,5632,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=8.06  BV=2.41
    {5550,6016,1040, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=8.16  BV=2.30
    {5550,6528,1024, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=8.26  BV=2.21
    {5550,6912,1032, 0, 0, 0},  //TV = 7.49(150 lines)  AV=2.97  SV=8.35  BV=2.11
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video2AutoTable =
{
    AETABLE_VIDEO2_AUTO,    //eAETableID
    75,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    21,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideo2PLineTable_60Hz,
    sVideo2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom1PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {16650,1664,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.37  BV=2.51
    {16650,1792,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.48  BV=2.40
    {16650,1920,1080, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.57  BV=2.31
    {16650,2176,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.67  BV=2.21
    {16650,2304,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.77  BV=2.11
    {16650,2432,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.87  BV=2.01
    {16650,2560,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.97  BV=1.91
    {16650,2816,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.07  BV=1.81
    {16650,3072,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.17  BV=1.71
    {16650,3200,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.26  BV=1.62
    {16650,3456,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.36  BV=1.52
    {16650,3712,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.47  BV=1.41
    {16650,3968,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.56  BV=1.32
    {16650,4224,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.66  BV=1.22
    {25012,3072,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.19  BV=1.10
    {25012,3328,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.29  BV=1.01
    {25012,3456,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.37  BV=0.92
    {25012,3840,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.49  BV=0.80
    {25012,3968,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.57  BV=0.72
    {33337,3200,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.26  BV=0.62
    {33337,3456,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.37  BV=0.50
    {33337,3712,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.47  BV=0.41
    {33337,3968,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.56  BV=0.32
    {33337,4224,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.66  BV=0.21
    {33337,4608,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.78  BV=0.10
    {33337,4992,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.88  BV=-0.00
    {33337,5376,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.98  BV=-0.10
    {33337,5760,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33337,6144,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33337,6528,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom1PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {9990,2304,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.81  BV=2.81
    {9990,2560,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.91  BV=2.71
    {9990,2688,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.00  BV=2.62
    {9990,2944,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.11  BV=2.51
    {9990,3072,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.20  BV=2.41
    {9990,3328,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.31  BV=2.31
    {9990,3584,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.40  BV=2.21
    {9990,3840,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.50  BV=2.11
    {9990,4096,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.61  BV=2.01
    {9990,4352,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.71  BV=1.91
    {9990,4736,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.81  BV=1.81
    {9990,5120,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.91  BV=1.71
    {9990,5376,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.00  BV=1.62
    {9990,5760,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.10  BV=1.52
    {20017,3072,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.21  BV=1.40
    {20017,3328,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.31  BV=1.31
    {20017,3584,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.40  BV=1.21
    {20017,3840,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.50  BV=1.11
    {20017,4096,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.61  BV=1.01
    {20017,4352,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.69  BV=0.92
    {30007,3200,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.23  BV=0.80
    {30007,3328,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,3584,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.43  BV=0.60
    {30007,3840,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.53  BV=0.50
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.71  BV=0.32
    {30007,4736,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.82  BV=0.21
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {30007,5504,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30007,5888,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,6400,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30007,6784,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.32  BV=-0.29
    {30007,7086,1064, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom1AutoTable =
{
    AETABLE_CUSTOM1_AUTO,    //eAETableID
    100,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom1PLineTable_60Hz,
    sCustom1PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom2PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {16650,1664,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.37  BV=2.51
    {16650,1792,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.48  BV=2.40
    {16650,1920,1080, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.57  BV=2.31
    {16650,2176,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.67  BV=2.21
    {16650,2304,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.77  BV=2.11
    {16650,2432,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.87  BV=2.01
    {16650,2560,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.97  BV=1.91
    {16650,2816,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.07  BV=1.81
    {16650,3072,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.17  BV=1.71
    {16650,3200,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.26  BV=1.62
    {16650,3456,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.36  BV=1.52
    {16650,3712,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.47  BV=1.41
    {16650,3968,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.56  BV=1.32
    {16650,4224,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.66  BV=1.22
    {25012,3072,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.19  BV=1.10
    {25012,3328,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.29  BV=1.01
    {25012,3456,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.37  BV=0.92
    {25012,3840,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.49  BV=0.80
    {25012,3968,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.57  BV=0.72
    {33337,3200,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.26  BV=0.62
    {33337,3456,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.37  BV=0.50
    {33337,3712,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.47  BV=0.41
    {33337,3968,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.56  BV=0.32
    {33337,4224,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.66  BV=0.21
    {33337,4608,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.78  BV=0.10
    {33337,4992,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.88  BV=-0.00
    {33337,5376,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.98  BV=-0.10
    {33337,5760,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33337,6144,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33337,6528,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom2PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {9990,2304,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.81  BV=2.81
    {9990,2560,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.91  BV=2.71
    {9990,2688,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.00  BV=2.62
    {9990,2944,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.11  BV=2.51
    {9990,3072,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.20  BV=2.41
    {9990,3328,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.31  BV=2.31
    {9990,3584,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.40  BV=2.21
    {9990,3840,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.50  BV=2.11
    {9990,4096,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.61  BV=2.01
    {9990,4352,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.71  BV=1.91
    {9990,4736,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.81  BV=1.81
    {9990,5120,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.91  BV=1.71
    {9990,5376,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.00  BV=1.62
    {9990,5760,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.10  BV=1.52
    {20017,3072,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.21  BV=1.40
    {20017,3328,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.31  BV=1.31
    {20017,3584,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.40  BV=1.21
    {20017,3840,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.50  BV=1.11
    {20017,4096,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.61  BV=1.01
    {20017,4352,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.69  BV=0.92
    {30007,3200,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.23  BV=0.80
    {30007,3328,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,3584,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.43  BV=0.60
    {30007,3840,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.53  BV=0.50
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.71  BV=0.32
    {30007,4736,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.82  BV=0.21
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {30007,5504,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30007,5888,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,6400,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30007,6784,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.32  BV=-0.29
    {30007,7086,1064, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom2AutoTable =
{
    AETABLE_CUSTOM2_AUTO,    //eAETableID
    100,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom2PLineTable_60Hz,
    sCustom2PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom3PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {16650,1664,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.37  BV=2.51
    {16650,1792,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.48  BV=2.40
    {16650,1920,1080, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.57  BV=2.31
    {16650,2176,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.67  BV=2.21
    {16650,2304,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.77  BV=2.11
    {16650,2432,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.87  BV=2.01
    {16650,2560,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.97  BV=1.91
    {16650,2816,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.07  BV=1.81
    {16650,3072,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.17  BV=1.71
    {16650,3200,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.26  BV=1.62
    {16650,3456,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.36  BV=1.52
    {16650,3712,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.47  BV=1.41
    {16650,3968,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.56  BV=1.32
    {16650,4224,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.66  BV=1.22
    {25012,3072,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.19  BV=1.10
    {25012,3328,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.29  BV=1.01
    {25012,3456,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.37  BV=0.92
    {25012,3840,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.49  BV=0.80
    {25012,3968,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.57  BV=0.72
    {33337,3200,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.26  BV=0.62
    {33337,3456,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.37  BV=0.50
    {33337,3712,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.47  BV=0.41
    {33337,3968,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.56  BV=0.32
    {33337,4224,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.66  BV=0.21
    {33337,4608,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.78  BV=0.10
    {33337,4992,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.88  BV=-0.00
    {33337,5376,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.98  BV=-0.10
    {33337,5760,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33337,6144,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33337,6528,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom3PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {9990,2304,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.81  BV=2.81
    {9990,2560,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.91  BV=2.71
    {9990,2688,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.00  BV=2.62
    {9990,2944,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.11  BV=2.51
    {9990,3072,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.20  BV=2.41
    {9990,3328,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.31  BV=2.31
    {9990,3584,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.40  BV=2.21
    {9990,3840,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.50  BV=2.11
    {9990,4096,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.61  BV=2.01
    {9990,4352,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.71  BV=1.91
    {9990,4736,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.81  BV=1.81
    {9990,5120,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.91  BV=1.71
    {9990,5376,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.00  BV=1.62
    {9990,5760,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.10  BV=1.52
    {20017,3072,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.21  BV=1.40
    {20017,3328,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.31  BV=1.31
    {20017,3584,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.40  BV=1.21
    {20017,3840,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.50  BV=1.11
    {20017,4096,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.61  BV=1.01
    {20017,4352,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.69  BV=0.92
    {30007,3200,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.23  BV=0.80
    {30007,3328,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,3584,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.43  BV=0.60
    {30007,3840,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.53  BV=0.50
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.71  BV=0.32
    {30007,4736,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.82  BV=0.21
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {30007,5504,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30007,5888,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,6400,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30007,6784,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.32  BV=-0.29
    {30007,7086,1064, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom3AutoTable =
{
    AETABLE_CUSTOM3_AUTO,    //eAETableID
    100,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom3PLineTable_60Hz,
    sCustom3PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom4PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {16650,1664,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.37  BV=2.51
    {16650,1792,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.48  BV=2.40
    {16650,1920,1080, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.57  BV=2.31
    {16650,2176,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.67  BV=2.21
    {16650,2304,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.77  BV=2.11
    {16650,2432,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.87  BV=2.01
    {16650,2560,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.97  BV=1.91
    {16650,2816,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.07  BV=1.81
    {16650,3072,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.17  BV=1.71
    {16650,3200,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.26  BV=1.62
    {16650,3456,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.36  BV=1.52
    {16650,3712,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.47  BV=1.41
    {16650,3968,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.56  BV=1.32
    {16650,4224,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.66  BV=1.22
    {25012,3072,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.19  BV=1.10
    {25012,3328,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.29  BV=1.01
    {25012,3456,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.37  BV=0.92
    {25012,3840,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.49  BV=0.80
    {25012,3968,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.57  BV=0.72
    {33337,3200,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.26  BV=0.62
    {33337,3456,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.37  BV=0.50
    {33337,3712,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.47  BV=0.41
    {33337,3968,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.56  BV=0.32
    {33337,4224,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.66  BV=0.21
    {33337,4608,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.78  BV=0.10
    {33337,4992,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.88  BV=-0.00
    {33337,5376,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.98  BV=-0.10
    {33337,5760,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33337,6144,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33337,6528,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom4PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {9990,2304,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.81  BV=2.81
    {9990,2560,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.91  BV=2.71
    {9990,2688,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.00  BV=2.62
    {9990,2944,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.11  BV=2.51
    {9990,3072,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.20  BV=2.41
    {9990,3328,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.31  BV=2.31
    {9990,3584,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.40  BV=2.21
    {9990,3840,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.50  BV=2.11
    {9990,4096,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.61  BV=2.01
    {9990,4352,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.71  BV=1.91
    {9990,4736,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.81  BV=1.81
    {9990,5120,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.91  BV=1.71
    {9990,5376,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.00  BV=1.62
    {9990,5760,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.10  BV=1.52
    {20017,3072,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.21  BV=1.40
    {20017,3328,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.31  BV=1.31
    {20017,3584,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.40  BV=1.21
    {20017,3840,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.50  BV=1.11
    {20017,4096,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.61  BV=1.01
    {20017,4352,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.69  BV=0.92
    {30007,3200,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.23  BV=0.80
    {30007,3328,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,3584,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.43  BV=0.60
    {30007,3840,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.53  BV=0.50
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.71  BV=0.32
    {30007,4736,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.82  BV=0.21
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {30007,5504,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30007,5888,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,6400,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30007,6784,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.32  BV=-0.29
    {30007,7086,1064, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom4AutoTable =
{
    AETABLE_CUSTOM4_AUTO,    //eAETableID
    100,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom4PLineTable_60Hz,
    sCustom4PLineTable_50Hz,
    NULL,
};

static strEvPline sCustom5PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {16650,1664,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.37  BV=2.51
    {16650,1792,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.48  BV=2.40
    {16650,1920,1080, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.57  BV=2.31
    {16650,2176,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.67  BV=2.21
    {16650,2304,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.77  BV=2.11
    {16650,2432,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.87  BV=2.01
    {16650,2560,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.97  BV=1.91
    {16650,2816,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.07  BV=1.81
    {16650,3072,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.17  BV=1.71
    {16650,3200,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.26  BV=1.62
    {16650,3456,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.36  BV=1.52
    {16650,3712,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.47  BV=1.41
    {16650,3968,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.56  BV=1.32
    {16650,4224,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.66  BV=1.22
    {25012,3072,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.19  BV=1.10
    {25012,3328,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.29  BV=1.01
    {25012,3456,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.37  BV=0.92
    {25012,3840,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.49  BV=0.80
    {25012,3968,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.57  BV=0.72
    {33337,3200,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.26  BV=0.62
    {33337,3456,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.37  BV=0.50
    {33337,3712,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.47  BV=0.41
    {33337,3968,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.56  BV=0.32
    {33337,4224,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.66  BV=0.21
    {33337,4608,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.78  BV=0.10
    {33337,4992,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.88  BV=-0.00
    {33337,5376,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.98  BV=-0.10
    {33337,5760,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33337,6144,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33337,6528,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.28  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom5PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {9990,2304,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.81  BV=2.81
    {9990,2560,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.91  BV=2.71
    {9990,2688,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.00  BV=2.62
    {9990,2944,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.11  BV=2.51
    {9990,3072,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.20  BV=2.41
    {9990,3328,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.31  BV=2.31
    {9990,3584,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.40  BV=2.21
    {9990,3840,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.50  BV=2.11
    {9990,4096,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.61  BV=2.01
    {9990,4352,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.71  BV=1.91
    {9990,4736,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.81  BV=1.81
    {9990,5120,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.91  BV=1.71
    {9990,5376,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.00  BV=1.62
    {9990,5760,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.10  BV=1.52
    {20017,3072,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.21  BV=1.40
    {20017,3328,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.31  BV=1.31
    {20017,3584,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.40  BV=1.21
    {20017,3840,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.50  BV=1.11
    {20017,4096,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.61  BV=1.01
    {20017,4352,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.69  BV=0.92
    {30007,3200,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.23  BV=0.80
    {30007,3328,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,3584,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.43  BV=0.60
    {30007,3840,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.53  BV=0.50
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.71  BV=0.32
    {30007,4736,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.82  BV=0.21
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {30007,5504,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30007,5888,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,6400,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30007,6784,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.32  BV=-0.29
    {30007,7086,1064, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.43  BV=-0.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom5AutoTable =
{
    AETABLE_CUSTOM5_AUTO,    //eAETableID
    100,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCustom5PLineTable_60Hz,
    sCustom5PLineTable_50Hz,
    NULL,
};

static strEvPline sVideoNightPLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {16650,1664,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.37  BV=2.51
    {16650,1792,1088, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.48  BV=2.40
    {16650,1920,1080, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.57  BV=2.31
    {16650,2176,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.67  BV=2.21
    {16650,2304,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.77  BV=2.11
    {16650,2432,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.87  BV=2.01
    {16650,2560,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.97  BV=1.91
    {16650,2816,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.07  BV=1.81
    {16650,3072,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.17  BV=1.71
    {16650,3200,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.26  BV=1.62
    {16650,3456,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.36  BV=1.52
    {16650,3712,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.47  BV=1.41
    {16650,3968,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.56  BV=1.32
    {16650,4224,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.66  BV=1.22
    {25012,3072,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.19  BV=1.10
    {25012,3328,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.29  BV=1.01
    {25012,3456,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.37  BV=0.92
    {25012,3840,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.49  BV=0.80
    {25012,3968,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.57  BV=0.72
    {33189,3200,1056, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.27  BV=0.61
    {33189,3456,1048, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.37  BV=0.51
    {33189,3712,1048, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.48  BV=0.41
    {33189,3968,1048, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.57  BV=0.31
    {33189,4352,1024, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.67  BV=0.21
    {33189,4608,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.77  BV=0.12
    {33189,4992,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.88  BV=0.00
    {33189,5376,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=7.99  BV=-0.10
    {33189,5760,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=8.09  BV=-0.20
    {33189,6144,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=8.18  BV=-0.30
    {33189,6656,1024, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=8.29  BV=-0.40
    {33189,7086,1032, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=8.39  BV=-0.50
    {33189,7086,1104, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=8.48  BV=-0.60
    {33189,7086,1184, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=8.59  BV=-0.70
    {33189,7086,1272, 0, 0, 0},  //TV = 4.91(897 lines)  AV=2.97  SV=8.69  BV=-0.80
    {41662,7086,1080, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=8.45  BV=-0.90
    {41662,7086,1160, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=8.56  BV=-1.00
    {49987,7086,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.40  BV=-1.10
    {49987,7086,1112, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.49  BV=-1.20
    {58312,7040,1032, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=8.38  BV=-1.31
    {58312,7086,1096, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=8.47  BV=-1.40
    {66526,7040,1032, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=8.38  BV=-1.50
    {66526,7086,1104, 0, 0, 0},  //TV = 3.91(1798 lines)  AV=2.97  SV=8.48  BV=-1.60
    {74999,7086,1048, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=8.41  BV=-1.70
    {74999,7086,1120, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=8.51  BV=-1.80
    {83324,7086,1080, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=8.45  BV=-1.90
    {91649,7086,1056, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=8.42  BV=-2.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoNightPLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {9990,2304,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.81  BV=2.81
    {9990,2560,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.91  BV=2.71
    {9990,2688,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.00  BV=2.62
    {9990,2944,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.11  BV=2.51
    {9990,3072,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.20  BV=2.41
    {9990,3328,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.31  BV=2.31
    {9990,3584,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.40  BV=2.21
    {9990,3840,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.50  BV=2.11
    {9990,4096,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.61  BV=2.01
    {9990,4352,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.71  BV=1.91
    {9990,4736,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.81  BV=1.81
    {9990,5120,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.91  BV=1.71
    {9990,5376,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.00  BV=1.62
    {9990,5760,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.10  BV=1.52
    {20017,3072,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.21  BV=1.40
    {20017,3328,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.31  BV=1.31
    {20017,3584,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.40  BV=1.21
    {20017,3840,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.50  BV=1.11
    {20017,4096,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.61  BV=1.01
    {20017,4352,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.69  BV=0.92
    {30007,3200,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.23  BV=0.80
    {30007,3328,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,3584,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.43  BV=0.60
    {30007,3840,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.53  BV=0.50
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.71  BV=0.32
    {30007,4736,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.82  BV=0.21
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {30007,5504,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30007,5888,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,6400,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30007,6784,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.32  BV=-0.29
    {30007,7086,1064, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.43  BV=-0.40
    {30007,7086,1144, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.54  BV=-0.51
    {30007,7086,1224, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.63  BV=-0.60
    {30007,7086,1312, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.73  BV=-0.70
    {39997,7086,1056, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.42  BV=-0.81
    {39997,7086,1128, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.52  BV=-0.90
    {39997,7086,1208, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.61  BV=-1.00
    {49987,7086,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.40  BV=-1.10
    {49987,7086,1112, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.49  BV=-1.20
    {49987,7086,1192, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.59  BV=-1.30
    {60014,7086,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.43  BV=-1.40
    {60014,7086,1144, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.54  BV=-1.51
    {70004,7086,1048, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=8.41  BV=-1.60
    {70004,7086,1120, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=8.51  BV=-1.70
    {79994,7086,1056, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=8.42  BV=-1.81
    {79994,7086,1128, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=8.52  BV=-1.90
    {89984,7086,1072, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=8.44  BV=-2.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoNightTable =
{
    AETABLE_VIDEO_NIGHT,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -20,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sVideoNightPLineTable_60Hz,
    sVideoNightPLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO100PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {25012,1152,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.78  BV=2.51
    {25012,1152,1120, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.88  BV=2.41
    {25012,1280,1080, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.98  BV=2.31
    {25012,1408,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.08  BV=2.21
    {33337,1152,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.77  BV=2.11
    {33337,1152,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.86  BV=2.01
    {33337,1280,1064, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.96  BV=1.92
    {33337,1408,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.07  BV=1.81
    {41662,1152,1088, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.84  BV=1.71
    {41662,1280,1056, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.95  BV=1.60
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {58312,1152,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=5.75  BV=1.32
    {58312,1152,1096, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=5.85  BV=1.22
    {66674,1152,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=5.77  BV=1.11
    {66674,1152,1112, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=5.87  BV=1.00
    {74999,1152,1056, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=5.80  BV=0.91
    {74999,1152,1128, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=5.89  BV=0.81
    {83324,1152,1088, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=5.84  BV=0.71
    {91649,1152,1064, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=5.81  BV=0.61
    {100011,1152,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=5.78  BV=0.52
    {108336,1152,1032, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=5.77  BV=0.41
    {116661,1152,1024, 0, 0, 0},  //TV = 3.10(3153 lines)  AV=2.97  SV=5.75  BV=0.32
    {124986,1152,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=5.75  BV=0.22
    {133311,1152,1032, 0, 0, 0},  //TV = 2.91(3603 lines)  AV=2.97  SV=5.77  BV=0.11
    {141673,1152,1048, 0, 0, 0},  //TV = 2.82(3829 lines)  AV=2.97  SV=5.79  BV=0.00
    {149998,1152,1064, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=5.81  BV=-0.10
    {166648,1152,1024, 0, 0, 0},  //TV = 2.59(4504 lines)  AV=2.97  SV=5.75  BV=-0.20
    {175010,1152,1048, 0, 0, 0},  //TV = 2.51(4730 lines)  AV=2.97  SV=5.79  BV=-0.30
    {191660,1152,1024, 0, 0, 0},  //TV = 2.38(5180 lines)  AV=2.97  SV=5.75  BV=-0.40
    {199985,1152,1048, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=5.79  BV=-0.50
    {216672,1152,1040, 0, 0, 0},  //TV = 2.21(5856 lines)  AV=2.97  SV=5.78  BV=-0.60
    {233322,1152,1032, 0, 0, 0},  //TV = 2.10(6306 lines)  AV=2.97  SV=5.77  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO100PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {20017,1152,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.80  BV=2.81
    {20017,1280,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.91  BV=2.71
    {20017,1280,1096, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.00  BV=2.61
    {20017,1408,1072, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.11  BV=2.50
    {20017,1536,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.20  BV=2.41
    {20017,1664,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.30  BV=2.32
    {30007,1152,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,1280,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,1280,1104, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,1408,1088, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.13  BV=1.90
    {39997,1152,1064, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.81  BV=1.80
    {39997,1280,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.91  BV=1.71
    {39997,1280,1096, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.00  BV=1.61
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {49987,1280,1088, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.99  BV=1.30
    {60014,1152,1072, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,1280,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=5.92  BV=1.11
    {70004,1152,1056, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=5.80  BV=1.01
    {70004,1152,1128, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=5.89  BV=0.91
    {79994,1152,1064, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=5.81  BV=0.80
    {79994,1280,1024, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=5.91  BV=0.71
    {89984,1152,1088, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=5.84  BV=0.60
    {100011,1152,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=5.78  BV=0.52
    {110001,1152,1024, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=5.75  BV=0.40
    {110001,1152,1088, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=5.84  BV=0.31
    {119991,1152,1072, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=5.82  BV=0.21
    {129981,1152,1064, 0, 0, 0},  //TV = 2.94(3513 lines)  AV=2.97  SV=5.81  BV=0.10
    {140008,1152,1064, 0, 0, 0},  //TV = 2.84(3784 lines)  AV=2.97  SV=5.81  BV=-0.00
    {149998,1152,1064, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=5.81  BV=-0.10
    {159988,1152,1072, 0, 0, 0},  //TV = 2.64(4324 lines)  AV=2.97  SV=5.82  BV=-0.21
    {180005,1152,1024, 0, 0, 0},  //TV = 2.47(4865 lines)  AV=2.97  SV=5.75  BV=-0.31
    {189995,1152,1032, 0, 0, 0},  //TV = 2.40(5135 lines)  AV=2.97  SV=5.77  BV=-0.40
    {199985,1152,1048, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=5.79  BV=-0.50
    {220002,1152,1024, 0, 0, 0},  //TV = 2.18(5946 lines)  AV=2.97  SV=5.75  BV=-0.60
    {229992,1152,1048, 0, 0, 0},  //TV = 2.12(6216 lines)  AV=2.97  SV=5.79  BV=-0.70
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO100Table =
{
    AETABLE_CAPTURE_ISO100,    //eAETableID
    103,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -7,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_100, //ISO SPEED
    sCaptureISO100PLineTable_60Hz,
    sCaptureISO100PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO200PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {481,1152,1120, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.88  BV=8.11
    {481,1280,1080, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.98  BV=8.01
    {481,1408,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.08  BV=7.91
    {481,1536,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.19  BV=7.80
    {481,1664,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.29  BV=7.71
    {481,1792,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.39  BV=7.60
    {481,1792,1088, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.48  BV=7.51
    {481,2048,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.58  BV=7.41
    {481,2176,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.67  BV=7.32
    {518,2176,1024, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=6.67  BV=7.21
    {592,2048,1024, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=6.58  BV=7.11
    {629,2048,1032, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=6.60  BV=7.01
    {666,2048,1048, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=6.62  BV=6.90
    {703,2048,1064, 0, 0, 0},  //TV = 10.47(19 lines)  AV=2.97  SV=6.64  BV=6.80
    {777,2048,1032, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=6.60  BV=6.70
    {814,2048,1048, 0, 0, 0},  //TV = 10.26(22 lines)  AV=2.97  SV=6.62  BV=6.62
    {888,2048,1032, 0, 0, 0},  //TV = 10.14(24 lines)  AV=2.97  SV=6.60  BV=6.51
    {962,2048,1024, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=6.58  BV=6.41
    {999,2048,1056, 0, 0, 0},  //TV = 9.97(27 lines)  AV=2.97  SV=6.63  BV=6.31
    {1073,2048,1056, 0, 0, 0},  //TV = 9.86(29 lines)  AV=2.97  SV=6.63  BV=6.21
    {1147,2048,1056, 0, 0, 0},  //TV = 9.77(31 lines)  AV=2.97  SV=6.63  BV=6.11
    {1258,2048,1032, 0, 0, 0},  //TV = 9.63(34 lines)  AV=2.97  SV=6.60  BV=6.01
    {1332,2048,1048, 0, 0, 0},  //TV = 9.55(36 lines)  AV=2.97  SV=6.62  BV=5.90
    {1443,2048,1032, 0, 0, 0},  //TV = 9.44(39 lines)  AV=2.97  SV=6.60  BV=5.81
    {1554,2048,1032, 0, 0, 0},  //TV = 9.33(42 lines)  AV=2.97  SV=6.60  BV=5.70
    {1665,2048,1032, 0, 0, 0},  //TV = 9.23(45 lines)  AV=2.97  SV=6.60  BV=5.60
    {1776,2048,1040, 0, 0, 0},  //TV = 9.14(48 lines)  AV=2.97  SV=6.61  BV=5.50
    {1924,2048,1024, 0, 0, 0},  //TV = 9.02(52 lines)  AV=2.97  SV=6.58  BV=5.41
    {2035,2048,1032, 0, 0, 0},  //TV = 8.94(55 lines)  AV=2.97  SV=6.60  BV=5.32
    {2183,2048,1040, 0, 0, 0},  //TV = 8.84(59 lines)  AV=2.97  SV=6.61  BV=5.20
    {2368,2048,1024, 0, 0, 0},  //TV = 8.72(64 lines)  AV=2.97  SV=6.58  BV=5.11
    {2516,2048,1032, 0, 0, 0},  //TV = 8.63(68 lines)  AV=2.97  SV=6.60  BV=5.01
    {2701,2048,1032, 0, 0, 0},  //TV = 8.53(73 lines)  AV=2.97  SV=6.60  BV=4.91
    {2923,2048,1024, 0, 0, 0},  //TV = 8.42(79 lines)  AV=2.97  SV=6.58  BV=4.80
    {3108,2048,1032, 0, 0, 0},  //TV = 8.33(84 lines)  AV=2.97  SV=6.60  BV=4.70
    {3367,2048,1024, 0, 0, 0},  //TV = 8.21(91 lines)  AV=2.97  SV=6.58  BV=4.60
    {3589,2048,1024, 0, 0, 0},  //TV = 8.12(97 lines)  AV=2.97  SV=6.58  BV=4.51
    {3848,2048,1024, 0, 0, 0},  //TV = 8.02(104 lines)  AV=2.97  SV=6.58  BV=4.41
    {4107,2048,1032, 0, 0, 0},  //TV = 7.93(111 lines)  AV=2.97  SV=6.60  BV=4.30
    {4403,2048,1024, 0, 0, 0},  //TV = 7.83(119 lines)  AV=2.97  SV=6.58  BV=4.21
    {4736,2048,1024, 0, 0, 0},  //TV = 7.72(128 lines)  AV=2.97  SV=6.58  BV=4.11
    {5069,2048,1024, 0, 0, 0},  //TV = 7.62(137 lines)  AV=2.97  SV=6.58  BV=4.01
    {5439,2048,1024, 0, 0, 0},  //TV = 7.52(147 lines)  AV=2.97  SV=6.58  BV=3.91
    {5846,2048,1024, 0, 0, 0},  //TV = 7.42(158 lines)  AV=2.97  SV=6.58  BV=3.80
    {6253,2048,1024, 0, 0, 0},  //TV = 7.32(169 lines)  AV=2.97  SV=6.58  BV=3.71
    {6697,2048,1024, 0, 0, 0},  //TV = 7.22(181 lines)  AV=2.97  SV=6.58  BV=3.61
    {7178,2048,1024, 0, 0, 0},  //TV = 7.12(194 lines)  AV=2.97  SV=6.58  BV=3.51
    {7696,2048,1024, 0, 0, 0},  //TV = 7.02(208 lines)  AV=2.97  SV=6.58  BV=3.41
    {8251,2048,1024, 0, 0, 0},  //TV = 6.92(223 lines)  AV=2.97  SV=6.58  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {8325,2304,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.77  BV=3.11
    {8325,2432,1048, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.87  BV=3.01
    {8325,2688,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.98  BV=2.90
    {8325,2816,1048, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.08  BV=2.80
    {8325,3072,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.17  BV=2.71
    {8325,3200,1056, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.27  BV=2.61
    {8325,3456,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.36  BV=2.52
    {8325,3712,1048, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.48  BV=2.40
    {8325,3968,1048, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.57  BV=2.31
    {16650,2176,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.67  BV=2.21
    {16650,2304,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.77  BV=2.11
    {16650,2432,1048, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.87  BV=2.01
    {16650,2688,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.98  BV=1.90
    {16650,2816,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.07  BV=1.81
    {25012,2048,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.58  BV=1.71
    {25012,2176,1032, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.68  BV=1.61
    {25012,2304,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.79  BV=1.50
    {25012,2432,1064, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.89  BV=1.40
    {25012,2688,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.98  BV=1.31
    {33337,2176,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.67  BV=1.21
    {33337,2304,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.77  BV=1.11
    {33337,2432,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.87  BV=1.01
    {41662,2048,1072, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.65  BV=0.90
    {41662,2176,1080, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.75  BV=0.81
    {49987,2048,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.58  BV=0.71
    {49987,2176,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.68  BV=0.61
    {49987,2304,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.78  BV=0.52
    {58312,2048,1080, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=6.66  BV=0.41
    {58312,2304,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=6.75  BV=0.32
    {66674,2176,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.67  BV=0.21
    {74999,2048,1032, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=6.60  BV=0.11
    {74999,2176,1048, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=6.71  BV=0.00
    {83324,2048,1072, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=6.65  BV=-0.10
    {91649,2048,1056, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=6.63  BV=-0.21
    {100011,2048,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100011,2176,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.68  BV=-0.39
    {108336,2176,1024, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=6.67  BV=-0.50
    {116661,2176,1024, 0, 0, 0},  //TV = 3.10(3153 lines)  AV=2.97  SV=6.67  BV=-0.60
    {124986,2176,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=6.67  BV=-0.70
    {141673,2048,1024, 0, 0, 0},  //TV = 2.82(3829 lines)  AV=2.97  SV=6.58  BV=-0.79
    {149998,2048,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=6.62  BV=-0.91
    {158323,2048,1064, 0, 0, 0},  //TV = 2.66(4279 lines)  AV=2.97  SV=6.64  BV=-1.01
    {175010,2048,1032, 0, 0, 0},  //TV = 2.51(4730 lines)  AV=2.97  SV=6.60  BV=-1.11
    {183335,2048,1048, 0, 0, 0},  //TV = 2.45(4955 lines)  AV=2.97  SV=6.62  BV=-1.20
    {199985,2048,1032, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=6.60  BV=-1.30
    {208310,2048,1056, 0, 0, 0},  //TV = 2.26(5630 lines)  AV=2.97  SV=6.63  BV=-1.40
    {224997,2048,1048, 0, 0, 0},  //TV = 2.15(6081 lines)  AV=2.97  SV=6.62  BV=-1.50
    {241647,2048,1048, 0, 0, 0},  //TV = 2.05(6531 lines)  AV=2.97  SV=6.62  BV=-1.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO200PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {481,1152,1120, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.88  BV=8.11
    {481,1280,1080, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.98  BV=8.01
    {481,1408,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.08  BV=7.91
    {481,1536,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.19  BV=7.80
    {481,1664,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.29  BV=7.71
    {481,1792,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.39  BV=7.60
    {481,1792,1088, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.48  BV=7.51
    {481,2048,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.58  BV=7.41
    {481,2176,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.67  BV=7.32
    {518,2176,1024, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=6.67  BV=7.21
    {592,2048,1024, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=6.58  BV=7.11
    {629,2048,1032, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=6.60  BV=7.01
    {666,2048,1048, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=6.62  BV=6.90
    {703,2048,1064, 0, 0, 0},  //TV = 10.47(19 lines)  AV=2.97  SV=6.64  BV=6.80
    {777,2048,1032, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=6.60  BV=6.70
    {814,2048,1048, 0, 0, 0},  //TV = 10.26(22 lines)  AV=2.97  SV=6.62  BV=6.62
    {888,2048,1032, 0, 0, 0},  //TV = 10.14(24 lines)  AV=2.97  SV=6.60  BV=6.51
    {962,2048,1024, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=6.58  BV=6.41
    {999,2048,1056, 0, 0, 0},  //TV = 9.97(27 lines)  AV=2.97  SV=6.63  BV=6.31
    {1073,2048,1056, 0, 0, 0},  //TV = 9.86(29 lines)  AV=2.97  SV=6.63  BV=6.21
    {1147,2048,1056, 0, 0, 0},  //TV = 9.77(31 lines)  AV=2.97  SV=6.63  BV=6.11
    {1258,2048,1032, 0, 0, 0},  //TV = 9.63(34 lines)  AV=2.97  SV=6.60  BV=6.01
    {1332,2048,1048, 0, 0, 0},  //TV = 9.55(36 lines)  AV=2.97  SV=6.62  BV=5.90
    {1443,2048,1032, 0, 0, 0},  //TV = 9.44(39 lines)  AV=2.97  SV=6.60  BV=5.81
    {1554,2048,1032, 0, 0, 0},  //TV = 9.33(42 lines)  AV=2.97  SV=6.60  BV=5.70
    {1665,2048,1032, 0, 0, 0},  //TV = 9.23(45 lines)  AV=2.97  SV=6.60  BV=5.60
    {1776,2048,1040, 0, 0, 0},  //TV = 9.14(48 lines)  AV=2.97  SV=6.61  BV=5.50
    {1924,2048,1024, 0, 0, 0},  //TV = 9.02(52 lines)  AV=2.97  SV=6.58  BV=5.41
    {2035,2048,1032, 0, 0, 0},  //TV = 8.94(55 lines)  AV=2.97  SV=6.60  BV=5.32
    {2183,2048,1040, 0, 0, 0},  //TV = 8.84(59 lines)  AV=2.97  SV=6.61  BV=5.20
    {2368,2048,1024, 0, 0, 0},  //TV = 8.72(64 lines)  AV=2.97  SV=6.58  BV=5.11
    {2516,2048,1032, 0, 0, 0},  //TV = 8.63(68 lines)  AV=2.97  SV=6.60  BV=5.01
    {2701,2048,1032, 0, 0, 0},  //TV = 8.53(73 lines)  AV=2.97  SV=6.60  BV=4.91
    {2923,2048,1024, 0, 0, 0},  //TV = 8.42(79 lines)  AV=2.97  SV=6.58  BV=4.80
    {3108,2048,1032, 0, 0, 0},  //TV = 8.33(84 lines)  AV=2.97  SV=6.60  BV=4.70
    {3367,2048,1024, 0, 0, 0},  //TV = 8.21(91 lines)  AV=2.97  SV=6.58  BV=4.60
    {3589,2048,1024, 0, 0, 0},  //TV = 8.12(97 lines)  AV=2.97  SV=6.58  BV=4.51
    {3848,2048,1024, 0, 0, 0},  //TV = 8.02(104 lines)  AV=2.97  SV=6.58  BV=4.41
    {4107,2048,1032, 0, 0, 0},  //TV = 7.93(111 lines)  AV=2.97  SV=6.60  BV=4.30
    {4403,2048,1024, 0, 0, 0},  //TV = 7.83(119 lines)  AV=2.97  SV=6.58  BV=4.21
    {4736,2048,1024, 0, 0, 0},  //TV = 7.72(128 lines)  AV=2.97  SV=6.58  BV=4.11
    {5069,2048,1024, 0, 0, 0},  //TV = 7.62(137 lines)  AV=2.97  SV=6.58  BV=4.01
    {5439,2048,1024, 0, 0, 0},  //TV = 7.52(147 lines)  AV=2.97  SV=6.58  BV=3.91
    {5846,2048,1024, 0, 0, 0},  //TV = 7.42(158 lines)  AV=2.97  SV=6.58  BV=3.80
    {6253,2048,1024, 0, 0, 0},  //TV = 7.32(169 lines)  AV=2.97  SV=6.58  BV=3.71
    {6697,2048,1024, 0, 0, 0},  //TV = 7.22(181 lines)  AV=2.97  SV=6.58  BV=3.61
    {7178,2048,1024, 0, 0, 0},  //TV = 7.12(194 lines)  AV=2.97  SV=6.58  BV=3.51
    {7696,2048,1024, 0, 0, 0},  //TV = 7.02(208 lines)  AV=2.97  SV=6.58  BV=3.41
    {8251,2048,1024, 0, 0, 0},  //TV = 6.92(223 lines)  AV=2.97  SV=6.58  BV=3.31
    {8843,2048,1024, 0, 0, 0},  //TV = 6.82(239 lines)  AV=2.97  SV=6.58  BV=3.21
    {9472,2048,1024, 0, 0, 0},  //TV = 6.72(256 lines)  AV=2.97  SV=6.58  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {9990,2304,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.81  BV=2.81
    {9990,2560,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.91  BV=2.71
    {9990,2688,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.00  BV=2.62
    {9990,2944,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.11  BV=2.51
    {9990,3072,1056, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.21  BV=2.40
    {9990,3328,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.31  BV=2.31
    {9990,3584,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.41  BV=2.20
    {9990,3840,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.50  BV=2.11
    {20017,2048,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.61  BV=2.01
    {20017,2176,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.71  BV=1.91
    {20017,2304,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.80  BV=1.81
    {20017,2560,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.91  BV=1.71
    {20017,2688,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.00  BV=1.61
    {20017,2944,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.11  BV=1.50
    {30007,2048,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.62  BV=1.41
    {30007,2176,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,2304,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,2560,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.92  BV=1.11
    {39997,2048,1040, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.61  BV=1.01
    {39997,2176,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.71  BV=0.91
    {39997,2304,1056, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.80  BV=0.82
    {49987,2048,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.58  BV=0.71
    {49987,2176,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.68  BV=0.61
    {49987,2304,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.78  BV=0.52
    {60014,2048,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.62  BV=0.41
    {60014,2176,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.72  BV=0.31
    {70004,2048,1032, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=6.60  BV=0.21
    {70004,2176,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=6.69  BV=0.11
    {79994,2048,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=6.62  BV=-0.00
    {79994,2176,1056, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=6.72  BV=-0.10
    {89984,2048,1064, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=6.64  BV=-0.20
    {100011,2048,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.60  BV=-0.30
    {100011,2176,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=6.68  BV=-0.39
    {110001,2048,1072, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=6.65  BV=-0.50
    {119991,2048,1064, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=6.64  BV=-0.61
    {129981,2048,1048, 0, 0, 0},  //TV = 2.94(3513 lines)  AV=2.97  SV=6.62  BV=-0.70
    {140008,2048,1040, 0, 0, 0},  //TV = 2.84(3784 lines)  AV=2.97  SV=6.61  BV=-0.80
    {149998,2048,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=6.62  BV=-0.91
    {159988,2048,1048, 0, 0, 0},  //TV = 2.64(4324 lines)  AV=2.97  SV=6.62  BV=-1.00
    {170015,2048,1056, 0, 0, 0},  //TV = 2.56(4595 lines)  AV=2.97  SV=6.63  BV=-1.10
    {180005,2048,1064, 0, 0, 0},  //TV = 2.47(4865 lines)  AV=2.97  SV=6.64  BV=-1.20
    {199985,2048,1032, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=6.60  BV=-1.30
    {210012,2048,1048, 0, 0, 0},  //TV = 2.25(5676 lines)  AV=2.97  SV=6.62  BV=-1.40
    {229992,2048,1032, 0, 0, 0},  //TV = 2.12(6216 lines)  AV=2.97  SV=6.60  BV=-1.50
    {239982,2048,1064, 0, 0, 0},  //TV = 2.06(6486 lines)  AV=2.97  SV=6.64  BV=-1.61
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO200Table =
{
    AETABLE_CAPTURE_ISO200,    //eAETableID
    112,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -16,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_200, //ISO SPEED
    sCaptureISO200PLineTable_60Hz,
    sCaptureISO200PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO400PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {481,1152,1120, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.88  BV=8.11
    {481,1280,1080, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.98  BV=8.01
    {481,1408,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.08  BV=7.91
    {481,1536,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.19  BV=7.80
    {481,1664,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.29  BV=7.71
    {481,1792,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.39  BV=7.60
    {481,1792,1088, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.48  BV=7.51
    {481,2048,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.58  BV=7.41
    {481,2176,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.68  BV=7.31
    {481,2304,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.78  BV=7.22
    {481,2432,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.88  BV=7.12
    {481,2688,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.99  BV=7.00
    {481,2816,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.09  BV=6.90
    {481,3072,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.18  BV=6.81
    {481,3328,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.29  BV=6.71
    {481,3456,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.38  BV=6.61
    {481,3712,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.49  BV=6.51
    {481,4096,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.58  BV=6.41
    {481,4352,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.67  BV=6.32
    {518,4352,1024, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=7.67  BV=6.21
    {592,4096,1024, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=7.58  BV=6.11
    {629,4096,1032, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=7.60  BV=6.01
    {666,4096,1048, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=7.62  BV=5.90
    {703,4224,1032, 0, 0, 0},  //TV = 10.47(19 lines)  AV=2.97  SV=7.64  BV=5.80
    {777,4096,1024, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=7.58  BV=5.72
    {814,4096,1048, 0, 0, 0},  //TV = 10.26(22 lines)  AV=2.97  SV=7.62  BV=5.62
    {888,4096,1032, 0, 0, 0},  //TV = 10.14(24 lines)  AV=2.97  SV=7.60  BV=5.51
    {962,4096,1024, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=7.58  BV=5.41
    {999,4224,1024, 0, 0, 0},  //TV = 9.97(27 lines)  AV=2.97  SV=7.63  BV=5.31
    {1073,4224,1024, 0, 0, 0},  //TV = 9.86(29 lines)  AV=2.97  SV=7.63  BV=5.21
    {1147,4224,1024, 0, 0, 0},  //TV = 9.77(31 lines)  AV=2.97  SV=7.63  BV=5.11
    {1258,4096,1032, 0, 0, 0},  //TV = 9.63(34 lines)  AV=2.97  SV=7.60  BV=5.01
    {1332,4096,1048, 0, 0, 0},  //TV = 9.55(36 lines)  AV=2.97  SV=7.62  BV=4.90
    {1443,4096,1032, 0, 0, 0},  //TV = 9.44(39 lines)  AV=2.97  SV=7.60  BV=4.81
    {1554,4096,1032, 0, 0, 0},  //TV = 9.33(42 lines)  AV=2.97  SV=7.60  BV=4.70
    {1665,4096,1032, 0, 0, 0},  //TV = 9.23(45 lines)  AV=2.97  SV=7.60  BV=4.60
    {1776,4096,1032, 0, 0, 0},  //TV = 9.14(48 lines)  AV=2.97  SV=7.60  BV=4.51
    {1924,4096,1024, 0, 0, 0},  //TV = 9.02(52 lines)  AV=2.97  SV=7.58  BV=4.41
    {2035,4096,1032, 0, 0, 0},  //TV = 8.94(55 lines)  AV=2.97  SV=7.60  BV=4.32
    {2183,4096,1040, 0, 0, 0},  //TV = 8.84(59 lines)  AV=2.97  SV=7.61  BV=4.20
    {2368,4096,1024, 0, 0, 0},  //TV = 8.72(64 lines)  AV=2.97  SV=7.58  BV=4.11
    {2516,4096,1032, 0, 0, 0},  //TV = 8.63(68 lines)  AV=2.97  SV=7.60  BV=4.01
    {2701,4096,1024, 0, 0, 0},  //TV = 8.53(73 lines)  AV=2.97  SV=7.58  BV=3.92
    {2923,4096,1024, 0, 0, 0},  //TV = 8.42(79 lines)  AV=2.97  SV=7.58  BV=3.80
    {3108,4096,1032, 0, 0, 0},  //TV = 8.33(84 lines)  AV=2.97  SV=7.60  BV=3.70
    {3330,4096,1024, 0, 0, 0},  //TV = 8.23(90 lines)  AV=2.97  SV=7.58  BV=3.62
    {3552,4096,1032, 0, 0, 0},  //TV = 8.14(96 lines)  AV=2.97  SV=7.60  BV=3.51
    {3848,4096,1024, 0, 0, 0},  //TV = 8.02(104 lines)  AV=2.97  SV=7.58  BV=3.41
    {4107,4096,1024, 0, 0, 0},  //TV = 7.93(111 lines)  AV=2.97  SV=7.58  BV=3.31
    {4403,4096,1024, 0, 0, 0},  //TV = 7.83(119 lines)  AV=2.97  SV=7.58  BV=3.21
    {4736,4096,1024, 0, 0, 0},  //TV = 7.72(128 lines)  AV=2.97  SV=7.58  BV=3.11
    {5069,4096,1024, 0, 0, 0},  //TV = 7.62(137 lines)  AV=2.97  SV=7.58  BV=3.01
    {5402,4096,1024, 0, 0, 0},  //TV = 7.53(146 lines)  AV=2.97  SV=7.58  BV=2.92
    {5846,4096,1024, 0, 0, 0},  //TV = 7.42(158 lines)  AV=2.97  SV=7.58  BV=2.80
    {6253,4096,1024, 0, 0, 0},  //TV = 7.32(169 lines)  AV=2.97  SV=7.58  BV=2.71
    {6697,4096,1024, 0, 0, 0},  //TV = 7.22(181 lines)  AV=2.97  SV=7.58  BV=2.61
    {7178,4096,1024, 0, 0, 0},  //TV = 7.12(194 lines)  AV=2.97  SV=7.58  BV=2.51
    {7696,4096,1024, 0, 0, 0},  //TV = 7.02(208 lines)  AV=2.97  SV=7.58  BV=2.41
    {8251,4096,1024, 0, 0, 0},  //TV = 6.92(223 lines)  AV=2.97  SV=7.58  BV=2.31
    {8325,4352,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.67  BV=2.21
    {8325,4608,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.77  BV=2.11
    {8325,4992,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.87  BV=2.01
    {8325,5248,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=7.96  BV=1.91
    {8325,5760,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.08  BV=1.80
    {8325,6144,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.17  BV=1.71
    {8325,6528,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.27  BV=1.61
    {8325,7040,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.38  BV=1.50
    {8325,7086,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.47  BV=1.41
    {8325,7086,1176, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.58  BV=1.30
    {16650,4352,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.67  BV=1.21
    {16650,4608,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.78  BV=1.10
    {16650,4992,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.87  BV=1.01
    {16650,5248,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=7.96  BV=0.91
    {16650,5632,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.07  BV=0.81
    {25012,4096,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.58  BV=0.71
    {25012,4352,1032, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.68  BV=0.61
    {25012,4608,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.78  BV=0.51
    {25012,4992,1032, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.88  BV=0.41
    {25012,5376,1024, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=7.98  BV=0.31
    {33337,4352,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.67  BV=0.21
    {33337,4608,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.77  BV=0.11
    {33337,4992,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.88  BV=-0.00
    {41662,4224,1040, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.65  BV=-0.10
    {41662,4608,1024, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.75  BV=-0.20
    {49987,4096,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.60  BV=-0.30
    {49987,4352,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.69  BV=-0.40
    {49987,4736,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.79  BV=-0.50
    {58312,4352,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=7.67  BV=-0.60
    {58312,4608,1032, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=7.77  BV=-0.70
    {66674,4352,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.67  BV=-0.79
    {74999,4096,1040, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.61  BV=-0.90
    {74999,4352,1048, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.71  BV=-1.00
    {83324,4224,1040, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=7.65  BV=-1.10
    {91649,4096,1048, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=7.62  BV=-1.20
    {100011,4096,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.60  BV=-1.30
    {100011,4352,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.69  BV=-1.40
    {108336,4352,1024, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=7.67  BV=-1.50
    {116661,4352,1024, 0, 0, 0},  //TV = 3.10(3153 lines)  AV=2.97  SV=7.67  BV=-1.60
    {124986,4352,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.67  BV=-1.70
    {141673,4096,1024, 0, 0, 0},  //TV = 2.82(3829 lines)  AV=2.97  SV=7.58  BV=-1.79
    {149998,4096,1040, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=7.61  BV=-1.90
    {158323,4224,1024, 0, 0, 0},  //TV = 2.66(4279 lines)  AV=2.97  SV=7.63  BV=-2.00
    {175010,4096,1024, 0, 0, 0},  //TV = 2.51(4730 lines)  AV=2.97  SV=7.58  BV=-2.10
    {183335,4096,1048, 0, 0, 0},  //TV = 2.45(4955 lines)  AV=2.97  SV=7.62  BV=-2.20
    {199985,4096,1024, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=7.58  BV=-2.29
    {208310,4224,1024, 0, 0, 0},  //TV = 2.26(5630 lines)  AV=2.97  SV=7.63  BV=-2.40
    {224997,4096,1048, 0, 0, 0},  //TV = 2.15(6081 lines)  AV=2.97  SV=7.62  BV=-2.50
    {241647,4096,1048, 0, 0, 0},  //TV = 2.05(6531 lines)  AV=2.97  SV=7.62  BV=-2.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO400PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {481,1152,1120, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.88  BV=8.11
    {481,1280,1080, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.98  BV=8.01
    {481,1408,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.08  BV=7.91
    {481,1536,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.19  BV=7.80
    {481,1664,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.29  BV=7.71
    {481,1792,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.39  BV=7.60
    {481,1792,1088, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.48  BV=7.51
    {481,2048,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.58  BV=7.41
    {481,2176,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.68  BV=7.31
    {481,2304,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.78  BV=7.22
    {481,2432,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.88  BV=7.12
    {481,2688,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.99  BV=7.00
    {481,2816,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.09  BV=6.90
    {481,3072,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.18  BV=6.81
    {481,3328,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.29  BV=6.71
    {481,3456,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.38  BV=6.61
    {481,3712,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.49  BV=6.51
    {481,4096,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.58  BV=6.41
    {481,4352,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.67  BV=6.32
    {518,4352,1024, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=7.67  BV=6.21
    {592,4096,1024, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=7.58  BV=6.11
    {629,4096,1032, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=7.60  BV=6.01
    {666,4096,1048, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=7.62  BV=5.90
    {703,4224,1032, 0, 0, 0},  //TV = 10.47(19 lines)  AV=2.97  SV=7.64  BV=5.80
    {777,4096,1024, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=7.58  BV=5.72
    {814,4096,1048, 0, 0, 0},  //TV = 10.26(22 lines)  AV=2.97  SV=7.62  BV=5.62
    {888,4096,1032, 0, 0, 0},  //TV = 10.14(24 lines)  AV=2.97  SV=7.60  BV=5.51
    {962,4096,1024, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=7.58  BV=5.41
    {999,4224,1024, 0, 0, 0},  //TV = 9.97(27 lines)  AV=2.97  SV=7.63  BV=5.31
    {1073,4224,1024, 0, 0, 0},  //TV = 9.86(29 lines)  AV=2.97  SV=7.63  BV=5.21
    {1147,4224,1024, 0, 0, 0},  //TV = 9.77(31 lines)  AV=2.97  SV=7.63  BV=5.11
    {1258,4096,1032, 0, 0, 0},  //TV = 9.63(34 lines)  AV=2.97  SV=7.60  BV=5.01
    {1332,4096,1048, 0, 0, 0},  //TV = 9.55(36 lines)  AV=2.97  SV=7.62  BV=4.90
    {1443,4096,1032, 0, 0, 0},  //TV = 9.44(39 lines)  AV=2.97  SV=7.60  BV=4.81
    {1554,4096,1032, 0, 0, 0},  //TV = 9.33(42 lines)  AV=2.97  SV=7.60  BV=4.70
    {1665,4096,1032, 0, 0, 0},  //TV = 9.23(45 lines)  AV=2.97  SV=7.60  BV=4.60
    {1776,4096,1032, 0, 0, 0},  //TV = 9.14(48 lines)  AV=2.97  SV=7.60  BV=4.51
    {1924,4096,1024, 0, 0, 0},  //TV = 9.02(52 lines)  AV=2.97  SV=7.58  BV=4.41
    {2035,4096,1032, 0, 0, 0},  //TV = 8.94(55 lines)  AV=2.97  SV=7.60  BV=4.32
    {2183,4096,1040, 0, 0, 0},  //TV = 8.84(59 lines)  AV=2.97  SV=7.61  BV=4.20
    {2368,4096,1024, 0, 0, 0},  //TV = 8.72(64 lines)  AV=2.97  SV=7.58  BV=4.11
    {2516,4096,1032, 0, 0, 0},  //TV = 8.63(68 lines)  AV=2.97  SV=7.60  BV=4.01
    {2701,4096,1024, 0, 0, 0},  //TV = 8.53(73 lines)  AV=2.97  SV=7.58  BV=3.92
    {2923,4096,1024, 0, 0, 0},  //TV = 8.42(79 lines)  AV=2.97  SV=7.58  BV=3.80
    {3108,4096,1032, 0, 0, 0},  //TV = 8.33(84 lines)  AV=2.97  SV=7.60  BV=3.70
    {3330,4096,1024, 0, 0, 0},  //TV = 8.23(90 lines)  AV=2.97  SV=7.58  BV=3.62
    {3552,4096,1032, 0, 0, 0},  //TV = 8.14(96 lines)  AV=2.97  SV=7.60  BV=3.51
    {3848,4096,1024, 0, 0, 0},  //TV = 8.02(104 lines)  AV=2.97  SV=7.58  BV=3.41
    {4107,4096,1024, 0, 0, 0},  //TV = 7.93(111 lines)  AV=2.97  SV=7.58  BV=3.31
    {4403,4096,1024, 0, 0, 0},  //TV = 7.83(119 lines)  AV=2.97  SV=7.58  BV=3.21
    {4736,4096,1024, 0, 0, 0},  //TV = 7.72(128 lines)  AV=2.97  SV=7.58  BV=3.11
    {5069,4096,1024, 0, 0, 0},  //TV = 7.62(137 lines)  AV=2.97  SV=7.58  BV=3.01
    {5402,4096,1024, 0, 0, 0},  //TV = 7.53(146 lines)  AV=2.97  SV=7.58  BV=2.92
    {5846,4096,1024, 0, 0, 0},  //TV = 7.42(158 lines)  AV=2.97  SV=7.58  BV=2.80
    {6253,4096,1024, 0, 0, 0},  //TV = 7.32(169 lines)  AV=2.97  SV=7.58  BV=2.71
    {6697,4096,1024, 0, 0, 0},  //TV = 7.22(181 lines)  AV=2.97  SV=7.58  BV=2.61
    {7178,4096,1024, 0, 0, 0},  //TV = 7.12(194 lines)  AV=2.97  SV=7.58  BV=2.51
    {7696,4096,1024, 0, 0, 0},  //TV = 7.02(208 lines)  AV=2.97  SV=7.58  BV=2.41
    {8251,4096,1024, 0, 0, 0},  //TV = 6.92(223 lines)  AV=2.97  SV=7.58  BV=2.31
    {8843,4096,1024, 0, 0, 0},  //TV = 6.82(239 lines)  AV=2.97  SV=7.58  BV=2.21
    {9472,4096,1024, 0, 0, 0},  //TV = 6.72(256 lines)  AV=2.97  SV=7.58  BV=2.11
    {9990,4096,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.61  BV=2.01
    {9990,4352,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.71  BV=1.91
    {9990,4736,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.81  BV=1.81
    {9990,5120,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=7.91  BV=1.71
    {9990,5504,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.01  BV=1.60
    {9990,5888,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.11  BV=1.51
    {9990,6272,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.21  BV=1.41
    {9990,6784,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.31  BV=1.30
    {9990,7086,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.41  BV=1.21
    {9990,7086,1120, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.51  BV=1.11
    {20017,4096,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.61  BV=1.01
    {20017,4352,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.71  BV=0.91
    {20017,4736,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.81  BV=0.81
    {20017,5120,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=7.91  BV=0.71
    {20017,5376,1040, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.00  BV=0.61
    {20017,5888,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.11  BV=0.50
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.71  BV=0.32
    {30007,4736,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.82  BV=0.21
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {39997,4096,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.62  BV=-0.00
    {39997,4480,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.71  BV=-0.10
    {39997,4736,1040, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.82  BV=-0.20
    {49987,4096,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.60  BV=-0.30
    {49987,4352,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.69  BV=-0.40
    {49987,4736,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.79  BV=-0.50
    {60014,4224,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.63  BV=-0.60
    {60014,4480,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.73  BV=-0.70
    {70004,4096,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.61  BV=-0.80
    {70004,4352,1048, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.71  BV=-0.90
    {79994,4096,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.62  BV=-1.00
    {79994,4480,1024, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.71  BV=-1.10
    {89984,4224,1032, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=7.64  BV=-1.20
    {100011,4096,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.60  BV=-1.30
    {100011,4352,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.69  BV=-1.40
    {110001,4224,1040, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=7.65  BV=-1.50
    {119991,4224,1024, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.63  BV=-1.60
    {129981,4096,1040, 0, 0, 0},  //TV = 2.94(3513 lines)  AV=2.97  SV=7.61  BV=-1.69
    {140008,4096,1040, 0, 0, 0},  //TV = 2.84(3784 lines)  AV=2.97  SV=7.61  BV=-1.80
    {149998,4096,1040, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=7.61  BV=-1.90
    {159988,4096,1040, 0, 0, 0},  //TV = 2.64(4324 lines)  AV=2.97  SV=7.61  BV=-1.99
    {170015,4224,1024, 0, 0, 0},  //TV = 2.56(4595 lines)  AV=2.97  SV=7.63  BV=-2.10
    {180005,4224,1032, 0, 0, 0},  //TV = 2.47(4865 lines)  AV=2.97  SV=7.64  BV=-2.20
    {199985,4096,1024, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=7.58  BV=-2.29
    {210012,4096,1048, 0, 0, 0},  //TV = 2.25(5676 lines)  AV=2.97  SV=7.62  BV=-2.40
    {229992,4096,1024, 0, 0, 0},  //TV = 2.12(6216 lines)  AV=2.97  SV=7.58  BV=-2.49
    {239982,4224,1024, 0, 0, 0},  //TV = 2.06(6486 lines)  AV=2.97  SV=7.63  BV=-2.60
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO400Table =
{
    AETABLE_CAPTURE_ISO400,    //eAETableID
    122,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -26,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_400, //ISO SPEED
    sCaptureISO400PLineTable_60Hz,
    sCaptureISO400PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO800PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {481,1152,1120, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.88  BV=8.11
    {481,1280,1080, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.98  BV=8.01
    {481,1408,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.08  BV=7.91
    {481,1536,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.19  BV=7.80
    {481,1664,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.29  BV=7.71
    {481,1792,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.39  BV=7.60
    {481,1792,1088, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.48  BV=7.51
    {481,2048,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.58  BV=7.41
    {481,2176,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.68  BV=7.31
    {481,2304,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.78  BV=7.22
    {481,2432,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.88  BV=7.12
    {481,2688,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.99  BV=7.00
    {481,2816,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.09  BV=6.90
    {481,3072,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.18  BV=6.81
    {481,3328,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.29  BV=6.71
    {481,3456,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.38  BV=6.61
    {481,3712,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.49  BV=6.51
    {481,4096,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.58  BV=6.41
    {481,4352,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.67  BV=6.32
    {481,4608,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.79  BV=6.20
    {481,4992,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.88  BV=6.11
    {481,5376,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.98  BV=6.02
    {481,5760,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.08  BV=5.92
    {481,6144,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.18  BV=5.81
    {481,6656,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.29  BV=5.71
    {481,7040,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.38  BV=5.61
    {518,7040,1024, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=8.37  BV=5.52
    {555,7040,1032, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=8.38  BV=5.41
    {592,7040,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=8.39  BV=5.30
    {629,7086,1032, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=8.39  BV=5.22
    {666,7086,1048, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=8.41  BV=5.11
    {703,7086,1064, 0, 0, 0},  //TV = 10.47(19 lines)  AV=2.97  SV=8.43  BV=5.01
    {777,7086,1032, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=8.39  BV=4.91
    {814,7086,1056, 0, 0, 0},  //TV = 10.26(22 lines)  AV=2.97  SV=8.42  BV=4.81
    {888,7086,1040, 0, 0, 0},  //TV = 10.14(24 lines)  AV=2.97  SV=8.40  BV=4.71
    {962,7040,1032, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=8.38  BV=4.61
    {1036,7040,1032, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=8.38  BV=4.51
    {1110,7040,1032, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=8.38  BV=4.41
    {1184,7040,1032, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=8.38  BV=4.32
    {1258,7086,1040, 0, 0, 0},  //TV = 9.63(34 lines)  AV=2.97  SV=8.40  BV=4.21
    {1332,7086,1048, 0, 0, 0},  //TV = 9.55(36 lines)  AV=2.97  SV=8.41  BV=4.11
    {1443,7086,1040, 0, 0, 0},  //TV = 9.44(39 lines)  AV=2.97  SV=8.40  BV=4.01
    {1554,7040,1040, 0, 0, 0},  //TV = 9.33(42 lines)  AV=2.97  SV=8.39  BV=3.91
    {1665,7086,1032, 0, 0, 0},  //TV = 9.23(45 lines)  AV=2.97  SV=8.39  BV=3.81
    {1776,7086,1040, 0, 0, 0},  //TV = 9.14(48 lines)  AV=2.97  SV=8.40  BV=3.71
    {1924,7040,1040, 0, 0, 0},  //TV = 9.02(52 lines)  AV=2.97  SV=8.39  BV=3.60
    {2072,7040,1032, 0, 0, 0},  //TV = 8.91(56 lines)  AV=2.97  SV=8.38  BV=3.51
    {2183,7086,1040, 0, 0, 0},  //TV = 8.84(59 lines)  AV=2.97  SV=8.40  BV=3.41
    {2368,7040,1040, 0, 0, 0},  //TV = 8.72(64 lines)  AV=2.97  SV=8.39  BV=3.30
    {2553,7040,1032, 0, 0, 0},  //TV = 8.61(69 lines)  AV=2.97  SV=8.38  BV=3.21
    {2738,7040,1032, 0, 0, 0},  //TV = 8.51(74 lines)  AV=2.97  SV=8.38  BV=3.11
    {2923,7040,1032, 0, 0, 0},  //TV = 8.42(79 lines)  AV=2.97  SV=8.38  BV=3.01
    {3145,7040,1032, 0, 0, 0},  //TV = 8.31(85 lines)  AV=2.97  SV=8.38  BV=2.91
    {3367,7040,1032, 0, 0, 0},  //TV = 8.21(91 lines)  AV=2.97  SV=8.38  BV=2.81
    {3589,7040,1032, 0, 0, 0},  //TV = 8.12(97 lines)  AV=2.97  SV=8.38  BV=2.72
    {3885,7040,1032, 0, 0, 0},  //TV = 8.01(105 lines)  AV=2.97  SV=8.38  BV=2.60
    {4144,7040,1032, 0, 0, 0},  //TV = 7.91(112 lines)  AV=2.97  SV=8.38  BV=2.51
    {4440,7040,1032, 0, 0, 0},  //TV = 7.82(120 lines)  AV=2.97  SV=8.38  BV=2.41
    {4736,7040,1032, 0, 0, 0},  //TV = 7.72(128 lines)  AV=2.97  SV=8.38  BV=2.32
    {5106,7040,1024, 0, 0, 0},  //TV = 7.61(138 lines)  AV=2.97  SV=8.37  BV=2.22
    {5439,7040,1032, 0, 0, 0},  //TV = 7.52(147 lines)  AV=2.97  SV=8.38  BV=2.12
    {5846,7040,1032, 0, 0, 0},  //TV = 7.42(158 lines)  AV=2.97  SV=8.38  BV=2.01
    {6290,7040,1032, 0, 0, 0},  //TV = 7.31(170 lines)  AV=2.97  SV=8.38  BV=1.91
    {6734,7040,1032, 0, 0, 0},  //TV = 7.21(182 lines)  AV=2.97  SV=8.38  BV=1.81
    {7215,7040,1032, 0, 0, 0},  //TV = 7.11(195 lines)  AV=2.97  SV=8.38  BV=1.71
    {7733,7040,1032, 0, 0, 0},  //TV = 7.01(209 lines)  AV=2.97  SV=8.38  BV=1.61
    {8288,7040,1032, 0, 0, 0},  //TV = 6.91(224 lines)  AV=2.97  SV=8.38  BV=1.51
    {8325,7086,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.46  BV=1.42
    {8325,7086,1168, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.57  BV=1.31
    {8325,7086,1256, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.67  BV=1.21
    {8325,7086,1344, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.77  BV=1.11
    {8325,7086,1440, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.87  BV=1.01
    {8325,7086,1544, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.97  BV=0.91
    {8325,7086,1656, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=9.07  BV=0.81
    {8325,7086,1784, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=9.18  BV=0.70
    {8325,7086,1912, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=9.28  BV=0.60
    {16650,7040,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.38  BV=0.50
    {16650,7086,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.47  BV=0.41
    {16650,7086,1176, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.58  BV=0.30
    {16650,7086,1256, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.67  BV=0.21
    {16650,7086,1344, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.77  BV=0.11
    {16650,7086,1456, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.88  BV=-0.00
    {25012,7086,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=8.40  BV=-0.11
    {25012,7086,1112, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=8.49  BV=-0.20
    {25012,7086,1192, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=8.59  BV=-0.30
    {25012,7086,1272, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=8.69  BV=-0.40
    {33337,7040,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.38  BV=-0.50
    {33337,7086,1096, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.47  BV=-0.60
    {33337,7086,1176, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.58  BV=-0.70
    {33337,7086,1264, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.68  BV=-0.80
    {41662,7086,1080, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=8.45  BV=-0.90
    {41662,7086,1160, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=8.56  BV=-1.00
    {49987,7086,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.39  BV=-1.09
    {49987,7086,1112, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.49  BV=-1.20
    {49987,7086,1192, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.59  BV=-1.30
    {58312,7086,1096, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=8.47  BV=-1.40
    {66674,7040,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=8.38  BV=-1.50
    {66674,7086,1096, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=8.47  BV=-1.60
    {74999,7086,1048, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=8.41  BV=-1.70
    {74999,7086,1120, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=8.51  BV=-1.80
    {83324,7086,1080, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=8.45  BV=-1.90
    {91649,7086,1056, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=8.42  BV=-2.00
    {100011,7086,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.39  BV=-2.09
    {108336,7040,1032, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=8.38  BV=-2.20
    {108336,7086,1096, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=8.47  BV=-2.30
    {116661,7086,1088, 0, 0, 0},  //TV = 3.10(3153 lines)  AV=2.97  SV=8.46  BV=-2.39
    {133311,7040,1032, 0, 0, 0},  //TV = 2.91(3603 lines)  AV=2.97  SV=8.38  BV=-2.50
    {141673,7086,1032, 0, 0, 0},  //TV = 2.82(3829 lines)  AV=2.97  SV=8.39  BV=-2.60
    {149998,7086,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=8.41  BV=-2.70
    {158323,7086,1064, 0, 0, 0},  //TV = 2.66(4279 lines)  AV=2.97  SV=8.43  BV=-2.80
    {175010,7040,1040, 0, 0, 0},  //TV = 2.51(4730 lines)  AV=2.97  SV=8.39  BV=-2.90
    {183335,7086,1056, 0, 0, 0},  //TV = 2.45(4955 lines)  AV=2.97  SV=8.42  BV=-3.00
    {199985,7086,1032, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=8.39  BV=-3.09
    {216672,7040,1032, 0, 0, 0},  //TV = 2.21(5856 lines)  AV=2.97  SV=8.38  BV=-3.20
    {224997,7086,1056, 0, 0, 0},  //TV = 2.15(6081 lines)  AV=2.97  SV=8.42  BV=-3.30
    {241647,7086,1056, 0, 0, 0},  //TV = 2.05(6531 lines)  AV=2.97  SV=8.42  BV=-3.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO800PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {481,1152,1120, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.88  BV=8.11
    {481,1280,1080, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.98  BV=8.01
    {481,1408,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.08  BV=7.91
    {481,1536,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.19  BV=7.80
    {481,1664,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.29  BV=7.71
    {481,1792,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.39  BV=7.60
    {481,1792,1088, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.48  BV=7.51
    {481,2048,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.58  BV=7.41
    {481,2176,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.68  BV=7.31
    {481,2304,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.78  BV=7.22
    {481,2432,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.88  BV=7.12
    {481,2688,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.99  BV=7.00
    {481,2816,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.09  BV=6.90
    {481,3072,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.18  BV=6.81
    {481,3328,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.29  BV=6.71
    {481,3456,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.38  BV=6.61
    {481,3712,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.49  BV=6.51
    {481,4096,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.58  BV=6.41
    {481,4352,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.67  BV=6.32
    {481,4608,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.79  BV=6.20
    {481,4992,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.88  BV=6.11
    {481,5376,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.98  BV=6.02
    {481,5760,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.08  BV=5.92
    {481,6144,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.18  BV=5.81
    {481,6656,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.29  BV=5.71
    {481,7040,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.38  BV=5.61
    {518,7040,1024, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=8.37  BV=5.52
    {555,7040,1032, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=8.38  BV=5.41
    {592,7040,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=8.39  BV=5.30
    {629,7086,1032, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=8.39  BV=5.22
    {666,7086,1048, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=8.41  BV=5.11
    {703,7086,1064, 0, 0, 0},  //TV = 10.47(19 lines)  AV=2.97  SV=8.43  BV=5.01
    {777,7086,1032, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=8.39  BV=4.91
    {814,7086,1056, 0, 0, 0},  //TV = 10.26(22 lines)  AV=2.97  SV=8.42  BV=4.81
    {888,7086,1040, 0, 0, 0},  //TV = 10.14(24 lines)  AV=2.97  SV=8.40  BV=4.71
    {962,7040,1032, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=8.38  BV=4.61
    {1036,7040,1032, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=8.38  BV=4.51
    {1110,7040,1032, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=8.38  BV=4.41
    {1184,7040,1032, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=8.38  BV=4.32
    {1258,7086,1040, 0, 0, 0},  //TV = 9.63(34 lines)  AV=2.97  SV=8.40  BV=4.21
    {1332,7086,1048, 0, 0, 0},  //TV = 9.55(36 lines)  AV=2.97  SV=8.41  BV=4.11
    {1443,7086,1040, 0, 0, 0},  //TV = 9.44(39 lines)  AV=2.97  SV=8.40  BV=4.01
    {1554,7040,1040, 0, 0, 0},  //TV = 9.33(42 lines)  AV=2.97  SV=8.39  BV=3.91
    {1665,7086,1032, 0, 0, 0},  //TV = 9.23(45 lines)  AV=2.97  SV=8.39  BV=3.81
    {1776,7086,1040, 0, 0, 0},  //TV = 9.14(48 lines)  AV=2.97  SV=8.40  BV=3.71
    {1924,7040,1040, 0, 0, 0},  //TV = 9.02(52 lines)  AV=2.97  SV=8.39  BV=3.60
    {2072,7040,1032, 0, 0, 0},  //TV = 8.91(56 lines)  AV=2.97  SV=8.38  BV=3.51
    {2183,7086,1040, 0, 0, 0},  //TV = 8.84(59 lines)  AV=2.97  SV=8.40  BV=3.41
    {2368,7040,1040, 0, 0, 0},  //TV = 8.72(64 lines)  AV=2.97  SV=8.39  BV=3.30
    {2553,7040,1032, 0, 0, 0},  //TV = 8.61(69 lines)  AV=2.97  SV=8.38  BV=3.21
    {2738,7040,1032, 0, 0, 0},  //TV = 8.51(74 lines)  AV=2.97  SV=8.38  BV=3.11
    {2923,7040,1032, 0, 0, 0},  //TV = 8.42(79 lines)  AV=2.97  SV=8.38  BV=3.01
    {3145,7040,1032, 0, 0, 0},  //TV = 8.31(85 lines)  AV=2.97  SV=8.38  BV=2.91
    {3367,7040,1032, 0, 0, 0},  //TV = 8.21(91 lines)  AV=2.97  SV=8.38  BV=2.81
    {3589,7040,1032, 0, 0, 0},  //TV = 8.12(97 lines)  AV=2.97  SV=8.38  BV=2.72
    {3885,7040,1032, 0, 0, 0},  //TV = 8.01(105 lines)  AV=2.97  SV=8.38  BV=2.60
    {4144,7040,1032, 0, 0, 0},  //TV = 7.91(112 lines)  AV=2.97  SV=8.38  BV=2.51
    {4440,7040,1032, 0, 0, 0},  //TV = 7.82(120 lines)  AV=2.97  SV=8.38  BV=2.41
    {4736,7040,1032, 0, 0, 0},  //TV = 7.72(128 lines)  AV=2.97  SV=8.38  BV=2.32
    {5106,7040,1024, 0, 0, 0},  //TV = 7.61(138 lines)  AV=2.97  SV=8.37  BV=2.22
    {5439,7040,1032, 0, 0, 0},  //TV = 7.52(147 lines)  AV=2.97  SV=8.38  BV=2.12
    {5846,7040,1032, 0, 0, 0},  //TV = 7.42(158 lines)  AV=2.97  SV=8.38  BV=2.01
    {6290,7040,1032, 0, 0, 0},  //TV = 7.31(170 lines)  AV=2.97  SV=8.38  BV=1.91
    {6734,7040,1032, 0, 0, 0},  //TV = 7.21(182 lines)  AV=2.97  SV=8.38  BV=1.81
    {7215,7040,1032, 0, 0, 0},  //TV = 7.11(195 lines)  AV=2.97  SV=8.38  BV=1.71
    {7733,7040,1032, 0, 0, 0},  //TV = 7.01(209 lines)  AV=2.97  SV=8.38  BV=1.61
    {8288,7040,1032, 0, 0, 0},  //TV = 6.91(224 lines)  AV=2.97  SV=8.38  BV=1.51
    {8880,7040,1032, 0, 0, 0},  //TV = 6.82(240 lines)  AV=2.97  SV=8.38  BV=1.41
    {9509,7040,1032, 0, 0, 0},  //TV = 6.72(257 lines)  AV=2.97  SV=8.38  BV=1.31
    {9990,7086,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.40  BV=1.22
    {9990,7086,1120, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.51  BV=1.11
    {9990,7086,1200, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.60  BV=1.01
    {9990,7086,1280, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.70  BV=0.92
    {9990,7086,1376, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.80  BV=0.81
    {9990,7086,1488, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.91  BV=0.70
    {9990,7086,1592, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=9.01  BV=0.60
    {9990,7086,1704, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=9.11  BV=0.51
    {9990,7086,1824, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=9.21  BV=0.41
    {9990,7086,1960, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=9.31  BV=0.30
    {20017,7086,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.41  BV=0.20
    {20017,7086,1120, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.51  BV=0.11
    {20017,7086,1208, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.61  BV=-0.00
    {20017,7086,1296, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.72  BV=-0.10
    {20017,7086,1392, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.82  BV=-0.21
    {20017,7086,1488, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.91  BV=-0.30
    {30007,7086,1064, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.43  BV=-0.40
    {30007,7086,1136, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.53  BV=-0.50
    {30007,7086,1224, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.63  BV=-0.60
    {30007,7086,1312, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.73  BV=-0.70
    {39997,7086,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.41  BV=-0.79
    {39997,7086,1128, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.52  BV=-0.90
    {39997,7086,1208, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.61  BV=-1.00
    {49987,7086,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.39  BV=-1.09
    {49987,7086,1112, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.49  BV=-1.20
    {49987,7086,1192, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.59  BV=-1.30
    {60014,7086,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.43  BV=-1.40
    {60014,7086,1136, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.53  BV=-1.50
    {70004,7086,1048, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=8.41  BV=-1.60
    {70004,7086,1120, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=8.51  BV=-1.70
    {79994,7086,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=8.41  BV=-1.79
    {79994,7086,1128, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=8.52  BV=-1.90
    {89984,7086,1072, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=8.44  BV=-2.00
    {100011,7086,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.39  BV=-2.09
    {100011,7086,1112, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.49  BV=-2.20
    {110001,7086,1080, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=8.45  BV=-2.30
    {119991,7086,1064, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.43  BV=-2.40
    {129981,7086,1048, 0, 0, 0},  //TV = 2.94(3513 lines)  AV=2.97  SV=8.41  BV=-2.49
    {140008,7086,1048, 0, 0, 0},  //TV = 2.84(3784 lines)  AV=2.97  SV=8.41  BV=-2.60
    {149998,7086,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=8.41  BV=-2.70
    {159988,7086,1048, 0, 0, 0},  //TV = 2.64(4324 lines)  AV=2.97  SV=8.41  BV=-2.79
    {170015,7086,1056, 0, 0, 0},  //TV = 2.56(4595 lines)  AV=2.97  SV=8.42  BV=-2.89
    {180005,7086,1072, 0, 0, 0},  //TV = 2.47(4865 lines)  AV=2.97  SV=8.44  BV=-3.00
    {199985,7086,1032, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=8.39  BV=-3.09
    {210012,7086,1056, 0, 0, 0},  //TV = 2.25(5676 lines)  AV=2.97  SV=8.42  BV=-3.20
    {229992,7086,1032, 0, 0, 0},  //TV = 2.12(6216 lines)  AV=2.97  SV=8.39  BV=-3.30
    {239982,7086,1064, 0, 0, 0},  //TV = 2.06(6486 lines)  AV=2.97  SV=8.43  BV=-3.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO800Table =
{
    AETABLE_CAPTURE_ISO800,    //eAETableID
    130,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -34,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_800, //ISO SPEED
    sCaptureISO800PLineTable_60Hz,
    sCaptureISO800PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureISO1600PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {481,1152,1120, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.88  BV=8.11
    {481,1280,1080, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.98  BV=8.01
    {481,1408,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.08  BV=7.91
    {481,1536,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.19  BV=7.80
    {481,1664,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.29  BV=7.71
    {481,1792,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.39  BV=7.60
    {481,1792,1088, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.48  BV=7.51
    {481,2048,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.58  BV=7.41
    {481,2176,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.68  BV=7.31
    {481,2304,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.78  BV=7.22
    {481,2432,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.88  BV=7.12
    {481,2688,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.99  BV=7.00
    {481,2816,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.09  BV=6.90
    {481,3072,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.18  BV=6.81
    {481,3328,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.29  BV=6.71
    {481,3456,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.38  BV=6.61
    {481,3712,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.49  BV=6.51
    {481,4096,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.58  BV=6.41
    {481,4352,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.67  BV=6.32
    {481,4608,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.79  BV=6.20
    {481,4992,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.88  BV=6.11
    {481,5376,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.98  BV=6.02
    {481,5760,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.08  BV=5.92
    {481,6144,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.18  BV=5.81
    {481,6656,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.29  BV=5.71
    {481,7040,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.38  BV=5.61
    {518,7040,1024, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=8.37  BV=5.52
    {555,7040,1032, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=8.38  BV=5.41
    {592,7040,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=8.39  BV=5.30
    {629,7086,1032, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=8.39  BV=5.22
    {666,7086,1048, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=8.41  BV=5.11
    {703,7086,1064, 0, 0, 0},  //TV = 10.47(19 lines)  AV=2.97  SV=8.43  BV=5.01
    {777,7086,1032, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=8.39  BV=4.91
    {814,7086,1056, 0, 0, 0},  //TV = 10.26(22 lines)  AV=2.97  SV=8.42  BV=4.81
    {888,7086,1040, 0, 0, 0},  //TV = 10.14(24 lines)  AV=2.97  SV=8.40  BV=4.71
    {962,7040,1032, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=8.38  BV=4.61
    {1036,7040,1032, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=8.38  BV=4.51
    {1110,7040,1032, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=8.38  BV=4.41
    {1184,7040,1032, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=8.38  BV=4.32
    {1258,7086,1040, 0, 0, 0},  //TV = 9.63(34 lines)  AV=2.97  SV=8.40  BV=4.21
    {1332,7086,1048, 0, 0, 0},  //TV = 9.55(36 lines)  AV=2.97  SV=8.41  BV=4.11
    {1443,7086,1040, 0, 0, 0},  //TV = 9.44(39 lines)  AV=2.97  SV=8.40  BV=4.01
    {1554,7040,1040, 0, 0, 0},  //TV = 9.33(42 lines)  AV=2.97  SV=8.39  BV=3.91
    {1665,7086,1032, 0, 0, 0},  //TV = 9.23(45 lines)  AV=2.97  SV=8.39  BV=3.81
    {1776,7086,1040, 0, 0, 0},  //TV = 9.14(48 lines)  AV=2.97  SV=8.40  BV=3.71
    {1924,7040,1040, 0, 0, 0},  //TV = 9.02(52 lines)  AV=2.97  SV=8.39  BV=3.60
    {2072,7040,1032, 0, 0, 0},  //TV = 8.91(56 lines)  AV=2.97  SV=8.38  BV=3.51
    {2183,7086,1040, 0, 0, 0},  //TV = 8.84(59 lines)  AV=2.97  SV=8.40  BV=3.41
    {2368,7040,1040, 0, 0, 0},  //TV = 8.72(64 lines)  AV=2.97  SV=8.39  BV=3.30
    {2553,7040,1032, 0, 0, 0},  //TV = 8.61(69 lines)  AV=2.97  SV=8.38  BV=3.21
    {2738,7040,1032, 0, 0, 0},  //TV = 8.51(74 lines)  AV=2.97  SV=8.38  BV=3.11
    {2923,7040,1032, 0, 0, 0},  //TV = 8.42(79 lines)  AV=2.97  SV=8.38  BV=3.01
    {3145,7040,1032, 0, 0, 0},  //TV = 8.31(85 lines)  AV=2.97  SV=8.38  BV=2.91
    {3367,7040,1032, 0, 0, 0},  //TV = 8.21(91 lines)  AV=2.97  SV=8.38  BV=2.81
    {3589,7040,1032, 0, 0, 0},  //TV = 8.12(97 lines)  AV=2.97  SV=8.38  BV=2.72
    {3885,7040,1032, 0, 0, 0},  //TV = 8.01(105 lines)  AV=2.97  SV=8.38  BV=2.60
    {4144,7040,1032, 0, 0, 0},  //TV = 7.91(112 lines)  AV=2.97  SV=8.38  BV=2.51
    {4440,7040,1032, 0, 0, 0},  //TV = 7.82(120 lines)  AV=2.97  SV=8.38  BV=2.41
    {4736,7040,1032, 0, 0, 0},  //TV = 7.72(128 lines)  AV=2.97  SV=8.38  BV=2.32
    {5106,7040,1024, 0, 0, 0},  //TV = 7.61(138 lines)  AV=2.97  SV=8.37  BV=2.22
    {5439,7040,1032, 0, 0, 0},  //TV = 7.52(147 lines)  AV=2.97  SV=8.38  BV=2.12
    {5846,7040,1032, 0, 0, 0},  //TV = 7.42(158 lines)  AV=2.97  SV=8.38  BV=2.01
    {6290,7040,1032, 0, 0, 0},  //TV = 7.31(170 lines)  AV=2.97  SV=8.38  BV=1.91
    {6734,7040,1032, 0, 0, 0},  //TV = 7.21(182 lines)  AV=2.97  SV=8.38  BV=1.81
    {7215,7040,1032, 0, 0, 0},  //TV = 7.11(195 lines)  AV=2.97  SV=8.38  BV=1.71
    {7733,7040,1032, 0, 0, 0},  //TV = 7.01(209 lines)  AV=2.97  SV=8.38  BV=1.61
    {8288,7040,1032, 0, 0, 0},  //TV = 6.91(224 lines)  AV=2.97  SV=8.38  BV=1.51
    {8325,7086,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.46  BV=1.42
    {8325,7086,1168, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.57  BV=1.31
    {8325,7086,1256, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.67  BV=1.21
    {8325,7086,1344, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.77  BV=1.11
    {8325,7086,1440, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.87  BV=1.01
    {8325,7086,1544, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=8.97  BV=0.91
    {8325,7086,1656, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=9.07  BV=0.81
    {8325,7086,1784, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=9.18  BV=0.70
    {8325,7086,1912, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=9.28  BV=0.60
    {16650,7040,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.38  BV=0.50
    {16650,7086,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.47  BV=0.41
    {16650,7086,1176, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.58  BV=0.30
    {16650,7086,1256, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.67  BV=0.21
    {16650,7086,1344, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.77  BV=0.11
    {16650,7086,1456, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=8.88  BV=-0.00
    {25012,7086,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=8.40  BV=-0.11
    {25012,7086,1112, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=8.49  BV=-0.20
    {25012,7086,1192, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=8.59  BV=-0.30
    {25012,7086,1272, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=8.69  BV=-0.40
    {33337,7040,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.38  BV=-0.50
    {33337,7086,1096, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.47  BV=-0.60
    {33337,7086,1176, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.58  BV=-0.70
    {33337,7086,1264, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.68  BV=-0.80
    {41662,7086,1080, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=8.45  BV=-0.90
    {41662,7086,1160, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=8.56  BV=-1.00
    {49987,7086,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.39  BV=-1.09
    {49987,7086,1112, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.49  BV=-1.20
    {49987,7086,1192, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.59  BV=-1.30
    {58312,7086,1096, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=8.47  BV=-1.40
    {66674,7040,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=8.38  BV=-1.50
    {66674,7086,1096, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=8.47  BV=-1.60
    {74999,7086,1048, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=8.41  BV=-1.70
    {74999,7086,1120, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=8.51  BV=-1.80
    {83324,7086,1080, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=8.45  BV=-1.90
    {91649,7086,1056, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=8.42  BV=-2.00
    {100011,7086,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.39  BV=-2.09
    {108336,7040,1032, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=8.38  BV=-2.20
    {108336,7086,1096, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=8.47  BV=-2.30
    {116661,7086,1088, 0, 0, 0},  //TV = 3.10(3153 lines)  AV=2.97  SV=8.46  BV=-2.39
    {133311,7040,1032, 0, 0, 0},  //TV = 2.91(3603 lines)  AV=2.97  SV=8.38  BV=-2.50
    {141673,7086,1032, 0, 0, 0},  //TV = 2.82(3829 lines)  AV=2.97  SV=8.39  BV=-2.60
    {149998,7086,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=8.41  BV=-2.70
    {158323,7086,1064, 0, 0, 0},  //TV = 2.66(4279 lines)  AV=2.97  SV=8.43  BV=-2.80
    {175010,7040,1040, 0, 0, 0},  //TV = 2.51(4730 lines)  AV=2.97  SV=8.39  BV=-2.90
    {183335,7086,1056, 0, 0, 0},  //TV = 2.45(4955 lines)  AV=2.97  SV=8.42  BV=-3.00
    {199985,7086,1032, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=8.39  BV=-3.09
    {216672,7040,1032, 0, 0, 0},  //TV = 2.21(5856 lines)  AV=2.97  SV=8.38  BV=-3.20
    {224997,7086,1056, 0, 0, 0},  //TV = 2.15(6081 lines)  AV=2.97  SV=8.42  BV=-3.30
    {241647,7086,1056, 0, 0, 0},  //TV = 2.05(6531 lines)  AV=2.97  SV=8.42  BV=-3.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO1600PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {481,1152,1120, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.88  BV=8.11
    {481,1280,1080, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.98  BV=8.01
    {481,1408,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.08  BV=7.91
    {481,1536,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.19  BV=7.80
    {481,1664,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.29  BV=7.71
    {481,1792,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.39  BV=7.60
    {481,1792,1088, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.48  BV=7.51
    {481,2048,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.58  BV=7.41
    {481,2176,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.68  BV=7.31
    {481,2304,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.78  BV=7.22
    {481,2432,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.88  BV=7.12
    {481,2688,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=6.99  BV=7.00
    {481,2816,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.09  BV=6.90
    {481,3072,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.18  BV=6.81
    {481,3328,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.29  BV=6.71
    {481,3456,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.38  BV=6.61
    {481,3712,1056, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.49  BV=6.51
    {481,4096,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.58  BV=6.41
    {481,4352,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.67  BV=6.32
    {481,4608,1048, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.79  BV=6.20
    {481,4992,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.88  BV=6.11
    {481,5376,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=7.98  BV=6.02
    {481,5760,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.08  BV=5.92
    {481,6144,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.18  BV=5.81
    {481,6656,1024, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.29  BV=5.71
    {481,7040,1032, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=8.38  BV=5.61
    {518,7040,1024, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=8.37  BV=5.52
    {555,7040,1032, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=8.38  BV=5.41
    {592,7040,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=8.39  BV=5.30
    {629,7086,1032, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=8.39  BV=5.22
    {666,7086,1048, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=8.41  BV=5.11
    {703,7086,1064, 0, 0, 0},  //TV = 10.47(19 lines)  AV=2.97  SV=8.43  BV=5.01
    {777,7086,1032, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=8.39  BV=4.91
    {814,7086,1056, 0, 0, 0},  //TV = 10.26(22 lines)  AV=2.97  SV=8.42  BV=4.81
    {888,7086,1040, 0, 0, 0},  //TV = 10.14(24 lines)  AV=2.97  SV=8.40  BV=4.71
    {962,7040,1032, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=8.38  BV=4.61
    {1036,7040,1032, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=8.38  BV=4.51
    {1110,7040,1032, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=8.38  BV=4.41
    {1184,7040,1032, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=8.38  BV=4.32
    {1258,7086,1040, 0, 0, 0},  //TV = 9.63(34 lines)  AV=2.97  SV=8.40  BV=4.21
    {1332,7086,1048, 0, 0, 0},  //TV = 9.55(36 lines)  AV=2.97  SV=8.41  BV=4.11
    {1443,7086,1040, 0, 0, 0},  //TV = 9.44(39 lines)  AV=2.97  SV=8.40  BV=4.01
    {1554,7040,1040, 0, 0, 0},  //TV = 9.33(42 lines)  AV=2.97  SV=8.39  BV=3.91
    {1665,7086,1032, 0, 0, 0},  //TV = 9.23(45 lines)  AV=2.97  SV=8.39  BV=3.81
    {1776,7086,1040, 0, 0, 0},  //TV = 9.14(48 lines)  AV=2.97  SV=8.40  BV=3.71
    {1924,7040,1040, 0, 0, 0},  //TV = 9.02(52 lines)  AV=2.97  SV=8.39  BV=3.60
    {2072,7040,1032, 0, 0, 0},  //TV = 8.91(56 lines)  AV=2.97  SV=8.38  BV=3.51
    {2183,7086,1040, 0, 0, 0},  //TV = 8.84(59 lines)  AV=2.97  SV=8.40  BV=3.41
    {2368,7040,1040, 0, 0, 0},  //TV = 8.72(64 lines)  AV=2.97  SV=8.39  BV=3.30
    {2553,7040,1032, 0, 0, 0},  //TV = 8.61(69 lines)  AV=2.97  SV=8.38  BV=3.21
    {2738,7040,1032, 0, 0, 0},  //TV = 8.51(74 lines)  AV=2.97  SV=8.38  BV=3.11
    {2923,7040,1032, 0, 0, 0},  //TV = 8.42(79 lines)  AV=2.97  SV=8.38  BV=3.01
    {3145,7040,1032, 0, 0, 0},  //TV = 8.31(85 lines)  AV=2.97  SV=8.38  BV=2.91
    {3367,7040,1032, 0, 0, 0},  //TV = 8.21(91 lines)  AV=2.97  SV=8.38  BV=2.81
    {3589,7040,1032, 0, 0, 0},  //TV = 8.12(97 lines)  AV=2.97  SV=8.38  BV=2.72
    {3885,7040,1032, 0, 0, 0},  //TV = 8.01(105 lines)  AV=2.97  SV=8.38  BV=2.60
    {4144,7040,1032, 0, 0, 0},  //TV = 7.91(112 lines)  AV=2.97  SV=8.38  BV=2.51
    {4440,7040,1032, 0, 0, 0},  //TV = 7.82(120 lines)  AV=2.97  SV=8.38  BV=2.41
    {4736,7040,1032, 0, 0, 0},  //TV = 7.72(128 lines)  AV=2.97  SV=8.38  BV=2.32
    {5106,7040,1024, 0, 0, 0},  //TV = 7.61(138 lines)  AV=2.97  SV=8.37  BV=2.22
    {5439,7040,1032, 0, 0, 0},  //TV = 7.52(147 lines)  AV=2.97  SV=8.38  BV=2.12
    {5846,7040,1032, 0, 0, 0},  //TV = 7.42(158 lines)  AV=2.97  SV=8.38  BV=2.01
    {6290,7040,1032, 0, 0, 0},  //TV = 7.31(170 lines)  AV=2.97  SV=8.38  BV=1.91
    {6734,7040,1032, 0, 0, 0},  //TV = 7.21(182 lines)  AV=2.97  SV=8.38  BV=1.81
    {7215,7040,1032, 0, 0, 0},  //TV = 7.11(195 lines)  AV=2.97  SV=8.38  BV=1.71
    {7733,7040,1032, 0, 0, 0},  //TV = 7.01(209 lines)  AV=2.97  SV=8.38  BV=1.61
    {8288,7040,1032, 0, 0, 0},  //TV = 6.91(224 lines)  AV=2.97  SV=8.38  BV=1.51
    {8880,7040,1032, 0, 0, 0},  //TV = 6.82(240 lines)  AV=2.97  SV=8.38  BV=1.41
    {9509,7040,1032, 0, 0, 0},  //TV = 6.72(257 lines)  AV=2.97  SV=8.38  BV=1.31
    {9990,7086,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.40  BV=1.22
    {9990,7086,1120, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.51  BV=1.11
    {9990,7086,1200, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.60  BV=1.01
    {9990,7086,1280, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.70  BV=0.92
    {9990,7086,1376, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.80  BV=0.81
    {9990,7086,1488, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=8.91  BV=0.70
    {9990,7086,1592, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=9.01  BV=0.60
    {9990,7086,1704, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=9.11  BV=0.51
    {9990,7086,1824, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=9.21  BV=0.41
    {9990,7086,1960, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=9.31  BV=0.30
    {20017,7086,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.41  BV=0.20
    {20017,7086,1120, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.51  BV=0.11
    {20017,7086,1208, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.61  BV=-0.00
    {20017,7086,1296, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.72  BV=-0.10
    {20017,7086,1392, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.82  BV=-0.21
    {20017,7086,1488, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=8.91  BV=-0.30
    {30007,7086,1064, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.43  BV=-0.40
    {30007,7086,1136, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.53  BV=-0.50
    {30007,7086,1224, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.63  BV=-0.60
    {30007,7086,1312, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.73  BV=-0.70
    {39997,7086,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.41  BV=-0.79
    {39997,7086,1128, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.52  BV=-0.90
    {39997,7086,1208, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=8.61  BV=-1.00
    {49987,7086,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.39  BV=-1.09
    {49987,7086,1112, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.49  BV=-1.20
    {49987,7086,1192, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=8.59  BV=-1.30
    {60014,7086,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.43  BV=-1.40
    {60014,7086,1136, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=8.53  BV=-1.50
    {70004,7086,1048, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=8.41  BV=-1.60
    {70004,7086,1120, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=8.51  BV=-1.70
    {79994,7086,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=8.41  BV=-1.79
    {79994,7086,1128, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=8.52  BV=-1.90
    {89984,7086,1072, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=8.44  BV=-2.00
    {100011,7086,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.39  BV=-2.09
    {100011,7086,1112, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.49  BV=-2.20
    {110001,7086,1080, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=8.45  BV=-2.30
    {119991,7086,1064, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.43  BV=-2.40
    {129981,7086,1048, 0, 0, 0},  //TV = 2.94(3513 lines)  AV=2.97  SV=8.41  BV=-2.49
    {140008,7086,1048, 0, 0, 0},  //TV = 2.84(3784 lines)  AV=2.97  SV=8.41  BV=-2.60
    {149998,7086,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=8.41  BV=-2.70
    {159988,7086,1048, 0, 0, 0},  //TV = 2.64(4324 lines)  AV=2.97  SV=8.41  BV=-2.79
    {170015,7086,1056, 0, 0, 0},  //TV = 2.56(4595 lines)  AV=2.97  SV=8.42  BV=-2.89
    {180005,7086,1072, 0, 0, 0},  //TV = 2.47(4865 lines)  AV=2.97  SV=8.44  BV=-3.00
    {199985,7086,1032, 0, 0, 0},  //TV = 2.32(5405 lines)  AV=2.97  SV=8.39  BV=-3.09
    {210012,7086,1056, 0, 0, 0},  //TV = 2.25(5676 lines)  AV=2.97  SV=8.42  BV=-3.20
    {229992,7086,1032, 0, 0, 0},  //TV = 2.12(6216 lines)  AV=2.97  SV=8.39  BV=-3.30
    {239982,7086,1064, 0, 0, 0},  //TV = 2.06(6486 lines)  AV=2.97  SV=8.43  BV=-3.40
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO1600Table =
{
    AETABLE_CAPTURE_ISO1600,    //eAETableID
    130,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -34,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_1600, //ISO SPEED
    sCaptureISO1600PLineTable_60Hz,
    sCaptureISO1600PLineTable_50Hz,
    NULL,
};

static strEvPline sCaptureStrobePLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {25012,1152,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.78  BV=2.51
    {25012,1152,1120, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.88  BV=2.41
    {25012,1280,1080, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.98  BV=2.31
    {25012,1408,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.08  BV=2.21
    {33337,1152,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.77  BV=2.11
    {33337,1152,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.86  BV=2.01
    {33337,1280,1064, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.96  BV=1.92
    {33337,1408,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.07  BV=1.81
    {41662,1152,1088, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.84  BV=1.71
    {41662,1280,1056, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.95  BV=1.60
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {58312,1152,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=5.75  BV=1.32
    {58312,1152,1096, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=5.85  BV=1.22
    {66674,1152,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=5.77  BV=1.11
    {66674,1152,1104, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=5.86  BV=1.01
    {66674,1280,1064, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=5.96  BV=0.92
    {66674,1408,1040, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.07  BV=0.81
    {66674,1536,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.17  BV=0.71
    {66674,1536,1104, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.28  BV=0.60
    {66674,1664,1088, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.37  BV=0.50
    {66674,1792,1072, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.46  BV=0.42
    {66674,1920,1080, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.57  BV=0.31
    {66674,2176,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.67  BV=0.21
    {66674,2304,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.77  BV=0.11
    {66674,2432,1056, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.88  BV=0.00
    {66674,2688,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.98  BV=-0.10
    {66674,2816,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66674,3072,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.18  BV=-0.30
    {66674,3328,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.29  BV=-0.41
    {66674,3456,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.37  BV=-0.50
    {66674,3712,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.48  BV=-0.60
    {66674,3968,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.57  BV=-0.69
    {66674,4352,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.68  BV=-0.81
    {74999,4096,1040, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.61  BV=-0.90
    {74999,4480,1024, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.71  BV=-1.01
    {83324,4224,1040, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=7.65  BV=-1.10
    {91649,4096,1048, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=7.62  BV=-1.20
    {100011,4096,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.58  BV=-1.29
    {100011,4352,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.68  BV=-1.39
    {100011,4736,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100011,4992,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100011,5376,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.99  BV=-1.70
    {100011,5760,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.09  BV=-1.80
    {100011,6144,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.19  BV=-1.90
    {100011,6656,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.29  BV=-1.99
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureStrobePLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {20017,1152,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.80  BV=2.81
    {20017,1280,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.91  BV=2.71
    {20017,1280,1096, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.00  BV=2.61
    {20017,1408,1072, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.11  BV=2.50
    {20017,1536,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.20  BV=2.41
    {20017,1664,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.30  BV=2.32
    {30007,1152,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,1280,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,1280,1104, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,1408,1088, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.13  BV=1.90
    {39997,1152,1064, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.81  BV=1.80
    {39997,1280,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.91  BV=1.71
    {39997,1280,1096, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.00  BV=1.61
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {49987,1280,1088, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.99  BV=1.30
    {60014,1152,1072, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,1280,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=5.92  BV=1.11
    {60014,1280,1104, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.02  BV=1.01
    {60014,1408,1080, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.12  BV=0.91
    {60014,1536,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.21  BV=0.82
    {60014,1664,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.32  BV=0.71
    {60014,1792,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.43  BV=0.60
    {60014,1920,1040, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.51  BV=0.52
    {60014,2048,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.63  BV=0.40
    {60014,2176,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.72  BV=0.31
    {60014,2304,1072, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.82  BV=0.21
    {60014,2560,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.92  BV=0.11
    {60014,2688,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.03  BV=-0.00
    {60014,2944,1040, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.13  BV=-0.10
    {60014,3200,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.23  BV=-0.20
    {60014,3328,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.33  BV=-0.30
    {60014,3584,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.44  BV=-0.41
    {60014,3840,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.53  BV=-0.50
    {60014,4224,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.63  BV=-0.60
    {60014,4480,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.73  BV=-0.70
    {70004,4096,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.61  BV=-0.80
    {70004,4480,1024, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.71  BV=-0.91
    {79994,4096,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.62  BV=-1.00
    {79994,4480,1024, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.71  BV=-1.10
    {89984,4224,1032, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=7.64  BV=-1.20
    {100011,4096,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.58  BV=-1.29
    {100011,4352,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.68  BV=-1.39
    {100011,4736,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100011,4992,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100011,5376,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.99  BV=-1.70
    {100011,5760,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.09  BV=-1.80
    {100011,6144,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.19  BV=-1.90
    {100011,6656,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.29  BV=-1.99
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_StrobeTable =
{
    AETABLE_STROBE,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -20,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sCaptureStrobePLineTable_60Hz,
    sCaptureStrobePLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene1PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {25012,1152,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.78  BV=2.51
    {25012,1152,1120, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.88  BV=2.41
    {25012,1280,1080, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.98  BV=2.31
    {25012,1408,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.08  BV=2.21
    {33337,1152,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.77  BV=2.11
    {33337,1152,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.86  BV=2.01
    {33337,1280,1072, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.97  BV=1.90
    {41662,1152,1024, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.75  BV=1.80
    {41662,1152,1088, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.84  BV=1.71
    {41662,1280,1056, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.95  BV=1.60
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {58312,1152,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=5.75  BV=1.32
    {58312,1152,1096, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=5.85  BV=1.22
    {66674,1152,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=5.77  BV=1.11
    {66674,1152,1104, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=5.86  BV=1.01
    {66674,1280,1064, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=5.96  BV=0.92
    {66674,1408,1040, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.07  BV=0.81
    {66674,1536,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.17  BV=0.71
    {66674,1536,1104, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.28  BV=0.60
    {66674,1664,1088, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.37  BV=0.50
    {66674,1792,1072, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.46  BV=0.42
    {66674,1920,1080, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.57  BV=0.31
    {66674,2176,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.67  BV=0.21
    {66674,2304,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.77  BV=0.11
    {66674,2432,1056, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.88  BV=0.00
    {66674,2688,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.98  BV=-0.10
    {66674,2816,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66674,3072,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.18  BV=-0.30
    {66674,3200,1056, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.27  BV=-0.40
    {74999,3072,1048, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.20  BV=-0.50
    {74999,3328,1040, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.31  BV=-0.60
    {83324,3200,1040, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=7.25  BV=-0.70
    {91649,3072,1056, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=7.21  BV=-0.80
    {100011,3072,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100011,3328,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.29  BV=-0.99
    {100011,3584,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.39  BV=-1.10
    {100011,3840,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.50  BV=-1.21
    {100011,4096,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.60  BV=-1.30
    {100011,4352,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.68  BV=-1.39
    {108336,4352,1024, 0, 0, 0},  //TV = 3.21(2928 lines)  AV=2.97  SV=7.67  BV=-1.50
    {116661,4352,1024, 0, 0, 0},  //TV = 3.10(3153 lines)  AV=2.97  SV=7.67  BV=-1.60
    {124986,4352,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.67  BV=-1.70
    {124986,4608,1032, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.77  BV=-1.80
    {124986,4992,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.87  BV=-1.90
    {124986,5376,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=7.98  BV=-2.01
    {124986,5760,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=8.08  BV=-2.11
    {124986,6144,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=8.17  BV=-2.20
    {124986,6528,1032, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=8.27  BV=-2.30
    {124986,7040,1024, 0, 0, 0},  //TV = 3.00(3378 lines)  AV=2.97  SV=8.37  BV=-2.40
    {133311,7040,1032, 0, 0, 0},  //TV = 2.91(3603 lines)  AV=2.97  SV=8.38  BV=-2.50
    {141673,7086,1032, 0, 0, 0},  //TV = 2.82(3829 lines)  AV=2.97  SV=8.39  BV=-2.60
    {149998,7086,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=8.41  BV=-2.70
    {158323,7086,1064, 0, 0, 0},  //TV = 2.66(4279 lines)  AV=2.97  SV=8.43  BV=-2.80
    {175010,7040,1040, 0, 0, 0},  //TV = 2.51(4730 lines)  AV=2.97  SV=8.39  BV=-2.90
    {183335,7086,1056, 0, 0, 0},  //TV = 2.45(4955 lines)  AV=2.97  SV=8.42  BV=-3.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene1PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {20017,1152,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.80  BV=2.81
    {20017,1280,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.91  BV=2.71
    {20017,1280,1096, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.00  BV=2.61
    {20017,1408,1072, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.11  BV=2.50
    {20017,1536,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.20  BV=2.41
    {20017,1664,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.30  BV=2.32
    {30007,1152,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,1280,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,1280,1104, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,1408,1080, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.12  BV=1.91
    {39997,1152,1064, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.81  BV=1.80
    {39997,1280,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.91  BV=1.71
    {39997,1280,1096, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.00  BV=1.61
    {49987,1152,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.78  BV=1.52
    {49987,1152,1120, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.88  BV=1.41
    {49987,1280,1080, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=5.98  BV=1.31
    {60014,1152,1072, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=5.82  BV=1.21
    {60014,1280,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=5.92  BV=1.11
    {60014,1280,1104, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.02  BV=1.01
    {60014,1408,1080, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.12  BV=0.91
    {60014,1536,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.21  BV=0.82
    {60014,1664,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.32  BV=0.71
    {60014,1792,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.43  BV=0.60
    {60014,1920,1040, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.51  BV=0.52
    {60014,2048,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.63  BV=0.40
    {60014,2176,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.72  BV=0.31
    {60014,2304,1072, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.82  BV=0.21
    {60014,2560,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.92  BV=0.11
    {60014,2688,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.03  BV=-0.00
    {60014,2944,1040, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.13  BV=-0.10
    {60014,3200,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.23  BV=-0.20
    {60014,3328,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.33  BV=-0.30
    {70004,3072,1048, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.20  BV=-0.40
    {70004,3328,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.31  BV=-0.50
    {79994,3072,1056, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.21  BV=-0.60
    {79994,3328,1040, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.31  BV=-0.69
    {89984,3200,1032, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=7.24  BV=-0.80
    {100011,3072,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.19  BV=-0.90
    {100011,3328,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.29  BV=-0.99
    {100011,3584,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.39  BV=-1.10
    {100011,3840,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.50  BV=-1.21
    {100011,4096,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.60  BV=-1.30
    {100011,4352,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.68  BV=-1.39
    {110001,4224,1040, 0, 0, 0},  //TV = 3.18(2973 lines)  AV=2.97  SV=7.65  BV=-1.50
    {119991,4224,1024, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.63  BV=-1.60
    {119991,4480,1032, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.73  BV=-1.70
    {119991,4736,1048, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.83  BV=-1.80
    {119991,5120,1040, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=7.93  BV=-1.90
    {119991,5504,1040, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.03  BV=-2.00
    {119991,5888,1040, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.13  BV=-2.10
    {119991,6400,1024, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.23  BV=-2.20
    {119991,6784,1032, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.32  BV=-2.29
    {119991,7086,1064, 0, 0, 0},  //TV = 3.06(3243 lines)  AV=2.97  SV=8.43  BV=-2.40
    {129981,7086,1048, 0, 0, 0},  //TV = 2.94(3513 lines)  AV=2.97  SV=8.41  BV=-2.49
    {140008,7086,1048, 0, 0, 0},  //TV = 2.84(3784 lines)  AV=2.97  SV=8.41  BV=-2.60
    {149998,7086,1048, 0, 0, 0},  //TV = 2.74(4054 lines)  AV=2.97  SV=8.41  BV=-2.70
    {159988,7086,1048, 0, 0, 0},  //TV = 2.64(4324 lines)  AV=2.97  SV=8.41  BV=-2.79
    {170015,7086,1064, 0, 0, 0},  //TV = 2.56(4595 lines)  AV=2.97  SV=8.43  BV=-2.90
    {180005,7086,1072, 0, 0, 0},  //TV = 2.47(4865 lines)  AV=2.97  SV=8.44  BV=-3.00
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable1 =
{
    AETABLE_SCENE_INDEX1,    //eAETableID
    126,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -30,    //i4MinBV
    90,    //i4EffectiveMaxBV
    -10,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene1PLineTable_60Hz,
    sAEScene1PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene2PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.28  BV=3.60
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {25012,1152,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.78  BV=2.51
    {25012,1152,1120, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.88  BV=2.41
    {25012,1280,1080, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.98  BV=2.31
    {25012,1408,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.08  BV=2.21
    {33337,1152,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.77  BV=2.11
    {33337,1152,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.86  BV=2.01
    {33337,1280,1064, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.96  BV=1.92
    {33337,1408,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.07  BV=1.81
    {33337,1536,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.17  BV=1.71
    {33337,1536,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.28  BV=1.60
    {33337,1664,1088, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.37  BV=1.50
    {33337,1792,1072, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.46  BV=1.42
    {33337,1920,1080, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.57  BV=1.31
    {33337,2176,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.67  BV=1.21
    {33337,2304,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.77  BV=1.11
    {33337,2432,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.87  BV=1.01
    {33337,2560,1072, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.97  BV=0.90
    {33337,2816,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.07  BV=0.81
    {33337,3072,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.17  BV=0.71
    {33337,3200,1056, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.27  BV=0.60
    {33337,3456,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.36  BV=0.52
    {33337,3712,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.47  BV=0.41
    {33337,3968,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.56  BV=0.32
    {33337,4352,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.67  BV=0.21
    {33337,4608,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.77  BV=0.11
    {33337,4992,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.88  BV=-0.00
    {33337,5376,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=7.98  BV=-0.10
    {33337,5760,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.08  BV=-0.20
    {33337,6144,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.17  BV=-0.29
    {33337,6528,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=8.27  BV=-0.39
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene2PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1072, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.11  BV=3.51
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.31  BV=3.31
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {20017,1152,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.80  BV=2.81
    {20017,1280,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.91  BV=2.71
    {20017,1280,1096, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.00  BV=2.61
    {20017,1408,1064, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.10  BV=2.51
    {20017,1536,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.20  BV=2.41
    {20017,1664,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.30  BV=2.32
    {30007,1152,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,1280,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,1280,1104, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,1408,1080, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.12  BV=1.91
    {30007,1536,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,1664,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.32  BV=1.71
    {30007,1792,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.43  BV=1.60
    {30007,1920,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.51  BV=1.52
    {30007,2048,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.63  BV=1.40
    {30007,2176,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,2304,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,2560,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.92  BV=1.11
    {30007,2688,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.02  BV=1.01
    {30007,2944,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.12  BV=0.91
    {30007,3072,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.21  BV=0.82
    {30007,3328,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.32  BV=0.71
    {30007,3584,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.43  BV=0.60
    {30007,3840,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.51  BV=0.52
    {30007,4096,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.62  BV=0.41
    {30007,4480,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.73  BV=0.30
    {30007,4736,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.83  BV=0.20
    {30007,5120,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=7.92  BV=0.11
    {30007,5504,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.03  BV=-0.00
    {30007,5888,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.13  BV=-0.10
    {30007,6400,1024, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.23  BV=-0.20
    {30007,6784,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.32  BV=-0.29
    {30007,7086,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=8.42  BV=-0.39
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable2 =
{
    AETABLE_SCENE_INDEX2,    //eAETableID
    100,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -4,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene2PLineTable_60Hz,
    sAEScene2PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene3PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {25012,1152,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.78  BV=2.51
    {25012,1152,1120, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.88  BV=2.41
    {25012,1280,1080, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.98  BV=2.31
    {25012,1408,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.08  BV=2.21
    {33337,1152,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.77  BV=2.11
    {33337,1152,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.86  BV=2.01
    {33337,1280,1064, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.96  BV=1.92
    {33337,1408,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.07  BV=1.81
    {33337,1536,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.17  BV=1.71
    {33337,1536,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.28  BV=1.60
    {33337,1664,1088, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.37  BV=1.50
    {33337,1792,1072, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.46  BV=1.42
    {33337,1920,1080, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.57  BV=1.31
    {33337,2176,1024, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.67  BV=1.21
    {33337,2304,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.77  BV=1.11
    {33337,2432,1048, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.87  BV=1.01
    {41662,2048,1072, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.65  BV=0.90
    {41662,2176,1080, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.75  BV=0.81
    {49987,2048,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.58  BV=0.71
    {49987,2176,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.68  BV=0.61
    {49987,2304,1048, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.79  BV=0.50
    {58312,2048,1080, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=6.66  BV=0.41
    {58312,2304,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=6.75  BV=0.32
    {66674,2176,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.67  BV=0.21
    {66674,2304,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.77  BV=0.11
    {66674,2432,1056, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.88  BV=0.00
    {66674,2688,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=6.98  BV=-0.10
    {66674,2816,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.08  BV=-0.20
    {66674,3072,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.18  BV=-0.30
    {66674,3328,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.29  BV=-0.41
    {66674,3456,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.37  BV=-0.50
    {66674,3712,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.48  BV=-0.60
    {66674,3968,1048, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.57  BV=-0.69
    {66674,4352,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.68  BV=-0.81
    {74999,4096,1040, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.61  BV=-0.90
    {74999,4480,1024, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.71  BV=-1.01
    {83324,4224,1040, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=7.65  BV=-1.10
    {91649,4096,1048, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=7.62  BV=-1.20
    {100011,4096,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.58  BV=-1.29
    {100011,4352,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.68  BV=-1.39
    {100011,4736,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100011,4992,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100011,5376,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.99  BV=-1.70
    {100011,5760,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.09  BV=-1.80
    {100011,6144,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.19  BV=-1.90
    {100011,6656,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.29  BV=-1.99
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene3PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {20017,1152,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.80  BV=2.81
    {20017,1280,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.91  BV=2.71
    {20017,1280,1096, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.00  BV=2.61
    {20017,1408,1072, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.11  BV=2.50
    {20017,1536,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.20  BV=2.41
    {20017,1664,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.30  BV=2.32
    {30007,1152,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,1280,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,1280,1104, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,1408,1080, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.12  BV=1.91
    {30007,1536,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.21  BV=1.82
    {30007,1664,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.32  BV=1.71
    {30007,1792,1048, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.43  BV=1.60
    {30007,1920,1040, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.51  BV=1.52
    {30007,2048,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.63  BV=1.40
    {30007,2176,1056, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.72  BV=1.31
    {30007,2304,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.82  BV=1.21
    {30007,2560,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.92  BV=1.11
    {39997,2048,1040, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.61  BV=1.01
    {39997,2176,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.71  BV=0.91
    {39997,2304,1056, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.80  BV=0.82
    {49987,2048,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.58  BV=0.71
    {49987,2176,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.68  BV=0.61
    {49987,2304,1048, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=6.79  BV=0.50
    {60014,2048,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.62  BV=0.41
    {60014,2176,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.72  BV=0.31
    {60014,2304,1072, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.82  BV=0.21
    {60014,2560,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=6.92  BV=0.11
    {60014,2688,1064, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.03  BV=-0.00
    {60014,2944,1040, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.13  BV=-0.10
    {60014,3200,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.23  BV=-0.20
    {60014,3328,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.33  BV=-0.30
    {60014,3584,1056, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.44  BV=-0.41
    {60014,3840,1048, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.53  BV=-0.50
    {60014,4224,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.63  BV=-0.60
    {60014,4480,1032, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.73  BV=-0.70
    {70004,4096,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.61  BV=-0.80
    {70004,4480,1024, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.71  BV=-0.91
    {79994,4096,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.62  BV=-1.00
    {79994,4480,1024, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.71  BV=-1.10
    {89984,4224,1032, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=7.64  BV=-1.20
    {100011,4096,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.58  BV=-1.29
    {100011,4352,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.68  BV=-1.39
    {100011,4736,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100011,4992,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100011,5376,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.99  BV=-1.70
    {100011,5760,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.09  BV=-1.80
    {100011,6144,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.19  BV=-1.90
    {100011,6656,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.29  BV=-1.99
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable3 =
{
    AETABLE_SCENE_INDEX3,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -20,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene3PLineTable_60Hz,
    sAEScene3PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene4PLineTable_60Hz =
{
{
    {249972,1664,1048, 0, 0, 0},  //TV = 2.00(6756 lines)  AV=2.97  SV=6.32  BV=-1.35
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene4PLineTable_50Hz =
{
{
    {250009,1664,1048, 0, 0, 0},  //TV = 2.00(6757 lines)  AV=2.97  SV=6.32  BV=-1.35
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable4 =
{
    AETABLE_SCENE_INDEX4,    //eAETableID
    1,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    -13,    //i4MaxBV
    -13,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene4PLineTable_60Hz,
    sAEScene4PLineTable_50Hz,
    NULL,
};

static strEvPline sAEScene5PLineTable_60Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8325,1152,1032, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.77  BV=4.11
    {8325,1152,1104, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.86  BV=4.02
    {8325,1280,1072, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=5.97  BV=3.91
    {8325,1408,1040, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.07  BV=3.81
    {8325,1536,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.17  BV=3.71
    {8325,1536,1096, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.27  BV=3.61
    {8325,1664,1088, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.37  BV=3.51
    {8325,1792,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.47  BV=3.41
    {8325,1920,1080, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.57  BV=3.31
    {8325,2176,1024, 0, 0, 0},  //TV = 6.91(225 lines)  AV=2.97  SV=6.67  BV=3.21
    {16650,1152,1032, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.77  BV=3.11
    {16650,1152,1104, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.86  BV=3.02
    {16650,1280,1072, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=5.97  BV=2.91
    {16650,1408,1040, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.07  BV=2.81
    {16650,1536,1024, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.17  BV=2.71
    {16650,1536,1096, 0, 0, 0},  //TV = 5.91(450 lines)  AV=2.97  SV=6.27  BV=2.61
    {25012,1152,1040, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.78  BV=2.51
    {25012,1152,1120, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.88  BV=2.41
    {25012,1280,1080, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=5.98  BV=2.31
    {25012,1408,1048, 0, 0, 0},  //TV = 5.32(676 lines)  AV=2.97  SV=6.08  BV=2.21
    {33337,1152,1032, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.77  BV=2.11
    {33337,1152,1104, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.86  BV=2.01
    {33337,1280,1064, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=5.96  BV=1.92
    {33337,1408,1040, 0, 0, 0},  //TV = 4.91(901 lines)  AV=2.97  SV=6.07  BV=1.81
    {41662,1152,1088, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.84  BV=1.71
    {41662,1280,1056, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=5.95  BV=1.60
    {41662,1408,1024, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.04  BV=1.51
    {41662,1408,1096, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.14  BV=1.41
    {41662,1536,1080, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.25  BV=1.31
    {41662,1664,1064, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.34  BV=1.22
    {41662,1792,1064, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.45  BV=1.11
    {41662,1920,1064, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.55  BV=1.01
    {41662,2048,1072, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.65  BV=0.90
    {41662,2176,1080, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.75  BV=0.81
    {41662,2432,1032, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.84  BV=0.71
    {41662,2560,1056, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=6.95  BV=0.60
    {41662,2816,1024, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.04  BV=0.51
    {41662,2944,1048, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.14  BV=0.41
    {41662,3200,1032, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.24  BV=0.32
    {41662,3456,1032, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.35  BV=0.20
    {41662,3712,1024, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.44  BV=0.11
    {41662,3968,1032, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.55  BV=0.01
    {41662,4224,1048, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.66  BV=-0.11
    {41662,4608,1024, 0, 0, 0},  //TV = 4.59(1126 lines)  AV=2.97  SV=7.75  BV=-0.20
    {49987,4096,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.60  BV=-0.30
    {49987,4352,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.69  BV=-0.40
    {49987,4736,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.79  BV=-0.50
    {58312,4352,1024, 0, 0, 0},  //TV = 4.10(1576 lines)  AV=2.97  SV=7.67  BV=-0.60
    {66674,4096,1024, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.58  BV=-0.71
    {66674,4352,1032, 0, 0, 0},  //TV = 3.91(1802 lines)  AV=2.97  SV=7.68  BV=-0.81
    {74999,4096,1040, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.61  BV=-0.90
    {74999,4480,1024, 0, 0, 0},  //TV = 3.74(2027 lines)  AV=2.97  SV=7.71  BV=-1.01
    {83324,4224,1048, 0, 0, 0},  //TV = 3.59(2252 lines)  AV=2.97  SV=7.66  BV=-1.11
    {91649,4096,1048, 0, 0, 0},  //TV = 3.45(2477 lines)  AV=2.97  SV=7.62  BV=-1.20
    {100011,4096,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.58  BV=-1.29
    {100011,4352,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.68  BV=-1.39
    {100011,4736,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100011,4992,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100011,5376,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.99  BV=-1.70
    {100011,5760,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.09  BV=-1.80
    {100011,6144,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.19  BV=-1.90
    {100011,6656,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.29  BV=-1.99
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene5PLineTable_50Hz =
{
{
    {185,1152,1096, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.85  BV=9.52
    {185,1280,1064, 0, 0, 0},  //TV = 12.40(5 lines)  AV=2.97  SV=5.96  BV=9.41
    {222,1152,1056, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.80  BV=9.31
    {222,1280,1024, 0, 0, 0},  //TV = 12.14(6 lines)  AV=2.97  SV=5.91  BV=9.20
    {259,1152,1040, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.78  BV=9.11
    {259,1152,1112, 0, 0, 0},  //TV = 11.91(7 lines)  AV=2.97  SV=5.87  BV=9.01
    {296,1152,1040, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.78  BV=8.92
    {296,1152,1120, 0, 0, 0},  //TV = 11.72(8 lines)  AV=2.97  SV=5.88  BV=8.81
    {333,1152,1064, 0, 0, 0},  //TV = 11.55(9 lines)  AV=2.97  SV=5.81  BV=8.71
    {370,1152,1024, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.75  BV=8.62
    {370,1152,1096, 0, 0, 0},  //TV = 11.40(10 lines)  AV=2.97  SV=5.85  BV=8.52
    {407,1152,1080, 0, 0, 0},  //TV = 11.26(11 lines)  AV=2.97  SV=5.83  BV=8.40
    {444,1152,1056, 0, 0, 0},  //TV = 11.14(12 lines)  AV=2.97  SV=5.80  BV=8.31
    {481,1152,1040, 0, 0, 0},  //TV = 11.02(13 lines)  AV=2.97  SV=5.78  BV=8.22
    {518,1152,1040, 0, 0, 0},  //TV = 10.91(14 lines)  AV=2.97  SV=5.78  BV=8.11
    {555,1152,1040, 0, 0, 0},  //TV = 10.82(15 lines)  AV=2.97  SV=5.78  BV=8.01
    {592,1152,1040, 0, 0, 0},  //TV = 10.72(16 lines)  AV=2.97  SV=5.78  BV=7.92
    {629,1152,1056, 0, 0, 0},  //TV = 10.63(17 lines)  AV=2.97  SV=5.80  BV=7.81
    {666,1152,1064, 0, 0, 0},  //TV = 10.55(18 lines)  AV=2.97  SV=5.81  BV=7.71
    {740,1152,1024, 0, 0, 0},  //TV = 10.40(20 lines)  AV=2.97  SV=5.75  BV=7.62
    {777,1152,1048, 0, 0, 0},  //TV = 10.33(21 lines)  AV=2.97  SV=5.79  BV=7.51
    {851,1152,1024, 0, 0, 0},  //TV = 10.20(23 lines)  AV=2.97  SV=5.75  BV=7.41
    {925,1024,1144, 0, 0, 0},  //TV = 10.08(25 lines)  AV=2.97  SV=5.74  BV=7.30
    {962,1152,1040, 0, 0, 0},  //TV = 10.02(26 lines)  AV=2.97  SV=5.78  BV=7.22
    {1036,1152,1040, 0, 0, 0},  //TV = 9.91(28 lines)  AV=2.97  SV=5.78  BV=7.11
    {1110,1152,1040, 0, 0, 0},  //TV = 9.82(30 lines)  AV=2.97  SV=5.78  BV=7.01
    {1184,1152,1040, 0, 0, 0},  //TV = 9.72(32 lines)  AV=2.97  SV=5.78  BV=6.92
    {1295,1152,1024, 0, 0, 0},  //TV = 9.59(35 lines)  AV=2.97  SV=5.75  BV=6.81
    {1369,1152,1032, 0, 0, 0},  //TV = 9.51(37 lines)  AV=2.97  SV=5.77  BV=6.72
    {1480,1152,1024, 0, 0, 0},  //TV = 9.40(40 lines)  AV=2.97  SV=5.75  BV=6.62
    {1591,1152,1024, 0, 0, 0},  //TV = 9.30(43 lines)  AV=2.97  SV=5.75  BV=6.51
    {1702,1152,1024, 0, 0, 0},  //TV = 9.20(46 lines)  AV=2.97  SV=5.75  BV=6.41
    {1813,1152,1032, 0, 0, 0},  //TV = 9.11(49 lines)  AV=2.97  SV=5.77  BV=6.31
    {1961,1152,1024, 0, 0, 0},  //TV = 8.99(53 lines)  AV=2.97  SV=5.75  BV=6.21
    {2109,1152,1024, 0, 0, 0},  //TV = 8.89(57 lines)  AV=2.97  SV=5.75  BV=6.11
    {2257,1152,1024, 0, 0, 0},  //TV = 8.79(61 lines)  AV=2.97  SV=5.75  BV=6.01
    {2405,1152,1024, 0, 0, 0},  //TV = 8.70(65 lines)  AV=2.97  SV=5.75  BV=5.92
    {2590,1152,1024, 0, 0, 0},  //TV = 8.59(70 lines)  AV=2.97  SV=5.75  BV=5.81
    {2775,1152,1024, 0, 0, 0},  //TV = 8.49(75 lines)  AV=2.97  SV=5.75  BV=5.71
    {2997,1024,1144, 0, 0, 0},  //TV = 8.38(81 lines)  AV=2.97  SV=5.74  BV=5.61
    {3219,1024,1144, 0, 0, 0},  //TV = 8.28(87 lines)  AV=2.97  SV=5.74  BV=5.51
    {3441,1152,1024, 0, 0, 0},  //TV = 8.18(93 lines)  AV=2.97  SV=5.75  BV=5.40
    {3663,1152,1024, 0, 0, 0},  //TV = 8.09(99 lines)  AV=2.97  SV=5.75  BV=5.31
    {3959,1024,1144, 0, 0, 0},  //TV = 7.98(107 lines)  AV=2.97  SV=5.74  BV=5.21
    {4218,1152,1024, 0, 0, 0},  //TV = 7.89(114 lines)  AV=2.97  SV=5.75  BV=5.11
    {4514,1152,1024, 0, 0, 0},  //TV = 7.79(122 lines)  AV=2.97  SV=5.75  BV=5.01
    {4884,1024,1144, 0, 0, 0},  //TV = 7.68(132 lines)  AV=2.97  SV=5.74  BV=4.90
    {5180,1152,1024, 0, 0, 0},  //TV = 7.59(140 lines)  AV=2.97  SV=5.75  BV=4.81
    {5587,1024,1144, 0, 0, 0},  //TV = 7.48(151 lines)  AV=2.97  SV=5.74  BV=4.71
    {5994,1024,1144, 0, 0, 0},  //TV = 7.38(162 lines)  AV=2.97  SV=5.74  BV=4.61
    {6401,1152,1024, 0, 0, 0},  //TV = 7.29(173 lines)  AV=2.97  SV=5.75  BV=4.50
    {6882,1024,1144, 0, 0, 0},  //TV = 7.18(186 lines)  AV=2.97  SV=5.74  BV=4.41
    {7400,1024,1144, 0, 0, 0},  //TV = 7.08(200 lines)  AV=2.97  SV=5.74  BV=4.30
    {7918,1152,1024, 0, 0, 0},  //TV = 6.98(214 lines)  AV=2.97  SV=5.75  BV=4.20
    {8510,1024,1144, 0, 0, 0},  //TV = 6.88(230 lines)  AV=2.97  SV=5.74  BV=4.10
    {9028,1152,1024, 0, 0, 0},  //TV = 6.79(244 lines)  AV=2.97  SV=5.75  BV=4.01
    {9768,1024,1144, 0, 0, 0},  //TV = 6.68(264 lines)  AV=2.97  SV=5.74  BV=3.90
    {9990,1152,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.81  BV=3.81
    {9990,1280,1024, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=5.91  BV=3.71
    {9990,1280,1096, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.00  BV=3.61
    {9990,1408,1064, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.10  BV=3.52
    {9990,1536,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.20  BV=3.41
    {9990,1664,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.32  BV=3.30
    {9990,1792,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.40  BV=3.21
    {9990,1920,1032, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.50  BV=3.11
    {9990,2048,1040, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.61  BV=3.01
    {9990,2176,1048, 0, 0, 0},  //TV = 6.65(270 lines)  AV=2.97  SV=6.71  BV=2.91
    {20017,1152,1056, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.80  BV=2.81
    {20017,1280,1024, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=5.91  BV=2.71
    {20017,1280,1096, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.00  BV=2.61
    {20017,1408,1072, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.11  BV=2.50
    {20017,1536,1048, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.20  BV=2.41
    {20017,1664,1032, 0, 0, 0},  //TV = 5.64(541 lines)  AV=2.97  SV=6.30  BV=2.32
    {30007,1152,1072, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.82  BV=2.21
    {30007,1280,1032, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=5.92  BV=2.11
    {30007,1280,1104, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.02  BV=2.01
    {30007,1408,1088, 0, 0, 0},  //TV = 5.06(811 lines)  AV=2.97  SV=6.13  BV=1.90
    {39997,1152,1064, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.81  BV=1.80
    {39997,1280,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=5.91  BV=1.71
    {39997,1280,1096, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.00  BV=1.61
    {39997,1408,1064, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.10  BV=1.52
    {39997,1536,1056, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.21  BV=1.40
    {39997,1664,1032, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.30  BV=1.32
    {39997,1792,1032, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.40  BV=1.21
    {39997,1920,1032, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.50  BV=1.11
    {39997,2048,1040, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.61  BV=1.01
    {39997,2176,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.71  BV=0.91
    {39997,2304,1056, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.80  BV=0.82
    {39997,2560,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=6.91  BV=0.71
    {39997,2688,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.01  BV=0.60
    {39997,2944,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.11  BV=0.51
    {39997,3072,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.20  BV=0.41
    {39997,3328,1032, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.30  BV=0.32
    {39997,3584,1032, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.40  BV=0.21
    {39997,3840,1032, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.50  BV=0.11
    {39997,4096,1048, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.62  BV=-0.00
    {39997,4480,1024, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.71  BV=-0.10
    {39997,4736,1040, 0, 0, 0},  //TV = 4.64(1081 lines)  AV=2.97  SV=7.82  BV=-0.20
    {49987,4096,1032, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.60  BV=-0.30
    {49987,4352,1040, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.69  BV=-0.40
    {49987,4736,1024, 0, 0, 0},  //TV = 4.32(1351 lines)  AV=2.97  SV=7.79  BV=-0.50
    {60014,4224,1024, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.63  BV=-0.60
    {60014,4480,1040, 0, 0, 0},  //TV = 4.06(1622 lines)  AV=2.97  SV=7.74  BV=-0.71
    {70004,4096,1040, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.61  BV=-0.80
    {70004,4480,1024, 0, 0, 0},  //TV = 3.84(1892 lines)  AV=2.97  SV=7.71  BV=-0.91
    {79994,4096,1048, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.62  BV=-1.00
    {79994,4480,1024, 0, 0, 0},  //TV = 3.64(2162 lines)  AV=2.97  SV=7.71  BV=-1.10
    {89984,4224,1040, 0, 0, 0},  //TV = 3.47(2432 lines)  AV=2.97  SV=7.65  BV=-1.21
    {100011,4096,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.58  BV=-1.29
    {100011,4352,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.68  BV=-1.39
    {100011,4736,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.79  BV=-1.50
    {100011,4992,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.89  BV=-1.60
    {100011,5376,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=7.99  BV=-1.70
    {100011,5760,1032, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.09  BV=-1.80
    {100011,6144,1040, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.19  BV=-1.90
    {100011,6656,1024, 0, 0, 0},  //TV = 3.32(2703 lines)  AV=2.97  SV=8.29  BV=-1.99
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable5 =
{
    AETABLE_SCENE_INDEX5,    //eAETableID
    116,    //u4TotalIndex
    20,    //u4StrobeTrigerBV
    95,    //i4MaxBV
    -20,    //i4MinBV
    90,    //i4EffectiveMaxBV
    0,      //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};

static strEvPline sAESceneReservePLineTable =
{
{
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};
static strAETable g_AE_ReserveSceneTable =
{
	AETABLE_SCENE_MAX,    //eAETableID
	0,    //u4TotalIndex
	20,    //u4StrobeTrigerBV
	0,    //i4MaxBV
	0,    //i4MinBV
	90,    //i4EffectiveMaxBV
	0,      //i4EffectiveMinBV
	LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
	sAESceneReservePLineTable,
	sAESceneReservePLineTable,
	NULL,
};
static strAESceneMapping g_AEScenePLineMapping = 
{
{
    {LIB3A_AE_SCENE_AUTO, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5}},
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_SCENE_INDEX1, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_SCENE_INDEX2, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_PARTY, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_SNOW, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_SPORTS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_STEADYPHOTO, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_SUNSET, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_THEATRE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ISO_ANTI_SHAKE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_ISO100, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO100, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100}},
    {LIB3A_AE_SCENE_ISO200, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO200, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200}},
    {LIB3A_AE_SCENE_ISO400, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO400, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400}},
    {LIB3A_AE_SCENE_ISO800, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO800, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800}},
    {LIB3A_AE_SCENE_ISO1600 , {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO1600, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO1600}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_AUTO}},    //reserve for future
},
};

static strAEPLineTable g_strAEPlineTable =
{
{
// PLINE Table
g_AE_PreviewAutoTable,
g_AE_CaptureAutoTable,
g_AE_VideoAutoTable,
g_AE_Video1AutoTable,
g_AE_Video2AutoTable,
g_AE_Custom1AutoTable,
g_AE_Custom2AutoTable,
g_AE_Custom3AutoTable,
g_AE_Custom4AutoTable,
g_AE_Custom5AutoTable,
g_AE_VideoNightTable,
g_AE_CaptureISO100Table,
g_AE_CaptureISO200Table,
g_AE_CaptureISO400Table,
g_AE_CaptureISO800Table,
g_AE_CaptureISO1600Table,
g_AE_StrobeTable,
g_AE_SceneTable1,
g_AE_SceneTable2,
g_AE_SceneTable3,
g_AE_SceneTable4,
g_AE_SceneTable5,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
g_AE_ReserveSceneTable,
},
};

static strAEPLineNumInfo g_strAEPreviewAutoPLineInfo =
{
    AETABLE_RPEVIEW_AUTO,
    90,
    -10,
    {
        {1,5000,20,1144,1144},
        {2,20,20,1144,2048},
        {3,20,10,2048,2048},
        {4,10,10,2048,3072},
        {5,10,8,3072,3072},
        {6,8,8,3072,7086},
        {7,8,5,7086,7086},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureAutoPLineInfo =
{
    AETABLE_CAPTURE_AUTO,
    90,
    0,
    {
        {1,5000,20,1144,1144},
        {2,20,20,1144,2048},
        {3,20,10,2048,2048},
        {4,10,10,2048,3072},
        {5,10,8,3072,3072},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoAutoPLineInfo =
{
    AETABLE_VIDEO_AUTO,
    90,
    0,
    {
        {1,5000,120,1144,1144},
        {2,120,120,1144,2048},
        {3,120,30,2048,2048},
        {4,30,30,2048,4096},
        {5,30,15,4096,4096},
        {6,15,15,4096,7086},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo1AutoPLineInfo =
{
    AETABLE_VIDEO1_AUTO,
    90,
    0,
    {
        {1,5000,120,1144,1144},
        {2,120,120,1144,7086},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo2AutoPLineInfo =
{
    AETABLE_VIDEO2_AUTO,
    90,
    0,
    {
        {1,5000,180,1144,1144},
        {2,180,180,1144,7086},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom1AutoPLineInfo =
{
    AETABLE_CUSTOM1_AUTO,
    90,
    0,
    {
        {1,5000,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom2AutoPLineInfo =
{
    AETABLE_CUSTOM2_AUTO,
    90,
    0,
    {
        {1,5000,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom3AutoPLineInfo =
{
    AETABLE_CUSTOM3_AUTO,
    90,
    0,
    {
        {1,5000,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom4AutoPLineInfo =
{
    AETABLE_CUSTOM4_AUTO,
    90,
    0,
    {
        {1,5000,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom5AutoPLineInfo =
{
    AETABLE_CUSTOM5_AUTO,
    90,
    0,
    {
        {1,5000,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoNightPLineInfo =
{
    AETABLE_VIDEO_NIGHT,
    90,
    -10,
    {
        {1,5000,60,1144,1144},
        {2,60,60,1144,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,7086},
        {5,30,10,7086,7086},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO100PLineInfo =
{
    AETABLE_CAPTURE_ISO100,
    90,
    0,
    {
        {1,5000,4,1144,1144},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO200PLineInfo =
{
    AETABLE_CAPTURE_ISO200,
    90,
    0,
    {
        {1,5000,2000,1144,1144},
        {2,2000,2000,1144,2048},
        {3,2000,4,2048,2048},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO400PLineInfo =
{
    AETABLE_CAPTURE_ISO400,
    90,
    0,
    {
        {1,5000,2000,1144,1144},
        {2,2000,2000,1144,4096},
        {3,2000,4,4096,4096},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO800PLineInfo =
{
    AETABLE_CAPTURE_ISO800,
    90,
    0,
    {
        {1,5000,2000,1144,1144},
        {2,2000,2000,1144,7086},
        {3,2000,4,7086,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO1600PLineInfo =
{
    AETABLE_CAPTURE_ISO1600,
    90,
    0,
    {
        {1,5000,2000,1144,1144},
        {2,2000,2000,1144,7086},
        {3,2000,4,7086,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEStrobePLineInfo =
{
    AETABLE_STROBE,
    90,
    0,
    {
        {1,5000,15,1144,1144},
        {2,15,15,1144,4096},
        {3,15,10,4096,4096},
        {4,10,10,4096,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene1PLineInfo =
{
    AETABLE_SCENE_INDEX1,
    90,
    -10,
    {
        {1,5000,30,1144,1144},
        {2,30,15,1144,1144},
        {3,15,15,1144,3072},
        {4,15,10,3072,3072},
        {5,10,10,3072,4096},
        {6,10,8,4096,4096},
        {7,8,8,4096,7086},
        {8,8,5,7086,7086},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    0,
    {
        {1,5000,100,1144,1144},
        {2,100,30,1144,1144},
        {3,30,30,1144,7086},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene3PLineInfo =
{
    AETABLE_SCENE_INDEX3,
    90,
    0,
    {
        {1,5000,30,1144,1144},
        {2,30,30,1144,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,7086},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene4PLineInfo =
{
    AETABLE_SCENE_INDEX4,
    90,
    0,
    {
        {1,4,4,1706,1706},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene5PLineInfo =
{
    AETABLE_SCENE_INDEX5,
    90,
    0,
    {
        {1,5000,24,1144,1144},
        {2,24,24,1144,4096},
        {3,24,10,4096,4096},
        {4,10,10,4096,7086},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};





























static strAEPLineNumInfo g_strAENoScenePLineInfo =
{
    AETABLE_SCENE_MAX,
    90,
    0,
    {
        {1,0,0,0,0},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};
static strAEPLineInfomation g_strAEPlineInfo =
{
MTRUE,   // FALSE mean the sampling
{
// PLINE Info
g_strAEPreviewAutoPLineInfo,
g_strAECaptureAutoPLineInfo,
g_strAEVideoAutoPLineInfo,
g_strAEVideo1AutoPLineInfo,
g_strAEVideo2AutoPLineInfo,
g_strAECustom1AutoPLineInfo,
g_strAECustom2AutoPLineInfo,
g_strAECustom3AutoPLineInfo,
g_strAECustom4AutoPLineInfo,
g_strAECustom5AutoPLineInfo,
g_strAEVideoNightPLineInfo,
g_strAECaptureISO100PLineInfo,
g_strAECaptureISO200PLineInfo,
g_strAECaptureISO400PLineInfo,
g_strAECaptureISO800PLineInfo,
g_strAECaptureISO1600PLineInfo,
g_strAEStrobePLineInfo,
g_strAEScene1PLineInfo,
g_strAEScene2PLineInfo,
g_strAEScene3PLineInfo,
g_strAEScene4PLineInfo,
g_strAEScene5PLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
g_strAENoScenePLineInfo,
},
};

static strAEPLineGainList g_strAEGainList =
{
0,
{
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
{0,100},
}
};

static AE_PLINETABLE_T g_PlineTableMapping =
{
g_AEScenePLineMapping,
g_strAEPlineTable,
g_strAEPlineInfo,
g_strAEGainList
};
#endif


#if 0 //Save the P-line info to file for debug
MinGain,1144 
MaxGain,7086 
MiniISOGain,150 
GainStepUnitInTotalRange,128 
PreviewExposureLineUnit,37000 
PreviewMaxFrameRate,30 
VideoExposureLineUnit,37000 
VideoMaxFrameRate,30 
VideoToPreviewSensitivityRatio,1024 
CaptureExposureLineUnit,37000 
CaptureMaxFrameRate,30 
CaptureToPreviewSensitivityRatio,1024 
Video1ExposureLineUnit,37000 
Video1MaxFrameRate,30 
Video1ToPreviewSensitivityRatio,1024 
Video2ExposureLineUnit,37000 
Video2MaxFrameRate,30 
Video2ToPreviewSensitivityRatio,1024 
Custom1ExposureLineUnit,37000 
Custom1MaxFrameRate,30 
Custom1ToPreviewSensitivityRatio,1024 
Custom2ExposureLineUnit,37000 
Custom2MaxFrameRate,30 
Custom2ToPreviewSensitivityRatio,1024 
Custom3ExposureLineUnit,37000 
Custom3MaxFrameRate,30 
Custom3ToPreviewSensitivityRatio,1024 
Custom4ExposureLineUnit,37000 
Custom4MaxFrameRate,30 
Custom4ToPreviewSensitivityRatio,1024 
Custom5ExposureLineUnit,37000 
Custom5MaxFrameRate,30 
Custom5ToPreviewSensitivityRatio,1024 
FocusLength,350 
Fno,28 

// Preview table -- Use preview sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-10
1,5000,20,1144,1144
2,20,20,1144,2048
3,20,10,2048,2048
4,10,10,2048,3072
6,10,8,3072,3072
8,8,8,3072,7086
9,8,5,7086,7086
AETABLE_END

// Capture table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,0
1,5000,20,1144,1144
2,20,20,1144,2048
3,20,10,2048,2048
4,10,10,2048,3072
6,10,8,3072,3072
AETABLE_END

// Video table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,0
1,5000,120,1144,1144
2,120,120,1144,2048
3,120,30,2048,2048
4,30,30,2048,4096
5,30,15,4096,4096
6,15,15,4096,7086
AETABLE_END

// Video1 table -- Use Video1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,5000,120,1144,1144
2,120,120,1144,7086
AETABLE_END

// Video2 table -- Use Video2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,0
1,5000,180,1144,1144
2,180,180,1144,7086
AETABLE_END

// Custom1 table -- Use Custom1 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,0
1,5000,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom2 table -- Use Custom2 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,0
1,5000,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom3 table -- Use Custom3 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,0
1,5000,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom4 table -- Use Custom4 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,0
1,5000,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Custom5 table -- Use Custom5 sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,0
1,5000,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
AETABLE_END

// Video Night table -- Use video sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,5000,60,1144,1144
2,60,60,1144,3072
3,60,30,3072,3072
4,30,30,3072,7086
5,30,10,7086,7086
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,5000,4,1144,1144
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,0
1,5000,2000,1144,1144
2,2000,2000,1144,2048
3,2000,4,2048,2048
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,0
1,5000,2000,1144,1144
2,2000,2000,1144,4096
3,2000,4,4096,4096
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,0
1,5000,2000,1144,1144
2,2000,2000,1144,7086
3,2000,4,7086,7086
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,0
1,5000,2000,1144,1144
2,2000,2000,1144,7086
3,2000,4,7086,7086
AETABLE_END

// Strobe table -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,0
1,5000,15,1144,1144
2,15,15,1144,4096
3,15,10,4096,4096
4,10,10,4096,7086
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-10
1,5000,30,1144,1144
2,30,15,1144,1144
3,15,15,1144,3072
4,15,10,3072,3072
5,10,10,3072,4096
6,10,8,4096,4096
7,8,8,4096,7086
8,8,5,7086,7086
AETABLE_END


//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,0
1,5000,100,1144,1144
2,100,30,1144,1144
3,30,30,1144,7086
AETABLE_END

// Table1 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,0
1,5000,30,1144,1144
2,30,30,1144,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,7086
AETABLE_END

// Table2 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,0
1,4,4,1706,1706
AETABLE_END

// Table3 PLine -- Use capture sensor setting
//Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,0
1,5000,24,1144,1144
2,24,24,1144,4096
3,24,10,4096,4096
4,10,10,4096,7086
AETABLE_END

// Table4 PLine -- Use capture sensor setting

// Table5 PLine -- Use capture sensor setting

// Table6 PLine -- Use capture sensor setting

// Table7 PLine -- Use capture sensor setting

// Table8 PLine -- Use capture sensor setting

// Table9 PLine -- Use capture sensor setting

// Table10 PLine -- Use capture sensor setting

// Table11 PLine -- Use capture sensor setting

// Table12 PLine -- Use capture sensor setting

// Table13 PLine -- Use capture sensor setting

// Table14 PLine -- Use capture sensor setting

// Table15 PLine -- Use capture sensor setting

// Table16 PLine -- Use capture sensor setting

// Table17 PLine -- Use capture sensor setting

// Table18 PLine -- Use capture sensor setting

// Table19 PLine -- Use capture sensor setting

// Table20 PLine -- Use capture sensor setting

// Table21 PLine -- Use capture sensor setting

// Table22 PLine -- Use capture sensor setting

// Table23 PLine -- Use capture sensor setting

// Table24 PLine -- Use capture sensor setting

// Table25 PLine -- Use capture sensor setting

// Table26 PLine -- Use capture sensor setting

// Table27 PLine -- Use capture sensor setting

// Table28 PLine -- Use capture sensor setting

// Table29 PLine -- Use capture sensor setting

// Table30 PLine -- Use capture sensor setting

// Table31 PLine -- Use capture sensor setting

AE_SCENE_AUTO,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_AUTO,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX5
AE_SCENE_NIGHT,AETABLE_SCENE_INDEX1,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ACTION,AETABLE_SCENE_INDEX2,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_BEACH,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX4,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_NIGHT,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_PARTY,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_SNOW,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_SPORTS,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_STEADYPHOTO,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_SUNSET,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX3,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX3
AE_SCENE_THEATRE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX1,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX1
AE_SCENE_ISO_ANTI_SHAKE,AETABLE_RPEVIEW_AUTO,AETABLE_SCENE_INDEX2,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_SCENE_INDEX2
AE_SCENE_ISO100,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO100,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO100
AE_SCENE_ISO200,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO200,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO200
AE_SCENE_ISO400,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO400,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO400
AE_SCENE_ISO800,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO800,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO800
AE_SCENE_ISO1600 ,AETABLE_RPEVIEW_AUTO,AETABLE_CAPTURE_ISO1600,AETABLE_VIDEO_AUTO,AETABLE_VIDEO1_AUTO,AETABLE_VIDEO2_AUTO,AETABLE_CUSTOM1_AUTO,AETABLE_CUSTOM2_AUTO,AETABLE_CUSTOM3_AUTO,AETABLE_CUSTOM4_AUTO,AETABLE_CUSTOM5_AUTO,AETABLE_CAPTURE_ISO1600
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
,,,,,,,,,,,
#endif
