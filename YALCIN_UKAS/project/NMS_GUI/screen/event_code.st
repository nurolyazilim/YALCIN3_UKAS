// Touch button disable
/*ind_screen_multiscreen_0_service_brake_tank_1_input.enabled := TRUE;
ind_screen_multiscreen_0_service_brake_tank_2_input.enabled := FALSE;
ind_screen_multiscreen_0_park_brake_tank_input.enabled := FALSE;
ind_screen_multiscreen_0_accessory_tank_input.enabled := FALSE;
ind_screen_multiscreen_0_fuel_level_left_input.enabled := FALSE;
ind_screen_multiscreen_0_fuel_level_right_input.enabled := FALSE;
ind_screen_multiscreen_0_fuel_temp_left_input.enabled := FALSE;
ind_screen_multiscreen_0_fuel_temp_right_input.enabled := FALSE;
ind_screen_multiscreen_0_hydraulic_tank_pressure_input.enabled := FALSE;
ind_screen_multiscreen_0_hydraulic_tank_temp_input.enabled := FALSE;
*/

ind_screen_multiscreen.currentValue := page_currentValue ;
ind_screen_multiscreen_2.currentValue := page2_currentValue;
ind_screen_multiscreen_3.currentValue := page3_currentValue;
ind_screen_multiscreen_4.currentValue := page4_currentValue;

//Multiscreen change button

IF(ind_screen_degis.pressed AND !page1_selected) THEN
    page_currentValue := 0;
    page2_currentValue := 1;
    page3_currentValue := 1;
    page4_currentValue := 1;
    page1_selected := TRUE;
    page2_selected := FALSE;
    page3_selected := FALSE;
    ind_screen_degis_2.pressed := FALSE;
    ind_screen_degis_3.pressed := FALSE; 
   /* IF(ind_screen_degis.pressed := FALSE) THEN
        ind_screen_degis.pressed := TRUE)
    END_IF*/
    
ELSIF(ind_screen_degis_2.pressed  AND !page2_selected) THEN
    page1_selected := FALSE;
    page2_selected := TRUE;
    page3_selected := FALSE;
    page_currentValue := 1;
    page2_currentValue := 1;
    page3_currentValue := 0;
    page4_currentValue := 1;
    ind_screen_degis.pressed := FALSE;
    ind_screen_degis_3.pressed := FALSE;
    
ELSIF(ind_screen_degis_3.pressed AND !page3_selected) THEN
    page1_selected := FALSE;
    page2_selected := FALSE;
    page3_selected := TRUE;
    page_currentValue := 1;
    page2_currentValue := 1;
    page3_currentValue := 1;
    page4_currentValue := 0;
    ind_screen_degis.pressed := FALSE;
    ind_screen_degis_2.pressed := FALSE;
END_IF

//////////////////////////////////////////////////////////////////

// AIN Control Menu

// Service Brake Tank 1 Reorder Input Value   

IF ( service_brake_tank_1_val < 0 ) THEN
    service_brake_tank_1_val := 0;
ELSIF ( service_brake_tank_1_val > 80 ) THEN
    service_brake_tank_1_val := 80;
END_IF

IF( MC2M_NMSGUI_service_brake_tank_1 < 46 ) THEN
    alarm_icon_service_tank_1 := 1;
    insufficient_pressure_service_tank_1 := 1;
ELSE
    alarm_icon_service_tank_1 := 0;
    insufficient_pressure_service_tank_1 := 0;        
END_IF

