
(* write the event code in language: Structured Text *)
//Ahmet in tasarım 
/*
IF((MainLoop > 0) AND ((MainLoop MOD 10) = 0) )THEN
    TotalTripMeter := TotalTripMeter + REAL_TO_UDINT(USINT_TO_REAL(MC2M_TERA_VehicleSpeed) / 3.6);
END_IF



IF((MainLoop > 0) AND ((MainLoop MOD 100) = 0) )THEN
    save_bytearray_R;
END_IF

IF(ind_screen_touch_TRIP.pressedTime > 500) OR (TotalTripMeter >= 1000000)THEN
    TotalTripMeter := 0;
    save_bytearray_R;
END_IF
*/


//Ali Beyin tasarımı 
IF(MainLoop > 0)THEN
    TotalTripMeter := TotalTripMeter + REAL_TO_UDINT(USINT_TO_REAL(MC2M_TERA_VehicleSpeed) / 36); //USINT 
    IF(TotalTripMeter>100.0)AND((REAL_TO_UINT(TotalTripMeter) MOD 1000)=0)THEN
        TotalTripMeter := TotalTripMeter + 65.0;
    END_IF
END_IF

IF((MainLoop > 0) AND ((MainLoop MOD 100) = 0) )THEN
    save_bytearray_R;
END_IF


//TERA_MC2M_ResetTrip := FALSE;
IF(ind_screen_touch_TRIP.pressedTime > 500) OR (TotalTripMeter >= 1000000.0)THEN
    TotalTripMeter := 0.0;
    //TERA_MC2M_ResetTrip := TRUE;
    save_bytearray_R;
END_IF

ScreenTripMeter := REAL_TO_UINT(TotalTripMeter * 0.01);
