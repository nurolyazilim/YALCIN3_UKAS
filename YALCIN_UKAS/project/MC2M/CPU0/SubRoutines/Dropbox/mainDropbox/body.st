// Dropbox selection among Neutral - Low - High
/*

LIMITATION:
1. Dropbox gear could shift, only IF the vehicle is stopped AND vehicle gear is N. 
2. IF the vehicle is moving OR gear is different than N, Eğer araç hareket halindeyken ya da 
    vitesteyken takviye vitesi geçişi istenirse, 
    ekran üzerindeki ikon yanıp sönecek ve uygun şartlar oluştuğunda takviye vitesinin 
    konumu hakkında bilgi veren led yanacak.
*/
IF (!Cmd_Bypass_Switch) THEN    

    // ------------- INPUT CONFIGURATION -----------------------
    IF(CurrentGear=0 AND VehicleSpeed<=0 AND MC2M_TERA_AccessoryPressure >= Limit_AccessoryPressureLevelDropBox)THEN
    //IF(CurrentGear=0 AND VehicleSpeed<=0 )THEN
    //    Cmd_Dropbox_Low :=     IOMODE_DIGIN14_DropBoxLow AND (NOT IOMODE_DIGIN12_DropBoxHigh) AND (NOT IOMODE_DIGIN22_DopBoxNeutral); //Dropox Low Mode     (I/H-24V/4) IOM1_J3_11
    //    Cmd_Dropbox_High:=     IOMODE_DIGIN14_DropBoxLow AND (NOT IOMODE_DIGIN12_DropBoxHigh) AND IOMODE_DIGIN22_DopBoxNeutral;       //Dropox High Mode    (I/H-24V/4) IOM1_J3_12
    //    Cmd_Dropbox_Neutral := (NOT IOMODE_DIGIN14_DropBoxLow) AND  IOMODE_DIGIN12_DropBoxHigh  AND IOMODE_DIGIN22_DopBoxNeutral;     //Dropox Neutral Mode (I/H-24V/4) IOM1_J3_13  
        IF (NMSGUI_MC2M_dropbox_admin_touch) THEN
            Cmd_Dropbox_Low :=     NMSGUI_MC2M_dropbox_low_touch; //Dropox Low Mode     (I/H-24V/4) IOM1_J3_11
            Cmd_Dropbox_High:=     NMSGUI_MC2M_dropbox_high_touch;       //Dropox High Mode    (I/H-24V/4) IOM1_J3_12
            Cmd_Dropbox_Neutral := NMSGUI_MC2M_dropbox_neutral_touch;
        ELSE
            Cmd_Dropbox_Low :=     IOMODE_DIGIN14_DropBoxLow ; //Dropox Low Mode     (I/H-24V/4) IOM1_J3_11
            Cmd_Dropbox_High:=     IOMODE_DIGIN12_DropBoxHigh;       //Dropox High Mode    (I/H-24V/4) IOM1_J3_12
            Cmd_Dropbox_Neutral := IOMODE_DIGIN22_DopBoxNeutral;     //Dropox Neutral Mode (I/H-24V/4) IOM1_J3_13  
        END_IF
    END_IF

    MC2M_TERA_AuxPressureLow_Stat := (MC2M_TERA_AccessoryPressure<Limit_AccessoryPressureLevelDropBox);
    //MC2M_TERA_AuxPressureLow_Stat := MC2M_TERA_AccessoryPressure<6 ;
    /*
    DOUT_Dropbox_High := Cmd_Dropbox_High;
    DOUT_Dropbox_Low := Cmd_Dropbox_Low;
    DOUT_Dropbox_Neutral := Cmd_Dropbox_Neutral;
    */
    Stat_Dropbox_High:= Cmd_Dropbox_High;
    Stat_Dropbox_Low := Cmd_Dropbox_Low;
    Stat_Dropbox_Neutral := Cmd_Dropbox_Neutral;

    //DIGIN_Feedback_DropboxHigh             //  (I/L) MC2M_U31

    // Dropbox status TO show on the screen
    IF(Stat_Dropbox_High)THEN
            //Stat_Dropbox := 2;  //HIGH
      IF(DIGIN_Feedback_DropboxHigh) THEN     //  (I/L) MC2M_U31 
        Stat_Dropbox := 2;      //HIGH
        ELSE 
         IF(Blink05) THEN 
         Stat_Dropbox := 2;
         ELSE Stat_Dropbox:=-1;
         END_IF
      END_IF 
    ELSIF(Stat_Dropbox_Low)THEN
      IF(DIGIN_Feedback_DropboxLow) THEN     //  (I/L) MC2M_T26     
        Stat_Dropbox := 1;      //LOW
        ELSE 
         IF(Blink05) THEN 
         Stat_Dropbox := 1;
         ELSE Stat_Dropbox:=-1;
         END_IF
      END_IF
    ELSIF(Stat_Dropbox_Neutral)THEN
        Stat_Dropbox := 0;      //NEUTRAL
    ELSE
        Stat_Dropbox := -1;     //Switch OR Dropbox Alarm
    END_IF

    //DOUT_Dropbox_High:= Stat_Dropbox_High;       //(O/H) MC2M_T05 //PRESSURE PULSE //PERMANENT PRESSURE 
    //DOUT_Dropbox_Low:=Stat_Dropbox_Low;          //(O/H) MC2M_T04
    //DOUT_Dropbox_Neutral := Cmd_Dropbox_Neutral; //(O/H) MC2M_T03 
    //Stat_Dropbox_High := test_bit4;
    //Stat_Dropbox_Low  := test_bit2;//Cmd_Dropbox_Low;
    //Stat_Dropbox_Neutral := test_bit3;//Cmd_Dropbox_Neutral;
    
    /* TIMER AÇIK OLAN VERSİYON KENDİ TIMER YAPIMIZA DÖNÜLECEK KAPI AÇILIYOR PROBLEMİNDEKİ GİBİ
    //PRESSURE PULSE TIMER 
    Dropbox_Pulse_TP.IN := Stat_Dropbox_High OR Stat_Dropbox_Low OR Stat_Dropbox_Neutral;
    Dropbox_Pulse_TP.PT := DropboxPulseDelay;
    Dropbox_Pulse_TP;
    IF (Dropbox_Pulse_TP.Q AND Stat_Dropbox_High) THEN
        DOUT_Dropbox_High := TRUE;  //(O/H) MC2M_T05
    ELSIF (Dropbox_Pulse_TP.Q AND Stat_Dropbox_Low) THEN
        DOUT_Dropbox_Low := TRUE;   //(O/H) MC2M_T04
    ELSIF (Dropbox_Pulse_TP.Q AND Stat_Dropbox_Neutral) THEN
        DOUT_Dropbox_Neutral := TRUE;  //(O/H) MC2M_T03 
        DOUT_Dropbox_Low := TRUE;      //(O/H) MC2M_T04    
    ELSE
        DOUT_Dropbox_High := FALSE;  //(O/H) MC2M_T05
        DOUT_Dropbox_Low := FALSE;     //(O/H) MC2M_T04 
        DOUT_Dropbox_Neutral := FALSE; //(O/H) MC2M_T03
    END_IF
    */
    IF (Stat_Dropbox_High) THEN
        DOUT_Dropbox_High := TRUE;  //(O/H) MC2M_T05
        DOUT_Dropbox_Low := FALSE;  //(O/H) MC2M_T05
        DOUT_Dropbox_Neutral := FALSE;  //(O/H) MC2M_T05
    ELSIF (Stat_Dropbox_Low) THEN
        DOUT_Dropbox_Low := TRUE;   //(O/H) MC2M_T04
        DOUT_Dropbox_High := FALSE;  //(O/H) MC2M_T05
        DOUT_Dropbox_Neutral := FALSE;  //(O/H) MC2M_T05
    ELSIF (Stat_Dropbox_Neutral) THEN
        DOUT_Dropbox_Neutral := TRUE;  //(O/H) MC2M_T03 
        //1DOUT_Dropbox_Low := TRUE;      //(O/H) MC2M_T04    
        DOUT_Dropbox_Low := FALSE;      //(O/H) MC2M_T04    
        DOUT_Dropbox_High := FALSE;  //(O/H) MC2M_T05
    END_IF