IF(ind_screen_multiscreen_0_service_brake_tank_1_touch.pressed) THEN
    NMSGUI_MC2M_service_brake_tank_1_touch := TRUE;
    
    IF( MC2M_NMSGUI_service_brake_tank_1 < 46 ) THEN
        ind_screen_multiscreen_0_service_brake_tank_1_input.enabled := FALSE;
        ind_screen_multiscreen_0_service_brake_tank_1_send.enabled := FALSE;
    ELSE
        ind_screen_multiscreen_0_service_brake_tank_1_input.enabled := TRUE;
        ind_screen_multiscreen_0_service_brake_tank_1_send.enabled := TRUE;
    END_IF
    
    IF(ind_screen_multiscreen_0_service_brake_tank_1_send.pressed AND !service_brake_tank_1_change) THEN
        NMSGUI_MC2M_service_brake_tank_1 := DINT_TO_UINT(service_brake_tank_1_val);
        service_brake_tank_1_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_service_brake_tank_1 != service_brake_tank_1_val) THEN
        service_brake_tank_1_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_service_brake_tank_1_touch := FALSE;
    ind_screen_multiscreen_0_service_brake_tank_1_input.enabled := FALSE;
    ind_screen_multiscreen_0_service_brake_tank_1_send.enabled := FALSE;
    NMSGUI_MC2M_service_brake_tank_1 := MC2M_NMSGUI_service_brake_tank_1;
END_IF

// Service Brake Tank 2 Reorder Input Value

IF ( service_brake_tank_2_val < 0 ) THEN
    service_brake_tank_2_val := 0;
ELSIF ( service_brake_tank_2_val > 80 ) THEN
    service_brake_tank_2_val := 80;
END_IF



IF( MC2M_NMSGUI_service_brake_tank_2 < 46 ) THEN
    alarm_icon_service_tank_2 := 1;
    insufficient_pressure_service_tank_2 := 1;
ELSE
    alarm_icon_service_tank_2 := 0;
    insufficient_pressure_service_tank_2 := 0;        
END_IF

IF(ind_screen_multiscreen_0_service_brake_tank_2_touch.pressed) THEN
    NMSGUI_MC2M_service_brake_tank_2_touch := TRUE;
    
    IF( MC2M_NMSGUI_service_brake_tank_2 < 46 ) THEN
        ind_screen_multiscreen_0_service_brake_tank_2_input.enabled := FALSE;
        ind_screen_multiscreen_0_service_brake_tank_2_send.enabled := FALSE;
    ELSE
        ind_screen_multiscreen_0_service_brake_tank_2_input.enabled := TRUE;
        ind_screen_multiscreen_0_service_brake_tank_2_send.enabled := TRUE;
    END_IF
    
    
    IF(ind_screen_multiscreen_0_service_brake_tank_2_send.pressed AND !service_brake_tank_2_change) THEN
        
        NMSGUI_MC2M_service_brake_tank_2 := DINT_TO_UINT(service_brake_tank_2_val);
        service_brake_tank_2_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_service_brake_tank_2 != service_brake_tank_2_val) THEN
        service_brake_tank_2_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_service_brake_tank_2_touch := FALSE;
    ind_screen_multiscreen_0_service_brake_tank_2_input.enabled := FALSE;
    ind_screen_multiscreen_0_service_brake_tank_2_send.enabled := FALSE;
    NMSGUI_MC2M_service_brake_tank_2 := MC2M_NMSGUI_service_brake_tank_2;
END_IF


// Park Brake Tank Input Value
IF ( park_brake_tank_val < 0 ) THEN
    park_brake_tank_val := 0;
ELSIF ( park_brake_tank_val > 80 ) THEN
    park_brake_tank_val :=80;
END_IF

IF( MC2M_NMSGUI_park_brake_tank < 46 ) THEN
    alarm_icon_park_tank := 1;
    insufficient_pressure_park_tank := 1;
ELSE
    alarm_icon_park_tank := 0;
    insufficient_pressure_park_tank := 0;        
END_IF


IF(ind_screen_multiscreen_0_park_brake_tank_touch.pressed) THEN
    NMSGUI_MC2M_park_brake_tank_touch := TRUE;
    
    IF( MC2M_NMSGUI_park_brake_tank < 46 ) THEN
        ind_screen_multiscreen_0_park_brake_tank_input.enabled := FALSE;
        ind_screen_multiscreen_0_park_brake_tank_send.enabled := FALSE;
    ELSE
        ind_screen_multiscreen_0_park_brake_tank_input.enabled := TRUE;
        ind_screen_multiscreen_0_park_brake_tank_send.enabled := TRUE;
    END_IF
    
    IF(ind_screen_multiscreen_0_park_brake_tank_send.pressed AND !park_brake_tank_change) THEN
        
        NMSGUI_MC2M_park_brake_tank := DINT_TO_UINT(park_brake_tank_val);
        park_brake_tank_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_park_brake_tank != park_brake_tank_val) THEN
        park_brake_tank_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_park_brake_tank_touch := FALSE;
    ind_screen_multiscreen_0_park_brake_tank_input.enabled := FALSE;
    ind_screen_multiscreen_0_park_brake_tank_send.enabled := FALSE;
    NMSGUI_MC2M_park_brake_tank := MC2M_NMSGUI_park_brake_tank;
