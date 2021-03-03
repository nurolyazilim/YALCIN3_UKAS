// ------- INPUT CONFIGURATION ----------------------------
////Stat_AmberLamp_fromECM      := IOMODE_DIGIN16_AmberLamp_fromECM;      //T01 OK
//Stat_RedLamp_fromECM        := IOMODE_DIGIN17_RedLamp_fromECM;        //OK 
////Stat_CheckTransLamp_fromTCM := IOMODE_DIGIN09_CheckTransLamp_fromTCM; //OK

////Stat_ABS_IndicatorLamp := DIGIN_ABSECU_X1_18; //ABS ECU X1.18
Stat_BatteryIndicatorLamp := AlarmState_Battery;
Stat_TransOilTempLamp := AlarmState_TransOilTemperature;
Stat_BrakeIndicatorLamp := AlarmState_BrakeIndicator;
Stat_Wait2StartLamp := (SHUTDN_EngineWaitToStartLamp = Enum71_ON); //	Enum71_ON := 1,


//Stat_OilFilterDirtiness_1:= DIGIN_OilFilterDirtiness_1; //(I/L) MC2M_T38 
//Stat_OilFilterDirtiness_2:= DIGIN_OilFilterDirtiness_2; //(I/L) MC2M_T30

// OUTPUT CONFIGURATION ------------------------------------
MC2M_IOMODE_DOUT00_ABS_IndicatorLamp := Stat_ABS_IndicatorLamp; //J2_6
//MC2M_IOMODE_DOUT02 := Stat_BatteryIndicatorLamp; // J2_7
MC2M_IOMODE_DOUT10 := Stat_TransOilTempLamp; // J2_13
MC2M_IOMODE_DOUT06 := Stat_BrakeIndicatorLamp; // J2_9
//MC2M_IOMODE_DOUT11 := Stat_Wait2StartLamp; // J2_4


