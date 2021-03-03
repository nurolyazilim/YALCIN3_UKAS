
IF (TEST_MC2M_RemoteGasEnable) THEN
    EBC1_GasPedalEnable := Enum87_1;
    IF (Start_Val < 1) THEN
        Start_Val := Start_Val + 1;
        // SelectedRPM := MC2M_MURPHY_RPM;
        // son iki basamak yuvarlama
        // SelectedRPM := SelectedRPM / 100;
        // SelectedRPM := SelectedRPM * 100;
    END_IF
ELSE
    EBC1_GasPedalEnable := Enum87_0;
    Start_Val := 0;
END_IF;
/* Arttır Azalt Butonu olmadığı için çıkartıldı
CASE RPM_Inc_Btn_state OF
    BTN_RELEASED:
        IF (MURPHY_MC2M_TEST_RPM_Inc) THEN
            IF (SelectedRPM < 3000) THEN
                SelectedRPM := SelectedRPM + 100;
            ELSE
                SelectedRPM := 3000;
            END_IF
            RPM_Inc_Btn_state := BTN_PRESSED;
        END_IF
    BTN_PRESSED:
        IF (!MURPHY_MC2M_TEST_RPM_Inc) THEN
            RPM_Inc_Btn_state := BTN_RELEASED;
        END_IF
END_CASE
*/
/* Arttır Azalt Butonu olmadığı için çıkartıldı
CASE RPM_Dec_Btn_state OF
    BTN_RELEASED:
        IF (MURPHY_MC2M_TEST_RPM_Dec) THEN
            IF (SelectedRPM > 700) THEN
                SelectedRPM := SelectedRPM - 100;
            ELSE
                SelectedRPM := 700;
            END_IF
            RPM_Dec_Btn_state := BTN_PRESSED;
        END_IF
    BTN_PRESSED:
        IF (!MURPHY_MC2M_TEST_RPM_Dec) THEN
            RPM_Dec_Btn_state := BTN_RELEASED;
        END_IF
END_CASE
*/

//PCANView kullanarak rpm oranı ayarlamak için eklenen kod. Marel 02/04/2020
IF ( TEST_MC2M_RemoteGasRatio > 6 AND TEST_MC2M_RemoteGasRatio < 30 ) THEN
    SelectedRPM := TEST_MC2M_RemoteGasRatio * 100;
ELSIF ( TEST_MC2M_RemoteGasRatio <= 6 ) THEN
    SelectedRPM := 700;
ELSE
    SelectedRPM := 3000;
END_IF

IF (EBC1_GasPedalEnable == Enum87_1) THEN
    IF ((MC2M_TERA_EngineSpeed < SelectedRPM) AND (PedalSpeedTout >= PedalSpeed)) THEN
        IF (EEC2_GasPedal < 250) THEN
            EEC2_GasPedal := EEC2_GasPedal + 1;
        ELSE
            EEC2_GasPedal := 250;
        END_IF
        PedalSpeedTout := 0;
    ELSIF ((MC2M_TERA_EngineSpeed > SelectedRPM) AND (PedalSpeedTout >= PedalSpeed)) THEN
        IF (EEC2_GasPedal > 0) THEN //aslında gereksiz(USINT)
            EEC2_GasPedal := EEC2_GasPedal - 1;
        ELSE
            EEC2_GasPedal := 0;
        END_IF
        PedalSpeedTout := 0;
    ELSIF (MC2M_TERA_EngineSpeed == SelectedRPM) THEN
        PedalSpeedTout := 0;
    ELSE
        PedalSpeedTout := PedalSpeedTout + 1;
    END_IF
ELSE
    EEC2_GasPedal := 0;
END_IF

// nonlineer bir eğri ile pedal hızını ayarla
IF (SelectedRPM > MC2M_TERA_EngineSpeed) THEN
    RPM_diff := SelectedRPM - MC2M_TERA_EngineSpeed;
ELSE
    RPM_diff := MC2M_TERA_EngineSpeed - SelectedRPM;
END_IF

IF (RPM_diff <= 50 AND RPM_diff > 40) THEN
    PedalSpeed := 6;
ELSIF (RPM_diff <= 40 AND RPM_diff > 30) THEN
    PedalSpeed := 7;
ELSIF (RPM_diff <= 30 AND RPM_diff > 20) THEN
    PedalSpeed := 8;
ELSIF (RPM_diff <= 20 AND RPM_diff > 10) THEN
    PedalSpeed := 9;
ELSIF (RPM_diff <= 10) THEN
    PedalSpeed := 10;
ELSE
    /*
    CASE MURPHY_MC2M_RemotePedalSpeedRate OF
        0:
            PedalSpeed := 0;
        1:
            PedalSpeed := 1;
        2:
            PedalSpeed := 2;
        3:
            PedalSpeed := 3;
        4:
            PedalSpeed := 4;
        5:
            PedalSpeed := 5;
    END_CASE
    */
    PedalSpeed := 2;
END_IF


//TEST ekranı SelectedRPM MA (bunların dışında CTIS TEST basıncı 760 yapıldı. 21/09/2018)
//MC2M_MURPHY_SelectedRPM := SelectedRPM;

/*
CASE MURPHY_MC2M_RemotePedalSpeedRate OF
    0:
        PedalSpeed := 0;
    1:
        PedalSpeed := 1;
    2:
        PedalSpeed := 2;
    3:
        PedalSpeed := 3;
    4:
        PedalSpeed := 4;
    5:
        PedalSpeed := 5;
    6:
        PedalSpeed := 6;
    7:
        PedalSpeed := 7;
    8:
        PedalSpeed := 8;
    9:
        PedalSpeed := 9;
    10:
        PedalSpeed := 10;
END_CASE
*/