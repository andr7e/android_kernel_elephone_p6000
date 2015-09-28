#include <utils/Log.h>
#include <fcntl.h>
#include <math.h>

#include "camera_custom_nvram.h"
#include "camera_custom_sensor.h"
#include "image_sensor.h"
#include "kd_imgsensor_define.h"
#include "camera_AE_PLineTable_gc2235mipiraw.h"
#include "camera_info_gc2235mipiraw.h"
#include "camera_custom_AEPlinetable.h"
#include "camera_custom_tsf_tbl.h"


const NVRAM_CAMERA_ISP_PARAM_STRUCT CAMERA_ISP_DEFAULT_VALUE =
{{
    //Version
    Version: NVRAM_CAMERA_PARA_FILE_VERSION,

    //SensorId
    SensorId: SENSOR_ID,
    ISPComm:{
      {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      }
    },
    ISPPca: {
#include INCLUDE_FILENAME_ISP_PCA_PARAM
    },
    ISPRegs:{
#include INCLUDE_FILENAME_ISP_REGS_PARAM
    },
    ISPMfbMixer:{{
      0x01FF0001, // MIX3_CTRL_0
      0x00FF0000, // MIX3_CTRL_1
      0xFFFF0000  // MIX3_SPARE
    }},
    ISPMulitCCM:{
      Poly22:{
        64275,      // i4R_AVG
        13180,      // i4R_STD
        90125,      // i4B_AVG
        24003,      // i4B_STD
        1013,      // i4R_MAX
        787,      // i4R_MIN
        711,      // i4G_MAX
        638,      // i4G_MIN
        969,      // i4B_MAX
        745,      // i4B_MIN
        {  // i4P00[9]
            9152500, -2900000, -1122500, -1467500, 6755000, -172500, 350000, -3547500, 8317500
        },
        {  // i4P10[9]
            849286, -948151, 82969, -183698, -140392, 326324, -144218, 725689, -577649
        },
        {  // i4P01[9]
            184217, -357867, 155801, -282488, -270122, 558350, -55700, -312907, 368994
        },
        {  // i4P20[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        },
        {  // i4P11[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        },
        {  // i4P02[9]
            0, 0, 0, 0, 0, 0, 0, 0, 0
        }
      },

      AWBGain:{
        // Strobe
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        },
        // A
        {
          470,    // i4R
          512,    // i4G
          1119    // i4B
        },
        // TL84
        {
          610,    // i4R
          512,    // i4G
          947    // i4B
        },
        // CWF
        {
          739,    // i4R
          512,    // i4G
          980    // i4B
        },
        // D65
        {
          752,    // i4R
          512,    // i4G
          559    // i4B
        },
        // Reserved 1
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        },
        // Reserved 2
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        },
        // Reserved 3
        {
          512,    // i4R
          512,    // i4G
          512    // i4B
        }
      },
      Weight:{
        1, // Strobe
        1, // A
        1, // TL84
        1, // CWF
        1, // D65
        1, // Reserved 1
        1, // Reserved 2
        1  // Reserved 3
      }
    },

    //bInvokeSmoothCCM
    bInvokeSmoothCCM: MTRUE
}};

