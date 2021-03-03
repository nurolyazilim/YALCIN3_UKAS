
 (* type code here *)
 
 Cmd_BlackOut := NOT DIGIN_BlackOut;  
 Stat_BlackOut := Cmd_BlackOut;
 
 /*************Black Out Switch Inputs **********************/
 //Cmd_BlackOut_S1 := DIGIN_BlackOut_S1; //U39
 //Cmd_BlackOut_S2 := DIGIN_BlackOut_S2; //U09
 //Cmd_BlackOut_S3 := DIGIN_BlackOut_S3; //U16

 //Cmd_BlackOut_Tag:= DIGIN_BlackOut_Tag; //U35
  
//// Cmd_BlackOut_1  := DIGIN_BlackOut_1; //U05
//// Cmd_BlackOut_2  := DIGIN_BlackOut_2; //U25
 
 //Cmd_BO_ParkLamp := Cmd_ParkLamp AND (Stat_BlackOut_S3 OR Stat_BlackOut_S2 OR Stat_BlackOut_S1);
 Cmd_BO_ParkLamp := (Cmd_ParkLamp OR Cmd_HighBeam OR Cmd_LowBeam)  AND (Stat_BlackOut_S3 OR Stat_BlackOut_S2 );
 
 //Cmd_BO_StopLamp := Cmd_StopLamp AND (Stat_BlackOut_S3 OR Stat_BlackOut_S2 OR Stat_BlackOut_S1);
 Cmd_BO_StopLamp := Cmd_StopLamp AND (Stat_BlackOut_S3 OR Stat_BlackOut_S2);
 
 
 Cmd_BO_FollowLight := (Stat_BlackOut_S3 OR Stat_BlackOut_S2 OR Stat_BlackOut_S1);
/*************Black Out Stich Status  **********************/
  
  /*
 Stat_BlackOut_S1:=  Cmd_BlackOut_S1 ;
 Stat_BlackOut_S2:=  Cmd_BlackOut_S2;
 Stat_BlackOut_S3:=  Cmd_BlackOut_S3;
 Stat_BlackOut_Tag:= Cmd_BlackOut_Tag;
 Stat_BlackOut_1 :=  Cmd_BlackOut_1;
 Stat_BlackOut_2 :=  Cmd_BlackOut_2;
 */
 /*
 Stat_BlackOut_S1:= (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1   AND NOT Cmd_BlackOut_2) AND  Cmd_BlackOut_Tag  ;
 Stat_BlackOut_S2:= (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_Tag AND NOT Cmd_BlackOut_2 ) AND   Cmd_BlackOut_1;
 Stat_BlackOut_S3:= (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2  AND NOT Cmd_BlackOut_2) AND   Cmd_BlackOut_S3 AND Cmd_BlackOut_Tag AND Cmd_BlackOut_1;
 
 Stat_BlackOut_Tag:=(NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1 AND NOT Cmd_BlackOut_Tag) AND Cmd_BlackOut_2;
 Stat_BlackOut_1 := (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1 AND  NOT  Cmd_BlackOut_Tag) AND Cmd_BlackOut_S2 AND Cmd_BlackOut_2;
 Stat_BlackOut_2 := (NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1 AND NOT Cmd_BlackOut_Tag ) AND  Cmd_BlackOut_S1 AND Cmd_BlackOut_S2 AND Cmd_BlackOut_2;
 */
 
 Stat_BlackOut_S1_t := (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1   AND NOT Cmd_BlackOut_2) AND  Cmd_BlackOut_Tag  ;
 Stat_BlackOut_S2_t:= (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_Tag AND NOT Cmd_BlackOut_2 ) AND   Cmd_BlackOut_1;
 Stat_BlackOut_S3_t:= (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2  AND NOT Cmd_BlackOut_2) AND   Cmd_BlackOut_S3 AND Cmd_BlackOut_Tag AND Cmd_BlackOut_1;
 
 Stat_BlackOut_Tag_t:=(NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1 AND NOT Cmd_BlackOut_Tag) AND Cmd_BlackOut_2;
 Stat_BlackOut_1_t := (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1 AND  NOT  Cmd_BlackOut_Tag) AND Cmd_BlackOut_S2 AND Cmd_BlackOut_2;
 Stat_BlackOut_2_t := (NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1 AND NOT Cmd_BlackOut_Tag ) AND  Cmd_BlackOut_S1 AND Cmd_BlackOut_S2 AND Cmd_BlackOut_2;

