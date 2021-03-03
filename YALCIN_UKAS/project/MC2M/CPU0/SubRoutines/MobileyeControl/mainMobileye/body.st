// Mobileye gerekli veriler (marel) 14.05.2019

IF ( EBC1_vECM_EBSBrakeSwitch = Enum66_BRAKE_PEDAL_IS_BEING_PRESSED ) THEN
    MC2M_MOBILEYE_BrakeSignal := TRUE;
ELSIF ( EBC1_vECM_EBSBrakeSwitch = Enum66_BRAKE_PEDAL_IS_NOT_BEING_PRESSED ) THEN
    MC2M_MOBILEYE_BrakeSignal := FALSE;
END_IF
/*
IF ( Stat_Wiper > 0 ) THEN
    MC2M_MOBILEYE_Wipers := TRUE;
ELSE
    MC2M_MOBILEYE_Wipers := FALSE;
END_IF
*/
MC2M_MOBILEYE_LowBeam := Stat_LowBeam;
MC2M_MOBILEYE_HighBeam := Stat_HighBeam;
MC2M_MOBILEYE_LeftSignal := DIGIN_TurnLeftSignal;
MC2M_MOBILEYE_RightSignal := DIGIN_TurnRightSignal;
MC2M_MOBILEYE_VehicleSpeed := VehicleSpeed;