const NVRAM_CAMERA_3A_STRUCT CAMERA_3A_NVRAM_DEFAULT_VALUE =
{
    NVRAM_CAMERA_3A_FILE_VERSION, // u4Version
    SENSOR_ID, // SensorId

    // AE NVRAM
    {
        // rDevicesInfo
        {
            1144,    // u4MinGain, 1024 base = 1x
            7086,    // u4MaxGain, 16x
            150,    // u4MiniISOGain, ISOxx  
            128,    // u4GainStepUnit, 1x/8 
            37000,    // u4PreExpUnit 
            30,    // u4PreMaxFrameRate
            37000,    // u4VideoExpUnit  
            30,    // u4VideoMaxFrameRate 
            1024,    // u4Video2PreRatio, 1024 base = 1x 
            37000,    // u4CapExpUnit 
            30,    // u4CapMaxFrameRate
            1024,    // u4Cap2PreRatio, 1024 base = 1x
            37000,    // u4Video1ExpUnit
            30,    // u4Video1MaxFrameRate
            1024,    // u4Video12PreRatio, 1024 base = 1x
            37000,    // u4Video2ExpUnit
            30,    // u4Video2MaxFrameRate
            1024,    // u4Video22PreRatio, 1024 base = 1x
            37000,    // u4Custom1ExpUnit
            30,    // u4Custom1MaxFrameRate
            1024,    // u4Custom12PreRatio, 1024 base = 1x
            37000,    // u4Custom2ExpUnit
            30,    // u4Custom2MaxFrameRate
            1024,    // u4Custom22PreRatio, 1024 base = 1x
            37000,    // u4Custom3ExpUnit
            30,    // u4Custom3MaxFrameRate
            1024,    // u4Custom32PreRatio, 1024 base = 1x
            37000,    // u4Custom4ExpUnit
            30,    // u4Custom4MaxFrameRate
            1024,    // u4Custom42PreRatio, 1024 base = 1x
            37000,    // u4Custom5ExpUnit
            30,    // u4Custom5MaxFrameRate
            1024,    // u4Custom52PreRatio, 1024 base = 1x
            28,    // u4LensFno, Fno = 2.8
            350    // u4FocusLength_100x
        },
        // rHistConfig
        {
            4,    // u4HistHighThres
            40,    // u4HistLowThres
            2,    // u4MostBrightRatio
            1,    // u4MostDarkRatio
            160,    // u4CentralHighBound
            20,    // u4CentralLowBound
            {240, 230, 220, 210, 200},    // u4OverExpThres[AE_CCT_STRENGTH_NUM] 
            {62, 70, 82, 108, 141},    // u4HistStretchThres[AE_CCT_STRENGTH_NUM] 
            {18, 22, 26, 30, 34}    // u4BlackLightThres[AE_CCT_STRENGTH_NUM] 
        },
        // rCCTConfig
        {
            TRUE,    // bEnableBlackLight
            TRUE,    // bEnableHistStretch
            TRUE,    // bEnableAntiOverExposure
            TRUE,    // bEnableTimeLPF
            TRUE,    // bEnableCaptureThres
            TRUE,    // bEnableVideoThres
            TRUE,    // bEnableVideo1Thres
            TRUE,    // bEnableVideo2Thres
            TRUE,    // bEnableCustom1Thres
            TRUE,    // bEnableCustom2Thres
            TRUE,    // bEnableCustom3Thres
            TRUE,    // bEnableCustom4Thres
            TRUE,    // bEnableCustom5Thres
            TRUE,    // bEnableStrobeThres
            47,    // u4AETarget
            47,    // u4StrobeAETarget
            50,    // u4InitIndex
            4,    // u4BackLightWeight
            32,    // u4HistStretchWeight
            4,    // u4AntiOverExpWeight
            2,    // u4BlackLightStrengthIndex
            2,    // u4HistStretchStrengthIndex
            2,    // u4AntiOverExpStrengthIndex
            2,    // u4TimeLPFStrengthIndex
            {1, 3, 5, 7, 8},    // u4LPFConvergeTable[AE_CCT_STRENGTH_NUM] 
            90,    // u4InDoorEV = 9.0, 10 base 
            0,    // i4BVOffset delta BV = value/10 
            32,    // u4PreviewFlareOffset
            32,    // u4CaptureFlareOffset
            67,    // u4CaptureFlareThres
            64,    // u4VideoFlareOffset
            3,    // u4VideoFlareThres
            64,    // u4CustomFlareOffset
            3,    // u4CustomFlareThres
            64,    // u4StrobeFlareOffset
            3,    // u4StrobeFlareThres
            160,    // u4PrvMaxFlareThres
            0,    // u4PrvMinFlareThres
            160,    // u4VideoMaxFlareThres
            0,    // u4VideoMinFlareThres
            18,    // u4FlatnessThres    // 10 base for flatness condition.
            75,    // u4FlatnessStrength
            //rMeteringSpec
            {
                //rHS_Spec
                {
                    TRUE,//bEnableHistStretch           // enable histogram stretch
                    1024,//u4HistStretchWeight          // Histogram weighting value
                    40,//u4Pcent                      // 
                    160,//u4Thd                        // 0~255
                    75, //74,//u4FlatThd                    // 0~255
                    120,//u4FlatBrightPcent
                    120,//u4FlatDarkPcent
                    //sFlatRatio
                    {
                        1000,  //i4X1
                        1024,  //i4Y1
                        2400,  //i4X2
                        0  //i4Y2
                    },
                    TRUE, //bEnableGreyTextEnhance
                    1800, //u4GreyTextFlatStart, > sFlatRatio.i4X1, < sFlatRatio.i4X2
                    {
                        10,  //i4X1
                        1024,  //i4Y1
                        80,  //i4X2
                        0  //i4Y2
                    }
                },
                //rAOE_Spec
                {
                    TRUE, //bEnableAntiOverExposure
                    1024, //u4AntiOverExpWeight
                    10, //u4Pcent
                    200, //u4Thd
                    TRUE, //bEnableCOEP
                    1, //u4COEPcent
                    106, //u4COEThd
                    0, //u4BVCompRatio
                    //sCOEYRatio;     // the outer y ratio
                    {
                        23,  //i4X1
                        1024,  //i4Y1
                        47,  //i4X2
                        0  //i4Y2
                    },
                    //sCOEDiffRatio;  // inner/outer y difference ratio
                    {
                        1500,  //i4X1
                        0,  //i4Y1
                        2100,  //i4X2
                        1024  //i4Y2
                    }
                },
                //rABL_Spec
                {
                    TRUE,//bEnableBlackLight
                    1024,//u4BackLightWeight
                    400,//u4Pcent
                    22,//u4Thd
                    255, // center luminance
                    256, // final target limitation, 256/128 = 2x
                    //sFgBgEVRatio
                    {
                        2200,  //i4X1
                        0,  //i4Y1
                        4000,  //i4X2
                        1024  //i4Y2
                    },
                    //sBVRatio
                    {
                        3800,  //i4X1
                        0,  //i4Y1
                        5000,  //i4X2
                        1024  //i4Y2
                    }
                },
                //rNS_Spec
                {
                    TRUE, // bEnableNightScene
                    5,//u4Pcent
                    170,//u4Thd
                    72,//u4FlatThd
                    200,//u4BrightTonePcent
                    92,//u4BrightToneThd
                    500,//u4LowBndPcent
                    5,//u4LowBndThd
                    26,//u4LowBndThdLimit
                    50,//u4FlatBrightPcent
                    300,//u4FlatDarkPcent
                    //sFlatRatio
                    {
                        1200,  //i4X1
                        1024,  //i4Y1
                        2400,  //i4X2
                        0  //i4Y2
                    },
                    //sBVRatio
                    {
                        -500,  //i4X1
                        1024,  //i4Y1
                        3000,  //i4X2
                        0  //i4Y2
                    },
                    TRUE, // bEnableNightSkySuppresion
                    //sSkyBVRatio
                    {
                        -4000,  //i4X1
                        1024,  //i4Y1
                        -2000,  //i4X2
                        0  //i4Y2
                    }
                },
                // rTOUCHFD_Spec
                {
                    40, //uMeteringYLowBound;
                    50, //uMeteringYHighBound;
                    40, //uFaceYLowBound;
                    50, //uFaceYHighBound;
                    3, //uFaceCentralWeight;
                    120, //u4MeteringStableMax;
                    80, //u4MeteringStableMin;
                }
            }, //End rMeteringSpec
            // rFlareSpec
            {
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //uPrvFlareWeightArr[16];
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //uVideoFlareWeightArr[16];
                96,                                               //u4FlareStdThrHigh;
                48,                                               //u4FlareStdThrLow;
                0,                                               //u4PrvCapFlareDiff;
                4,                                               //u4FlareMaxStepGap_Fast;
                0,                                               //u4FlareMaxStepGap_Slow;
                1800,                                               //u4FlarMaxStepGapLimitBV;
                0,                                               //u4FlareAEStableCount;
            },
            //rAEMoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                190, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                70, //u4B2TStart
                60, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAEVideoMoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                10, //u4B2TStart
                10, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAEVideo1MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                10, //u4B2TStart
                10, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAEVideo2MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                10, //u4B2TStart
                10, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAECustom1MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                10, //u4B2TStart
                10, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAECustom2MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                10, //u4B2TStart
                10, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAECustom3MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                10, //u4B2TStart
                10, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAECustom4MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                10, //u4B2TStart
                10, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAECustom5MoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150, //u4Bright2TargetEnd
                20, //u4Dark2TargetStart
                90, //u4B2TEnd
                10, //u4B2TStart
                10, //u4D2TEnd
                90, //u4D2TStart
            },
            //rAEFaceMoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                190, //u4Bright2TargetEnd
                10, //u4Dark2TargetStart
                80, //u4B2TEnd
                30, //u4B2TStart
                20, //u4D2TEnd
                60, //u4D2TStart
            },
            //rAETrackingMoveRatio =
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                190, //u4Bright2TargetEnd
                10, //u4Dark2TargetStart
                80, //u4B2TEnd
                30, //u4B2TStart
                20, //u4D2TEnd
                60, //u4D2TStart
            },
            //rAEAOENVRAMParam =
            {
                1,      // i4AOEStrengthIdx: 0 / 1 / 2
                130,      // u4BVCompRatio
                {//rAEAOEAlgParam
                    {//rAEAOEAlgParam[0]
                        47,  //u4Y_Target
                        25,  //u4AOE_OE_percent
                        210,  //u4AOE_OEBound
                        10,  //u4AOE_DarkBound
                        950,  //u4AOE_LowlightPrecent
                        1,  //u4AOE_LowlightBound
                        145,  //u4AOESceneLV_L
                        180,  //u4AOESceneLV_H
                        40,  //u4AOE_SWHdrLE_Bound
                    },
                    {//rAEAOEAlgParam[1]
                        47,  //u4Y_Target
                        25,  //u4AOE_OE_percent
                        210,  //u4AOE_OEBound
                        15,  //u4AOE_DarkBound
                        950,  //u4AOE_LowlightPrecent
                        3,  //u4AOE_LowlightBound
                        145,  //u4AOESceneLV_L
                        180,  //u4AOESceneLV_H
                        40,  //u4AOE_SWHdrLE_Bound
                    },
                    {//rAEAOEAlgParam[2]
                        47,  //u4Y_Target
                        25,  //u4AOE_OE_percent
                        210,  //u4AOE_OEBound
                        25,  //u4AOE_DarkBound
                        950,  //u4AOE_LowlightPrecent
                        8,  //u4AOE_LowlightBound
                        145,  //u4AOESceneLV_L
                        180,  //u4AOESceneLV_H
                        40,  //u4AOE_SWHdrLE_Bound
                    },
                }
            }
        }
    },
    // AWB NVRAM
    {
        {
            // AWB calibration data
            {
                // rUnitGain (unit gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rGoldenGain (golden sample gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rD65Gain (D65 WB gain: 1.0 = 512)
                {
                    836,    // D65Gain_R
                    512,    // D65Gain_G
                    589    // D65Gain_B
                }
            },
            // Original XY coordinate of AWB light source
            {
                // Strobe
                {
                    0,    // i4X
                    0    // i4Y
                },
                // Horizon
                {
                    -494,    // OriX_Hor
                    -333    // OriY_Hor
                },
                // A
                {
                    -355,    // OriX_A
                    -318    // OriY_A
                },
                // TL84
                {
                    -167,    // OriX_TL84
                    -318    // OriY_TL84
                },
                // CWF
                {
                    -87,    // OriX_CWF
                    -441    // OriY_CWF
                },
                // DNP
                {
                    -14,    // OriX_DNP
                    -259    // OriY_DNP
                },
                // D65
                {
                    129,    // OriX_D65
                    -233    // OriY_D65
                },
                // DF
                {
                    0,    // OriX_DF
                    0    // OriY_DF
                }
            },
            // Rotated XY coordinate of AWB light source
            {
                // Strobe
                {
                    0,    // i4X
                    0    // i4Y
                },
                // Horizon
                {
                    -544,    // RotX_Hor
                    -243    // RotY_Hor
                },
                // A
                {
                    -404,    // RotX_A
                    -252    // RotY_A
                },
                // TL84
                {
                    -219,    // RotX_TL84
                    -284    // RotY_TL84
                },
                // CWF
                {
                    -161,    // RotX_CWF
                    -419    // RotY_CWF
                },
                // DNP
                {
                    -58,    // RotX_DNP
                    -253    // RotY_DNP
                },
                // D65
                {
                    87,    // RotX_D65
                    -252    // RotY_D65
                },
                // DF
                {
                    62,    // RotX_DF
                    -399    // RotY_DF
                }
            },
            // AWB gain of AWB light source
            {
                // Strobe 
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Horizon 
                {
                    512,    // AWBGAIN_HOR_R
                    636,    // AWBGAIN_HOR_G
                    1948    // AWBGAIN_HOR_B
                },
                // A 
                {
                    512,    // AWBGAIN_A_R
                    538,    // AWBGAIN_A_G
                    1340    // AWBGAIN_A_B
                },
                // TL84 
                {
                    628,    // AWBGAIN_TL84_R
                    512,    // AWBGAIN_TL84_G
                    986    // AWBGAIN_TL84_B
                },
                // CWF 
                {
                    826,    // AWBGAIN_CWF_R
                    512,    // AWBGAIN_CWF_G
                    1047    // AWBGAIN_CWF_B
                },
                // DNP 
                {
                    713,    // AWBGAIN_DNP_R
                    512,    // AWBGAIN_DNP_G
                    741    // AWBGAIN_DNP_B
                },
                // D65 
                {
                    836,    // AWBGAIN_D65_R
                    512,    // AWBGAIN_D65_G
                    589    // AWBGAIN_D65_B
                },
                // DF 
                {
                    512,    // AWBGAIN_DF_R
                    512,    // AWBGAIN_DF_G
                    512    // AWBGAIN_DF_B
                }
            },
            // Rotation matrix parameter
            {
                10,    // RotationAngle
                252,    // Cos
                44    // Sin
            },
            // Daylight locus parameter
            {
                -184,    // i4SlopeNumerator
                128    // i4SlopeDenominator
            },
            // Predictor gain
            {
                101, // i4PrefRatio100
                // DaylightLocus_L
                {
                    836,    // i4R
                    512,    // i4G
                    589    // i4B
                },
                // DaylightLocus_H
                {
                    697,    // i4R
                    512,    // i4G
                    765    // i4B
                },
                // Temporal General
                {
                    836,    // i4R
                    512,    // i4G
                    589,    // i4B
                }
            },
            // AWB light area
            {
                // Strobe:FIXME
                {
                    0,    // i4RightBound
                    0,    // i4LeftBound
                    0,    // i4UpperBound
                    0    // i4LowerBound
                },
                // Tungsten
                {
                    -293,    // TungRightBound
                    -944,    // TungLeftBound
                    -208,    // TungUpperBound
                    -268    // TungLowerBound
                },
                // Warm fluorescent
                {
                    -293,    // WFluoRightBound
                    -944,    // WFluoLeftBound
                    -268,    // WFluoUpperBound
                    -449    // WFluoLowerBound
                },
                // Fluorescent
                {
                    -98,    // FluoRightBound
                    -293,    // FluoLeftBound
                    -212,    // FluoUpperBound
                    -368    // FluoLowerBound
                },
                // CWF
                {
                -72,    // CWFRightBound
                -293,    // CWFLeftBound
                -368,    // CWFUpperBound
                -464    // CWFLowerBound
                },
                // Daylight
                {
                    117,    // DayRightBound
                    -98,    // DayLeftBound
                    -190,    // DayUpperBound
                    -368    // DayLowerBound
                },
                // Shade
                {
                    447,    // ShadeRightBound
                    117,    // ShadeLeftBound
                    -212,    // ShadeUpperBound
                    -319    // ShadeLowerBound
                },
                // Daylight Fluorescent
                {
                    117,    // DFRightBound
                    -72,    // DFLeftBound
                    -368,    // DFUpperBound
                    -464    // DFLowerBound
                }
            },
            // PWB light area
            {
                // Reference area
                {
                    447,    // PRefRightBound
                    -944,    // PRefLeftBound
                    0,    // PRefUpperBound
                    -464    // PRefLowerBound
                },
                // Daylight
                {
                    142,    // PDayRightBound
                    -98,    // PDayLeftBound
                    -190,    // PDayUpperBound
                    -368    // PDayLowerBound
                },
                // Cloudy daylight
                {
                    242,    // PCloudyRightBound
                    67,    // PCloudyLeftBound
                    -190,    // PCloudyUpperBound
                    -368    // PCloudyLowerBound
                },
                // Shade
                {
                    342,    // PShadeRightBound
                    67,    // PShadeLeftBound
                    -190,    // PShadeUpperBound
                    -368    // PShadeLowerBound
                },
                // Twilight
                {
                    -98,    // PTwiRightBound
                    -258,    // PTwiLeftBound
                    -190,    // PTwiUpperBound
                    -368    // PTwiLowerBound
                },
                // Fluorescent
                {
                    137,    // PFluoRightBound
                    -319,    // PFluoLeftBound
                    -202,    // PFluoUpperBound
                    -469    // PFluoLowerBound
                },
                // Warm fluorescent
                {
                    -304,    // PWFluoRightBound
                    -504,    // PWFluoLeftBound
                    -202,    // PWFluoUpperBound
                    -469    // PWFluoLowerBound
                },
                // Incandescent
                {
                    -304,    // PIncaRightBound
                    -504,    // PIncaLeftBound
                    -190,    // PIncaUpperBound
                    -368    // PIncaLowerBound
                },
                // Gray World
                {
                    5000,    // PGWRightBound
                    -5000,    // PGWLeftBound
                    5000,    // PGWUpperBound
                    -5000    // PGWLowerBound
                }
            },
            // PWB default gain	
            {
                // Daylight
                {
                    812,    // PWB_Day_R
                    512,    // PWB_Day_G
                    673    // PWB_Day_B
                },
                // Cloudy daylight
                {
                    940,    // PWB_Cloudy_R
                    512,    // PWB_Cloudy_G
                    546    // PWB_Cloudy_B
                },
                // Shade
                {
                    993,    // PWB_Shade_R
                    512,    // PWB_Shade_G
                    505    // PWB_Shade_B
                },
                // Twilight
                {
                    652,    // PWB_Twi_R
                    512,    // PWB_Twi_G
                    920    // PWB_Twi_B
                },
                // Fluorescent
                {
                    784,    // PWB_Fluo_R
                    512,    // PWB_Fluo_G
                    855    // PWB_Fluo_B
                },
                // Warm fluorescent
                {
                    555,    // PWB_WFluo_R
                    512,    // PWB_WFluo_G
                    1396    // PWB_WFluo_B
                },
                // Incandescent
                {
                    508,    // PWB_Inca_R
                    512,    // PWB_Inca_G
                    1312    // PWB_Inca_B
                },
                // Gray World
                {
                    512,    // PWB_GW_R
                    512,    // PWB_GW_G
                    512    // PWB_GW_B
                }
            },
            // AWB preference color	
            {
                // Tungsten
                {
                    0,    // TUNG_SLIDER
                    7822    // TUNG_OFFS
                },
                // Warm fluorescent	
                {
                    0,    // WFluo_SLIDER
                    6261    // WFluo_OFFS
                },
                // Shade
                {
                    0,    // Shade_SLIDER
                    1415    // Shade_OFFS
                },
                // Preference gain: strobe
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: tungsten
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: warm fluorescent
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: fluorescent
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: CWF
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: daylight
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: shade
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: daylight fluorescent
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                }
            },
            // Algorithm Tuning Paramter
            {
                // AWB Backup Enable
                0,

                // AWB LSC Gain
                {
                    697,        // i4R
                    512,        // i4G
                    765,        // i4B
                },
                // Parent block weight parameter
                {
                    1,      // bEnable
                    6           // i4ScalingFactor: [6] 1~12, [7] 1~6, [8] 1~3, [9] 1~2, [>=10]: 1
                },
                // AWB LV threshold for predictor
                {
                    115,    // i4InitLVThr_L
                    155,    // i4InitLVThr_H
                    100      // i4EnqueueLVThr
                },
                // AWB number threshold for temporal predictor
                {
                    65,     // i4Neutral_ParentBlk_Thr
                    //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   2,   2,   2,   2,   2,   2,   2,   2}  // (%) i4CWFDF_LUTThr
                },
                // AWB light neutral noise reduction for outdoor
                {
                    //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                    // Non neutral
                    {   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Flurescent
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // CWF
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Daylight
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2},  // (%)
                    // DF
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                },
                // AWB feature detection
                {
                // Sunset Prop
                    {
                        1,          // i4Enable
                        140,        // i4LVThr
                        {
                            -18,   // i4Sunset_BoundXr_Thr
                            -253     // i4Sunset_BoundYr_Thr
                        },
                        10,         // i4SunsetCountThr
                        0,          // i4SunsetCountRatio_L
                        171         // i4SunsetCountRatio_H
                    },
                    // Shade F Detection
                    {
                        1,          // i4Enable
                        115,        // i4LVThr
                        {
                            -179,   // i4BoundXrThr
                            -252     // i4BoundYrThr
                        },
                        128         // i4DaylightProb
                    },
                    // Shade CWF Detection
                    {
                        1,          // i4Enable
                        110,        // i4LVThr
                        {
                            -161,   // i4BoundXrThr
                            -419     // i4BoundYrThr
                        },
                        128         // i4DaylightProb
                    },
                    // Low CCT
                    {
                        1,          // i4Enable
                        256,        // i4SpeedRatio
                        {
                            -564,   // i4BoundXrThr
                            154     // i4BoundYrThr
                        }
                    }
                },
                // AWB Gain Limit
                {
                    // rNormalLowCCT
                    {
                        1,      // Gain Limit Enable
                        1280     // Gain ratio
                    },
                    // rPrefLowCCT
                    {
                        1,      // Gain Limit Enable
                        1280     // Gain ratio
                    },
                },
                // AWB non-neutral probability for spatial and temporal weighting look-up table (Max: 100; Min: 0)
                {
                    //LV0   1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  70,  30,  20,  10,   0,   0,   0,   0}
                },
                // AWB daylight locus probability look-up table (Max: 100; Min: 0)
                {   //LV0    1     2     3      4     5     6     7     8      9      10     11    12   13     14    15   16    17    18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0,   0}, // Strobe
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0}, // Tungsten
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0}, // Warm fluorescent
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  70,  40,  20,   0,   0,   0}, // Fluorescent
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,  12,   0,   0,   0,   0}, // CWF
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  50,  30,  20}, // Daylight
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0,   0}, // Shade
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,  12,   0,   0,   0,   0}, // Daylight fluorescent
                }
            },
            // CCT estimation
            {
                // CCT
                {
                    2300,    // i4CCT[0]
                    2850,    // i4CCT[1]
                    3750,    // i4CCT[2]
                    5100,    // i4CCT[3]
                    6500     // i4CCT[4]
                },
                // Rotated X coordinate
                {
                -631,    // i4RotatedXCoordinate[0]
                -491,    // i4RotatedXCoordinate[1]
                -306,    // i4RotatedXCoordinate[2]
                -145,    // i4RotatedXCoordinate[3]
                0    // i4RotatedXCoordinate[4]
                }
            }
        },
        {
            // AWB calibration data
            {
                // rUnitGain (unit gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rGoldenGain (golden sample gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)
                {
                    0,    // i4R
                    0,    // i4G
                    0    // i4B
                },
                // rD65Gain (D65 WB gain: 1.0 = 512)
                {
                    836,    // D65Gain_R
                    512,    // D65Gain_G
                    589    // D65Gain_B
                }
            },
            // Original XY coordinate of AWB light source
            {
                // Strobe
                {
                    0,    // i4X
                    0    // i4Y
                },
                // Horizon
                {
                    -494,    // OriX_Hor
                    -333    // OriY_Hor
                },
                // A
                {
                    -355,    // OriX_A
                    -318    // OriY_A
                },
                // TL84
                {
                    -167,    // OriX_TL84
                    -318    // OriY_TL84
                },
                // CWF
                {
                    -87,    // OriX_CWF
                    -441    // OriY_CWF
                },
                // DNP
                {
                    -14,    // OriX_DNP
                    -259    // OriY_DNP
                },
                // D65
                {
                    129,    // OriX_D65
                    -233    // OriY_D65
                },
                // DF
                {
                    0,    // OriX_DF
                    0    // OriY_DF
                }
            },
            // Rotated XY coordinate of AWB light source
            {
                // Strobe
                {
                    0,    // i4X
                    0    // i4Y
                },
                // Horizon
                {
                    -544,    // RotX_Hor
                    -243    // RotY_Hor
                },
                // A
                {
                    -404,    // RotX_A
                    -252    // RotY_A
                },
                // TL84
                {
                    -219,    // RotX_TL84
                    -284    // RotY_TL84
                },
                // CWF
                {
                    -161,    // RotX_CWF
                    -419    // RotY_CWF
                },
                // DNP
                {
                    -58,    // RotX_DNP
                    -253    // RotY_DNP
                },
                // D65
                {
                    87,    // RotX_D65
                    -252    // RotY_D65
                },
                // DF
                {
                    62,    // RotX_DF
                    -399    // RotY_DF
                }
            },
            // AWB gain of AWB light source
            {
                // Strobe 
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Horizon 
                {
                    512,    // AWBGAIN_HOR_R
                    636,    // AWBGAIN_HOR_G
                    1948    // AWBGAIN_HOR_B
                },
                // A 
                {
                    512,    // AWBGAIN_A_R
                    538,    // AWBGAIN_A_G
                    1340    // AWBGAIN_A_B
                },
                // TL84 
                {
                    628,    // AWBGAIN_TL84_R
                    512,    // AWBGAIN_TL84_G
                    986    // AWBGAIN_TL84_B
                },
                // CWF 
                {
                    826,    // AWBGAIN_CWF_R
                    512,    // AWBGAIN_CWF_G
                    1047    // AWBGAIN_CWF_B
                },
                // DNP 
                {
                    713,    // AWBGAIN_DNP_R
                    512,    // AWBGAIN_DNP_G
                    741    // AWBGAIN_DNP_B
                },
                // D65 
                {
                    836,    // AWBGAIN_D65_R
                    512,    // AWBGAIN_D65_G
                    589    // AWBGAIN_D65_B
                },
                // DF 
                {
                    512,    // AWBGAIN_DF_R
                    512,    // AWBGAIN_DF_G
                    512    // AWBGAIN_DF_B
                }
            },
            // Rotation matrix parameter
            {
                10,    // RotationAngle
                252,    // Cos
                44    // Sin
            },
            // Daylight locus parameter
            {
                -184,    // i4SlopeNumerator
                128    // i4SlopeDenominator
            },
            // Predictor gain
            {
                101, // i4PrefRatio100
                // DaylightLocus_L
                {
                    836,    // i4R
                    512,    // i4G
                    589    // i4B
                },
                // DaylightLocus_H
                {
                    697,    // i4R
                    512,    // i4G
                    765    // i4B
                },
                // Temporal General
                {
                    836,    // i4R
                    512,    // i4G
                    589,    // i4B
                }
            },
            // AWB light area
            {
                // Strobe:FIXME
                {
                    0,    // i4RightBound
                    0,    // i4LeftBound
                    0,    // i4UpperBound
                    0    // i4LowerBound
                },
                // Tungsten
                {
                    -293,    // TungRightBound
                    -944,    // TungLeftBound
                    -208,    // TungUpperBound
                    -268    // TungLowerBound
                },
                // Warm fluorescent
                {
                    -293,    // WFluoRightBound
                    -944,    // WFluoLeftBound
                    -268,    // WFluoUpperBound
                    -449    // WFluoLowerBound
                },
                // Fluorescent
                {
                    -98,    // FluoRightBound
                    -293,    // FluoLeftBound
                    -212,    // FluoUpperBound
                    -368    // FluoLowerBound
                },
                // CWF
                {
                -72,    // CWFRightBound
                -293,    // CWFLeftBound
                -368,    // CWFUpperBound
                -464    // CWFLowerBound
                },
                // Daylight
                {
                    117,    // DayRightBound
                    -98,    // DayLeftBound
                    -212,    // DayUpperBound
                    -368    // DayLowerBound
                },
                // Shade
                {
                    447,    // ShadeRightBound
                    117,    // ShadeLeftBound
                    -212,    // ShadeUpperBound
                    -319    // ShadeLowerBound
                },
                // Daylight Fluorescent
                {
                    117,    // DFRightBound
                    -72,    // DFLeftBound
                    -368,    // DFUpperBound
                    -464    // DFLowerBound
                }
            },
            // PWB light area
            {
                // Reference area
                {
                    447,    // PRefRightBound
                    -944,    // PRefLeftBound
                    -183,    // PRefUpperBound
                    -464    // PRefLowerBound
                },
                // Daylight
                {
                    142,    // PDayRightBound
                    -98,    // PDayLeftBound
                    -212,    // PDayUpperBound
                    -368    // PDayLowerBound
                },
                // Cloudy daylight
                {
                    242,    // PCloudyRightBound
                    67,    // PCloudyLeftBound
                    -212,    // PCloudyUpperBound
                    -368    // PCloudyLowerBound
                },
                // Shade
                {
                    342,    // PShadeRightBound
                    67,    // PShadeLeftBound
                    -212,    // PShadeUpperBound
                    -368    // PShadeLowerBound
                },
                // Twilight
                {
                    -98,    // PTwiRightBound
                    -258,    // PTwiLeftBound
                    -212,    // PTwiUpperBound
                    -368    // PTwiLowerBound
                },
                // Fluorescent
                {
                    137,    // PFluoRightBound
                    -319,    // PFluoLeftBound
                    -202,    // PFluoUpperBound
                    -469    // PFluoLowerBound
                },
                // Warm fluorescent
                {
                    -304,    // PWFluoRightBound
                    -504,    // PWFluoLeftBound
                    -202,    // PWFluoUpperBound
                    -469    // PWFluoLowerBound
                },
                // Incandescent
                {
                    -304,    // PIncaRightBound
                    -504,    // PIncaLeftBound
                    -212,    // PIncaUpperBound
                    -368    // PIncaLowerBound
                },
                // Gray World
                {
                    5000,    // PGWRightBound
                    -5000,    // PGWLeftBound
                    5000,    // PGWUpperBound
                    -5000    // PGWLowerBound
                }
            },
            // PWB default gain	
            {
                // Daylight
                {
                    826,    // PWB_Day_R
                    512,    // PWB_Day_G
                    681    // PWB_Day_B
                },
                // Cloudy daylight
                {
                    956,    // PWB_Cloudy_R
                    512,    // PWB_Cloudy_G
                    553    // PWB_Cloudy_B
                },
                // Shade
                {
                    1011,    // PWB_Shade_R
                    512,    // PWB_Shade_G
                    511    // PWB_Shade_B
                },
                // Twilight
                {
                    663,    // PWB_Twi_R
                    512,    // PWB_Twi_G
                    932    // PWB_Twi_B
                },
                // Fluorescent
                {
                    784,    // PWB_Fluo_R
                    512,    // PWB_Fluo_G
                    855    // PWB_Fluo_B
                },
                // Warm fluorescent
                {
                    555,    // PWB_WFluo_R
                    512,    // PWB_WFluo_G
                    1396    // PWB_WFluo_B
                },
                // Incandescent
                {
                    517,    // PWB_Inca_R
                    512,    // PWB_Inca_G
                    1328    // PWB_Inca_B
                },
                // Gray World
                {
                    512,    // PWB_GW_R
                    512,    // PWB_GW_G
                    512    // PWB_GW_B
                }
            },
            // AWB preference color	
            {
                // Tungsten
                {
                    0,    // TUNG_SLIDER
                    7822    // TUNG_OFFS
                },
                // Warm fluorescent	
                {
                    0,    // WFluo_SLIDER
                    6261    // WFluo_OFFS
                },
                // Shade
                {
                    0,    // Shade_SLIDER
                    1415    // Shade_OFFS
                },
                // Preference gain: strobe
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: tungsten
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: warm fluorescent
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: fluorescent
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: CWF
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: daylight
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: shade
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                },
                // Preference gain: daylight fluorescent
                {
                    512,    // i4R
                    512,    // i4G
                    512    // i4B
                }
            },
            // Algorithm Tuning Paramter
            {
                // AWB Backup Enable
                0,

                // AWB LSC Gain
                {
                    697,        // i4R
                    512,        // i4G
                    765,        // i4B
                },
                // Parent block weight parameter
                {
                    1,      // bEnable
                    6           // i4ScalingFactor: [6] 1~12, [7] 1~6, [8] 1~3, [9] 1~2, [>=10]: 1
                },
                // AWB LV threshold for predictor
                {
                    115,    // i4InitLVThr_L
                    155,    // i4InitLVThr_H
                    100      // i4EnqueueLVThr
                },
                // AWB number threshold for temporal predictor
                {
                    65,     // i4Neutral_ParentBlk_Thr
                    //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   2,   2,   2,   2,   2,   2,   2,   2}  // (%) i4CWFDF_LUTThr
                },
                // AWB light neutral noise reduction for outdoor
                {
                    //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                    // Non neutral
                    {   3,   3,   3,   3,   3,   3,   3,   3,   3,   3,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Flurescent
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // CWF
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Daylight
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   2,   2,   2,   2,   2,   2,   2,   2},  // (%)
                    // DF
                    {   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                },
                // AWB feature detection
                {
                // Sunset Prop
                    {
                        1,          // i4Enable
                        140,        // i4LVThr
                        {
                            -18,   // i4Sunset_BoundXr_Thr
                            -253     // i4Sunset_BoundYr_Thr
                        },
                        10,         // i4SunsetCountThr
                        0,          // i4SunsetCountRatio_L
                        171         // i4SunsetCountRatio_H
                    },
                    // Shade F Detection
                    {
                        1,          // i4Enable
                        115,        // i4LVThr
                        {
                            -179,   // i4BoundXrThr
                            -252     // i4BoundYrThr
                        },
                        128         // i4DaylightProb
                    },
                    // Shade CWF Detection
                    {
                        1,          // i4Enable
                        110,        // i4LVThr
                        {
                            -161,   // i4BoundXrThr
                            -419     // i4BoundYrThr
                        },
                        128         // i4DaylightProb
                    },
                    // Low CCT
                    {
                        1,          // i4Enable
                        256,        // i4SpeedRatio
                        {
                            -564,   // i4BoundXrThr
                            154     // i4BoundYrThr
                        }
                    }
                },
                // AWB Gain Limit
                {
                    // rNormalLowCCT
                    {
                        1,      // Gain Limit Enable
                        1280     // Gain ratio
                    },
                    // rPrefLowCCT
                    {
                        1,      // Gain Limit Enable
                        1280     // Gain ratio
                    },
                },
                // AWB non-neutral probability for spatial and temporal weighting look-up table (Max: 100; Min: 0)
                {
                    //LV0   1    2    3    4    5    6    7    8    9   10   11   12   13   14   15   16   17   18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  70,  30,  20,  10,   0,   0,   0,   0}
                },
                // AWB daylight locus probability look-up table (Max: 100; Min: 0)
                {   //LV0    1     2     3      4     5     6     7     8      9      10     11    12   13     14    15   16    17    18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0,   0}, // Strobe
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0}, // Tungsten
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0}, // Warm fluorescent
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  70,  40,  20,   0,   0,   0}, // Fluorescent
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,  12,   0,   0,   0,   0}, // CWF
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  50,  30,  20}, // Daylight
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0,   0}, // Shade
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,  12,   0,   0,   0,   0}, // Daylight fluorescent
                }
            },
            // CCT estimation
            {
                // CCT
                {
                    2300,    // i4CCT[0]
                    2850,    // i4CCT[1]
                    3750,    // i4CCT[2]
                    5100,    // i4CCT[3]
                    6500     // i4CCT[4]
                },
                // Rotated X coordinate
                {
                -631,    // i4RotatedXCoordinate[0]
                -491,    // i4RotatedXCoordinate[1]
                -306,    // i4RotatedXCoordinate[2]
                -145,    // i4RotatedXCoordinate[3]
                0    // i4RotatedXCoordinate[4]
                }
            }
        },
    },
    // Flash AWB NVRAM
    {
#include INCLUDE_FILENAME_FLASH_AWB_PARA
    },
};

