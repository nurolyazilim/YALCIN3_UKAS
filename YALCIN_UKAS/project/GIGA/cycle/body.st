MainLoop := MainLoop + 1;

IF(MainLoop < 2) THEN // ver:a01
    vt3_language := Vt3_languageSetVar;
END_IF;

//TimeOnScreen :
//DateTimeNow := GET_CURRENT_DATE_AND_TIME();
//TimeOnScreen := CONCAT(INT_TO_STRING(TOD_TO_HOUR(TimeNow)),':',ZeroPrefixMinute,INT_TO_STRING(TOD_TO_MINUTE(TimeNow)));

// Date AND Time Arrangment
DateTimeNow := GET_CURRENT_DATE_AND_TIME();
IF(SetDateTime)THEN
    SET_CURRENT_DATE_AND_TIME(DateTimeUpdate);
    DateTimeNow := GET_CURRENT_DATE_AND_TIME();
    IF(DateTimeNow=DateTimeUpdate)THEN
        SetDateTime := FALSE;
    END_IF
END_IF

DateNow := DT_TO_DATE(DateTimeNow);
TimeNow := DT_TO_TOD(DateTimeNow);

IF (DATE_TO_DAY(DateNow) < 10) THEN
    ZeroPrefixDay := '0';
ELSE
    ZeroPrefixDay := '';
END_IF

IF TOD_TO_MINUTE(TimeNow)<10 THEN
    ZeroPrefixMinute := '0';
ELSE
    ZeroPrefixMinute := '';
END_IF

// Tarih ve Saat Ekranda Goruntulenmesi ---------------------

IF(NOT DateTimeUpdating)THEN
    IF(DATE_TO_MONTH(DateNow) < 10)THEN
        DateOnScreen := CONCAT(ZeroPrefixDay,INT_TO_STRING(DATE_TO_DAY(DateNow)),'/0',INT_TO_STRING(DATE_TO_MONTH(DateNow)),'/',INT_TO_STRING(DATE_TO_YEAR(DateNow)));
    ELSE
        DateOnScreen := CONCAT(ZeroPrefixDay,INT_TO_STRING(DATE_TO_DAY(DateNow)),'/',INT_TO_STRING(DATE_TO_MONTH(DateNow)),'/',INT_TO_STRING(DATE_TO_YEAR(DateNow)));
    END_IF
    TimeOnScreen := CONCAT(INT_TO_STRING(TOD_TO_HOUR(TimeNow)),':',ZeroPrefixMinute,INT_TO_STRING(TOD_TO_MINUTE(TimeNow)));
END_IF

// Save Parameters
IF(SaveParameter)THEN
    save_bytearray_P;
END_IF

led_tmp := FALSE;

//IF (!tmp_DIGIN_KEY_K15) THEN //masaüst test için aktif edilip aşağıodaki IF comentlenir
IF (!DIGIN_KEY_K15) THEN
    mainIgnitionOff;
    IgnitionOn := FALSE;
    GIGALedOverride := FALSE;
    //SaliLedOverride := FALSE; //20150728_01 SALI GÜNÜ SUNUMU İÇİN
    BIT_Test_Init := TRUE;
ELSE  
    IgnitionOn := TRUE;
//    MainLoop := MainLoop + 1;
    mainFunctions;
    MessageReceiver;
    //BacklightScreen:=1000;
 //IF MC2M_TERA_Icon_Status_L11 OR MC2M_TERA_Icon_Status_L12  OR MC2M_TERA_Icon_Status_L13 THEN
Light_An_Inp := AinLightInp;
IF (!MC2M_TERA_Icon_Status_BO_S1) THEN
    BacklightScreen:=BacklightScreenSetVarH; 
    IF (MC2M_TERA_Icon_Status_L11) THEN
        //Backlight :=1000;
        Backlight :=BacklightSetVarH;
    ELSE
        //Backlight :=250;
        Backlight :=BacklightSetVarL;
        //BacklightScreen:=0;
    END_IF
ELSE
    Backlight :=0;
    //BacklightScreen:=750;  
    BacklightScreen:=BacklightScreenSetVarL;  
END_IF    
END_IF

IF PanelBrightH <=1 THEN
    BacklightSetVarH := 50;
ELSE
    BacklightSetVarH := PanelBrightH*100;
END_IF

IF PanelBrightL <=1 THEN
    BacklightSetVarL := 50;
ELSE
    BacklightSetVarL := PanelBrightL*100;
END_IF

IF ScreenBrightH <=1 THEN
    BacklightScreenSetVarH := 50;
ELSE
    BacklightScreenSetVarH := ScreenBrightH*100;
END_IF

IF ScreenBrightL <=1 THEN
    BacklightScreenSetVarL := 50;
ELSE
    BacklightScreenSetVarL := ScreenBrightL*100;
END_IF
//
//ScreenBrightH := 5;
//ScreenBrightL := 3;
//PanelBrightH := 5;
//PanelBrightL := 3;

IF BacklightScreenSetVarH > 1200 THEN
    BacklightScreenSetVarH := 1200;
    save_bytearray_P;
END_IF
IF BacklightScreenSetVarL > 1200 THEN
    BacklightScreenSetVarL := 1200;
    save_bytearray_P;
END_IF

IF BacklightSetVarH > 1200 THEN
    BacklightSetVarH := 1200;
    save_bytearray_P;        
END_IF
IF BacklightSetVarL > 1200 THEN
    BacklightSetVarL := 1200;
    save_bytearray_P;
END_IF

