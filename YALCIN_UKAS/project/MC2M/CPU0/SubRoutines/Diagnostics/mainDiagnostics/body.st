// Multi MSG Diagnostics - ECM
/*IF(DM01_BAM_ECM_PGNofPacket = 65226)THEN
    DM_callback_func_ECM;
END_IF

// Multi MSG Diagnostics - TCM
IF(DM01_BAM_TCM_PGNofPacket = 65226)THEN
    DM_callback_func_TCM;
END_IF

// Multi MSG Diagnostics - EBS
IF(DM01_BAM_EBS_PGNofPacket = 65226)THEN
    DM_callback_func_EBS;
END_IF
*/
// ------- ALARM IN CANOPEN -------------------------------

AlarmState_EngineOilLevel := (EFL_P1_EngineOilLevel < Limit_EngineOilLevel); //Engine oil level
AlarmState_Alternator := DIGIN_AlternatorFailure; //(I/L) MC2M_U33 
AlarmState_ECM_RedLamp := Stat_RedLamp_fromECM;
AlarmState_ECM_AmberLamp := Stat_AmberLamp_fromECM;
AlarmState_AirFilterClogged := DIGIN_AirFilterClogged; //(I/L) MC2M_T39 
//AlarmState_AirFilterClogged := test_bit3;



/*********************Kapı ikonu**************************/
//AlarmState_DoorOpen_1 := !DIGIN_DoorOpenSwitch AND
//                          DIGIN_Back_HydDoorClosed AND  //DIGIN_Back_HydDoorClosed IOMODE_2_DIGIN23_Back_HydDoorClosed;//IOMODE2 J3/3 MC2M U06 
//                          !DIGIN_GunTowerDoor_1 AND 
//                          !DIGIN_GunTowerDoor_2;
AlarmState_DoorOpen_1 := !DIGIN_DoorOpenSwitch AND
                          DIGIN_Back_HydDoorClosed;       //DIGIN_Back_HydDoorClosed (I/L) MC2M U06 

AlarmState_DoorOpen_2:= DIGIN_Back_HydDoorClosed;      //!DIGIN_Back_HydDoorClosed (I/L) MC2M U06  
AlarmState_DoorOpen_3:= Cmd_GunTowerDoor_1;             //DIGIN_GunTowerDoor_1 (I/L) MC2M_T36 
//AlarmState_DoorOpen_4:= DIGIN_GunTowerDoor_2;
AlarmState_DoorOpen_5:= DIGIN_DoorOpenSwitch;           //DIGIN_DoorOpenSwitch (I/L) MC2M_U11 

               
// OR !IOMODE_2_DIGIN23_Back_HydDoorClosed
 //                      OR DIGIN_GunTowerDoor_1 OR DIGIN_GunTowerDoor_2;
AlarmState_CheckTransmission := Stat_CheckTransLamp_fromTCM; // Check Transmission
AlarmState_SumpTemp := NOT IOMODE_DIGIN23_SumpTempAlarm;

//AlarmState_Battery := (BatteryLevel > 280) OR (BatteryLevel < 220); 
AlarmState_Battery := (BatteryLevel < 220); 
AlarmState_TransOilTemperature := (TransOilTemperature >= Limit_TransmissionOilTemperature);

AlarmState_EngineOilPressure := (EngineOilPressure <= Limit_EngineOilPressure);
AlarmState_EngineOilTemperature := (EngineTempValue >= Limit_EngineOilTemperature);
AlarmState_FuelLevelLow := (/*FuelLevel_Normalized_1*/ FuelLevel_Normalized_TR_TL <= Limit_FuelLevelLow); //Çift depo senaryosu için(aaslan)
AlarmState_FuelLevelLow_T1 := FuelLevel_Normalized_L <= Limit_FuelLevelLow;
AlarmState_FuelLevelLow_T2 := FuelLevel_Normalized_R <= Limit_FuelLevelLow;
AlarmState_ParkBrakePressure       := (InputFiltered_Sensor1 < Limit_ParkBrakePressureLevel);
AlarmState_ServiceBrake1Pressure   := (InputFiltered_Sensor2 < Limit_ServiceBrake1PressureLevel);
AlarmState_ServiceBrake2Pressure   := (InputFiltered_Sensor3 < Limit_ServiceBrake2PressureLevel);
AlarmState_AccessoryPressure       := (InputFiltered_Sensor4 < Limit_AccessoryPressureLevel);
AlarmState_EngineCoolantLevelLow   := DIGIN_EngineCoolantLevelLow;
//AlarmState_DirectionHyraulicLevel  := DIGIN_DirectionHyraulicLevel;
//AlarmState_BrakeLiningWear := DIGIN_BrakeLiningWear;
//AlarmState_SteeringWheelRepPump    :=  NOT DIGIN_SteeringWheelRepPump; //(I/L) MC2M_T34 
//AlarmState_SteeringWheelRepPump    :=  DIGIN_SteeringWheelRepPump; //(I/L) MC2M_T34 
AlarmState_SteeringWheelRepPump    :=  (DIGIN_SteeringWheelRepPump) AND (VehicleSpeed>10) AND (NOT Cmd_ReverseGear); //(I/L) MC2M_T34 
//AlarmState_SteeringWheelRepPump    :=  test_bit5;