END_IF

// Accessory Tank Input Value
IF ( accessory_tank_val < 0 ) THEN
    accessory_tank_val := 0;
ELSIF ( accessory_tank_val > 80 ) THEN
    accessory_tank_val := 80;
END_IF

IF( MC2M_NMSGUI_accessory_tank < 61 ) THEN
    alarm_icon_accessory_tank := 1;
    insufficient_pressure_accessory_tank := 1;
ELSE
    alarm_icon_accessory_tank := 0;
    insufficient_pressure_accessory_tank := 0;        
END_IF

IF(ind_screen_multiscreen_0_accessory_tank_touch.pressed) THEN
    NMSGUI_MC2M_accessory_tank_touch := TRUE;
    
    IF( MC2M_NMSGUI_accessory_tank < 61 ) THEN
        ind_screen_multiscreen_0_accessory_tank_input.enabled := FALSE;
        ind_screen_multiscreen_0_accessory_tank_send.enabled := FALSE;
    ELSE
        ind_screen_multiscreen_0_accessory_tank_input.enabled := TRUE;
        ind_screen_multiscreen_0_accessory_tank_send.enabled := TRUE;
    END_IF
    
    IF(ind_screen_multiscreen_0_accessory_tank_send.pressed AND !accessory_tank_change) THEN
        
        NMSGUI_MC2M_accessory_tank := DINT_TO_UINT(accessory_tank_val);
        accessory_tank_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_accessory_tank != accessory_tank_val) THEN
        accessory_tank_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_accessory_tank_touch := FALSE;
    ind_screen_multiscreen_0_accessory_tank_input.enabled := FALSE;
    ind_screen_multiscreen_0_accessory_tank_send.enabled := FALSE;
    NMSGUI_MC2M_accessory_tank := MC2M_NMSGUI_accessory_tank;
END_IF

// Hydraulic Tank Pressure Input Value
IF ( hydraulic_tank_pressure_val < 0 ) THEN
    hydraulic_tank_pressure_val := 0;
ELSIF ( hydraulic_tank_pressure_val > 80 ) THEN
    hydraulic_tank_pressure_val := 80;
END_IF

IF(ind_screen_multiscreen_0_hydraulic_tank_pressure_touch.pressed) THEN
    NMSGUI_MC2M_hydraulic_tank_pressure_touch := TRUE;
    ind_screen_multiscreen_0_hydraulic_tank_pressure_input.enabled := TRUE;
    ind_screen_multiscreen_0_hydraulic_tank_pressure_send.enabled := TRUE;
    
    IF(ind_screen_multiscreen_0_hydraulic_tank_pressure_send.pressed AND !hydraulic_tank_pressure_change) THEN
        
        NMSGUI_MC2M_hydraulic_tank_pressure := hydraulic_tank_pressure_val;
        hydraulic_tank_pressure_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_hydraulic_tank_pressure != hydraulic_tank_pressure_val) THEN
        hydraulic_tank_pressure_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_hydraulic_tank_pressure_touch := FALSE;
    ind_screen_multiscreen_0_hydraulic_tank_pressure_input.enabled := FALSE;
    ind_screen_multiscreen_0_hydraulic_tank_pressure_send.enabled := FALSE;
    NMSGUI_MC2M_hydraulic_tank_pressure := MC2M_NMSGUI_hydraulic_tank_pressure;
END_IF

// Fuel Level Left Input Value
IF ( fuel_level_left_val < 0 ) THEN
    fuel_level_left_val := 0;
ELSIF ( fuel_level_left_val > 100) THEN
    fuel_level_left_val := 100;
END_IF

