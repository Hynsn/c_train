#include <stdio.h>
#include "../test/var.h"
#include "../extern_use/ifdefine.h"

#define	TEST	"test"
#define C_APPTYPE_WACL        0x4000+33  //窗机

void f();
#define C_JSSONARRAYNUM		495

char *ArrayItemAddr[C_JSSONARRAYNUM] =
{
	//---------------------通用空调字段--------------------
	CJSON_Pow,CJSON_Mod,CJSON_SetTem,CJSON_WdSpd,CJSON_Tur,                          //0
	CJSON_Quiet,CJSON_SwUpDn,CJSON_SwingLfRig,CJSON_AddP5,CJSON_TemUn,               //5
	CJSON_TemRec,CJSON_Lig,CJSON_Air,CJSON_Blo,CJSON_Health,                         //10      
	CJSON_SvSt,CJSON_SwhSw,CJSON_HeatCoolType,CJSON_StHt,CJSON_LTemDry,              //15
	CJSON_Wet,CJSON_SwhSlp,CJSON_SlpMod,CJSON_HasTmr,CJSON_TmrLpTms,                 //20
	CJSON_TmrOff,CJSON_TmrOn,CJSON_CurTmHor,CJSON_CurTmMin,CJSON_TmrOnHorLf,         //25
	CJSON_TmrOnMinLf,CJSON_TmrOffHorLf,CJSON_TmrOffMinLf,CJSON_DsplySt,CJSON_EnvFun, //30
	CJSON_JFErrorCode,CJSON_AssHt,CJSON_SwhFreAir,CJSON_AllErr,CJSON_Coolmod,        //35
	CJSON_HeatCool,CJSON_LedLig,CJSON_SmartMod,CJSON_Add0_1,CJSON_ModelType,                                    //40
	CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                    //45
	CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                    //50
	CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                    //55
 //--------------------A分体空调字段--------------------                          
 CJSON_Wind,CJSON_UDFanPort,CJSON_DnPUDSwing,CJSON_DnPLLRSwing,CJSON_DnPRLRSwing, //60
 CJSON_AirQ,CJSON_PM2P5,CJSON_ElcDatHor,CJSON_ElcDatDte,CJSON_ElcDatMth,          //65
 CJSON_HumSen,CJSON_ElcP,CJSON_ElcOnKwh,CJSON_ElcAllKwhClr,CJSON_ElcAllKwhH,      //70
 CJSON_ElcAllKwhL,CJSON_AutoClean,CJSON_TemSen,CJSON_Emod,CJSON_PctCleOnTm,       //75
 CJSON_EvapClr,CJSON_NobodySave,CJSON_BlkTemCom,CJSON_HabitLearn,CJSON_SmartWind,  //80 
 CJSON_HandCtl,CJSON_VocCtl,CJSON_VocIdiom,CJSON_VocRole,CJSON_ImgUpdateCol,       //85
//--------------------U尊分体空调字段--------------------    
CJSON_EnvArea1St,CJSON_EnvArea2St,CJSON_EnvArea3St,CJSON_EnvArea4St,CJSON_EnvArea5St,                     //90
CJSON_EnvArea6St,CJSON_EnvArea7St,CJSON_EnvArea8St,CJSON_EnvArea9St,CJSON_FbidBloPer,                     //95
CJSON_DIYGra1PoiAmo,CJSON_SwhDIYGra1,CJSON_DIYGra1Tm1TemL,CJSON_DIYGra1Tm1TemH,CJSON_DIYGra1Tm2TemL,      //100
CJSON_DIYGra1Tm2TemH,CJSON_DIYGra1Tm3TemL,CJSON_DIYGra1Tm3TemH,CJSON_DIYGra1Tm4TemL,CJSON_DIYGra1Tm4TemH, //105
CJSON_DIYGra1Tm5TemL,CJSON_DIYGra1Tm5TemH,CJSON_DIYGra1Tm6TemL,CJSON_DIYGra1Tm6TemH,CJSON_DIYGra1Tm7TemL, //110
CJSON_DIYGra1Tm7TemH,CJSON_DIYGra1Tm8TemL,CJSON_DIYGra1Tm8TemH,CJSON_ImgVerSta,CJSON_VocUpdateCol,        //115
CJSON_VocVerSta,CJSON_LigSen,CJSON_Video,CJSON_PctCleSetTm,CJSON_No,                                                      //120
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                                             //125
//--------------------商用多联机字段--------------------
CJSON_MasSub,CJSON_MasIDUMod,CJSON_GetEr,CJSON_HeatSvStTemMax,CJSON_HumiSvStTemMin,  //130
CJSON_CoolSvStTemMin,CJSON_No,CJSON_No,CJSON_No,CJSON_No,             //135
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,             //140
//--------------------hot water--------------------
CJSON_Wmode,CJSON_WsetTmp,CJSON_WschOn,CJSON_WschOnMin,CJSON_WschOff,    //145
CJSON_WschOffMin,CJSON_Wtmr1,CJSON_Wtmr1Min,CJSON_Wtmr2,CJSON_Wtmr2Min,  //150
CJSON_Wtmr3,CJSON_Wtmr3Min,CJSON_WsenTmpH,CJSON_WsenTmpM,CJSON_WsenTmpL, //155
CJSON_Werr,CJSON_WsenNub,CJSON_WstpSv,CJSON_WstpH,CJSON_WatTmp,          //160
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //165
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //170
//--------------------家用多联机--------------------
CJSON_MaeS,CJSON_FanMod,CJSON_ModS,CJSON_VitiGr,CJSON_GasN,              //175
CJSON_TemSor,CJSON_HumSor,CJSON_PM2P5V,CJSON_VOC,CJSON_CO2,              //180
CJSON_PctCle,CJSON_PctRe,CJSON_IDUAirQu,CJSON_AirQu,CJSON_ODUViti,       //185
CJSON_GasAvail,CJSON_GasLED,CJSON_GasMod,CJSON_GasMas,CJSON_PM2P5Sta,    //190
CJSON_SorErr,CJSON_CommErr,CJSON_No,CJSON_No,CJSON_No,                   //195
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //200
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //205
//-----------除湿机增加字段--------------------
CJSON_Dmod,CJSON_Dfltr,CJSON_Dpump,CJSON_Dwet,CJSON_DwatFul,             //210
CJSON_DwatSen,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //215
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //220
//-----------加湿器增加字段--------------------                          
CJSON_Smod,CJSON_Sfog,CJSON_RemWarnLig,CJSON_No,CJSON_No,                //225
CJSON_Security,CJSON_SecurityMode,CJSON_ImageRecovery,CJSON_No,CJSON_No,            //230
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //235
//-----------净水机增加字段--------------------                            
CJSON_Srst,CJSON_Swat,CJSON_Swash,CJSON_SrstPP,CJSON_SrstPF,             //240
CJSON_SrstCF,CJSON_SrstRF,CJSON_SrstAF,CJSON_MakeWat,CJSON_WatErr,       //245
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //250
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //255
//-------------清新机-------------------------
CJSON_mode,CJSON_wspd,CJSON_light,CJSON_StTmr,CJSON_fltrst,              //260  
CJSON_wipm25,CJSON_wopm25,CJSON_estate,CJSON_airQlt,CJSON_Purify,        //265
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //270
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //275
//-------------预留---------------------------                           
CJSON_ImgUpdateRes,CJSON_VocUpdateRes,CJSON_MicroSen,CJSON_ReplaceHEPA,CJSON_UnmanedShutDown,//280
CJSON_UnmanedOffTime,CJSON_PMVComfort,CJSON_Defrost,CJSON_Antifreeze,CJSON_FavorMode,//285
CJSON_ImgUpdateSta,CJSON_No,CJSON_VocUpdateSta,CJSON_No,CJSON_No, //290
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //295
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //300
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //305
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //310
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //315
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //320
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //325
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //330
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //335
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //340
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //345
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //350
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                            //355
//---------wifi属性，number类型----------------                          
CJSON_SwhWifi,CJSON_SwhWifiRe,CJSON_SwhWifiCo,CJSON_datDump,CJSON_datRep,         //360
CJSON_datFailRe,CJSON_datPeroid,CJSON_subCnt,CJSON_HidDownPer,CJSON_InHidDownPer, //365
CJSON_OEEPHidDownPer,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                         //370
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                              //375
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                              //380
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                              //385
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                              //390
//------------特殊字段---------------
//-----------设置帧(要写flash)---------
CJSON_ACStupPos,CJSON_SaveGuid,CJSON_NoiseSet,CJSON_RoomLen,CJSON_RoomWid,      //395
CJSON_RoomHigh,CJSON_CoolNoise,CJSON_HeatNoise,CJSON_No,CJSON_No,               //400
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                   //405
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                   //410
//-------------写flash---------------                                           
CJSON_ElcErg,CJSON_ElcGear,CJSON_Elc1Kwh,CJSON_AutoUpdate,CJSON_AutoComnCloud,  //415
CJSON_lock,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                 //420
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                   //425
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                   //430
//---------------设置帧预留(不写flash)--------------                                           
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                   //435
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                                   //440
//===================================================================================
//---------wifi属性，string类型------------------------------------------------------  
//-------------写flash---------------
CJSON_apssid,CJSON_appsw,CJSON_host,CJSON_name,CJSON_time,        //445
CJSON_lat,CJSON_lon,CJSON_No,CJSON_No,CJSON_No,                   //450
CJSON_No,CJSON_No,CJSON_No,CJSON_No,CJSON_No,                     //455
//---------------其它只读---------------                              
CJSON_vender,CJSON_bc,CJSON_mid,CJSON_model,CJSON_series,         //460
CJSON_brand,CJSON_catalog,CJSON_country,CJSON_hid,CJSON_mac,      //465
CJSON_ver,CJSON_wifiver,CJSON_inhid,CJSON_inver,CJSON_oeephid,    //470
CJSON_oeepver,                                                    //475
};

int union_struct_use1() {
	//printf("TEST %s\n", TEST);
	//printf("C_APPTYPE_WACL %x\n", C_APPTYPE_WACL);
	//f();

	for (int i = 0; i <= C_JSSONARRAYNUM;i++) {
		printf("\n ArrayItemAddr %s",ArrayItemAddr[i]);
	}
	return 0;
}