AlarmState_OilFilterDirty_1     := Stat_OilFilterDirtiness_1;
//AlarmState_OilFilterDirty_1     := test_bit4;
AlarmState_OilFilterDirty_2     := NOT Stat_OilFilterDirtiness_2;
//AlarmState_OilFilterDirty_2     := test_bit5;
AlarmState_HydrolicTankPressure := (PresLevel_Normalized < Limit_HydrolicTankPressure);
AlarmState_HydrolicTankTemp     := (HTempLevel_Normalized > Limit_HydrolicTankTemp);
AlarmState_WeatherCold          := (outSideTemperature < Limit_WeaterColdTemp);

//#######################    Lamp diagnostics ###########################################
LampAlarm_L01_TON.PT := LampAlarmDelay;
LampAlarm_L02_TON.PT := LampAlarmDelay;
LampAlarm_L03_TON.PT := LampAlarmDelay;
LampAlarm_L04_TON.PT := LampAlarmDelay;

LampAlarm_L05_TON.PT := LampAlarmDelay;
LampAlarm_L06_TON.PT := LampAlarmDelay;
LampAlarm_L07_TON.PT := LampAlarmDelay;
LampAlarm_L08_TON.PT := LampAlarmDelay;

LampAlarm_L09_TON.PT := LampAlarmDelay;
LampAlarm_L10_TON.PT := LampAlarmDelay;
LampAlarm_L11_TON.PT := LampAlarmDelay;
LampAlarm_L12_TON.PT := LampAlarmDelay;

LampAlarm_L13_TON.PT := LampAlarmDelay;
LampAlarm_L14_TON.PT := LampAlarmDelay;
LampAlarm_L15_TON.PT := LampAlarmDelay;
LampAlarm_L16_TON.PT := LampAlarmDelay;

LampAlarm_L17_TON.PT := LampAlarmDelay;
LampAlarm_L18_TON.PT := LampAlarmDelay;
LampAlarm_L19_TON.PT := LampAlarmDelay;
LampAlarm_L20_TON.PT := LampAlarmDelay;

LampAlarm_L21_TON.PT := LampAlarmDelay;
LampAlarm_L22_TON.PT := LampAlarmDelay;
LampAlarm_L23_TON.PT := LampAlarmDelay;
LampAlarm_L24_TON.PT := LampAlarmDelay;

LampAlarm_L25_TON.PT := LampAlarmDelay;
LampAlarm_L26_TON.PT := LampAlarmDelay;
// --------------------------------------------------------------------------
//LampAlarm_L01_TON.IN := (DOUT_ParkLamp_FL AND(NOT DOUT_ParkLamp_FL_feedback));
//LampAlarm_L02_TON.IN := (DOUT_ParkLamp_FR AND(NOT DOUT_ParkLamp_FR_feedback));
//LampAlarm_L03_TON.IN := (DOUT_ParkLamp_RL AND(NOT DOUT_ParkLamp_RL_feedback));
//LampAlarm_L04_TON.IN := (DOUT_ParkLamp_RR AND(NOT DOUT_ParkLamp_RR_feedback));

//LampAlarm_L05_TON.IN := (DOUT_PlateLamp_Left AND(NOT DOUT_PlateLamp_Left_feedback));
//LampAlarm_L06_TON.IN := (DOUT_PlateLamp_Right AND(NOT DOUT_PlateLamp_Right_feedback));

//LampAlarm_L07_TON.IN := (DOUT_SideLamp_FL AND(NOT DOUT_SideLamp_FL_feedback));
//LampAlarm_L08_TON.IN := (DOUT_SideLamp_FR AND(NOT DOUT_SideLamp_FR_feedback));
//LampAlarm_L09_TON.IN := (DOUT_SideLamp_RL AND(NOT DOUT_SideLamp_RL_feedback));
//LampAlarm_L10_TON.IN := (DOUT_SideLamp_RR AND(NOT DOUT_SideLamp_RR_feedback));

//LampAlarm_L11_TON.IN := (MC2M_MUX_DIGOUT13_HighBeam_Left AND (MUX_ISenseOut13=0)); //High Beam Left
//LampAlarm_L12_TON.IN := (MC2M_MUX_DIGOUT12_HighBeam_Right AND (MUX_ISenseOut12=0)); //High Beam Right

//LampAlarm_L13_TON.IN := (MC2M_MUX_DIGOUT05 AND (MUX_ISenseOut05=0)); //Turn Signal FR
//LampAlarm_L14_TON.IN := (MC2M_MUX_DIGOUT06 AND (MUX_ISenseOut06=0)); //Turn Signal FL
//LampAlarm_L15_TON.IN := (MC2M_MUX_DIGOUT07 AND (MUX_ISenseOut07=0)); //Turn Signal RR
//LampAlarm_L16_TON.IN := (MC2M_MUX_DIGOUT09 AND (MUX_ISenseOut09=0)); //Turn Signal RL

