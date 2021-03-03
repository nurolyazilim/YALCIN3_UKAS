//MC2M_TERA_DIAG_INP00 := DIGIN_GunTowerDoor_2;
MC2M_TERA_DIAG_INP00 := DIGIN_TurnRightSignal;
//MC2M_TERA_DIAG_INP01 := DIGIN_OilFilterDirtiness_1;
MC2M_TERA_DIAG_INP02 := DIGIN_Feedback_4WD_DiffLock;
MC2M_TERA_DIAG_INP03 := DIGIN_Feedback_DropboxLow;
MC2M_TERA_DIAG_INP04 := DIGIN_GunTowerDoor_1;
MC2M_TERA_DIAG_INP05 := DIGIN_AirFilterClogged;
MC2M_TERA_DIAG_INP06 := DIGIN_Feedback_RearAxle;
MC2M_TERA_DIAG_INP07 := DIGIN_Back_HydDoorOpened AND DIGIN_Back_HydDoorClosed;//DIGIN_RearDoorMineLock;
MC2M_TERA_DIAG_INP08 := DIGIN_SteeringWheelRepPump;
MC2M_TERA_DIAG_INP09 := (EFL_P1_EngineCoolantLevel == 0);//DIGIN_EngineCoolantLevelLow;(aaslan)
MC2M_TERA_DIAG_INP10 := UINT_TO_BOOL(AIN_Tank_Left_Level);              // 1
//MC2M_TERA_DIAG_INP11 := UINT_TO_BOOL(AIN_Tank_2_Pressure);            
MC2M_TERA_DIAG_INP11 := DIGIN_Light_P1_Park;
MC2M_TERA_DIAG_INP12 := UINT_TO_BOOL(AIN_FootBrakePressureSensor_1);    // 2  
MC2M_TERA_DIAG_INP13 := UINT_TO_BOOL(AIN_FuelTankLeft_Temp);           // 3
MC2M_TERA_DIAG_INP14 := UINT_TO_BOOL(AIN_AccessoryPressureSensor);      // 4 
//MC2M_TERA_DIAG_INP15 := UINT_TO_BOOL(AIN_Tank_2_Temperature);          
MC2M_TERA_DIAG_INP15 := DIGIN_LowBeamStatus;          
MC2M_TERA_DIAG_INP16 := FALSE;
//MC2M_TERA_DIAG_INP17 := DIGIN_BlackOut_S1;
MC2M_TERA_DIAG_INP17 := DIGIN_WiperLow;
MC2M_TERA_DIAG_INP18 := FALSE;
MC2M_TERA_DIAG_INP19 := DIGIN_BackDoor_IN_Close;
MC2M_TERA_DIAG_INP20 := FALSE;
MC2M_TERA_DIAG_INP21 := DIGIN_HandBrakeActivated; 
//MC2M_TERA_DIAG_INP22 := UINT_TO_BOOL(AIN_outSideTemperatur);            
MC2M_TERA_DIAG_INP22 := DIGIN_Feedback_DropboxHigh;
////MC2M_TERA_DIAG_INP23 := DIGIN_ABSECU_X1_18;
MC2M_TERA_DIAG_INP23 := DIGIN_CentralLockSystemEnable;
//MC2M_TERA_DIAG_INP24 := DIGIN_OilFilterDirtiness_2;
MC2M_TERA_DIAG_INP25 := FALSE;             
MC2M_TERA_DIAG_INP26 := DIGIN_TCM_104;
MC2M_TERA_DIAG_INP27 := DIGIN_BackDoor_OUT_Open;
MC2M_TERA_DIAG_INP28 := DIGIN_BackDoor_OUT_Close;
MC2M_TERA_DIAG_INP29 := DIGIN_AlternatorFailure;
//MC2M_TERA_DIAG_INP30 := UINT_TO_BOOL(AIN_Tank_hydraulicPressure);       // 5
MC2M_TERA_DIAG_INP31 := UINT_TO_BOOL(AIN_WebastoTankResistanceSensor);  // 6 
//MC2M_TERA_DIAG_INP32 := UINT_TO_BOOL(AIN_Tank_Hydraulic_Temperature);   // 7
MC2M_TERA_DIAG_INP33 := UINT_TO_BOOL(AIN_ParkBrakePressureSensor);      // 8 
MC2M_TERA_DIAG_INP34 := DIGIN_DoorOpenSwitch;
MC2M_TERA_DIAG_INP35 := UINT_TO_BOOL(AIN_FootBrakePressureSensor_2);    // 9 
//MC2M_TERA_DIAG_INP36 := DIGIN_Tank_auto;
MC2M_TERA_DIAG_INP36 := DIGIN_Bypass_Switch;
//MC2M_TERA_DIAG_INP37 := DIGIN_Tank_1;
MC2M_TERA_DIAG_INP37 := DIGIN_HighBeamStatus;
//MC2M_TERA_DIAG_INP38 := DIGIN_Tank_2;
MC2M_TERA_DIAG_INP38 := DIGIN_WiperIntermittent;

