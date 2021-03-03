IF !vt3_can_alarm_CAN_188_3 THEN  
    UKAS_ECM_Remote_Accelerator_Switch := MURPHY_MC2M_ECM_Remote_Accelerator_Switch;
    UKAS_ECM_Remote_Accelerator := MURPHY_MC2M_ECM_Remote_Accelerator;
    UKAS_TCM_ShiftSelector_Button_R := MURPHY_MC2M_TCM_ShiftSelector_Button_R;
    UKAS_TCM_ShiftSelector_Button_N := MURPHY_MC2M_TCM_ShiftSelector_Button_N;
    UKAS_TCM_ShiftSelector_Button_D := MURPHY_MC2M_TCM_ShiftSelector_Button_D;
ELSE
    UKAS_ECM_Remote_Accelerator_Switch := FALSE;
    UKAS_ECM_Remote_Accelerator := 0;
    UKAS_TCM_ShiftSelector_Button_R := FALSE;
    UKAS_TCM_ShiftSelector_Button_N := FALSE;
    UKAS_TCM_ShiftSelector_Button_D := FALSE;
END_IF