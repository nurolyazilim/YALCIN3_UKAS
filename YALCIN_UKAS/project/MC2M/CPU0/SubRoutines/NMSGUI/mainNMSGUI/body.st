MC2M_NMSGUI_accessory_tank := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor4) / SINT_TO_REAL(AverageQuantity_Sensor4));
MC2M_NMSGUI_fuel_level_left := FuelLevel_Normalized2_L;
MC2M_NMSGUI_fuel_level_right := FuelLevel_Normalized2_R;
MC2M_NMSGUI_fuel_temp_left := INT_TO_SINT(TempLevel_Normalized_FuelT_L);
MC2M_NMSGUI_fuel_temp_right := INT_TO_SINT(TempLevel_Normalized_FuelT_R);
MC2M_NMSGUI_hydraulic_tank_pressure := INT_TO_USINT(PresLevel_Normalized);
//MC2M_NMSGUI_hydraulic_tank_temp := HTempLevel_Normalized;
MC2M_NMSGUI_park_brake_tank := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor1) / SINT_TO_REAL(AverageQuantity_Sensor1));
MC2M_NMSGUI_service_brake_tank_1 := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor2) / SINT_TO_REAL(AverageQuantity_Sensor2));
MC2M_NMSGUI_service_brake_tank_2 := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor3) / SINT_TO_REAL(AverageQuantity_Sensor3));
MC2M_NMSGUI_difflock_mid_fb := DIGIN_Feedback_4WD_DiffLock;
MC2M_NMSGUI_difflock_rear_fb := DIGIN_Feedback_RearAxle;
MC2M_NMSGUI_difflock_front_fb := IOMODE_DIGIN16_FeedBack_FrontAxle;
MC2M_NMSGUI_dropbox_h_fb := DIGIN_Feedback_DropboxHigh;
MC2M_NMSGUI_dropbox_n_fb := Stat_Dropbox_Neutral;
MC2M_NMSGUI_dropbox_l_fb := DIGIN_Feedback_DropboxLow;


// RAW FEEDBACK DATA
MC2M_NMSGUI_service_break_tank_1_raw_fb := AIN_FootBrakePressureSensor_1;
MC2M_NMSGUI_service_break_tank_2_raw_fb := AIN_FootBrakePressureSensor_2;
MC2M_NMSGUI_accessory_tank_raw_fb := AIN_AccessoryPressureSensor;
MC2M_NMSGUI_park_break_tank_raw_fb := AIN_ParkBrakePressureSensor;
MC2M_NMSGUI_fuel_level_left_raw_fb := AIN_Tank_Left_Level;
MC2M_NMSGUI_fuel_level_right_raw_fb := AIN_Tank_Right_Level;
MC2M_NMSGUI_fuel_temp_left_raw_fb := AIN_FuelTankLeft_Temp;
MC2M_NMSGUI_fuel_temp_right_raw_fb := AIN_FuelTankRight_Temp;
//MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb := AIN_Tank_hydraulicPressure;
//MC2M_NMSGUI_hydraulic_tank_temp_raw_fb := AIN_Tank_Hydraulic_Temperature;