IF(ind_screen_multiscreen_0_fuel_level_left_touch.pressed) THEN
    NMSGUI_MC2M_fuel_level_left_touch := TRUE;
    ind_screen_multiscreen_0_fuel_level_left_input.enabled := TRUE;
    ind_screen_multiscreen_0_fuel_level_left_send.enabled := TRUE;
    
    IF(ind_screen_multiscreen_0_fuel_level_left_send.pressed AND !fuel_level_left_change) THEN
        NMSGUI_MC2M_fuel_level_left := fuel_level_left_val;
        fuel_level_left_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_fuel_level_left != fuel_level_left_val) THEN
        fuel_level_left_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_fuel_level_left_touch := FALSE;
    ind_screen_multiscreen_0_fuel_level_left_input.enabled := FALSE;
    ind_screen_multiscreen_0_fuel_level_left_send.enabled := FALSE;
    NMSGUI_MC2M_fuel_level_left := MC2M_NMSGUI_fuel_level_left;
END_IF

// Fuel Level Right Input Value
IF ( fuel_level_right_val < 0 ) THEN
    fuel_level_right_val := 0;
ELSIF ( fuel_level_right_val > 100) THEN
    fuel_level_right_val := 100;
END_IF

IF(ind_screen_multiscreen_0_fuel_level_right_touch.pressed) THEN
    NMSGUI_MC2M_fuel_level_right_touch := TRUE;
    ind_screen_multiscreen_0_fuel_level_right_input.enabled := TRUE;
    ind_screen_multiscreen_0_fuel_level_right_send.enabled := TRUE;
    
    IF(ind_screen_multiscreen_0_fuel_level_right_send.pressed AND !fuel_level_right_change) THEN
        
        NMSGUI_MC2M_fuel_level_right := fuel_level_right_val;
        fuel_level_right_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_fuel_level_right != fuel_level_right_val) THEN
        fuel_level_right_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_fuel_level_right_touch := FALSE;
    ind_screen_multiscreen_0_fuel_level_right_input.enabled := FALSE;
    ind_screen_multiscreen_0_fuel_level_right_send.enabled := FALSE;
    NMSGUI_MC2M_fuel_level_right := MC2M_NMSGUI_fuel_level_right;
END_IF


// Fuel Temp Left Input Value
IF ( fuel_temp_left_val < -40 ) THEN
    fuel_temp_left_val := -40;
ELSIF ( fuel_temp_left_val > 110) THEN
    fuel_temp_left_val := 110;
END_IF

IF(ind_screen_multiscreen_0_fuel_temp_left_touch.pressed) THEN
    NMSGUI_MC2M_fuel_temp_left_touch := TRUE;
    ind_screen_multiscreen_0_fuel_temp_left_input.enabled := TRUE;
    ind_screen_multiscreen_0_fuel_temp_left_send.enabled := TRUE;
    
    IF(ind_screen_multiscreen_0_fuel_temp_left_send.pressed AND !fuel_temp_left_change) THEN
        
        NMSGUI_MC2M_fuel_temp_left := fuel_temp_left_val;
        fuel_temp_left_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_fuel_temp_left != fuel_temp_left_val) THEN
        fuel_temp_left_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_fuel_temp_left_touch := FALSE;
    ind_screen_multiscreen_0_fuel_temp_left_input.enabled := FALSE;
    ind_screen_multiscreen_0_fuel_temp_left_send.enabled := FALSE;
    NMSGUI_MC2M_fuel_temp_left := MC2M_NMSGUI_fuel_temp_left;
END_IF

// Fuel Temp Right Input Value
IF ( fuel_temp_right_val < -40 ) THEN
    fuel_temp_right_val := -40;
ELSIF ( fuel_temp_right_val > 110) THEN
    fuel_temp_right_val := 110;
END_IF