//MC2M_TERA_DIAG_INP39 := DIGIN_BlackOut_S2;
MC2M_TERA_DIAG_INP39 := DIGIN_WiperHigh;
//MC2M_TERA_DIAG_INP40 := FALSE;
MC2M_TERA_DIAG_INP40 := DIGIN_TurnLeftSignal;
MC2M_TERA_DIAG_INP41 := FALSE;
MC2M_TERA_DIAG_INP42 := DIGIN_Back_HydDoorOpened;
MC2M_TERA_DIAG_INP43 := DIGIN_Back_HydDoorClosed;
//MC2M_TERA_DIAG_INP44 := DIGIN_BlackOut_S3;
MC2M_TERA_DIAG_INP44 := DIGIN_WiperWasher;
//MC2M_TERA_DIAG_INP45 := DIGIN_BlackOut_Tag;
MC2M_TERA_DIAG_INP45 := DIGIN_BlackOut;
////MC2M_TERA_DIAG_INP46 := DIGIN_BlackOut_1;
MC2M_TERA_DIAG_INP46 := DIGIN_FrontAxleDiffLock;
////MC2M_TERA_DIAG_INP47 := DIGIN_BlackOut_2;
MC2M_TERA_DIAG_INP47 := DIGIN_RearAxleDiffLock;
MC2M_TERA_DIAG_INP48 := DIGIN_BackDoor_IN_Open;
MC2M_TERA_DIAG_INP49 := DIGIN_KeySwitchActivated;
//MC2M_TERA_DIAG_INP50 := DIGIN_Hazard;
MC2M_TERA_DIAG_INP51 := DIGIN_IntakeAirHeaterActivated;
//MC2M_TERA_DIAG_INP52 := DIGIN_IntakeAirHeaterActivated;
MC2M_TERA_DIAG_INP52 := DIGIN_EngineBrake;

MC2M_TERA_DIAG_OUT00 := DOUT_TurnSignalLamp_Left;
//MC2M_TERA_DIAG_OUT01 := DOUT_InteriorLamp_Front;
MC2M_TERA_DIAG_OUT01 := DOUT_EngineProtection;
//MC2M_TERA_DIAG_OUT02 := DOUT_WebastoTankResistance;
//MC2M_TERA_DIAG_OUT03 := DOUT_FrontFogLamp_L;
MC2M_TERA_DIAG_OUT03 := FALSE;
//MC2M_TERA_DIAG_OUT04 := DOUT_Horn;
MC2M_TERA_DIAG_OUT04 := FALSE;
//MC2M_TERA_DIAG_OUT05 := UINT_TO_BOOL(PWM_WiperBrake);                  // 10
//MC2M_TERA_DIAG_OUT06 := DOUT_InteriorLamp_Back;
MC2M_TERA_DIAG_OUT06 := FALSE;
//MC2M_TERA_DIAG_OUT07 := DOUT_BlackOutLamp;
MC2M_TERA_DIAG_OUT07 := DOUT_Backup_Alarm;
//MC2M_TERA_DIAG_OUT08 := DOUT_FrontFogLamp_R;
MC2M_TERA_DIAG_OUT08 := DOUT_InteriorVantilator;
MC2M_TERA_DIAG_OUT09 := DOUT_RearDoorControlValf_1;
MC2M_TERA_DIAG_OUT10 := UINT_TO_BOOL(DOUT_WiperMotor_1);                // 11
MC2M_TERA_DIAG_OUT11 := DOUT_HazardButtonLed;
MC2M_TERA_DIAG_OUT12 := DOUT_RearDoorControlValf_2;
//MC2M_TERA_DIAG_OUT13 := DOUT_T50Enable;
//MC2M_TERA_DIAG_OUT14 := UINT_TO_BOOL(DOUT_DashboardBacklight);         // 12
MC2M_TERA_DIAG_OUT15 := DOUT_SideWindowResistance;
//MC2M_TERA_DIAG_OUT16 := DOUT_ABSECU_X1_9;
MC2M_TERA_DIAG_OUT17 := DOUT_InteriorLamp_BO;
MC2M_TERA_DIAG_OUT18 := DOUT_ResistanceLED;
MC2M_TERA_DIAG_OUT19 := DOUT_Dropbox_4WD_Off;
MC2M_TERA_DIAG_OUT20 := DOUT_TurnSignalLamp_Right;
MC2M_TERA_DIAG_OUT21 := UINT_TO_BOOL(DOUT_WiperMotor_2);                // 13 
MC2M_TERA_DIAG_OUT22 := DOUT_Washer;
MC2M_TERA_DIAG_OUT23 := DOUT_BatteryCharge;
MC2M_TERA_DIAG_OUT24 := DOUT_Dropbox_Neutral;
MC2M_TERA_DIAG_OUT25 := DOUT_Dropbox_Low;
MC2M_TERA_DIAG_OUT26 := DOUT_Dropbox_High;
MC2M_TERA_DIAG_OUT27 := DOUT_RearAxleDiffLock;
////MC2M_TERA_DIAG_OUT28 := DOUT_ParkLamp_F;
MC2M_TERA_DIAG_OUT28 := DOUT_FrontAxleDiffLock;
//MC2M_TERA_DIAG_OUT29 := DOUT_BO_ParkLamp;
MC2M_TERA_DIAG_OUT29 := DOUT_WiperMotorLow_1;
////MC2M_TERA_DIAG_OUT30 := DOUT_ParkLamp_R;
MC2M_TERA_DIAG_OUT30 := DOUT_ResistancesFront;
//MC2M_TERA_DIAG_OUT31 := DOUT_BO_StopLamp;
MC2M_TERA_DIAG_OUT31 := DOUT_WiperMotorLow_2;

