/* //gizli men iptal edildi (aaslan)
IF((Secret_Menu01=0) AND ind_screen_frame_key_F2.eventDown AND (ActiveScreen=0))THEN
    Secret_Menu01 := Secret_Menu01 + 1;
ELSIF((Secret_Menu01=1) AND ind_screen_frame_key_F1.eventDown AND (ActiveScreen=0))THEN
    Secret_Menu01 := Secret_Menu01 + 1;
ELSIF((Secret_Menu01=2) AND ind_screen_frame_key_F2.pressedTime > 1000 AND (ActiveScreen=0))THEN
    ActiveScreen := 4;
    MenuVar := 0;
    Secret_Menu01 := 0; 
END_IF
*/
//IF (ind_screen_frame_key_F2.eventUp AND ind_screen_frame_key_F2.pressedTime > 1000) THEN
IF (ind_screen_frame_key_F1.pressedTime > 10000) THEN
    giga_button_test_var := TRUE;
    ScreenBrightH := 8; //Varsayılan değer 1000->800
    ScreenBrightL := 5; //Varsayılan değer 750->500
    PanelBrightH := 8;  //Varsayılan değer 1000->800 
    PanelBrightL := 2;  //Varsayılan değer 250->200     
ELSE
    giga_button_test_var := FALSE;
END_IF    
      
IF (ind_screen_frame_key_F1.eventDown ) THEN
        Cmd_GIGAMenu_Active := TRUE;
        Stat_GIGAMenu_Ctr1 := 0;
    //IF (Secret_Menu01=0) THEN  //Gizli menü koşulu pasif edildi(aaslan)
        CASE ActiveScreen OF
            0:
                ActiveScreen:= 5;
                MenuVar := 0;
            1:
                //SubMenuVar := SubMenuVar;
                IF (!DateTimeUpdating) THEN
                    MenuVar := MenuVar + 1;
                ELSE
                    CASE SubMenuVar OF
                            1:
                                HourUpdate := HourUpdate + 1;
                                IF HourUpdate > 23 THEN
                                    HourUpdate := 0;
                                END_IF                                                
                            2:
                                MinuteUpdate := MinuteUpdate + 1;
                                IF MinuteUpdate > 59 THEN
                                    MinuteUpdate := 0;
                                END_IF                        
                            3:
                                DayUpdate := DayUpdate + 1;
                                IF DayUpdate > 31 THEN
                                    DayUpdate := 1;
                                END_IF                                        
                            4:
                                MonthUpdate := MonthUpdate + 1; 
                                IF MonthUpdate > 12 THEN
                                    MonthUpdate := 1;
                                END_IF                                        
                            5:
                                YearUpdate := YearUpdate + 1;
                                IF YearUpdate > 2075 THEN
                                    YearUpdate := 2015;
                                END_IF                                 
                        //    ELSE
                        //    GIGAMenuVar01 := 1;
                    END_CASE
                END_IF    
                IF MenuVar > 1 THEN
                    MenuVar := 0;
                END_IF

            //2: //CASE
            3:                                               //F1
                //BrightnessUpdating :=  TRUE;
                IF (!BrightnessUpdating) THEN
                    MenuVar := MenuVar + 1;
                ELSE
                    CASE SubMenuVar2 OF
                            1:
                                PanelBrightH := PanelBrightH + 1;
                                IF PanelBrightH > 10 THEN
                                    PanelBrightH := 1;
                                END_IF                        
                            2:
                                PanelBrightL := PanelBrightL + 1;
                                IF PanelBrightL > 10 THEN
                                    PanelBrightL := 1;
                                END_IF                        
                            3:
                                ScreenBrightH := ScreenBrightH + 1;
                                IF ScreenBrightH > 10 THEN
                                    ScreenBrightH := 1;
                                END_IF                                                
                            4:
                                ScreenBrightL := ScreenBrightL + 1;
                                IF ScreenBrightL > 10 THEN
                                    ScreenBrightL := 1;
                                END_IF                        
                            5:
                                ScreenBrightH := 8; //Varsayılan değer 1000->800
                                ScreenBrightL := 5; //Varsayılan değer 750->500
                                PanelBrightH := 8;  //Varsayılan değer 1000->800 
                                PanelBrightL := 2;  //Varsayılan değer 250->200 
                            //5:
                            //    PanelBrightL := 3;
                        //    ELSE
                        //    GIGAMenuVar01 := 1;
                    END_CASE
                END_IF    
                IF MenuVar > 1 THEN
                    MenuVar := 0;
                END_IF
            //4:
            5:// düzenlendi (aaslan)
                MenuVar := MenuVar + 1;
                
                IF MenuVar > 7 THEN // ver:a01
                    MenuVar := 0;
                END_IF
        //    ELSE
        //    GIGAMenuVar01 := 1;
        END_CASE
    //END_IF    