IF(ind_screen_multiscreen_0_fuel_temp_right_touch.pressed) THEN
    NMSGUI_MC2M_fuel_temp_right_touch := TRUE;
    ind_screen_multiscreen_0_fuel_temp_right_input.enabled := TRUE;
    ind_screen_multiscreen_0_fuel_temp_right_send.enabled := TRUE;
    
    IF(ind_screen_multiscreen_0_fuel_temp_right_send.pressed AND !fuel_temp_right_change) THEN
        
        NMSGUI_MC2M_fuel_temp_right := fuel_temp_right_val;
        fuel_temp_right_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_fuel_temp_right != fuel_temp_right_val) THEN
        fuel_temp_right_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_fuel_temp_right_touch := FALSE;
    ind_screen_multiscreen_0_fuel_temp_right_input.enabled := FALSE;
    ind_screen_multiscreen_0_fuel_temp_right_send.enabled := FALSE;
    NMSGUI_MC2M_fuel_temp_right := MC2M_NMSGUI_fuel_temp_right;
END_IF

// Hydraulic Tank Temp Input Value

IF ( hydraulic_tank_temp_val < -40 ) THEN
    hydraulic_tank_temp_val := -40;
ELSIF ( hydraulic_tank_temp_val > 110 ) THEN
    hydraulic_tank_temp_val := 110;
END_IF

IF(ind_screen_multiscreen_0_hydraulic_tank_temp_touch.pressed) THEN
    NMSGUI_MC2M_hydraulic_tank_temp_touch := TRUE;
    ind_screen_multiscreen_0_hydraulic_tank_temp_input.enabled := TRUE;
    ind_screen_multiscreen_0_hydraulic_tank_temp_send.enabled := TRUE;
    
    IF(ind_screen_multiscreen_0_hydraulic_tank_temp_send.pressed AND !hydraulic_tank_temp_change) THEN
        NMSGUI_MC2M_hydraulic_tank_temp := hydraulic_tank_temp_val;
        hydraulic_tank_temp_change := TRUE;
    END_IF
    
    IF(NMSGUI_MC2M_hydraulic_tank_temp != hydraulic_tank_temp_val) THEN
        hydraulic_tank_temp_change := FALSE;
    END_IF
    
ELSE
    
    NMSGUI_MC2M_hydraulic_tank_temp_touch := FALSE;
    ind_screen_multiscreen_0_hydraulic_tank_temp_input.enabled := FALSE;
    ind_screen_multiscreen_0_hydraulic_tank_temp_send.enabled := FALSE;
    NMSGUI_MC2M_hydraulic_tank_temp := MC2M_NMSGUI_hydraulic_tank_temp;
END_IF

////////////////////////////////////////////////////////////////////////

// Dropbox Control Menu
    ind_screen_multiscreen_3_0_dropbox_H_touch.enabled := dropbox_high;
    ind_screen_multiscreen_3_0_dropbox_N_touch.enabled := dropbox_neutral;
    ind_screen_multiscreen_3_0_dropbox_L_touch.enabled := dropbox_low;
    dropbox_high := FALSE;
    dropbox_neutral := FALSE;
    dropbox_low := FALSE;

IF (MC2M_NMSGUI_accessory_tank < 61) THEN
    NMSGUI_MC2M_dropbox_admin_touch := FALSE;
    ind_screen_multiscreen_3_0_dropbox_admin_touch.enabled := FALSE;
    alarm_icon_accessory_tank := 1;
    insufficient_pressure_accessory_tank := 1;
