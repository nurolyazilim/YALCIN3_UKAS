/*
IF(outSideTemperature <=Resistance_Limit) THEN 
resisActive :=TRUE;
ELSE 
resisActive:=FALSE;
END_IF
*/

//TriggerRes.CLK := IOMODE_DIGIN18_MirrorWindowResistance AND resisActive;
TriggerRes.CLK := IOMODE_DIGIN18_MirrorWindowResistance; //(J3_19 - I/H) [X]
//TriggerRes.CLK := test_bit; //(J3_19 - I/H)                                [>]  

TriggerRes;
IF(TriggerRes.Q)THEN
    Cmd_TriggerRes := NOT Cmd_TriggerRes;
END_IF

// Mirror & Window Resistance

TimerResistanceFront.PT := TimerDelta_ResistanceFront;
TimerResistanceSide.PT := TimerDelta_ResistanceSide;

TimerResistanceFront.IN := Cmd_TriggerRes AND (NOT TimerResistanceSide.Q); // IOMODE_DIGIN18 : J3_19
TimerResistanceFront;

TimerResistanceSide.IN := Cmd_TriggerRes AND (NOT TimerResistanceFront.Q); // IOMODE_DIGIN18 : J3_19
TimerResistanceSide;

Stat_ResistancesFront := TimerResistanceFront.Q AND Cmd_TriggerRes;
Stat_ResistancesSide := TimerResistanceSide.Q AND Cmd_TriggerRes;


// OUTPUT Configuration -----------------------------

// Resistance Front Relay via MUX J4_13
//MC2M_MUX_DIGOUT08_ResistancesFront := Stat_ResistancesFront; 
DOUT_ResistancesFront := Stat_ResistancesFront; //T09 [X]


// Resistance Side Relay
DOUT_SideWindowResistance := Stat_ResistancesSide; //T14 [X] 
DOUT_ResistanceLED        := Cmd_TriggerRes;       //S14 [X] 