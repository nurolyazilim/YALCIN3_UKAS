// Service brake pressed OR NOT
ServiceBrakeActivated := NOT(CCVS_BrakeSwitch=Enum364_BRAKE_PEDAL_DEPRESSED);

// Neutral Start Condition
EngineStartPermit := (CurrentGear=0);

// Key Switxh Procedure
//DOUT_KeySwitch_K15 := (DIGIN_KeySwitchActivated AND EngineStartPermit);
