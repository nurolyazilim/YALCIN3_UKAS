IF(ind_screen_touch_UpdateDate.eventDown)THEN
    DateTimeUpdating :=  TRUE;
END_IF

IF(ind_screen_touch_UpdateTime.eventDown)THEN
    DateTimeUpdating :=  TRUE;
END_IF

ind_screen_touch_DateApply.enabled := DateTimeUpdating;
ind_screen_touch_DateCancel.enabled := DateTimeUpdating;
ind_screen_touch_TimeApply.enabled := DateTimeUpdating;
ind_screen_touch_TimeCancel.enabled := DateTimeUpdating;
//----------------------------------------------------------
TimeNow := DT_TO_TOD(DateTimeNow);

DateStringUpdate := ind_screen_Date_Text.currentValue;
TimeStringUpdate := ind_screen_Time_Text.currentValue;

IF(DateStringUpdate !='')THEN
    YearUpdate := STRING_TO_INT(MID(DateStringUpdate,4,7));
    MonthUpdate := STRING_TO_INT(MID(DateStringUpdate,2,4));
    DayUpdate := STRING_TO_INT(MID(DateStringUpdate,2,1));
END_IF

IF(TimeStringUpdate !='')THEN
    MinuteUpdate := STRING_TO_INT(MID(TimeStringUpdate,2,4));
    HourUpdate := STRING_TO_INT(MID(TimeStringUpdate,2,1));
END_IF

//---------- DATE ------------------------------------------
IF(ind_screen_touch_DateApply.eventDown)THEN
    DateTimeUpdate := CONCAT(YMD_TO_DATE(YearUpdate,MonthUpdate,DayUpdate),HMS_TO_TOD(HourUpdate,MinuteUpdate,0,0));
    SetDateTime := TRUE;
END_IF

IF(ind_screen_touch_DateApply.eventUp)THEN
    SetDateTime := FALSE;
    DateTimeUpdating := FALSE;
END_IF

IF(ind_screen_touch_DateCancel.eventDown)THEN
    SetDateTime := FALSE;
    DateTimeUpdating := FALSE;
END_IF

//---------- TIME ------------------------------------------
IF(ind_screen_touch_TimeApply.eventDown)THEN
    DateTimeUpdate := CONCAT(YMD_TO_DATE(YearUpdate,MonthUpdate,DayUpdate),HMS_TO_TOD(HourUpdate,MinuteUpdate,0,0));
    SetDateTime := TRUE;
END_IF

IF(ind_screen_touch_TimeApply.eventUp)THEN
    SetDateTime := FALSE;
    DateTimeUpdating := FALSE;
END_IF

IF(ind_screen_touch_TimeCancel.eventDown)THEN
    SetDateTime := FALSE;
    DateTimeUpdating := FALSE;
END_IF