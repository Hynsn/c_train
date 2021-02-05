#pragma once
//--------------------通用空调字段--------------------
#define  CJSON_Pow                 "Pow"                //0
#define  CJSON_Mod                 "Mod"                //
#define  CJSON_SetTem              "SetTem"             
#define  CJSON_WdSpd               "WdSpd"              //
#define  CJSON_Tur                 "Tur"                //
#define  CJSON_Quiet               "Quiet"              //5
#define  CJSON_SwUpDn              "SwUpDn"             //
#define  CJSON_SwingLfRig          "SwingLfRig"         //
#define  CJSON_AddP5               "Add0.5" 
#define  CJSON_TemUn               "TemUn"              //
#define  CJSON_TemRec              "TemRec"             //10
#define  CJSON_Lig                 "Lig"                //
#define  CJSON_Air                 "Air"                //
#define  CJSON_Blo                 "Blo"                //
#define  CJSON_Health              "Health"             //
#define  CJSON_SvSt                "SvSt"               //15
#define  CJSON_SwhSw               "SwhSw"              //
#define  CJSON_HeatCoolType        "HeatCoolType"
#define  CJSON_StHt                "StHt"               //
#define  CJSON_LTemDry             "LTemDry"            //
#define  CJSON_Wet                 "Wet"                //20
#define  CJSON_SwhSlp              "SwhSlp"             //
#define  CJSON_SlpMod              "SlpMod"
#define  CJSON_HasTmr              "HasTmr"
#define  CJSON_TmrLpTms            "TmrLpTms"           //
#define  CJSON_TmrOff              "TmrOff"             //25        
#define  CJSON_TmrOn               "TmrOn" 
#define  CJSON_CurTmHor            "CurTmHor"
#define  CJSON_CurTmMin            "CurTmMin"
#define  CJSON_TmrOnHorLf          "TmrOnHorLf"
#define  CJSON_TmrOnMinLf          "TmrOnMinLf"         //30
#define  CJSON_TmrOffHorLf         "TmrOffHorLf"
#define  CJSON_TmrOffMinLf         "TmrOffMinLf"
#define  CJSON_DsplySt             "DsplySt"            //
#define  CJSON_EnvFun              "EnvFun"
#define  CJSON_JFErrorCode         "JFErrorCode"        //35
#define  CJSON_AssHt               "AssHt"              //
#define  CJSON_SwhFreAir           "SwhFreAir"
#define  CJSON_AllErr              "AllErr"
#define  CJSON_Coolmod             "Coolmod"
#define  CJSON_HeatCool            "HeatCool"           //40
#define  CJSON_LedLig              "LedLig" 
#define  CJSON_SmartMod            "SmartMod"
#define  CJSON_Add0_1              "Add0.1"      //V2.4 ADD
#define  CJSON_ModelType           "ModelType"   //V2.4 ADD


//--------------------A分体空调字段--------------------
#define  CJSON_Wind                "Wind"               //60
#define  CJSON_UDFanPort           "UDFanPort"
#define  CJSON_DnPUDSwing          "DnPUDSwing"
#define  CJSON_DnPLLRSwing         "DnPLLRSwing"
#define  CJSON_DnPRLRSwing         "DnPRLRSwing"
#define  CJSON_AirQ                "AirQ"               //65
#define  CJSON_PM2P5               "PM2P5"
#define  CJSON_ElcDatHor           "ElcDatHor"
#define  CJSON_ElcDatDte           "ElcDatDte"
#define  CJSON_ElcDatMth           "ElcDatMth"
#define  CJSON_HumSen              "HumSen"             //70
#define  CJSON_ElcP                "ElcP"
#define  CJSON_ElcOnKwh            "ElcOnKwh"
#define  CJSON_ElcAllKwhClr        "ElcAllKwhClr"
#define  CJSON_ElcAllKwhH          "ElcAllKwhH"
#define  CJSON_ElcAllKwhL          "ElcAllKwhL"         //75
#define  CJSON_AutoClean           "AutoClean"
#define  CJSON_TemSen              "TemSen"
#define  CJSON_Emod                "Emod"
#define  CJSON_PctCleOnTm          "PctCleOnTm"
#define  CJSON_EvapClr             "EvapClr"            //80
#define  CJSON_NobodySave          "NobodySave"
#define  CJSON_BlkTemCom           "BlkTemCom"
#define  CJSON_HabitLearn          "HabitLearn"
#define  CJSON_SmartWind           "SmartWind"
#define  CJSON_HandCtl             "HandCtl"            //85
#define  CJSON_VocCtl              "VocCtl"
#define  CJSON_VocIdiom            "VocIdiom"
#define  CJSON_VocRole             "VocRole"
#define  CJSON_ImgUpdateCol        "ImgUpdateCol"