//H2L  geçişi burada degerlendiriliyor
Stat_BlackOut_H2L := Stat_BlackOut_S1_t OR Stat_BlackOut_S2_t OR Stat_BlackOut_S3_t OR Stat_BlackOut_Tag_t OR 
                    Stat_BlackOut_1_t OR Stat_BlackOut_2_t;
 
 //BackDoor_OUT_Close Debounce 
IF (!Stat_BlackOut_H2L) THEN         
    IF (NOT Stat_BlackOut0) THEN 
        BlackOut_DBCtr := BlackOut_DBCtr + 100;
    END_IF
ELSE 
    BlackOut_DBCtr := 0;
    Stat_BlackOut_S1:= Stat_BlackOut_S1_t;
    Stat_BlackOut_S2:=Stat_BlackOut_S2_t;
    Stat_BlackOut_S3:=Stat_BlackOut_S3_t;
 
    Stat_BlackOut_Tag:=Stat_BlackOut_Tag_t;
    Stat_BlackOut_1:=Stat_BlackOut_1_t;
    Stat_BlackOut_2:=Stat_BlackOut_2_t;    
END_IF

IF (!Stat_BlackOut_H2L AND BlackOut_DBCtr>ButtonDebounceVal ) THEN 
  //H2L burada çalıştırılacak
    Stat_BlackOut0 := TRUE;
    Stat_BlackOut_S1:= Stat_BlackOut_S1_t;
    Stat_BlackOut_S2:=Stat_BlackOut_S2_t;
    Stat_BlackOut_S3:=Stat_BlackOut_S3_t;
 
    Stat_BlackOut_Tag:=Stat_BlackOut_Tag_t;
    Stat_BlackOut_1:=Stat_BlackOut_1_t;
    Stat_BlackOut_2:=Stat_BlackOut_2_t;
ELSE
    Stat_BlackOut0 := FALSE;
END_IF
 
 Stat_BO_ParkLamp:= Cmd_BO_ParkLamp;
 Stat_BO_StopLamp:= Cmd_BO_StopLamp;
 
 Stat_BO_FollowLight := Cmd_BO_FollowLight;

/********************outputs***********************/
//Stat_BlackOut 
//MC2M_TERA_Icon_Status_BO_S1:= Stat_BlackOut_S1;
MC2M_TERA_Icon_Status_BO_S1:= Stat_BlackOut;

MC2M_TERA_Icon_Status_BO_S2:= Stat_BlackOut_S2;
//MC2M_TERA_Icon_Status_BO_S3:= Stat_BlackOut_S3;

MC2M_TERA_Icon_Status_GIGA_Bsy:= Stat_GIGA_Busy;

MC2M_TERA_Icon_Status_BO_1:= Stat_BlackOut_1;
//MC2M_TERA_Icon_Status_BO_2:= Stat_BlackOut_2;
MC2M_TERA_Icon_Status_BO_0:= Stat_BlackOut0; 
  

 
 
 
//DOUT_InteriorLamp_BO:= (IOMODE_2_DIGIN19_InteriorLamps OR
//                         !AlarmState_DoorOpen_1) //BURASI CIKARILACAK 
//                                  AND 
//                        (Stat_BlackOut_S1 OR 
//                         Stat_BlackOut_S2 OR 
//                         Stat_BlackOut_S3 );
DOUT_InteriorLamp_BO:= IOMODE_2_DIGIN19_InteriorLamps
                                  AND 
                        (Stat_BlackOut_S1 OR 
                         Stat_BlackOut_S2 ); 
                       //  Stat_BlackOut_S3 );
   
//DOUT_BlackOutLamp := (Stat_BlackOut_S3 OR Stat_BlackOut_S2 OR Stat_BlackOut_S1)
//                    AND (!Stat_BlackOut_Tag AND !Stat_BlackOut_1 AND !Stat_BlackOut_2);
//DOUT_BlackOutLamp := (Stat_BlackOut_S3);

//DOUT_BO_ParkLamp:= Stat_BO_ParkLamp;

//DOUT_BO_StopLamp:= Stat_BO_StopLamp;

MC2M_MUX_DIGOUT05_FollowLight:= Stat_BO_FollowLight;