ELSE
    ind_screen_multiscreen_3_0_dropbox_admin_touch.enabled := TRUE;
    alarm_icon_accessory_tank := 0;
    insufficient_pressure_accessory_tank := 0;
    
    IF(ind_screen_multiscreen_3_0_dropbox_admin_touch.pressed) THEN
        NMSGUI_MC2M_dropbox_admin_touch := TRUE;
        dropbox_high := TRUE;
        dropbox_neutral := TRUE;
        dropbox_low := TRUE;
        IF ( ind_screen_multiscreen_3_0_dropbox_H_touch.pressed AND !dropbox_high_selected) THEN
            dropbox_high_selected := TRUE;
            dropbox_neutral_selected := FALSE;
            dropbox_low_selected := FALSE;
            ind_screen_multiscreen_3_0_dropbox_N_touch.pressed := FALSE;
            ind_screen_multiscreen_3_0_dropbox_L_touch.pressed := FALSE;
            NMSGUI_MC2M_dropbox_high_touch := TRUE;
            NMSGUI_MC2M_dropbox_neutral_touch := FALSE;
            NMSGUI_MC2M_dropbox_low_touch := FALSE;
        ELSIF ( ind_screen_multiscreen_3_0_dropbox_N_touch.pressed AND !dropbox_neutral_selected) THEN
            dropbox_high_selected := FALSE;
            dropbox_neutral_selected := TRUE;
            dropbox_low_selected := FALSE;
            ind_screen_multiscreen_3_0_dropbox_H_touch.pressed := FALSE;
            ind_screen_multiscreen_3_0_dropbox_L_touch.pressed := FALSE;
            NMSGUI_MC2M_dropbox_high_touch := FALSE;
            NMSGUI_MC2M_dropbox_neutral_touch := TRUE;
            NMSGUI_MC2M_dropbox_low_touch := FALSE;
        ELSIF ( ind_screen_multiscreen_3_0_dropbox_L_touch.pressed AND !dropbox_low_selected) THEN
            dropbox_high_selected := FALSE;
            dropbox_neutral_selected := FALSE;
            dropbox_low_selected := TRUE;
            ind_screen_multiscreen_3_0_dropbox_H_touch.pressed := FALSE;
            ind_screen_multiscreen_3_0_dropbox_N_touch.pressed := FALSE;
            NMSGUI_MC2M_dropbox_high_touch := FALSE;
            NMSGUI_MC2M_dropbox_neutral_touch := FALSE;
            NMSGUI_MC2M_dropbox_low_touch := TRUE;
        END_IF
    ELSE
        NMSGUI_MC2M_dropbox_admin_touch := FALSE;
        dropbox_high := FALSE;
        dropbox_neutral := FALSE;
        dropbox_low := FALSE;
        NMSGUI_MC2M_dropbox_high_touch := FALSE;
        NMSGUI_MC2M_dropbox_neutral_touch := FALSE;
        NMSGUI_MC2M_dropbox_low_touch := FALSE;
        ind_screen_multiscreen_3_0_dropbox_N_touch.pressed := FALSE;
        ind_screen_multiscreen_3_0_dropbox_L_touch.pressed := FALSE;
        ind_screen_multiscreen_3_0_dropbox_H_touch.pressed := FALSE;
    END_IF
END_IF

// Dropbox Feedback Menu

IF ( MC2M_NMSGUI_dropbox_h_fb ) THEN
    dropbox_h_image := 1;
ELSE
    dropbox_h_image := 0;
END_IF

IF ( MC2M_NMSGUI_dropbox_n_fb ) THEN
    dropbox_n_image := 1;
ELSE
    dropbox_n_image := 0;
END_IF

IF ( MC2M_NMSGUI_dropbox_l_fb ) THEN
    dropbox_l_image := 1;
ELSE
    dropbox_l_image := 0;
END_IF

//////////////////////////////////////////////////////////////
// Diffbox Control Menu

ind_screen_multiscreen_3_0_difflock_mid_touch.enabled := FALSE;
ind_screen_multiscreen_3_0_difflock_rear_touch.enabled := FALSE;
ind_screen_multiscreen_3_0_difflock_front_touch.enabled := FALSE;

