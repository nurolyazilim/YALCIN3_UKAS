// Icon status upon conditions OR assignment only.
//MC2M_TERA_Icon_Status_L01 := AlarmState_DirectionHyraulicLevel; //Direction Hydraulic level
MC2M_TERA_Icon_Status_L01 := Stat_CentralLockSystem;
//MC2M_TERA_Icon_Status_L01 := test_bit5;

//MC2M_TERA_Icon_Status_L02 := AlarmState_Alternator OR DIGIN_AlternatorFailure; //Battery OR Alternator failure Stat_BatteryIndicatorLamp
MC2M_TERA_Icon_Status_L02 := AlarmState_Alternator OR AlarmState_Battery; //Battery OR Alternator failure
//MC2M_TERA_Icon_Status_L02 := AlarmState_Alternator; //Alternator failure

MC2M_TERA_Icon_Status_L03 := DIGIN_HandBrakeActivated; //Park Brake activated
//MC2M_TERA_Icon_Status_L03 := test_bit5; //Park Brake activated

MC2M_TERA_Icon_Status_L04 := Stat_RedLamp_fromECM; // ECM RED Lamp
MC2M_TERA_Icon_Status_L05 := Stat_AmberLamp_fromECM; // ECM AMBER Lamp

//MC2M_TERA_Icon_Status_L06 := Stat_TurnSignalLamp_Left; //Turn signal LEFT
//MC2M_TERA_Icon_Status_L07 := Stat_TurnSignalLamp_Right; //Turn signal RIGHT

MC2M_TERA_Icon_Status_L06 := DIGIN_TurnLeftSignal; //Turn signal LEFT
MC2M_TERA_Icon_Status_L07 := DIGIN_TurnRightSignal; //Turn signal RIGHT

//MC2M_TERA_Icon_Status_L08 := Stat_DiffLock; //Differantial Lock
//MC2M_TERA_Icon_Status_L08 := test_bit; //EngineProtectionERR
MC2M_TERA_Icon_Status_L08 := Stat_EngineProtectionERR; //EngineProtectionERR

MC2M_TERA_DIAG_Stat_4x4 := Stat_4x4;          //Differantial Lock 4x4  
////MC2M_TERA_DIAG_Stat_4x4 := Fuel_Level_2;              //Differantial Lock 4x4  




MC2M_TERA_Icon_Status_L09 := Stat_Wait2StartLamp; //Wait2Start OR PreHeating
//MC2M_TERA_Icon_Status_L09 := test_bit5; //Wait2Start OR PreHeating

MC2M_TERA_Icon_Status_L10 := AlarmState_AirFilterClogged; // Air Filter Clogged

MC2M_TERA_Icon_Status_L11 := Stat_ParkLamp; //Park Lamp
MC2M_TERA_Icon_Status_L12 := Stat_LowBeam; // Low Beam
MC2M_TERA_Icon_Status_L13 := Stat_HighBeam; //High Beam
MC2M_TERA_Icon_Status_L14_1 := AlarmState_DoorOpen_1; //DIGIN_Back_HydDoorClosed; //(I/L) MC2M U06 
//MC2M_TERA_Icon_Status_L14_1 := test_bit; //Bütün kapılar kapalı
MC2M_TERA_Icon_Status_L14_2 := AlarmState_DoorOpen_2; //!DIGIN_Back_HydDoorClosed; //(I/L) MC2M U06
//MC2M_TERA_Icon_Status_L14_2 := test_bit2;
MC2M_TERA_Icon_Status_L14_3 := AlarmState_DoorOpen_3; //DIGIN_GunTowerDoor_1 (I/L) MC2M_T36 
//MC2M_TERA_Icon_Status_L14_3 := test_bit3;
MC2M_TERA_Icon_Status_L14_4 := AlarmState_DoorOpen_4;
MC2M_TERA_Icon_Status_L14_5 := AlarmState_DoorOpen_5; //DIGIN_DoorOpenSwitch (I/L) MC2M_U11

MC2M_TERA_Icon_Status_L15 := Cmd_TriggerRes; // Mirror AND Window resistance is active