ELSE //IF (!Cmd_Bypass_Switch) THEN    
    DOUT_Dropbox_High := FALSE;  //(O/H) MC2M_T05
    DOUT_Dropbox_Low := FALSE;   //(O/H) MC2M_T04
    DOUT_Dropbox_Neutral := FALSE;  //(O/H) MC2M_T03 
    IF(DIGIN_Feedback_DropboxHigh) THEN     //  (I/L) MC2M_U31 
        Stat_Dropbox := 2;      //HIGH
    ELSIF(DIGIN_Feedback_DropboxLow)THEN
        Stat_Dropbox := 1;      //LOW
    ELSIF(Stat_Dropbox_Neutral)THEN
        Stat_Dropbox := 0;      //NEUTRAL
    ELSE
        Stat_Dropbox := -1;     //Switch OR Dropbox Alarm
    END_IF
END_IF


IF(DIGIN_Feedback_DropboxHigh AND DIGIN_Feedback_DropboxLow )THEN
    DropboxFeedbackState := 3;
ELSIF(DIGIN_Feedback_DropboxHigh)THEN
    DropboxFeedbackState := 2;
ELSIF(DIGIN_Feedback_DropboxLow)THEN
    DropboxFeedbackState := 1;
ELSE
    DropboxFeedbackState := 0;        