LampAlarm_L17_TON.IN := (MC2M_MUX_DIGOUT01_LowBeam_R AND (MUX_ISenseOut01=0)); //Low Beam Right
LampAlarm_L18_TON.IN := (MC2M_MUX_DIGOUT02_LowBeam_L AND (MUX_ISenseOut02=0)); //Low Beam Left

LampAlarm_L19_TON.IN := (MC2M_MUX_DIGOUT15_ReverseGearLamp AND (MUX_ISenseOut15=0)); //Reverse Gear Lamp
LampAlarm_L20_TON.IN := (MC2M_MUX_DIGOUT14_RearFogLamp AND (MUX_ISenseOut14=0)); //Rear Fog Lamp

LampAlarm_L21_TON.IN := (MC2M_MUX_DIGOUT23_Winch_Up AND (MUX_ISenseOut23=0)); //Work Lamp Front Right
LampAlarm_L22_TON.IN := (MC2M_MUX_DIGOUT24_Winch_Down AND (MUX_ISenseOut24=0)); //Work Lamp Front Left
//LampAlarm_L23_TON.IN := (MC2M_MUX_DIGOUT25 AND (MUX_ISenseOut25=0)); //Work Lamp Rear Right
//LampAlarm_L24_TON.IN := (MC2M_MUX_DIGOUT26 AND (MUX_ISenseOut26=0)); //Work Lamp Rear Left

//LampAlarm_L25_TON.IN := (MC2M_MUX_DIGOUT10_StopLamp_R AND (MUX_ISenseOut10=0)); //Stop Lamp Right
//LampAlarm_L26_TON.IN := (MC2M_MUX_DIGOUT11_StopLamp_L AND (MUX_ISenseOut11=0)); //Stop Lamp Left

// ---------------------- Call Timer on Delay ----------------------------------------
LampAlarm_L01_TON;
LampAlarm_L02_TON;
LampAlarm_L03_TON;
LampAlarm_L04_TON;

LampAlarm_L05_TON;
LampAlarm_L06_TON;
LampAlarm_L07_TON;
LampAlarm_L08_TON;

LampAlarm_L09_TON;
LampAlarm_L10_TON;
LampAlarm_L11_TON;
LampAlarm_L12_TON;

LampAlarm_L13_TON;
LampAlarm_L14_TON;
LampAlarm_L15_TON;
LampAlarm_L16_TON;

LampAlarm_L17_TON;
LampAlarm_L18_TON;
LampAlarm_L19_TON;
LampAlarm_L20_TON;

LampAlarm_L21_TON;
LampAlarm_L22_TON;
//LampAlarm_L23_TON;
//LampAlarm_L24_TON;

LampAlarm_L25_TON;
LampAlarm_L26_TON;

//Lamp diagnostics -----------------------------------------

MC2M_TERA_LampAlarm_L01 := LampAlarm_L01_TON.Q;
MC2M_TERA_LampAlarm_L02 := LampAlarm_L02_TON.Q;
MC2M_TERA_LampAlarm_L03 := LampAlarm_L03_TON.Q;
MC2M_TERA_LampAlarm_L04 := LampAlarm_L04_TON.Q;

MC2M_TERA_LampAlarm_L05 := LampAlarm_L05_TON.Q;
MC2M_TERA_LampAlarm_L06 := LampAlarm_L06_TON.Q;

MC2M_TERA_LampAlarm_L07 := LampAlarm_L07_TON.Q;
MC2M_TERA_LampAlarm_L08 := LampAlarm_L08_TON.Q;
MC2M_TERA_LampAlarm_L09 := LampAlarm_L09_TON.Q;
MC2M_TERA_LampAlarm_L10 := LampAlarm_L10_TON.Q;

MC2M_TERA_LampAlarm_L11 := LampAlarm_L11_TON.Q;
MC2M_TERA_LampAlarm_L12 := LampAlarm_L12_TON.Q;

MC2M_TERA_LampAlarm_L13 := LampAlarm_L13_TON.Q;
MC2M_TERA_LampAlarm_L14 := LampAlarm_L14_TON.Q;
MC2M_TERA_LampAlarm_L15 := LampAlarm_L15_TON.Q;
MC2M_TERA_LampAlarm_L16 := LampAlarm_L16_TON.Q;

MC2M_TERA_LampAlarm_L17 := LampAlarm_L17_TON.Q;
MC2M_TERA_LampAlarm_L18 := LampAlarm_L18_TON.Q;

MC2M_TERA_LampAlarm_L19 := LampAlarm_L19_TON.Q;
MC2M_TERA_LampAlarm_L20 := LampAlarm_L20_TON.Q;

MC2M_TERA_LampAlarm_L21 := LampAlarm_L21_TON.Q;
MC2M_TERA_LampAlarm_L22 := LampAlarm_L22_TON.Q;
//MC2M_TERA_LampAlarm_L23 := LampAlarm_L23_TON.Q;
//MC2M_TERA_LampAlarm_L24 := LampAlarm_L24_TON.Q;

MC2M_TERA_LampAlarm_L25 := LampAlarm_L25_TON.Q;
MC2M_TERA_LampAlarm_L26 := LampAlarm_L26_TON.Q;
