coolant := ET1_EngineCoolantTemperature; //pompa 87 derece %25, 99 derecede %100 çalışacak
manifold := IC1_EngineIntakeManifold1Temperature; //pompa 60 derece %25, 72 derecede  %100 çalışacak 
                                                  

vvr_oilfilter := DIGIN_VVR_OilFilter; //kirlilik uyarısı
vvr_oillevel := DIGIN_VVR_OilLevel; //düşük seviye uyarısı

vvr_raw_temp := AIN_VVR_Temperature;
vvr_temp := HTempLevel_Normalized; //sensör mevcut değil // pompa 67 derece %25, 75 derece %100 çalışacak

vvr_raw_pres := AIN_VVR_Pressure;
vvr_pres := PresLevel_Normalized; // MIN 0.1 bar -> düşük basınç uyarısı // MAX 0.7 bar -> yüksek basınç uyarısı

IF ( ( coolant > 99 ) OR ( manifold > 72 ) OR ( vvr_temp > 79 ) ) THEN
    vvr_pump := 0;
ELSE
    IF ( coolant > 87 AND coolant <= 99 ) THEN //coolant
        coolant_calculated := Interpolate(SINT_TO_INT(coolant),87,99,4250,0);
    ELSE
        coolant_calculated := 4250;
    END_IF
    
    IF ( manifold > 60 AND manifold <= 72 ) THEN
        manifold_calculated := Interpolate(SINT_TO_INT(manifold),60,72,4250,0);
    ELSE
        manifold_calculated := 4250;
    END_IF
    
    IF ( vvr_temp > 67 AND vvr_temp <= 79 ) THEN
        vvr_temp_calculated := Interpolate(vvr_temp,67,79,4250,0);
    ELSE
        vvr_temp_calculated := 4250;
    END_IF
    
    IF ( coolant_calculated == 4250 AND manifold_calculated == 4250 AND vvr_temp_calculated == 4250 ) THEN
        vvr_pump := 4250;
        pump_trigger := 0;
    END_IF
    IF ( coolant_calculated != 4250 OR manifold_calculated != 4250 OR vvr_temp_calculated != 4250 ) THEN
        IF ( coolant_calculated <= manifold_calculated ) THEN
            IF ( vvr_temp_calculated <= coolant_calculated ) THEN
                vvr_pump := INT_TO_UINT(vvr_temp_calculated);
                pump_trigger := 1;
            ELSE
                vvr_pump := INT_TO_UINT(coolant_calculated);
                pump_trigger := 2;
            END_IF
        ELSIF ( manifold_calculated <= coolant_calculated ) THEN
            IF ( vvr_temp_calculated <= manifold_calculated ) THEN
                vvr_pump := INT_TO_UINT(vvr_temp_calculated);
                pump_trigger := 1;
            ELSE
                vvr_pump := INT_TO_UINT(manifold_calculated);
                pump_trigger := 3;
            END_IF
        ELSIF ( coolant_calculated <= vvr_temp_calculated ) THEN
            IF ( manifold_calculated <= coolant_calculated ) THEN
                vvr_pump := INT_TO_UINT(manifold_calculated);
                pump_trigger := 3;
            ELSE
                vvr_pump := INT_TO_UINT(coolant_calculated);
                pump_trigger := 2;
            END_IF
        END_IF
    END_IF
END_IF
//Hidrolik pompa testi için eklendi.
IF ( Stat_FrontFog ) THEN
    PWMOUT_VVR_Pump := 0;
//Hidrolik pompa testi için eklendi.
ELSIF (Cmd_BlackOut) THEN
    PWMOUT_VVR_Pump := 1150;
//Hidrolik pompa testi için eklendi.
ELSE
    PWMOUT_VVR_Pump := vvr_pump;
    //Orjinal hidrolik pompa PWM çıkış ayarlama kodu. buranın dışındaki kısımlar test için yazılmıştır. marel 19.03.2020
    /*IF ( vvr_pump > 4250 ) THEN
        PWMOUT_VVR_Pump := 4250; // MAX değer 4250yi geçmemeli
    ELSE
        PWMOUT_VVR_Pump := vvr_pump;
    END_IF*/
END_IF

vvr_pump_interpolated := Interpolate(UINT_TO_INT(PWMOUT_VVR_Pump),4250,0,25,100);;
//((75*(4250 - UINT_TO_INT(vvr_pump)))/4250) + 25
MC2M_TERA_DIAG_VvrPump := vvr_pump_interpolated;
MC2M_TERA_DIAG_VVRPumpTrigger := pump_trigger;
MC2M_TERA_DIAG_CACTemp := manifold;
MC2M_TERA_RadiatorTemp := coolant;



//PWMOUT_VVR_Pump := testvar;