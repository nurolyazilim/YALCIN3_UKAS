//TCM REMOTE GEARCONTROL MESSAGE PERIOD

IF ETC7_ActiveShiftConsoleIndicator = Enum257_PRIMARY_SHIFT_CONSOLE_IS_ACTIVE THEN
    vt3_can_period_TC1_SHIFT_SELECTOR1 := 50;
    vt3_can_period_TC1_SHIFT_SELECTOR2 := 500;
ELSIF ETC7_ActiveShiftConsoleIndicator = Enum257_SECONDARY_SHIFT_CONSOLE_IS_ACTIVE THEN
    vt3_can_period_TC1_SHIFT_SELECTOR1 := 500;
    vt3_can_period_TC1_SHIFT_SELECTOR2 := 50;
END_IF

//TCM REMOTE GEARCONTROL VALUES
IF UKAS_TCM_ShiftSelector_Button_D THEN
    gear_selected := 252;
ELSIF UKAS_TCM_ShiftSelector_Button_N THEN
    gear_selected := 125;
ELSIF UKAS_TCM_ShiftSelector_Button_R THEN
    gear_selected := 223;
ELSE
    gear_selected := 224;
END_IF

//TCM REMOTE GEARCONTROL MESSAGE FORMAT
//TC1_1_Transmission_Control
TC1_1_TransmissionGearShiftInhbtRq := Enum255_TAKE_NO_ACTION;
TC1_1_TrnsmTrqCnvLockupDisableRq := Enum255_TAKE_NO_ACTION;
TC1_1_DisengageDrivelineRequest := Enum255_TAKE_NO_ACTION;
TC1_1_TrnsmReverseGearShftInhbtRq := Enum255_TAKE_NO_ACTION;  
TC1_1_RequestedPercentClutchSlip := 255;
//TC1_1_TransmissionRequestedGear := 224;
TC1_1_TransmissionRequestedGear := gear_selected;
TC1_1_DisengiffLockRequestFrontAxl1 := Enum255_TAKE_NO_ACTION;
TC1_1_DisengiffLockRequestFrontAxl2 := Enum255_TAKE_NO_ACTION;
TC1_1_DisengageDiffLockRequestRearAxl1 := Enum255_TAKE_NO_ACTION;
TC1_1_DisengageDiffLockRequestRearAxl2 := Enum255_TAKE_NO_ACTION;
TC1_1_DisengageDiffLockRequestCentral := Enum255_TAKE_NO_ACTION;
TC1_1_DisengiffLockRequestCentralFront := Enum255_TAKE_NO_ACTION;
TC1_1_DisengiffLockRequestCentralRear := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionMode1 := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionMode2 := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionMode3 := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionMode4 := Enum255_INACTIVE;
TC1_1_TransmissionRequestedLaunchGear := Enum88_15;
TC1_1_TrnsmShftSlctorDisplayMdeSw := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionMode5 := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionMode6 := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionMode7 := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionMode8 := Enum255_TAKE_NO_ACTION;
TC1_1_TransmissionRequestedLaunchGear_res := Enum255_TAKE_NO_ACTION; 

//TC1_2_Transmission_Control
TC1_2_TransmissionGearShiftInhbtRq := Enum255_TAKE_NO_ACTION;
TC1_2_TrnsmTrqCnvLockupDisableRq := Enum255_TAKE_NO_ACTION;
TC1_2_DisengageDrivelineRequest := Enum255_TAKE_NO_ACTION;
TC1_2_TrnsmReverseGearShftInhbtRq := Enum255_TAKE_NO_ACTION;  
TC1_2_RequestedPercentClutchSlip := 255;
//TC1_2_TransmissionRequestedGear := 224;
TC1_2_TransmissionRequestedGear := gear_selected;
TC1_2_DisengiffLockRequestFrontAxl1 := Enum255_TAKE_NO_ACTION;
TC1_2_DisengiffLockRequestFrontAxl2 := Enum255_TAKE_NO_ACTION;
TC1_2_DisengageDiffLockRequestRearAxl1 := Enum255_TAKE_NO_ACTION;
TC1_2_DisengageDiffLockRequestRearAxl2 := Enum255_TAKE_NO_ACTION;
TC1_2_DisengageDiffLockRequestCentral := Enum255_TAKE_NO_ACTION;
TC1_2_DisengiffLockRequestCentralFront := Enum255_TAKE_NO_ACTION;
TC1_2_DisengiffLockRequestCentralRear := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionMode1 := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionMode2 := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionMode3 := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionMode4 := Enum255_INACTIVE;
TC1_2_TransmissionRequestedLaunchGear := Enum88_15;
TC1_2_TrnsmShftSlctorDisplayMdeSw := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionMode5 := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionMode6 := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionMode7 := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionMode8 := Enum255_TAKE_NO_ACTION;
TC1_2_TransmissionRequestedLaunchGear_res := Enum255_TAKE_NO_ACTION; 