IF ( ind_screen_multiscreen_3_0_diff_admin_touch.pressed ) THEN
    NMSGUI_MC2M_difflock_admin_touch := TRUE;
    
    ind_screen_multiscreen_3_0_difflock_mid_touch.enabled := TRUE;

    IF ( ind_screen_multiscreen_3_0_difflock_mid_touch.pressed ) THEN
        NMSGUI_MC2M_difflock_mid_touch := TRUE;
        NMSGUI_MC2M_difflock_rear_touch := FALSE;
        NMSGUI_MC2M_difflock_front_touch := FALSE;
        ind_screen_multiscreen_3_0_difflock_rear_touch.enabled := TRUE;
    ELSE
        NMSGUI_MC2M_difflock_mid_touch := FALSE;
        ind_screen_multiscreen_3_0_difflock_rear_touch.pressed := FALSE;
        ind_screen_multiscreen_3_0_difflock_front_touch.pressed  := FALSE;
    END_IF

    IF ( ind_screen_multiscreen_3_0_difflock_rear_touch.pressed ) THEN
        IF ( ind_screen_multiscreen_3_0_difflock_mid_touch.pressed) THEN
            NMSGUI_MC2M_difflock_mid_touch := TRUE;
            NMSGUI_MC2M_difflock_rear_touch := TRUE;
            NMSGUI_MC2M_difflock_front_touch := FALSE;
            ind_screen_multiscreen_3_0_difflock_front_touch.enabled := TRUE;
        END_IF
    ELSE
        NMSGUI_MC2M_difflock_rear_touch := FALSE;
        ind_screen_multiscreen_3_0_difflock_front_touch.pressed  := FALSE;
    END_IF

        
    IF ( ind_screen_multiscreen_3_0_difflock_front_touch.pressed) THEN
        IF( ind_screen_multiscreen_3_0_difflock_rear_touch.pressed AND ind_screen_multiscreen_3_0_difflock_mid_touch.pressed ) THEN
            NMSGUI_MC2M_difflock_mid_touch := TRUE;
            NMSGUI_MC2M_difflock_rear_touch := TRUE;
            NMSGUI_MC2M_difflock_front_touch := TRUE;
        END_IF
    ELSE
        NMSGUI_MC2M_difflock_front_touch := FALSE;
    END_IF
ELSE
    NMSGUI_MC2M_difflock_mid_touch := FALSE;
    NMSGUI_MC2M_difflock_rear_touch := FALSE;
    NMSGUI_MC2M_difflock_front_touch := FALSE;
    ind_screen_multiscreen_3_0_difflock_mid_touch.enabled := FALSE;
    ind_screen_multiscreen_3_0_difflock_rear_touch.enabled := FALSE;
    ind_screen_multiscreen_3_0_difflock_front_touch.enabled := FALSE;
    ind_screen_multiscreen_3_0_difflock_mid_touch.pressed := FALSE;
    ind_screen_multiscreen_3_0_difflock_rear_touch.pressed := FALSE;
    ind_screen_multiscreen_3_0_difflock_front_touch.pressed := FALSE;
    NMSGUI_MC2M_difflock_admin_touch := FALSE;
END_IF


// DiffLock Feedback Menu

// Difflock MID
IF ( ind_screen_multiscreen_3_0_diff_admin_touch.pressed) THEN
    IF ( ind_screen_multiscreen_3_0_difflock_mid_touch.pressed ) THEN
        IF ( MC2M_NMSGUI_difflock_mid_fb ) THEN
            difflock_mid_image := 1;
        ELSE
            IF (blink05) THEN
                difflock_mid_image := 1;
            ELSE
                difflock_mid_image := 0;
            END_IF
        END_IF
    ELSE
        difflock_mid_image := 0;
    END_IF
ELSE
    difflock_mid_image := 0;
END_IF

// Difflock Rear
IF ( ind_screen_multiscreen_3_0_diff_admin_touch.pressed) THEN
    IF ( ind_screen_multiscreen_3_0_difflock_rear_touch.pressed ) THEN
        IF ( MC2M_NMSGUI_difflock_rear_fb ) THEN
            difflock_rear_image := 1;
        ELSE
            IF (blink05) THEN
                difflock_rear_image := 1;
            ELSE
                difflock_rear_image := 0;
            END_IF
        END_IF
    ELSE
        difflock_rear_image := 0;
    END_IF
ELSE
    difflock_rear_image := 0;
END_IF

//Difflock Front
IF ( ind_screen_multiscreen_3_0_diff_admin_touch.pressed) THEN
    IF ( ind_screen_multiscreen_3_0_difflock_front_touch.pressed ) THEN
        IF ( MC2M_NMSGUI_difflock_front_fb ) THEN
            difflock_front_image := 1;
        ELSE
            IF (blink05) THEN
                difflock_front_image := 1;
            ELSE
                difflock_front_image := 0;
            END_IF
        END_IF
    ELSE
        difflock_front_image := 0;
    END_IF
ELSE
    difflock_front_image := 0;
END_IF