MC2M_TERA_DIAG_OUT32 := FALSE;
MC2M_TERA_DIAG_OUT33 := FALSE;
MC2M_TERA_DIAG_OUT34 := FALSE;
MC2M_TERA_DIAG_OUT35 := FALSE;
MC2M_TERA_DIAG_OUT36 := FALSE;

MC2M_TERA_DIAG_OUT37 := FALSE;
MC2M_TERA_DIAG_OUT38 := FALSE;
MC2M_TERA_DIAG_OUT39 := FALSE;

MC2M_TERA_DIAG_INP10AN := AIN_Tank_Left_Level;                          // 1
MC2M_TERA_DIAG_INP12AN := AIN_FootBrakePressureSensor_1;                // 2  
MC2M_TERA_DIAG_INP13AN := AIN_FuelTankLeft_Temp;                       // 3
MC2M_TERA_DIAG_INP14AN := AIN_AccessoryPressureSensor;                  // 4 
//MC2M_TERA_DIAG_INP22AN := AIN_outSideTemperatur;                        
//MC2M_TERA_DIAG_INP25AN := AIN_inSideTemperatur;                       
//MC2M_TERA_DIAG_INP30AN := AIN_Tank_hydraulicPressure;                   // 5
MC2M_TERA_DIAG_INP31AN := AIN_WebastoTankResistanceSensor;              // 6 
//MC2M_TERA_DIAG_INP32AN := AIN_Tank_Hydraulic_Temperature;               // 7

MC2M_TERA_DIAG_INP33AN := AIN_ParkBrakePressureSensor;                  // 8 
MC2M_TERA_DIAG_INP35AN := AIN_FootBrakePressureSensor_2;                // 9 
//MC2M_TERA_DIAG_OUT05AN := PWM_WiperBrake;                               // 10
MC2M_TERA_DIAG_OUT10AN := DOUT_WiperMotor_1;                             // 11
//MC2M_TERA_DIAG_OUT14AN := DOUT_DashboardBacklight;                      // 12
MC2M_TERA_DIAG_OUT21AN := DOUT_WiperMotor_2;                             // 13 

MC2M_TERA_DIAG_fuelTank_1_Temperature := fuelTank_1_Temperature; 
MC2M_TERA_DIAG_PresLevel_Normalized := PresLevel_Normalized;
MC2M_TERA_DIAG_HTempLevel_Normalized_2 := HTempLevel_Normalized_2;
MC2M_TERA_DIAG_HTempLevel_Normalized := HTempLevel_Normalized;

MC2M_TERA_DIAG_EngineCoolantLevel := EFL_P1_EngineCoolantLevel;

