
(* write the event code in language: Structured Text *)
DateStringUpdate := ind_screen_2_Date_Text.currentValue;
TimeStringUpdate := ind_screen_2_Time_Text.currentValue;
//IF((MainLoop MOD 15)=0)THEN
//    colord := colord + 1;
//END_IF
//colordstr := USINT_TO_STRING (colord);

/*
IF DateTimeUpdating THEN
    //ind_screen_2_simple_text_2_2_2.enabled := DateTimeUpdating;//DateStringUpdate;
    ind_screen_2_simple_text_2_2_2.color := 250;
    //ind_screen_2_simple_text_2_2_2.key_up := TRUE;
    //ind_screen_2_Date_Text.color := 0;
ELSE
    ind_screen_2_simple_text_2_2_2.color := 4;
END_IF
*/

CASE SubMenuVar OF
        0:
            ind_screen_2_Update_Hour_Text.color := 0;
            ind_screen_2_Update_Time_SemiColon.color := 0;
            ind_screen_2_Update_Min_Text.color := 0;
            ind_screen_2_Update_Day_Text.color := 0;
            ind_screen_2_Update_Date_Slash1.color := 0;
            ind_screen_2_Update_Month_Text.color := 0;
            ind_screen_2_Update_Date_Slash2.color := 0;
            ind_screen_2_Update_Year_Text.color := 0;
            ind_screen_2_Time_Text.color := 4;
            ind_screen_2_Date_Text.color := 4;
        1:
            ind_screen_2_Update_Hour_Text.color := 250;
            ind_screen_2_Update_Time_SemiColon.color := 4;
            ind_screen_2_Update_Min_Text.color := 4;
            ind_screen_2_Update_Day_Text.color := 4;
            ind_screen_2_Update_Date_Slash1.color := 4;
            ind_screen_2_Update_Month_Text.color := 4;
            ind_screen_2_Update_Date_Slash2.color := 4;
            ind_screen_2_Update_Year_Text.color := 4;
            ind_screen_2_Time_Text.color := 0;
            ind_screen_2_Date_Text.color := 0;
        2:
            ind_screen_2_Update_Hour_Text.color := 4;
            ind_screen_2_Update_Time_SemiColon.color := 4;
            ind_screen_2_Update_Min_Text.color := 250;
            ind_screen_2_Update_Day_Text.color := 4;
            ind_screen_2_Update_Date_Slash1.color := 4;
            ind_screen_2_Update_Month_Text.color := 4;
            ind_screen_2_Update_Date_Slash2.color := 4;
            ind_screen_2_Update_Year_Text.color := 4;
            ind_screen_2_Time_Text.color := 0;
            ind_screen_2_Date_Text.color := 0;            
        3:
            ind_screen_2_Update_Hour_Text.color := 4;
            ind_screen_2_Update_Time_SemiColon.color := 4;
            ind_screen_2_Update_Min_Text.color := 4;
            ind_screen_2_Update_Day_Text.color := 250;
            ind_screen_2_Update_Date_Slash1.color := 4;
            ind_screen_2_Update_Month_Text.color := 4;
            ind_screen_2_Update_Date_Slash2.color := 4;
            ind_screen_2_Update_Year_Text.color := 4;
            ind_screen_2_Time_Text.color := 0;
            ind_screen_2_Date_Text.color := 0;            
        4:
            ind_screen_2_Update_Hour_Text.color := 4;
            ind_screen_2_Update_Time_SemiColon.color := 4;
            ind_screen_2_Update_Min_Text.color := 4;
            ind_screen_2_Update_Day_Text.color := 4;
            ind_screen_2_Update_Date_Slash1.color := 4;
            ind_screen_2_Update_Month_Text.color := 250;
            ind_screen_2_Update_Date_Slash2.color := 4;
            ind_screen_2_Update_Year_Text.color := 4;
            ind_screen_2_Time_Text.color := 0;
            ind_screen_2_Date_Text.color := 0;            
        5:
            ind_screen_2_Update_Hour_Text.color := 4;
            ind_screen_2_Update_Time_SemiColon.color := 4;
            ind_screen_2_Update_Min_Text.color := 4;
            ind_screen_2_Update_Day_Text.color := 4;
            ind_screen_2_Update_Date_Slash1.color := 4;
            ind_screen_2_Update_Month_Text.color := 4;
            ind_screen_2_Update_Date_Slash2.color := 4;
            ind_screen_2_Update_Year_Text.color := 250;
            ind_screen_2_Time_Text.color := 0;
            ind_screen_2_Date_Text.color := 0;            
        6:
            ind_screen_2_Update_Hour_Text.color := 4;
            ind_screen_2_Update_Time_SemiColon.color := 4;
            ind_screen_2_Update_Min_Text.color := 4;
            ind_screen_2_Update_Day_Text.color := 4;
            ind_screen_2_Update_Date_Slash1.color := 4;
            ind_screen_2_Update_Month_Text.color := 4;
            ind_screen_2_Update_Date_Slash2.color := 4;
            ind_screen_2_Update_Year_Text.color := 4;
            ind_screen_2_Time_Text.color := 0;
            ind_screen_2_Date_Text.color := 0;   
            GIGAMenuVar03 := 1;         
    //    ELSE
    //    GIGAMenuVar01 := 1;
END_CASE

