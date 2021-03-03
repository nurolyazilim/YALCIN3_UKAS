
MainLoop := MainLoop + 1;

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

LampAlarm; //Ekranda 2 satir lamba uyarisi

// Kamera ekrani durumu
//RTRIG_Cam.CLK := IOMODE_DIGIN29;
//RTRIG_Cam;
//IF (RTRIG_Cam.Q) THEN
//    Stat_MirrorCamera := NOT Stat_MirrorCamera;
//END_IF

MessageReceiver;

