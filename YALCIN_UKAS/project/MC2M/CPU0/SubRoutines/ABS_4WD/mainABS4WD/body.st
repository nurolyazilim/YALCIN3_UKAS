// ABS 4x4(OffRoad) / 4x2 mode selection
// ABS 4x4(OffRoad) / 4x2 mode selection
Stat_ABS4WD := IOMODE_DIGIN25_ABSoffRoad;//J3_17

Trigger_44.CLK := IOMODE_DIGIN25_ABSoffRoad; 
Trigger_44;

Trigger_42.CLK := IOMODE_DIGIN25_ABSoffRoad; 
Trigger_42;


// OUTPUT Configuration -----------------------------

//ABS Off-Road mode to ABS ECU X3.1 <- IO-Mode J2_16
//MC2M_IOMODE_DOUT03 := Trigger_44.Q OR Trigger_42.Q; 

//EBC1_MC2M_ABSOffRoadSwitch := BOOL_TO_SINT(Trigger_44.Q OR Trigger_42.Q);

EBC1_MC2M_ABSOffRoadSwitch := BOOL_TO_SINT(Stat_ABS4WD);