//Vehicle should be different than Neutral Gear to utilize Exhaust brake

//************************************ TIMER **************************************
//Cmd_EngineBrake := DIGIN_EngineBrake; //(I/H) MC2M_U28 
//Cmd_EngineBrake := test_bit4 AND (CurrentGear>0) AND (VehicleSpeed>EngineBrakeSpeedLimit) AND (EEC2_AcceleratorPedalPosition1=0);
Cmd_EngineBrake := DIGIN_EngineBrake AND (CurrentGear>0) AND (VehicleSpeed>EngineBrakeSpeedLimit) AND (EEC2_AcceleratorPedalPosition1 == 0); //(I/H) MC2M_U28
//Cmd_EngineBrake := DIGIN_EngineBrake;// AND (CurrentGear>0) AND (VehicleSpeed>EngineBrakeSpeedLimit); //(I/H) MC2M_U28
//Cmd_EngineBrake := DIGIN_EngineBrake AND (CurrentGear>0);// AND (VehicleSpeed>EngineBrakeSpeedLimit); //(I/H) MC2M_U28
//Cmd_EngineBrake := DIGIN_EngineBrake; //(I/H) MC2M_U28
ETC1_TransmissionTrqCnvLockupEngaged := ETC1_TransmissionTrqCnvLockupEngaged;

Stat_EngineBrake := Cmd_EngineBrake;
//Stat_EngineBrake := test_brake; 
MC2M_IOMODE_DOUT11_EngineBrakeActivation := Stat_EngineBrake; //DOUT11_EngineBrakeActivation  (O/L) IOM1_J2_4 
MC2M_TERA_Engine_Brake_Stat := Stat_EngineBrake; // Send engine brake state TO giga (aaslan)

//Stat_EngineBrakeLED := (EBC1_vECM_EngineRetarderSelection=47);  //100 47  
Stat_EngineBrakeLED := (EBC1_vECM_EngineRetarderSelection=100);  //100 47  
MC2M_TERA_Icon_Status_BO_2:= Stat_EngineBrakeLED;
EBC1_MC2M_EngineRetarder := EBC1_vECM_EngineRetarderSelection;

//EBC1_MC2M_EngineRetarder := 50;


/*
TimerExBrake.IN := IOMODE_DIGIN31;
TimerExBrake.PT := TimerDeltaExBrake;
TimerExBrake;
//*********************************************************************************
DOUT_TCM102_ExhaustBrakeRequest := IOMODE_DIGIN31 AND TimerExBrake.Q AND (VehicleSpeed>ExBrakeSpeedLimit) AND (EEC2_AcceleratorPedalPosition1=0); //J3_16 - TCM 102 request FOR approval

IF(DOUT_TCM102_ExhaustBrakeRequest)THEN
    IF(CurrentGear!=0)THEN
        IF(DIGIN_TCM_104)THEN //TCM_104: Ex-brake approved by TCM
            Stat_ExhaustBrake := 2; // approved
        ELSE
            Stat_ExhaustBrake := 1; //requesting FOR approval
        END_IF
    ELSE
        Stat_ExhaustBrake := -1; //restricted because NOT Neutral Gear
    END_IF  
ELSE
    Stat_ExhaustBrake := 0;  
END_IF
*/

// OUTPUT Configuration -----------------------------

//DOUT_ExhaustBrakeValve := (Stat_ExhaustBrake=2);

//EBC1_MC2M_ABSOffRoadSwitch := BOOL_TO_SINT(Stat_ABS4WD);