END_IF

IF (ind_screen_frame_key_F2.eventDown) THEN
    Cmd_GIGAMenu_Active := TRUE;
    Stat_GIGAMenu_Ctr1 := 0;   
    //IF (Secret_Menu01=0) THEN  //Gizli menü koşulu pasif edildi(aaslan)
        CASE ActiveScreen OF
            1:
            IF MenuVar = 0 THEN
                //ActiveScreen := 1;
                //MenuVar := 0;
                IF !DateTimeUpdating THEN    
                    IF(DateStringUpdate !='')THEN
                        //YearUpdate := STRING_TO_INT(MID(DateStringUpdate,4,7));
                        YearUpdate := DATE_TO_YEAR(DateNow);
                        //MonthUpdate := STRING_TO_INT(MID(DateStringUpdate,2,4));
                        MonthUpdate := DATE_TO_MONTH(DateNow);
                        //DayUpdate := STRING_TO_INT(MID(DateStringUpdate,2,1));
                        DayUpdate := DATE_TO_DAY(DateNow);                    
                    END_IF
                    IF(TimeStringUpdate !='')THEN
                        //MinuteUpdate := STRING_TO_INT(MID(TimeStringUpdate,2,4));
                        MinuteUpdate := TOD_TO_MINUTE(TimeNow);
                        //HourUpdate := STRING_TO_INT(MID(TimeStringUpdate,2,1));
                        HourUpdate := TOD_TO_HOUR(TimeNow);
                    END_IF
                END_IF
                DateTimeUpdating :=  TRUE;
                SubMenuVar := SubMenuVar+1;
                IF SubMenuVar > 7 THEN
                    SubMenuVar := 0;
                END_IF
                //---------- DATE-TIME--------------------------------------
                IF(SubMenuVar=7)THEN
                    DateTimeUpdate := CONCAT(YMD_TO_DATE(YearUpdate,MonthUpdate,DayUpdate),HMS_TO_TOD(HourUpdate,MinuteUpdate,0,0));
                    SetDateTime := TRUE;
                    DateTimeUpdating := FALSE;
                END_IF
            ELSIF MenuVar = 1 THEN
                ActiveScreen := 0;
                MenuVar := 0; 
            END_IF    
            2:
            IF MenuVar = 0 THEN
                ActiveScreen := 0;
                MenuVar := 0; 
            END_IF
            3:                                              //F2
            //IF MenuVar = 0 THEN
            //    ActiveScreen := 0;
            //    MenuVar := 0; 
            //END_IF
            IF MenuVar = 0 THEN
                BrightnessUpdating :=  TRUE;
                SubMenuVar2 := SubMenuVar2+1;
                //IF SubMenuVar2 > 6 THEN
                //    SubMenuVar2 := 0;
                //END_IF
                //---------- BRIGHTNESS UPDATE--------------------------------------
                //IF(SubMenuVar2=6)THEN
                IF(SubMenuVar2>6)THEN
                    save_bytearray_P;
                    //MenuVar := 1;
                    SubMenuVar2 := 0;
                    BrightnessUpdating := FALSE;
                END_IF
            ELSIF MenuVar = 1 THEN
                ActiveScreen := 0;
                MenuVar := 0; 
            END_IF                
            4:
            IF MenuVar = 0 THEN
                ActiveScreen := 0;
                MenuVar := 0; 
            END_IF
            5: // düzenlendi (aaslan)
            IF MenuVar = 0 THEN
                ActiveScreen := 1;
                MenuVar := 0; 
            ELSIF MenuVar = 1 THEN
                ActiveScreen := 3;
                MenuVar := 0; 
            ELSIF MenuVar = 2 THEN
                ActiveScreen := 2;
                MenuVar := 0;
                SubMenuVar2 := 0;
                //BrightnessUpdating :=  TRUE; 
            ELSIF MenuVar = 3 THEN
                ActiveScreen := 4;
                MenuVar := 0; 
            ELSIF MenuVar = 4 THEN
                vt3_language := 0;
                Vt3_languageSetVar := vt3_language;
                SaveParameter := TRUE;
            ELSIF MenuVar = 5 THEN
                vt3_language := 1;
                Vt3_languageSetVar := vt3_language;
                SaveParameter := TRUE;
            ELSIF MenuVar = 6 THEN
                vt3_language := 2;
                Vt3_languageSetVar := vt3_language;
                SaveParameter := TRUE;
            ELSIF MenuVar = 7 THEN
                ActiveScreen := 0;
                MenuVar := 0; 
            END_IF
        //    ELSE
        //    GIGAMenuVar01 := 1;
        END_CASE
    //END_IF    