//--------------------U尊分体空调字段--------------------
#define  CJSON_EnvArea1St          "EnvArea1St"         //90
#define  CJSON_EnvArea2St          "EnvArea2St"         //
#define  CJSON_EnvArea3St          "EnvArea3St"
#define  CJSON_EnvArea4St          "EnvArea4St"
#define  CJSON_EnvArea5St          "EnvArea5St"
#define  CJSON_EnvArea6St          "EnvArea6St"         //95
#define  CJSON_EnvArea7St          "EnvArea7St"
#define  CJSON_EnvArea8St          "EnvArea8St"
#define  CJSON_EnvArea9St          "EnvArea9St"
#define  CJSON_FbidBloPer          "FbidBloPer"
#define  CJSON_DIYGra1PoiAmo       "DIYGra1PoiAmo"      //100
#define  CJSON_SwhDIYGra1          "SwhDIYGra1"
#define  CJSON_DIYGra1Tm1TemL      "Slp1L1"
#define  CJSON_DIYGra1Tm1TemH      "Slp1H1"
#define  CJSON_DIYGra1Tm2TemL      "Slp1L2"
#define  CJSON_DIYGra1Tm2TemH      "Slp1H2"             //105
#define  CJSON_DIYGra1Tm3TemL      "Slp1L3"
#define  CJSON_DIYGra1Tm3TemH      "Slp1H3"
#define  CJSON_DIYGra1Tm4TemL      "Slp1L4"
#define  CJSON_DIYGra1Tm4TemH      "Slp1H4"
#define  CJSON_DIYGra1Tm5TemL      "Slp1L5"             //110
#define  CJSON_DIYGra1Tm5TemH      "Slp1H5"       
#define  CJSON_DIYGra1Tm6TemL      "Slp1L6"
#define  CJSON_DIYGra1Tm6TemH      "Slp1H6"
#define  CJSON_DIYGra1Tm7TemL      "Slp1L7"
#define  CJSON_DIYGra1Tm7TemH      "Slp1H7"             //115
#define  CJSON_DIYGra1Tm8TemL      "Slp1L8"
#define  CJSON_DIYGra1Tm8TemH      "Slp1H8"
#define  CJSON_ImgVerSta           "ImgVerSta"
#define  CJSON_VocUpdateCol        "VocUpdateCol"
#define  CJSON_VocVerSta           "VocVerSta"          //120
#define  CJSON_LigSen              "LigSen"
#define  CJSON_Video               "Video"
#define  CJSON_PctCleSetTm         "PctCleSetTm"
//--------------------商用多联机字段--------------------
#define  CJSON_MasSub              "MasSub"             //130
#define  CJSON_MasIDUMod           "MasIDUMod"
#define  CJSON_GetEr               "GetEr"
#define  CJSON_HeatSvStTemMax      "HeatSvStTemMax"
#define  CJSON_HumiSvStTemMin      "HumiSvStTemMin"
#define  CJSON_CoolSvStTemMin      "CoolSvStTemMin"
//--------------------hot water--------------------
#define  CJSON_Wmode               "Wmod"        //热水器设定模式 145
#define  CJSON_WsetTmp             "WsetTmp"      //热水器设定温度
#define  CJSON_WschOn              "WschOn"       //预约开机有效
#define  CJSON_WschOnMin           "WschOnMin"    //预约开机分钟数
#define  CJSON_WschOff             "WschOff"
#define  CJSON_WschOffMin          "WschOffMin"   //150
#define  CJSON_Wtmr1               "Wtmr1"        //预约用水1开关
#define  CJSON_Wtmr1Min            "Wtmr1Min"     //预约用水1分钟数
#define  CJSON_Wtmr2               "Wtmr2"
#define  CJSON_Wtmr2Min            "Wtmr2Min"
#define  CJSON_Wtmr3               "Wtmr3"        //155
#define  CJSON_Wtmr3Min            "Wtmr3Min"
#define  CJSON_WsenTmpH            "WsenTmpH"
#define  CJSON_WsenTmpM            "WsenTmpM"
#define  CJSON_WsenTmpL            "WsenTmpL"    //下部水箱温度
#define  CJSON_Werr                "Werr"        //机组总故障标志 160
#define  CJSON_WsenNub             "WsenNub"     //温度感温包的个数
#define  CJSON_WstpSv              "WstpSv"      //节能模式设定温度的最大值
#define  CJSON_WstpH               "WstpH"       //其他模式设定温度的最大值
#define  CJSON_WatTmp              "WatTmp"      //水箱的水温值
//--------------------家用多联机--------------------
#define  CJSON_MaeS                "MaeS"        //175
#define  CJSON_FanMod              "FanMod"   
#define  CJSON_ModS                "ModS"     
#define  CJSON_VitiGr              "VitiGr"   
#define  CJSON_GasN                "GasN"     
#define  CJSON_TemSor              "TemSor"      //180   
#define  CJSON_HumSor              "HumSor"   
#define  CJSON_PM2P5V              "PM2P5V"   
#define  CJSON_VOC                 "VOC"      
#define  CJSON_CO2                 "CO2"      
#define  CJSON_PctCle              "PctCle"      //185 
#define  CJSON_PctRe               "PctRe"    
#define  CJSON_IDUAirQu            "IDUAirQu" 
#define  CJSON_AirQu               "AirQu"    
#define  CJSON_ODUViti             "ODUViti"  
#define  CJSON_GasAvail            "GasAvail"    //190
#define  CJSON_GasLED              "GasLED"   
#define  CJSON_GasMod              "GasMod"   
#define  CJSON_GasMas              "GasMas"   
#define  CJSON_PM2P5Sta            "PM2P5Sta" 
#define  CJSON_SorErr              "SorErr"      //195
#define  CJSON_CommErr             "CommErr"
//-----------除湿机增加字段--------------------
#define  CJSON_Dmod                "Dmod"        //210
#define  CJSON_Dfltr               "Dfltr"
#define  CJSON_Dpump               "Dpump"
#define  CJSON_Dwet                "Dwet"
#define  CJSON_DwatFul             "DwatFul"
#define  CJSON_DwatSen             "DwatSen"
//-----------加湿器增加字段--------------------
#define  CJSON_Smod                "Smod"        //加湿器模式 225
#define  CJSON_Sfog                "Sfog"
#define  CJSON_RemWarnLig          "RemWarnLig"
//#define  CJSON_estate              "estate"    //与清新机重复
//-----------净水机增加字段--------------------
#define  CJSON_Srst                "Srst"   //复位滤芯 240
#define  CJSON_Swat                "Swat"   //手动制水
#define  CJSON_Swash               "Swash"  //冲洗
#define  CJSON_SrstPP              "SrstPP" //复位PP棉滤芯
#define  CJSON_SrstPF              "SrstPF" //复位PF棉滤芯
#define  CJSON_SrstCF              "SrstCF" //复位CF棉滤芯 245
#define  CJSON_SrstRF              "SrstRF" //复位RF棉滤芯
#define  CJSON_SrstAF              "SrstAF" //复位AF棉滤芯
#define  CJSON_MakeWat             "MakeWat"
#define  CJSON_WatErr              "WatErr"
//-------------清新机(空气净化器)-------------
#define  CJSON_mode                "mode"    //260
#define  CJSON_wspd                "wspd"
#define  CJSON_light               "light"
#define  CJSON_StTmr               "StTmr"
#define  CJSON_fltrst              "fltrst"
#define  CJSON_wipm25              "wipm25"  //265
#define  CJSON_wopm25              "wopm25"
#define  CJSON_estate              "estate"
#define  CJSON_airQlt              "airQlt"
#define  CJSON_Purify              "Purify"