//ECM REMOTE ACCELERATOR CONTROL

EEC2_GasPedal:= UKAS_ECM_Remote_Accelerator;

IF MURPHY_MC2M_ECM_Remote_Accelerator_Switch THEN
    EBC1_GasPedalEnable := Enum87_1; 
ELSE
    EBC1_GasPedalEnable := Enum87_0; 
END_IF

//EJDER YALCIN SERVICE_BRAKE & ACCELERATOR_PEDAL_POSITION FEEDBACKS
MC2M_MURPHY_ServiceBrakeActivated := ServiceBrakeActivated;
RemoteAcceleratorPedalPosition1 := EEC2_AcceleratorPedalPosition1;
MC2M_MURPHY_RemoteAcceleratorPedalPosition1 := EEC2_AcceleratorPedalPosition1;

MC2M_MURPHY_Hour := INT_TO_SINT(TOD_TO_HOUR(TimeNow));
MC2M_MURPHY_Minute := INT_TO_SINT(TOD_TO_MINUTE(TimeNow));
MC2M_MURPHY_Second := INT_TO_SINT(TOD_TO_SECOND(TimeNow));

MC2M_MURPHY_EngineSpeed := EEC1_EngineSpeed;
MC2M_MURPHY_VehicleSpeed := VehicleSpeed;

IF ( CurrentGear == -1 ) THEN
    MC2M_MURPHY_CurrentGear := 8;
ELSE
    MC2M_MURPHY_CurrentGear := CurrentGear + 1;
END_IF

MC2M_MURPHY_FuelLevel_1 := FuelLevel_Normalized_TR_TL;
MC2M_MURPHY_EngineTempValue := EngineTempValue;
MC2M_MURPHY_BatteryLevel := BatteryLevel;
MC2M_MURPHY_EngineOilPressure := EngineOilPressure;

MC2M_MURPHY_ParkingBrakePressure := MC2M_TERA_ParkingBrakePressure;
MC2M_MURPHY_ServiceBrake1 := MC2M_TERA_ServiceBrake1;
MC2M_MURPHY_ServiceBrake2 := MC2M_TERA_ServiceBrake2;
MC2M_MURPHY_AccessoryPressure := MC2M_TERA_AccessoryPressure;

MC2M_MURPHY_TransOilTemperature := MC2M_TERA_TransOilTemperature;

MC2M_MURPHY_ParkingBrakeActivated := DIGIN_HandBrakeActivated;

MC2M_MURPHY_TCM_SuspectParameterNumber := MC2M_TERA_TCM_SuspectParameterNumber;
MC2M_MURPHY_ECM_SuspectParameterNumber := MC2M_TERA_ECM_SuspectParameterNumber;
MC2M_MURPHY_EBS_SuspectParameterNumber := MC2M_TERA_EBS_SuspectParameterNumber;

MC2M_MURPHY_TCM_FailureModeIdentifier := MC2M_TERA_TCM_FailureModeIdentifier;
MC2M_MURPHY_ECM_FailureModeIdentifier := MC2M_TERA_ECM_FailureModeIdentifier;
MC2M_MURPHY_EBS_FailureModeIdentifier := MC2M_TERA_EBS_FailureModeIdentifier;

MC2M_MURPHY_TCM_OccurrenceCount := MC2M_TERA_TCM_OccurrenceCount;
MC2M_MURPHY_ECM_OccurrenceCount := MC2M_TERA_ECM_OccurrenceCount;
MC2M_MURPHY_EBS_OccurrenceCount := MC2M_TERA_EBS_OccurrenceCount;