END_IF

IF(DOUT_Dropbox_High AND DOUT_Dropbox_Low AND DOUT_Dropbox_Neutral)THEN
    DropboxDoutState := 7;
ELSIF(DOUT_Dropbox_High AND DOUT_Dropbox_Low)THEN
    DropboxDoutState := 6;
ELSIF(DOUT_Dropbox_High AND DOUT_Dropbox_Neutral)THEN
    DropboxDoutState := 5;
ELSIF(DOUT_Dropbox_Low AND DOUT_Dropbox_Neutral)THEN
    DropboxDoutState := 4;
ELSIF(DOUT_Dropbox_High)THEN
    DropboxDoutState := 3;        
ELSIF(DOUT_Dropbox_Low)THEN
    DropboxDoutState := 2;        
ELSIF(DOUT_Dropbox_Neutral)THEN
    DropboxDoutState := 1;        
ELSE
    DropboxDoutState := 0;        
END_IF

//Feedback_DropboxHigh TRIGGER
Feedback_DropboxHigh_R_TRIG.CLK := DIGIN_Feedback_DropboxHigh;
Feedback_DropboxHigh_R_TRIG; 
Feedback_DropboxHigh_F_TRIG.CLK := DIGIN_Feedback_DropboxHigh;
Feedback_DropboxHigh_F_TRIG;

//Feedback_DropboxLow TRIGGER
Feedback_DropboxLow_R_TRIG.CLK := DIGIN_Feedback_DropboxLow;
Feedback_DropboxLow_R_TRIG; 
Feedback_DropboxLow_F_TRIG.CLK := DIGIN_Feedback_DropboxLow;
Feedback_DropboxLow_F_TRIG;

//Feedback_FrontAxle TRIGGER
Feedback_FrontAxle_R_TRIG.CLK := IOMODE_DIGIN16_FeedBack_FrontAxle;
Feedback_FrontAxle_R_TRIG; 
Feedback_FrontAxle_F_TRIG.CLK := IOMODE_DIGIN16_FeedBack_FrontAxle;
Feedback_FrontAxle_F_TRIG;

//Feedback_RearAxle TRIGGER
Feedback_RearAxle_R_TRIG.CLK := DIGIN_Feedback_RearAxle;
Feedback_RearAxle_R_TRIG; 
Feedback_RearAxle_F_TRIG.CLK := DIGIN_Feedback_RearAxle;
Feedback_RearAxle_F_TRIG;

//Feedback_4WD_DiffLock TRIGGER
Feedback_4WD_DiffLock_R_TRIG.CLK := DIGIN_Feedback_4WD_DiffLock;
Feedback_4WD_DiffLock_R_TRIG; 
Feedback_4WD_DiffLock_F_TRIG.CLK := DIGIN_Feedback_4WD_DiffLock;
Feedback_4WD_DiffLock_F_TRIG;

//Seviye yukselisi burada degerlendiriliyor
Stat_WarningL2H := Feedback_DropboxHigh_R_TRIG.Q OR  Feedback_DropboxLow_R_TRIG.Q OR Feedback_FrontAxle_R_TRIG.Q OR Feedback_RearAxle_R_TRIG.Q OR
                   Feedback_4WD_DiffLock_R_TRIG.Q;

//Seviye düsüsü burada degerlendiriliyor
Stat_WarningH2L := Feedback_DropboxHigh_F_TRIG.Q OR Feedback_DropboxLow_F_TRIG.Q OR Feedback_FrontAxle_F_TRIG.Q OR Feedback_RearAxle_F_TRIG.Q OR
                   Feedback_4WD_DiffLock_F_TRIG.Q;

DropboxDifflockAlarm := Stat_WarningL2H OR Stat_WarningH2L;  