#include INCLUDE_FILENAME_ISP_LSC_PARAM                                                                        
//};  //  namespace                                                                                            
const CAMERA_TSF_TBL_STRUCT CAMERA_TSF_DEFAULT_VALUE =                                                         
{
        {
                1,  // isTsfEn
                2,  // tsfCtIdx
                {20, 2000, -110, -110, 512, 512, 512, 0}    // rAWBInput[8]
        },
    #include INCLUDE_FILENAME_TSF_PARA                                                                         
    #include INCLUDE_FILENAME_TSF_DATA                                                                         
}; 
const NVRAM_CAMERA_FEATURE_STRUCT CAMERA_FEATURE_DEFAULT_VALUE =
{
#include INCLUDE_FILENAME_FEATURE_PARA
};

typedef NSFeature::RAWSensorInfo<SENSOR_ID> SensorInfoSingleton_T;                                             
                                                                                                               
                                                                                                               
namespace NSFeature {                                                                                          
template <>                                                                                                    
UINT32                                                                                                         
SensorInfoSingleton_T::                                                                                        
impGetDefaultData(CAMERA_DATA_TYPE_ENUM const CameraDataType, VOID*const pDataBuf, UINT32 const size) const    
{                                                                                                              
    UINT32 dataSize[CAMERA_DATA_TYPE_NUM] = {sizeof(NVRAM_CAMERA_ISP_PARAM_STRUCT),                            
                                             sizeof(NVRAM_CAMERA_3A_STRUCT),                                   
                                             sizeof(NVRAM_CAMERA_SHADING_STRUCT),                              
                                             sizeof(NVRAM_LENS_PARA_STRUCT),                                   
                                             sizeof(AE_PLINETABLE_T),                                           
                                             0,                                                                
                                             sizeof(CAMERA_TSF_TBL_STRUCT),                                    
                                             0,
                                             sizeof(NVRAM_CAMERA_FEATURE_STRUCT)
                                            };
                                                                                                               
    if (CameraDataType > CAMERA_NVRAM_DATA_FEATURE || NULL == pDataBuf || (size < dataSize[CameraDataType]))   
    {                                                                                                          
        return 1;                                                                                              
    }                                                                                                          
                                                                                                               
    switch(CameraDataType)                                                                                     
    {                                                                                                          
        case CAMERA_NVRAM_DATA_ISP:                                                                            
            memcpy(pDataBuf,&CAMERA_ISP_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_ISP_PARAM_STRUCT));                  
            break;                                                                                             
        case CAMERA_NVRAM_DATA_3A:                                                                             
            memcpy(pDataBuf,&CAMERA_3A_NVRAM_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_3A_STRUCT));                    
            break;                                                                                             
        case CAMERA_NVRAM_DATA_SHADING:                                                                        
            memcpy(pDataBuf,&CAMERA_SHADING_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_SHADING_STRUCT));                
            break;                                                                                             
        case CAMERA_DATA_AE_PLINETABLE:                                                                        
            memcpy(pDataBuf,&g_PlineTableMapping,sizeof(AE_PLINETABLE_T));                                     
            break;                                                                                             
        case CAMERA_DATA_TSF_TABLE:                                                                            
            memcpy(pDataBuf,&CAMERA_TSF_DEFAULT_VALUE,sizeof(CAMERA_TSF_TBL_STRUCT));                          
            break;                                                                                             
        case CAMERA_NVRAM_DATA_FEATURE:                                                                            
            memcpy(pDataBuf,&CAMERA_FEATURE_DEFAULT_VALUE,sizeof(NVRAM_CAMERA_FEATURE_STRUCT));                          
            break;                                                                                             
        default:                                                                                               
            break;                                                                                         
    }                                                                                                          
    return 0;                                                                                                  
}};  //  NSFeature                                                                                             