END_IF
//ActiveScreen := 1;
vt3_screen := ActiveScreen;
MinuteUptOnScreen := INT_TO_STRING(MinuteUpdate);
HourUptOnScreen := INT_TO_STRING(HourUpdate);
DayUptOnScreen := INT_TO_STRING(DayUpdate);
MonthUptOnScreen := INT_TO_STRING(MonthUpdate);
YearUptOnScreen := INT_TO_STRING(YearUpdate);

ScreenBrightHUptOnScreen := UINT_TO_STRING(ScreenBrightH);
ScreenBrightLUptOnScreen := UINT_TO_STRING(ScreenBrightL);
PanelBrightHUptOnScreen := UINT_TO_STRING(PanelBrightH);
PanelBrightLUptOnScreen := UINT_TO_STRING(PanelBrightL);

//TimeOnScreen4 := INT_TO_STRING(MinuteUpdate);

/*
IF(DIGIN_TurnLeftSignal)THEN
    Cmd_GIGAMenu_Active := TRUE;
    Stat_GIGAMenu_Ctr1 := 0;
END_IF
*/

//IF (Cmd_GIGAMenu_Active AND Stat_GIGAMenu_Ctr1 < 5000) THEN 
    //BLA BLA
IF (Cmd_GIGAMenu_Active AND Stat_GIGAMenu_Ctr1 > 10000) THEN      
    Stat_GIGAMenu_Ctr1 := 0; Cmd_GIGAMenu_Active := FALSE;
    //ANA MENU
    ActiveScreen := 0;
    MenuVar := 0; 
    Secret_Menu01 := 0; 
    SubMenuVar := 0;
    SubMenuVar2 := 0;
END_IF

IF (Cmd_GIGAMenu_Active/* AND NOT(ActiveScreen=4)*/) THEN // gizli menü açık olduğu için geri sayıma dahil et(aaslan)
    Stat_GIGAMenu_Ctr1 := Stat_GIGAMenu_Ctr1 + 100;
ELSE
    Stat_GIGAMenu_Ctr1 := 0; 
END_IF 

////////////////////////////////////////////////////////////////////////////////////////////////////////
IF (NOT vt3_can_alarm_CAN_168) THEN
    TotalTripMeter := UDINT_TO_REAL(MC2M_TERA_TripCounter);
    //TotalTripMeter := MC2M_TERA_TripCounter;
    TotalOdometer := UDINT_TO_REAL(MC2M_TERA_TotalOdometer);
    //TotalOdometer := MC2M_TERA_TotalOdometer;    
    IF MC2M_TERA_TotalOdometer > GIGAOdometerBackup THEN
        GIGAOdometerBackup :=  MC2M_TERA_TotalOdometer;
    END_IF    
END_IF

//MainLoop := MainLoop; 

IF(MC2M_TERA_Icon_Status_GIGA_Bsy) THEN 
   IF ((MainLoop MOD 60000) = 0)  THEN
     save_bytearray_R;
   END_IF
ELSE
   IF ((MainLoop MOD 600/*60000*/) = 0)  THEN
     save_bytearray_R;
   END_IF
END_IF



//TERA_MC2M_ResetTrip := FALSE;
IF(ind_screen_frame_key_F2.pressedTime > 500  AND (ActiveScreen=0)) OR (TotalTripMeter >= 1000000.0)THEN
    //TotalTripMeter2 := 0.0;
    GIGA_MC2M_ResetTrip := TRUE;
    //save_bytearray_R;
ELSE
    GIGA_MC2M_ResetTrip := FALSE;    
END_IF

ScreenTripMeter := REAL_TO_UDINT(TotalTripMeter * 0.01);
ScreenOdometer := REAL_TO_UDINT(TotalOdometer * 0.001); 

SetDateTime1;
GIGAMenu1;

/*
MenuVar := 0;
IF ind_screen_frame_key_F1.pressedTime > 500 THEN
    MenuVar := 1;
ELSIF ind_screen_frame_key_F1.pressedTime > 1500 THEN
    MenuVar := 2;
ELSIF ind_screen_frame_key_F1.pressedTime > 2500 THEN
    MenuVar := 3;
ELSIF ind_screen_frame_key_F1.pressedTime > 3500 THEN
    MenuVar := 4;
ELSIF ind_screen_frame_key_F1.pressedTime > 4500 THEN
    MenuVar := 0;
    ind_screen_frame_key_F1.pressedTime := 0;
END_IF    
*/    