//    if(Format_BB){
    if(MC2M_Formatted != 74){
        (void)EL_format_local(0,2000,0);
        // EL_format_local(0,2000,0);
        // Format_BB = FALSE;
        MC2M_Formatted = 74;
        SaveParameter=TRUE;
        //Total_Odometer_Low = (UINT) TotalOdometer_d; 
        //Total_Odometer_High = (UINT) (TotalOdometer_d >> 16);
    }
        Total_Odometer_Low = (UINT) TotalOdometer_d; 
        Total_Odometer_High = (UINT) (TotalOdometer_d >> 16);