//#define  CJSON_PictureUpdateSd     "PicUpSd"
//#define  CJSON_VoiceUpdateSd       "VocUpdate"
#define  CJSON_MicroSen            "MicroSen"
#define  CJSON_ReplaceHEPA         "ReplaceHEPA"
#define  CJSON_UnmanedShutDown     "UnmanedShutDown"
#define  CJSON_UnmanedOffTime      "UnmanedOffTime"
#define  CJSON_PMVComfort          "PMVComfort"
#define  CJSON_Defrost             "Defrost"
#define  CJSON_Antifreeze          "Antifreeze"
#define  CJSON_FavorMode           "FavorMode"
#define  CJSON_Security            "Security"
#define  CJSON_SecurityMode        "SecurityMode"
#define  CJSON_ImageRecovery       "ImageRecovery"

#define  CJSON_ImgUpdateSta        "ImgUpdateSta"
#define  CJSON_ImgUpdateRes        "ImgUpdateRes"
#define  CJSON_VocUpdateSta        "VocUpdateSta"
#define  CJSON_VocUpdateRes        "VocUpdateRes"

//---------wifi属性，number类型----------------
#define  CJSON_SwhWifi             "SwhWifi"    //360
#define  CJSON_SwhWifiRe           "SwhWifiRe"
#define  CJSON_SwhWifiCo           "SwhWifiCo"
#define  CJSON_datDump             "datDump"
#define  CJSON_datRep              "datRep"
#define  CJSON_datFailRe           "datFailRe"  //365
#define  CJSON_datPeroid           "datPeroid"
#define  CJSON_subCnt              "subCnt"
#define  CJSON_HidDownPer          "HidDownPer"
#define  CJSON_InHidDownPer        "InHidDownPer"
#define  CJSON_OEEPHidDownPer      "OEEPHidDownPer"
//------------特殊字段---------------
//-----------写flash和设置帧---------
#define  CJSON_ACStupPos           "ACStupPos"  //U尊 395
#define  CJSON_SaveGuid            "SaveGuid"   //U尊
#define  CJSON_NoiseSet            "NoiseSet"   //U尊
#define  CJSON_RoomLen             "RoomLen"    //U尊
#define  CJSON_RoomWid             "RoomWid"    //U尊
#define  CJSON_RoomHigh            "RoomHigh"   //U尊 400
#define  CJSON_CoolNoise           "CoolNoise"  //U尊
#define  CJSON_HeatNoise           "HeatNoise"  //U尊
//-------------写flash---------------
#define  CJSON_ElcErg              "ElcErg"         //A分体 415
#define  CJSON_ElcGear             "ElcGear"        //A分体
#define  CJSON_Elc1Kwh             "Elc1Kwh"        //A分体
#define  CJSON_AutoUpdate          "AutoUpdate"     //wifi属性number
#define  CJSON_AutoComnCloud       "AutoComnCloud"  //wifi属性number
#define  CJSON_lock                "lock"           //wifi属性number 420

//---------wifi属性，string类型------
//-------------写flash---------------
#define  CJSON_apssid              "apssid"     //445
#define  CJSON_appsw               "appsw"
#define  CJSON_host                "host"
#define  CJSON_name                "name"
#define  CJSON_time                "time"
#define  CJSON_lat                 "lat"
#define  CJSON_lon                 "lon"
//---------------其它---------------
#define  CJSON_vender              "vender"     //460
#define  CJSON_bc                  "bc"
#define  CJSON_mid                 "mid"
#define  CJSON_model               "model"
#define  CJSON_series              "series"
#define  CJSON_brand               "brand"      //465
#define  CJSON_catalog             "catalog"
#define  CJSON_country             "country"
#define  CJSON_hid                 "hid"
#define  CJSON_mac                 "mac"
#define  CJSON_ver                 "ver"           //470
#define  CJSON_wifiver             "HidSvrVer" 
#define  CJSON_inhid               "InHid"     
#define  CJSON_inver               "InHidSvrVer"      
#define  CJSON_oeephid             "OEEPHid"       
#define  CJSON_oeepver             "OEEPHidSvrVer" //475

//------------------NoDefine-----------------
#define  CJSON_No                  "NoD"