MC2M_TERA_Icon_Status_L16 := Stat_CheckTransLamp_fromTCM; //Check Transmission
MC2M_TERA_Icon_Status_L17 := Stat_EngineProtectionLED; //Engine protection override
MC2M_TERA_Icon_Status_L18 := DIGIN_IntakeAirHeaterActivated; // Intake Air Heater    //(I/H) MC2M_U17 
//MC2M_TERA_Icon_Status_L18 := test_bit4; // Intake Air Heater

MC2M_TERA_Icon_Status_L19 := AlarmState_SumpTemp; //Sump Temp
MC2M_TERA_Icon_Status_L20 := Stat_ABS_IndicatorLamp OR Stat_ABS4WD; //ABS Warning OR ABS OFF BY switch

MC2M_TERA_Icon_Status_L21 := Stat_DiffLock44; //ABS 4x4 mode
MC2M_TERA_Icon_Status_L22 := (Stat_Dropbox=2); //Dropbox is HIGH
MC2M_TERA_Icon_Status_L23 := (Stat_Dropbox=1); //Dropbox is LOW
MC2M_TERA_Icon_Status_L24 := (Stat_Dropbox=0); //Dropbox is NEUTRAL

MC2M_TERA_Icon_Status_L25 := Stat_FrontFog;    //Front FOG Lamp
MC2M_TERA_Icon_Status_L26 := Stat_RearFogLamp;

MC2M_TERA_Icon_Status_L27 := AlarmState_EngineOilPressure; //Engine Oil Pressure Alarm
MC2M_TERA_Icon_Status_L28 := AlarmState_EngineOilTemperature; //Engine Oil Temperature Alarm
MC2M_TERA_Icon_Status_L29 := AlarmState_TransOilTemperature; //Transmission Oil Temperature Alarm
MC2M_TERA_Icon_Status_L30 := AlarmState_FuelLevelLow; // Fuel level is LOW

MC2M_TERA_Icon_Status_L31 := AlarmState_ParkBrakePressure OR AlarmState_AccessoryPressure OR AlarmState_ServiceBrake1Pressure OR AlarmState_ServiceBrake2Pressure; //Low Brake level OF 4 tanks
//MC2M_TERA_Icon_Status_L31 := test_bit; 
//MC2M_TERA_Icon_Status_L31 := Cmd_Bypass_Switch;  ///MC2M_U19 Simge tanmlanacak 

MC2M_TERA_Icon_Status_L32 := AlarmState_ParkBrakePressure;
MC2M_TERA_Icon_Status_L33 := AlarmState_ServiceBrake1Pressure;
MC2M_TERA_Icon_Status_L34 := AlarmState_ServiceBrake2Pressure;
MC2M_TERA_Icon_Status_L35 := AlarmState_AccessoryPressure;

MC2M_TERA_Icon_Status_L36 := AlarmState_SteeringWheelRepPump;
//MC2M_TERA_Icon_Status_L37 :=  AlarmState_BrakeLiningWear; // Lastik basinci
MC2M_TERA_Icon_Status_L37 :=  Cmd_Bypass_Switch;              ///(I/H) MC2M_U19


//MC2M_TERA_Icon_Status_L38 := AlarmState_WeatherCold;
MC2M_TERA_Icon_Status_L38 := Stat_InterBuzzer;

MC2M_TERA_Icon_Status_L39 := AlarmState_HydrolicTankPressure;
MC2M_TERA_Icon_Status_L40 := AlarmState_HydrolicTankTemp;

MC2M_TERA_Icon_Status_L41 := AlarmState_OilFilterDirty_1;
//MC2M_TERA_Icon_Status_L41 := test_bit;
MC2M_TERA_Icon_Status_L42 := AlarmState_OilFilterDirty_2 AND (HTempLevel_Normalized > 35); //(marel)

//MC2M_TERA_Icon_Status_L43 := Stat_MineLock;
MC2M_TERA_Icon_Status_L43 := Stat_MineLock; //DIGIN_RearDoorMineLock (I/L) MC2M_T37 



