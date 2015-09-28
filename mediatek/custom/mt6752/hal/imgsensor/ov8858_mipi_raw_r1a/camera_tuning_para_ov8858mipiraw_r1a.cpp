#include <utils/Log.h>                                                                                   
#include <fcntl.h>                                                                                       
#include <math.h>                                                                                        
                                                                                                         
#include "camera_custom_nvram.h"                                                                         
#include "camera_custom_sensor.h"                                                                        
#include "image_sensor.h"                                                                                
#include "kd_imgsensor_define.h"                                                                         
#include "camera_AE_PLineTable_ov8858mipiraw_r1a.h"                                                    
#include "camera_info_ov8858mipiraw_r1a.h"                                                             
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
        68600,      // i4R_AVG
        14986,      // i4R_STD
        101600,      // i4B_AVG
        21246,      // i4B_STD
        1359,      // i4R_MAX
        1063,      // i4R_MIN
        943,      // i4G_MAX
        869,      // i4G_MIN
        1525,      // i4B_MAX
        937,      // i4B_MIN
        {  // i4P00[9]
            11842500, -6140000, -585000, -2317500, 9025000, -1590000, -495000, -6037500, 11657500
        },
        {  // i4P10[9]
            2612656, -2927618, 319935, -8703, -580994, 586513, 238210, 989057, -1241597
        },
        {  // i4P01[9]
            2033844, -2218862, 196696, -508981, -493757, 993830, -181245, -869463, 1039066
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
          536,    // i4R
          512,    // i4G
          1221    // i4B
        },
        // TL84
        {
          592,    // i4R
          512,    // i4G
          1051    // i4B
        },
        // CWF
        {
          752,    // i4R
          512,    // i4G
          1074    // i4B
        },
        // D65
        {
          864,    // i4R
          512,    // i4G
          718    // i4B
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
            1280,    // u4MinGain, 1024 base = 1x
            10512,    // u4MaxGain, 16x
            39,    // u4MiniISOGain, ISOxx  
            128,    // u4GainStepUnit, 1x/8 
            25915,    // u4PreExpUnit 
            30,    // u4PreMaxFrameRate
            13039,    // u4VideoExpUnit  
            30,    // u4VideoMaxFrameRate 
            1024,    // u4Video2PreRatio, 1024 base = 1x 
            13039,    // u4CapExpUnit 
            30,    // u4CapMaxFrameRate
            1024,    // u4Cap2PreRatio, 1024 base = 1x
            15256,    // u4Video1ExpUnit
            120,    // u4Video1MaxFrameRate
            1024,    // u4Video12PreRatio, 1024 base = 1x
            25915,    // u4Video2ExpUnit
            30,    // u4Video2MaxFrameRate
            1024,    // u4Video22PreRatio, 1024 base = 1x
            19770,    // u4Custom1ExpUnit
            30,    // u4Custom1MaxFrameRate
            1024,    // u4Custom12PreRatio, 1024 base = 1x
            19770,    // u4Custom2ExpUnit
            30,    // u4Custom2MaxFrameRate
            1024,    // u4Custom22PreRatio, 1024 base = 1x
            19770,    // u4Custom3ExpUnit
            30,    // u4Custom3MaxFrameRate
            1024,    // u4Custom32PreRatio, 1024 base = 1x
            19770,    // u4Custom4ExpUnit
            30,    // u4Custom4MaxFrameRate
            1024,    // u4Custom42PreRatio, 1024 base = 1x
            19770,    // u4Custom5ExpUnit
            30,    // u4Custom5MaxFrameRate
            1024,    // u4Custom52PreRatio, 1024 base = 1x
            20,    // u4LensFno, Fno = 2.8
            350    // u4FocusLength_100x
         },                                                                                              
         // rHistConfig                                                                                  
        {                                                                                                
            4, // 2,   // u4HistHighThres                                                                
            40,  // u4HistLowThres                                                                       
            2,   // u4MostBrightRatio                                                                    
            1,   // u4MostDarkRatio                                                                      
            160, // u4CentralHighBound                                                                   
            20,  // u4CentralLowBound                                                                    
            {240, 230, 220, 210, 200}, // u4OverExpThres[AE_CCT_STRENGTH_NUM]                            
            {62, 70, 82, 108, 141},  // u4HistStretchThres[AE_CCT_STRENGTH_NUM]                        
            {18, 22, 26, 30, 34}       // u4BlackLightThres[AE_CCT_STRENGTH_NUM]                         
        },                                                                                               
        // rCCTConfig                                                                                    
        {                                                                                                
            TRUE,            // bEnableBlackLight
            TRUE,            // bEnableHistStretch
            TRUE,           // bEnableAntiOverExposure
            TRUE,            // bEnableTimeLPF
            FALSE,    // bEnableCaptureThres
            FALSE,    // bEnableVideoThres
            FALSE,    // bEnableVideo1Thres
            FALSE,    // bEnableVideo2Thres
            FALSE,    // bEnableCustom1Thres
            FALSE,    // bEnableCustom2Thres
            FALSE,    // bEnableCustom3Thres
            FALSE,    // bEnableCustom4Thres
            FALSE,    // bEnableCustom5Thres
            FALSE,    // bEnableStrobeThres
            47,                // u4AETarget                                                             
            47,                // u4StrobeAETarget                                                       
                                                                                                         
            50,                // u4InitIndex                                                            
            4,                 // u4BackLightWeight                                                      
            32,                // u4HistStretchWeight                                                    
            4,                 // u4AntiOverExpWeight                                                    
            2,                 // u4BlackLightStrengthIndex                                              
            2, // 2,                 // u4HistStretchStrengthIndex                                       
            2,                 // u4AntiOverExpStrengthIndex                                             
            2,                 // u4TimeLPFStrengthIndex                                                 
            {1, 3, 5, 7, 8}, // u4LPFConvergeTable[AE_CCT_STRENGTH_NUM]                                  
            90,                // u4InDoorEV = 9.0, 10 base                                              
            3,               // i4BVOffset delta BV = -2.3
            64,                 // u4PreviewFlareOffset
            64,                 // u4PreviewFlareOffset                                                  
            3,                 // u4CaptureFlareThres
            64,                 // u4CaptureFlareOffset                                                  
            3,                 // u4CaptureFlareThres                                                    
            64,                 // u4VideoFlareOffset                                                    
            3,                 // u4VideoFlareThres                                                      
            64,                 // u4StrobeFlareOffset                                                   
            3,                 // u4StrobeFlareThres                                                     
            160,                 // u4PrvMaxFlareThres                                                   
            0,                 // u4PrvMinFlareThres                                                     
            160,                 // u4VideoMaxFlareThres                                                 
            0,                 // u4VideoMinFlareThres                                                   
            18,                // u4FlatnessThres              // 10 base for flatness condition.        
            75,                // u4FlatnessStrength                                                     
                        //rMeteringSpec
                        {
                                //rHS_Spec
                                {
                                        TRUE,//bEnableHistStretch           // enable histogram stretch
                                        1024,//u4HistStretchWeight          // Histogram weighting value
                                        40,//u4Pcent                      // 1%=10, 0~1000
                                        160,//u4Thd                        // 0~255
                                        75,//u4FlatThd                    // 0~255

                                        120,//u4FlatBrightPcent
                                        120,//u4FlatDarkPcent
                                        //sFlatRatio
                                        {
                                            1000, //i4X1
                                            1024,  //i4Y1
                                            2400, //i4X2
                                            0     //i4Y2
                                        },
                    TRUE, //bEnableGreyTextEnhance
                    1800, //u4GreyTextFlatStart, > sFlatRatio.i4X1, < sFlatRatio.i4X2
                    {
                        10,     //i4X1
                        1024,   //i4Y1
                        80,     //i4X2
                        0       //i4Y2
                    }
                                },
                                //rAOE_Spec
                                {
                                        TRUE,//bEnableAntiOverExposure
                                        1024,//u4AntiOverExpWeight
                                        10,//u4Pcent
                                        200,//u4Thd
                                        TRUE,//bEnableCOEP
                                        1,//u4COEPcent
                                        106,//u4COEThd
                                        0,  // u4BVCompRatio
                                        //sCOEYRatio;     // the outer y ratio
                                        {
                                               23,   //i4X1
                                                1024,  //i4Y1
                                                47,   //i4X2
                                                0     //i4Y2
                                        },
                                       //sCOEDiffRatio;  // inner/outer y difference ratio
                                        {
                                                1500, //i4X1
                                                0,    //i4Y1
                                                2100, //i4X2
                                                1024   //i4Y2
                                        }
                                },
                                //rABL_Spec
                                {
                                        TRUE,//bEnableBlackLigh
                                        1024,//u4BackLightWeigh
                                        400,//u4Pcent
                                        22,//u4Thd,
                                        255, // center luminance
                                        256, // final target limitation, 256/128 = 2x
                                        //sFgBgEVRatio
                                        {
                                                2200, //i4X1
                                                0,    //i4Y1
                                                4000, //i4X2
                                                1024   //i4Y2
                                        },
                                        //sBVRatio
                                        {
                                                3800,//i4X1
                                                0,   //i4Y1
                                                5000,//i4X2
                                                1024  //i4Y2
                                        }
                                },
                                //rNS_Spec
                                {
                                        TRUE, // bEnableNightScene
                                        5,    //u4Pcent
                    170,  //u4Thd
                                        72,   //u4FlatThd
                                        200,  //u4BrightTonePcent
                    92, //u4BrightToneThd
                                        500,  //u4LowBndPcent
                                        5,    //u4LowBndThdMul, <1024, u4AETarget*u4LowBndThdMul/1024
                    26,    //u4LowBndThdLimit

                                        50,  //u4FlatBrightPcent;
                                        300,   //u4FlatDarkPcent;
                                        //sFlatRatio
                                        {
                                                1200, //i4X1
                                                1024, //i4Y1
                        2400, //i4X2
                                                0    //i4Y2
                                        },
                                        //sBVRatio
                                        {
                                                -500, //i4X1
                                                1024,  //i4Y1
                        3000, //i4X2
                                                0     //i4Y2
                                        },
                                        TRUE, // bEnableNightSkySuppresion
                                        //sSkyBVRatio
                                        {
                                                -4000, //i4X1
                                                1024, //i4X2
                                                -2000,  //i4Y1
                                                0     //i4Y2
                                        }
                            },
                            // rTOUCHFD_Spec
                            {
                                40,
                                50,
                                40,
                                50,
                                3,
                                120,
                                80,
                            }
                        }, //End rMeteringSpec
                        // rFlareSpec
                        {
                            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                            96,
                            48,
                            0,
                            4,
                            0,
                            1800,
                            0,
                        },
                        //rAEMoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            190, //u4Bright2TargetEnd
                            20,   //u4Dark2TargetStart
                            90, //u4B2TEnd
                            70,  //u4B2TStart
                            60,  //u4D2TEnd
                            90,  //u4D2TStart
                        },

                        //rAEVideoMoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            150,  //u4Bright2TargetEnd
                            20,    //u4Dark2TargetStart
                            90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                            90,  //u4D2TStart
                        },

            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },
            {
                100, //u4SpeedUpRatio
                100, //u4GlobalRatio
                150,  //u4Bright2TargetEnd
                20,    //u4Dark2TargetStart
                90, //u4B2TEnd
                10,  //u4B2TStart
                10,  //u4D2TEnd
                90,  //u4D2TStart
            },
                        //rAEFaceMoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            190,  //u4Bright2TargetEnd
                            10,    //u4Dark2TargetStart
                            80, //u4B2TEnd
                            30,  //u4D2TEnd
                20,  //u4D2TEnd
                            60,  //u4D2TStart
                        },

                        //rAETrackingMoveRatio =
                        {
                            100, //u4SpeedUpRatio
                            100, //u4GlobalRatio
                            190,  //u4Bright2TargetEnd
                            10,    //u4Dark2TargetStart
                            80, //u4B2TEnd
                            30,  //u4D2TEnd
                20,  //u4D2TEnd
                            60,  //u4D2TStart
                        },
            //rAEAOENVRAMParam =
            {
                1,      // i4AOEStrengthIdx: 0 / 1 / 2
                130,    // u4BVCompRatio
                {
                {
                     47,  //u4Y_Target
                        20,  //u4AOE_OE_percent
                     160,  //u4AOE_OEBound
                        10,    //u4AOE_DarkBound
                     950,    //u4AOE_LowlightPrecent
                        1,    //u4AOE_LowlightBound
                        145,    //u4AOESceneLV_L
                        180,    //u4AOESceneLV_H
                     40,    //u4AOE_SWHdrLE_Bound
                },
                {
                     47,  //u4Y_Target
                        20,  //u4AOE_OE_percent
                     180,  //u4AOE_OEBound
                        15, //20,    //u4AOE_DarkBound
                     950,    //u4AOE_LowlightPrecent
                        3, //10,    //u4AOE_LowlightBound
                        145,    //u4AOESceneLV_L
                        180,    //u4AOESceneLV_H
                     40,    //u4AOE_SWHdrLE_Bound
                },
                {
                     47,  //u4Y_Target
                        20,  //u4AOE_OE_percent
                     200,  //u4AOE_OEBound
                     25,    //u4AOE_DarkBound
                     950,    //u4AOE_LowlightPrecent
                        8,    //u4AOE_LowlightBound
                        145,    //u4AOESceneLV_L
                        180,    //u4AOESceneLV_H
                     40,    //u4AOE_SWHdrLE_Bound
                }
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
			0,	// i4R		
			0,	// i4G				
			0	// i4B				
		},			
		// rGoldenGain (golden sample gain: 1.0 = 512)					
		{						
			0,	// i4R				
			0,	// i4G				
			0	// i4B				
		},						
		// rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)						
		{						
			0,	// i4R				
			0,	// i4G				
			0	// i4B				
		},						
		// rD65Gain (D65 WB gain: 1.0 = 512)		
		{						
                    813,    // D65Gain_R
                    512,    // D65Gain_G
                    741    // D65Gain_B
		}						
	},							
	// Original XY coordinate of AWB light source				
	{							
		// Strobe			
		{		
			0,	// i4X	
			0	// i4Y		
		},	
		// Horizon		
                {
                    -408,    // OriX_Hor
                    -314    // OriY_Hor
                },
                // A
                {
                    -315,    // OriX_A
                    -343    // OriY_A
                },
                // TL84
                {
                    -194,    // OriX_TL84
                    -378    // OriY_TL84
                },
                // CWF
                {
                    -143,    // OriX_CWF
                    -429    // OriY_CWF
                },
                // DNP
                {
                    -15,    // OriX_DNP
                    -392    // OriY_DNP
                },
                // D65
                {
                    34,    // OriX_D65
                    -307    // OriY_D65
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
                    -433,    // RotX_Hor
                    -278    // RotY_Hor
                },
                // A
                {
                    -343,    // RotX_A
                    -315    // RotY_A
                },
                // TL84
                {
                    -226,    // RotX_TL84
                    -360    // RotY_TL84
                },
                // CWF
                {
                    -179,    // RotX_CWF
                    -415    // RotY_CWF
                },
                // DNP
                {
                    -49,    // RotX_DNP
                    -389    // RotY_DNP
                },
                // D65
                {
                    7,    // RotX_D65
                    -309    // RotY_D65
                },
                // DF
                {
                    -5,    // RotX_DF
                    -402    // RotY_DF
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
                    582,    // AWBGAIN_HOR_G
                    1545    // AWBGAIN_HOR_B
                },
                // A 
                {
                    532,    // AWBGAIN_A_R
                    512,    // AWBGAIN_A_G
                    1248    // AWBGAIN_A_B
                },
                // TL84 
                {
                    657,    // AWBGAIN_TL84_R
                    512,    // AWBGAIN_TL84_G
                    1110    // AWBGAIN_TL84_B
                },
                // CWF 
                {
                    754,    // AWBGAIN_CWF_R
                    512,    // AWBGAIN_CWF_G
                    1111    // AWBGAIN_CWF_B
                },
                // DNP 
                {
                    853,    // AWBGAIN_DNP_R
                    512,    // AWBGAIN_DNP_G
                    889    // AWBGAIN_DNP_B
                },
                // D65 
                {
                    813,    // AWBGAIN_D65_R
                    512,    // AWBGAIN_D65_G
                    741    // AWBGAIN_D65_B
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
                5,    // RotationAngle
                255,    // Cos
                22    // Sin
            },
            // Daylight locus parameter
            {
                -148,    // i4SlopeNumerator
                128    // i4SlopeDenominator
            },
            // Predictor gain
            {
                101, // i4PrefRatio100
                // DaylightLocus_L
                {
                    813,    // i4R
                    512,    // i4G
                    741    // i4B
                },
                // DaylightLocus_H
                {
                    751,    // i4R
                    512,    // i4G
                    815    // i4B
                },
                // Temporal General
                {
                    813,    // i4R
                    512,    // i4G
                    741,    // i4B
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
                    -273,    // TungRightBound
                    -833,    // TungLeftBound
                    -243,    // TungUpperBound
                    -338    // TungLowerBound
                },
                // Warm fluorescent
                {
                    -273,    // WFluoRightBound
                    -833,    // WFluoLeftBound
                    -338,    // WFluoUpperBound
                    -445    // WFluoLowerBound
                },
                // Fluorescent
                {
                    -93,    // FluoRightBound
                    -273,    // FluoLeftBound
                    -269,    // FluoUpperBound
                    -394    // FluoLowerBound
                },
                // CWF
                {
                -109,    // CWFRightBound
                -273,    // CWFLeftBound
                -394,    // CWFUpperBound
                -460    // CWFLowerBound
                },
                // Daylight
                {
                    37,    // DayRightBound
                    -93,    // DayLeftBound
                    -269,    // DayUpperBound
                    -394    // DayLowerBound
                },
                // Shade
                {
                    367,    // ShadeRightBound
                    37,    // ShadeLeftBound
                    -269,    // ShadeUpperBound
                    -351    // ShadeLowerBound
                },
                // Daylight Fluorescent
                {
                    37,    // DFRightBound
                    -109,    // DFLeftBound
                    -394,    // DFUpperBound
                    -460    // DFLowerBound
                }
            },
            // PWB light area
            {
                // Reference area
                {
                    367,    // PRefRightBound
                    -833,    // PRefLeftBound
                    0,    // PRefUpperBound
                    -460    // PRefLowerBound
                },
                // Daylight
                {
                    62,    // PDayRightBound
                    -93,    // PDayLeftBound
                    -269,    // PDayUpperBound
                    -394    // PDayLowerBound
                },
                // Cloudy daylight
                {
                    162,    // PCloudyRightBound
                    -13,    // PCloudyLeftBound
                    -269,    // PCloudyUpperBound
                    -394    // PCloudyLowerBound
                },
                // Shade
                {
                    262,    // PShadeRightBound
                    -13,    // PShadeLeftBound
                    -269,    // PShadeUpperBound
                    -394    // PShadeLowerBound
                },
                // Twilight
                {
                    -93,    // PTwiRightBound
                    -253,    // PTwiLeftBound
                    -269,    // PTwiUpperBound
                    -394    // PTwiLowerBound
                },
                // Fluorescent
                {
                    57,    // PFluoRightBound
                    -326,    // PFluoLeftBound
                    -259,    // PFluoUpperBound
                    -465    // PFluoLowerBound
                },
                // Warm fluorescent
                {
                    -243,    // PWFluoRightBound
                    -443,    // PWFluoLeftBound
                    -259,    // PWFluoUpperBound
                    -465    // PWFluoLowerBound
                },
                // Incandescent
                {
                    -243,    // PIncaRightBound
                    -443,    // PIncaLeftBound
                    -269,    // PIncaUpperBound
                    -394    // PIncaLowerBound
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
                    816,    // PWB_Day_R
                    512,    // PWB_Day_G
                    788    // PWB_Day_B
                },
                // Cloudy daylight
                {
                    912,    // PWB_Cloudy_R
                    512,    // PWB_Cloudy_G
                    691    // PWB_Cloudy_B
                },
                // Shade
                {
                    970,    // PWB_Shade_R
                    512,    // PWB_Shade_G
                    642    // PWB_Shade_B
                },
                // Twilight
                {
                    672,    // PWB_Twi_R
                    512,    // PWB_Twi_G
                    993    // PWB_Twi_B
                },
                // Fluorescent
                {
                    737,    // PWB_Fluo_R
                    512,    // PWB_Fluo_G
                    974    // PWB_Fluo_B
                },
                // Warm fluorescent
                {
                    570,    // PWB_WFluo_R
                    512,    // PWB_WFluo_G
                    1322    // PWB_WFluo_B
                },
                // Incandescent
                {
                    545,    // PWB_Inca_R
                    512,    // PWB_Inca_G
                    1274    // PWB_Inca_B
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
                    60,    // TUNG_SLIDER
                    3510    // TUNG_OFFS
                },
                // Warm fluorescent	
                {
                    50,    // WFluo_SLIDER
                    3829    // WFluo_OFFS
                },
                // Shade
                {
                    50,    // Shade_SLIDER
                    410    // Shade_OFFS
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
                    751,        // i4R
                    512,        // i4G
                    815,        // i4B
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
                            -5,   // i4Sunset_BoundXr_Thr
                            -389     // i4Sunset_BoundYr_Thr
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
                            -182,   // i4BoundXrThr
                            -309     // i4BoundYrThr
                        },
                        128         // i4DaylightProb
                    },
                    // Shade CWF Detection
                    {
                        1,          // i4Enable
                        110,        // i4LVThr
                        {
                            -179,   // i4BoundXrThr
                            -415     // i4BoundYrThr
                        },
                        128         // i4DaylightProb
                    },
                    // Low CCT
                    {
                        1,          // i4Enable
                        256,        // i4SpeedRatio
                        {
                            -453,   // i4BoundXrThr
                            360     // i4BoundYrThr
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
                -440,    // i4RotatedXCoordinate[0]
                -350,    // i4RotatedXCoordinate[1]
                -233,    // i4RotatedXCoordinate[2]
                -56,    // i4RotatedXCoordinate[3]
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
                    1012,    // D65Gain_R
                    512,    // D65Gain_G
                    718    // D65Gain_B
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
                    -341,    // OriX_Hor
                    -398    // OriY_Hor
                },
                // A
                {
                    -244,    // OriX_A
                    -417    // OriY_A
                },
                // TL84
                {
                    -144,    // OriX_TL84
                    -418    // OriY_TL84
                },
                // CWF
                {
                    -108,    // OriX_CWF
                    -472    // OriY_CWF
                },
                // DNP
                {
                    35,    // OriX_DNP
                    -422    // OriY_DNP
                },
                // D65
                {
                    127,    // OriX_D65
                    -377    // OriY_D65
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
                    -374,    // RotX_Hor
                    -367    // RotY_Hor
                },
                // A
                {
                    -279,    // RotX_A
                    -394    // RotY_A
                },
                // TL84
                {
                    -179,    // RotX_TL84
                    -404    // RotY_TL84
                },
                // CWF
                {
                    -148,    // RotX_CWF
                    -461    // RotY_CWF
                },
                // DNP
                {
                    -1,    // RotX_DNP
                    -423    // RotY_DNP
                },
                // D65
                {
                    94,    // RotX_D65
                    -386    // RotY_D65
                },
                // DF
                {
                    82,    // RotX_DF
                    -452    // RotY_DF
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
                    553,    // AWBGAIN_HOR_R
                    512,    // AWBGAIN_HOR_G
                    1393    // AWBGAIN_HOR_B
                },
                // A 
                {
                    647,    // AWBGAIN_A_R
                    512,    // AWBGAIN_A_G
                    1254    // AWBGAIN_A_B
                },
                // TL84 
                {
                    742,    // AWBGAIN_TL84_R
                    512,    // AWBGAIN_TL84_G
                    1095    // AWBGAIN_TL84_B
                },
                // CWF 
                {
                    839,    // AWBGAIN_CWF_R
                    512,    // AWBGAIN_CWF_G
                    1122    // AWBGAIN_CWF_B
                },
                // DNP 
                {
                    950,    // AWBGAIN_DNP_R
                    512,    // AWBGAIN_DNP_G
                    864    // AWBGAIN_DNP_B
                },
                // D65 
                {
                    1012,    // AWBGAIN_D65_R
                    512,    // AWBGAIN_D65_G
                    718    // AWBGAIN_D65_B
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
                5,    // RotationAngle
                255,    // Cos
                22    // Sin
            },
            // Daylight locus parameter
            {
                -151,    // i4SlopeNumerator
                128    // i4SlopeDenominator
            },
            // Predictor gain
            {
                101, // i4PrefRatio100
                // DaylightLocus_L
                {
                    1012,    // i4R
                    512,    // i4G
                    718    // i4B
                },
                // DaylightLocus_H
                {
                    885,    // i4R
                    512,    // i4G
                    842    // i4B
                },
                // Temporal General
                {
                    1012,    // i4R
                    512,    // i4G
                    718,    // i4B
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
                    -219,    // TungRightBound
                    -774,    // TungLeftBound
                    -332,    // TungUpperBound
                    -399    // TungLowerBound
                },
                // Warm fluorescent
                {
                    -219,    // WFluoRightBound
                    -774,    // WFluoLeftBound
                    -399,    // WFluoUpperBound
                    -491    // WFluoLowerBound
                },
                // Fluorescent
                {
                    -46,    // FluoRightBound
                    -219,    // FluoLeftBound
                    -346,    // FluoUpperBound
                    -440    // FluoLowerBound
                },
                // CWF
                {
                -56,    // CWFRightBound
                -219,    // CWFLeftBound
                -440,    // CWFUpperBound
                -506    // CWFLowerBound
                },
                // Daylight
                {
                    124,    // DayRightBound
                    -46,    // DayLeftBound
                    -346,    // DayUpperBound
                    -440    // DayLowerBound
                },
                // Shade
                {
                    454,    // ShadeRightBound
                    124,    // ShadeLeftBound
                    -346,    // ShadeUpperBound
                    -416    // ShadeLowerBound
                },
                // Daylight Fluorescent
                {
                    124,    // DFRightBound
                    -56,    // DFLeftBound
                    -440,    // DFUpperBound
                    -506    // DFLowerBound
                }
            },
            // PWB light area
            {
                // Reference area
                {
                    454,    // PRefRightBound
                    -774,    // PRefLeftBound
                    0,    // PRefUpperBound
                    -506    // PRefLowerBound
                },
                // Daylight
                {
                    149,    // PDayRightBound
                    -46,    // PDayLeftBound
                    -346,    // PDayUpperBound
                    -440    // PDayLowerBound
                },
                // Cloudy daylight
                {
                    249,    // PCloudyRightBound
                    74,    // PCloudyLeftBound
                    -346,    // PCloudyUpperBound
                    -440    // PCloudyLowerBound
                },
                // Shade
                {
                    349,    // PShadeRightBound
                    74,    // PShadeLeftBound
                    -346,    // PShadeUpperBound
                    -440    // PShadeLowerBound
                },
                // Twilight
                {
                    -46,    // PTwiRightBound
                    -206,    // PTwiLeftBound
                    -346,    // PTwiUpperBound
                    -440    // PTwiLowerBound
                },
                // Fluorescent
                {
                    144,    // PFluoRightBound
                    -279,    // PFluoLeftBound
                    -336,    // PFluoUpperBound
                    -511    // PFluoLowerBound
                },
                // Warm fluorescent
                {
                    -179,    // PWFluoRightBound
                    -379,    // PWFluoLeftBound
                    -336,    // PWFluoUpperBound
                    -511    // PWFluoLowerBound
                },
                // Incandescent
                {
                    -179,    // PIncaRightBound
                    -379,    // PIncaLeftBound
                    -346,    // PIncaUpperBound
                    -440    // PIncaLowerBound
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
                    970,    // PWB_Day_R
                    512,    // PWB_Day_G
                    771    // PWB_Day_B
                },
                // Cloudy daylight
                {
                    1111,    // PWB_Cloudy_R
                    512,    // PWB_Cloudy_G
                    656    // PWB_Cloudy_B
                },
                // Shade
                {
                    1182,    // PWB_Shade_R
                    512,    // PWB_Shade_G
                    610    // PWB_Shade_B
                },
                // Twilight
                {
                    780,    // PWB_Twi_R
                    512,    // PWB_Twi_G
                    1000    // PWB_Twi_B
                },
                // Fluorescent
                {
                    876,    // PWB_Fluo_R
                    512,    // PWB_Fluo_G
                    953    // PWB_Fluo_B
                },
                // Warm fluorescent
                {
                    675,    // PWB_WFluo_R
                    512,    // PWB_WFluo_G
                    1299    // PWB_WFluo_B
                },
                // Incandescent
                {
                    646,    // PWB_Inca_R
                    512,    // PWB_Inca_G
                    1251    // PWB_Inca_B
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
                    5646    // TUNG_OFFS
                },
                // Warm fluorescent	
                {
                    0,    // WFluo_SLIDER
                    5279    // WFluo_OFFS
                },
                // Shade
                {
                    0,    // Shade_SLIDER
                    1410    // Shade_OFFS
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
                    885,        // i4R
                    512,        // i4G
                    842,        // i4B
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
                            44,   // i4Sunset_BoundXr_Thr
                            -423     // i4Sunset_BoundYr_Thr
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
                            -135,   // i4BoundXrThr
                            -386     // i4BoundYrThr
                        },
                        128         // i4DaylightProb
                    },
                    // Shade CWF Detection
                    {
                        1,          // i4Enable
                        110,        // i4LVThr
                        {
                            -148,   // i4BoundXrThr
                            -461     // i4BoundYrThr
                        },
                        128         // i4DaylightProb
                    },
                    // Low CCT
                    {
                        1,          // i4Enable
                        256,        // i4SpeedRatio
                        {
                            -394,   // i4BoundXrThr
                            233     // i4BoundYrThr
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
                -468,    // i4RotatedXCoordinate[0]
                -373,    // i4RotatedXCoordinate[1]
                -273,    // i4RotatedXCoordinate[2]
                -95,    // i4RotatedXCoordinate[3]
                0    // i4RotatedXCoordinate[4]
                }
            }
        },
    },
    // Flash AWB NVRAM
    {
#include INCLUDE_FILENAME_FLASH_AWB_PARA
    },
	{0}  //FIXED                                  
};                                             

#include INCLUDE_FILENAME_ISP_LSC_PARAM                                                                        
//};  //  namespace                                                                                            
const CAMERA_TSF_TBL_STRUCT CAMERA_TSF_DEFAULT_VALUE =                                                         
{
        {
        1, // isTsfEn
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
