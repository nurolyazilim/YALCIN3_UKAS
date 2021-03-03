main_FuelLevel_Left;
main_FuelLevel_Right;

IF (FuelLevel_Normalized2_L > 100 AND FuelLevel_Normalized2_R > 100) THEN
    FuelLevel_Normalized_TR_TL := 0;
    MC2M_TERA_FuelTankSel1  := 3 * Blink05;
    MC2M_TERA_FuelTankSel2  := 3 * Blink05;
ELSIF (FuelLevel_Normalized2_L > 100) THEN
    FuelLevel_Normalized_TR_TL := FuelLevel_Normalized2_R;
    MC2M_TERA_FuelTankSel1  := 3 * Blink05;
    MC2M_TERA_FuelTankSel2  := 1;
ELSIF (FuelLevel_Normalized2_R > 100) THEN
    FuelLevel_Normalized_TR_TL := FuelLevel_Normalized2_L;
    MC2M_TERA_FuelTankSel1  := 1;
    MC2M_TERA_FuelTankSel2  := 3 * Blink05;
ELSE
    FuelLevel_Normalized_TR_TL := (FuelLevel_Normalized2_R / 2) + (FuelLevel_Normalized2_L / 2);
    MC2M_TERA_FuelTankSel1  := 1;
    MC2M_TERA_FuelTankSel2  := 1;
END_IF
//Debug GUI mesajları
MC2M_GUI_FuelTankLevel1 := FuelLevel_Normalized2_L;
MC2M_GUI_FuelTankLevel2 := FuelLevel_Normalized2_R;
MC2M_GUI_FuelLevelSensorVal_L := FuelInputFiltered_L;
MC2M_GUI_FuelLevelSensorVal_R := FuelInputFiltered_R;
MC2M_GUI_FuelWaterDetect := WFI_WaterInFuelIndicator == Enum346_YES;
MC2M_TERA_WaterInFuel_Stat := WFI_WaterInFuelIndicator == Enum346_YES; //marel
MC2M_TERA_FuelLevel_1  := FuelLevel_Normalized_TR_TL;


