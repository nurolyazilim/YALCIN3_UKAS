//Battery voltajı ölç, 28.2 den yüksekse warning ver
//J1939 transmission 
MC2M_ASELSAN_Hydrolic_Pressure_Warning:=AlarmState_HydrolicTankPressure;
MC2M_ASELSAN_Hydrolic_Temperature_Warning:=AlarmState_HydrolicTankTemp;
MC2M_ASELSAN_Alternator_Warning:=AlarmState_Alternator;
MC2M_ASELSAN_Low_Fuel_Warning_T1:=AlarmState_FuelLevelLow_T1;
MC2M_ASELSAN_Low_Fuel_Warning_T2:=AlarmState_FuelLevelLow_T2;
MC2M_ASELSAN_Water_In_Fuel_Warning:=WFI_WaterInFuelIndicator;
MC2M_ASELSAN_Fire_Warning:=Stat_FireFighter;
MC2M_ASELSAN_Transmission_Oil_Level_Warning:=TRF1_TransmissionOilLevelHighLow!=0;
MC2M_ASELSAN_Transmission_Oil_Fiter_Warning:=TRF2_Transmission_Oil_Filter_Restriction_Switch!=Enum_TransOilFilter_NO_RESTRICTION;
MC2M_ASELSAN_Transmission_Oil_Temp_Warning:=AlarmState_TransOilTemperature;
MC2M_ASELSAN_Air_Filter_Clogged_Warning:=AlarmState_AirFilterClogged;
MC2M_ASELSAN_Engine_Intake_Manifold_Temp:=IC1_EngineIntakeManifold1Temperature; //offset 40
MC2M_ASELSAN_Engine_Oil_Pressure_Warning:=AlarmState_EngineOilPressure;
MC2M_ASELSAN_EngineOilTemperature_Warning:=AlarmState_EngineOilTemperature; //aslında bu EngineCooland temperaure
MC2M_ASELSAN_HighWoltage_Warning:=BatteryLevel>highVoltageThreshold;
MC2M_ASELSAN_Vehicle_Speed:=VehicleSpeed;
MC2M_ASELSAN_BlackOut_Mode:=Stat_BlackOut;
MC2M_ASELSAN_FuelLevel_T1:=FuelLevel_Normalized_L;
MC2M_ASELSAN_FuelLevel_T2:=FuelLevel_Normalized2_L;
MC2M_ASELSAN_Transmission_Oil_Temperature:=TransOilTemperature;
MC2M_ASELSAN2_Transmission_Current_Gear:=SINT_TO_USINT(CurrentGear+1);
MC2M_ASELSAN2_Engine_Speed:=EEC1_EngineSpeed;
MC2M_ASELSAN2_Engine_Temp:=EngineTempValue;
MC2M_ASELSAN2_Engine_Oil_Press:=EngineOilPressure; //bar cinsinden veriliyor
MC2M_ASELSAN2_Engine_Coolant_Level:=EFL_P1_EngineCoolantLevel;
MC2M_ASELSAN2_Critic_ECM_Error:= DM01_ECM_RedStopLamp==Enum13_LAMP_ON;
MC2M_ASELSAN2_Motor_Control_Error:= DM01_ECM_AmberWarningLamp==Enum13_LAMP_ON;
MC2M_ASELSAN2_Critic_TCM_Error:=DM01_TCM_RedStopLamp==Enum13_LAMP_ON;