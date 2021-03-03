
(* write the event code in language: Structured Text *)
IF (!vt3_can_alarm_CAN_230) THEN
    GUI_MC2M_DebugActive := ind_screen_touch_DebugActive.pressed;
    IF (ind_screen_touch_DebugActive.pressed) THEN
        GUI_MC2M_Selenoid1_Draw := ind_screen_touch_selenoid1Draw.pressed;
        GUI_MC2M_Selenoid1_Return := ind_screen_touch_Selenoid1Return.pressed;
        GUI_MC2M_Selenoid2_Draw := ind_screen_touch_Selenoid2Draw.pressed;
        GUI_MC2M_Selenoid2_Return := ind_screen_touch_Selenoid2Return.pressed;
        GUI_MC2M_ParkerPumpActive := ind_screen_touch_ParkerPump.pressed;
        GUI_MC2M_EvacuationValveActive := ind_screen_touch_EvacuationValve.pressed;
        GUI_MC2M_ParkerPumpRPM_Manuel := ind_screen_touch_ParkerPump_RPM_mode.pressed;
        GUI_MC2M_ParkerPumpRPM_Sel := ind_screen_touch_ParkerPump_RPM_Sel.pressed;
        
        IF ((ParkerPumpRPM_Min != GUI_MC2M_ParkerPumpRPM_Min OR ParkerPumpRPM_Max != GUI_MC2M_ParkerPumpRPM_Max) AND !PumpRPM_Change) THEN
            ind_screen_touch_ParkerPump_RPM_Set.enabled := TRUE;
            PumpRPM_Change := TRUE;
        END_IF
        
        IF (ParkerPumpRPM_Min < 1277) THEN
                ParkerPumpRPM_Min := 1277;
            ELSIF (ParkerPumpRPM_Min > 4200) THEN
                ParkerPumpRPM_Min := 4200;
            END_IF
            IF (ParkerPumpRPM_Max < 1277) THEN
                ParkerPumpRPM_Max := 1277;
            ELSIF (ParkerPumpRPM_Max > 4200) THEN
                ParkerPumpRPM_Max := 4200;
        END_IF
        
    IF (ind_screen_touch_ParkerPump_RPM_Set.pressed AND PumpRPM_Change) THEN
            
            ind_screen_touch_ParkerPump_RPM_Set.enabled := FALSE;
            
            GUI_MC2M_ParkerPumpRPM_Min := UDINT_TO_UINT(ParkerPumpRPM_Min);
            GUI_MC2M_ParkerPumpRPM_Max := UDINT_TO_UINT(ParkerPumpRPM_Max);
            PumpRPM_Change := FALSE;
            
        END_IF
        
    ELSE
        ind_screen_touch_selenoid1Draw.pressed := !MC2M_GUI_Selenoid1_Draw_Fb;
        ind_screen_touch_Selenoid1Return.pressed := !MC2M_GUI_Selenoid1_Return_Fb;
        ind_screen_touch_Selenoid2Draw.pressed := !MC2M_GUI_Selenoid2_Draw_Fb;
        ind_screen_touch_Selenoid2Return.pressed := !MC2M_GUI_Selenoid2_Return_Fb;
        ind_screen_touch_ParkerPump.pressed := MC2M_GUI_ParkerPumpStatus;
        ind_screen_touch_EvacuationValve.pressed := MC2M_GUI_EvacuationValveActive_Fb;
        
        ind_screen_touch_ParkerPump_RPM_Set.enabled := FALSE;
    END_IF
END_IF
/*
ind_screen_touch_selenoid1Draw.enabled := ind_screen_touch_DebugActive.pressed AND !vt3_can_alarm_CAN_230;
ind_screen_touch_Selenoid1Return.enabled := ind_screen_touch_DebugActive.pressed AND !vt3_can_alarm_CAN_230;
ind_screen_touch_Selenoid2Draw.enabled := ind_screen_touch_DebugActive.pressed AND !vt3_can_alarm_CAN_230;
ind_screen_touch_Selenoid2Return.enabled := ind_screen_touch_DebugActive.pressed AND !vt3_can_alarm_CAN_230;
ind_screen_touch_ParkerPump.enabled := ind_screen_touch_DebugActive.pressed AND !vt3_can_alarm_CAN_230;
ind_screen_touch_EvacuationValve.enabled := ind_screen_touch_DebugActive.pressed AND !vt3_can_alarm_CAN_230;
*/
ind_screen_touch_ParkerPump_RPM_Sel.enabled := ind_screen_touch_ParkerPump_RPM_mode.pressed;
PumpRPM_Fb := MC2M_PARKERPUMP_Speed_Command;
PumpRPM_Fb := PumpRPM_Fb * 117;
PumpRPM_Fb := PumpRPM_Fb / 10;
PumpRPM_Fb := PumpRPM_Fb + 1275;
PumpRPM_Fb := PumpRPM_Fb * (MC2M_PARKERPUMP_Speed_Command > 0);
