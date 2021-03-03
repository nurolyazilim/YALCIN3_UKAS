
(* write the event code in language: Structured Text *)

 SWVersion_TRIG.CLK :=  ind_screen_SWVersion.eventDown;
 SWVersion_TRIG;
 
 IF(ind_screen_SWVersion.pressedTime>t#5s) THEN 
 SWVersion_Stat:= TRUE;
 END_IF


IF(SWVersion_TRIG.Q) THEN 
 IF(SWVersion_Stat) THEN 
   SWVersion_Stat:=FALSE;
 END_IF
END_IF