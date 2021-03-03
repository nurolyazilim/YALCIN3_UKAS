NIL;
/*
i:=0;
IF(MC2M_TERA_LampAlarm_L01)THEN
    ActiveAlarm[i] := 1;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L02)THEN
    ActiveAlarm[i] := 2;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L03)THEN
    ActiveAlarm[i] := 3;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L04)THEN
    ActiveAlarm[i] := 4;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L05)THEN
    ActiveAlarm[i] := 5;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L06)THEN
    ActiveAlarm[i] := 6;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L07)THEN
    ActiveAlarm[i] := 7;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L08)THEN
    ActiveAlarm[i] := 8;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L09)THEN
    ActiveAlarm[i] := 9;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L10)THEN
    ActiveAlarm[i] := 10;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L11)THEN
    ActiveAlarm[i] := 11;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L12)THEN
    ActiveAlarm[i] := 12;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L13)THEN
    ActiveAlarm[i] := 13;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L14)THEN
    ActiveAlarm[i] := 14;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L15)THEN
    ActiveAlarm[i] := 15;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L16)THEN
    ActiveAlarm[i] := 16;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L17)THEN
    ActiveAlarm[i] := 17;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L18)THEN
    ActiveAlarm[i] := 18;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L19)THEN
    ActiveAlarm[i] := 19;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L20)THEN
    ActiveAlarm[i] := 20;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L21)THEN
    ActiveAlarm[i] := 21;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L22)THEN
    ActiveAlarm[i] := 22;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L23)THEN
    ActiveAlarm[i] := 23;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L24)THEN
    ActiveAlarm[i] := 24;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L25)THEN
    ActiveAlarm[i] := 25;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L26)THEN
    ActiveAlarm[i] := 26;
    i := i + 1;
END_IF

TotalAlarm := i;
IF(TotalAlarm > 0)THEN
    IF ((MainLoop MOD 20)==0)THEN
        indexAlarm := (indexAlarm + 1) MOD TotalAlarm;
        InfoNo := ActiveAlarm[indexAlarm];
    END_IF
ELSE
    InfoNo := 0;
    indexAlarm := 0;
END_IF
*/