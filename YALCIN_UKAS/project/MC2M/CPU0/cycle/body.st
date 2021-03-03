// Save Parameters
IF(SaveParameter)THEN
    save_bytearray_P;
END_IF

// WatchDog relay activation
ActivateWDO;
//DOUT_MUX_Activation := MuxActivation;
//DOUT_Midac_Activation := TRUE;
//Total Date AND Time
IF((MainLoop MOD 600)=0)THEN
    TotalMinute := TotalMinute + 1;
    save_bytearray_R;
    save_bytearray_P;
END_IF
IF(TotalMinute >= 60)THEN
    TotalHour := TotalHour + 1;
    TotalMinute := 0;
    save_bytearray_R;
    save_bytearray_P;
END_IF

// Date AND Time Arrangment
DateTimeNow := GET_CURRENT_DATE_AND_TIME();
IF(SetDateTime)THEN
    IF(DateTimeNow!=DT#0001-01-01-00:00:00)THEN
        SET_CURRENT_DATE_AND_TIME(DateTimeUpdate);
        DateTimeNow := GET_CURRENT_DATE_AND_TIME();
        IF(DateTimeNow=DateTimeUpdate)THEN
            SetDateTime := FALSE;
        END_IF
    END_IF
END_IF

TimeNow := DT_TO_TOD(DateTimeNow);

// main counter increasing every 100 mSec
MainLoop := MainLoop + 1;

// Blinking functions
IF(Cmd_TurnSignal_Left OR Cmd_TurnSignal_Right OR Cmd_Hazard)THEN
    IF((SignalLoop MOD 4)=0)THEN
        Blink07 := NOT Blink07; // blink @0.4 Sec
    END_IF
    SignalLoop := SignalLoop + 1;
ELSE
    SignalLoop := 0;
    Blink07 := FALSE;
END_IF

IF((MainLoop MOD 6)=0)THEN
    Blink06 := NOT Blink06; // blink @0.6 Sec
END_IF
IF((MainLoop MOD 5)=0)THEN
    Blink05 := NOT Blink05; // blink @0.5 Sec
END_IF
IF((MainLoop MOD 10)=0)THEN
    Blink10 := NOT Blink10; // blink @1.0 Sec
END_IF

//MUX LED konfigurasyonu
MC2M_MUX_LED1 := ((MainLoop MOD 20)>=2);
MC2M_MUX_LED2 := ((MainLoop MOD 20)>=7);
MC2M_MUX_LED3 := ((MainLoop MOD 20)>=12);
MC2M_MUX_LED4 := ((MainLoop MOD 20)>=18);

// SubRoutines ---------------------------------------------
mainJ1939toCANOpen; //from J1939 TO CANOpen
mainTCM_Management; //TCM Management
mainECM_Management; //ECM Management
mainEBS_Management; //ABS ECU Management
mainDiagnostics; //Diagnostic Management
mainLamps; // Illumination Management
mainWipers; //Wiper Management

//mainDozerProtector; //Bull-Dozer & Protector Procedure
mainDropbox; //Dropbox Procedure
//mainExhaustBrake; //Exhaust Brake Procedure
mainResistances; // Window & Mirror Resistance Procedure
mainEngineProtection; //Engine protection override procedure
mainABS4WD; //ABS MOD selection: Off/On Road
mainDiffLock; //Differential Lock Procedure

mainWarningLights; //Amber & Red Lights on Dashboard
mainAnalogGauges; //Analog gauges on dashboard
mainTeraScreen; //Tera12 scrren in Dashboard

WinchControl; // vinç kontrol programı 
BlackOutControl; // black out lambaları 

mainOtherFunctions;  //diğer programlar
//main_2_FuelLevel;
//main_1_FuelLevel;
FuelTankControl; // yakıt tankı kontrol
doorsControl;   //kapı kontrolleri 
pressureSensorsControl; // basınç sensörleri 
vehiclePosition;// araç denge AMUCBO

inSideTemperatur;
outsideTemperatur;

main_HydrolicPressureSensor;
main_HydrolicTempSensor;//main_HydrolicSensor;
//main_3_TempLevel;
//main_4_TempLevel;
main_WebastoTempSensor;
mainMC2MDiagnostics;

mainEngineBrake;
EL_format_local2;
// ---------------------------------------------------------
AselsanDiagnostic;  //Aselsanın istediği veriler
mainFrontPark;

//UKAS uygulaması için eklendi. marel 13.06.2019
//mainUKAS; 
//msgRcvrUKAS;
//10.01.2020 Sadeleştirilmiş UKAS yazılımı için yeni subroutineler eklendi. marel
main_UKAS_Control;
main_UKAS_Receive_Control;

//mobileye control
mainMobileye;

//NMS GUI bayirtman 17.09.2019
mainNMSGUI;

//VVR sistemi deneme 18.02.2020 marel
mainVVR;

RPM_Set;

//Joystick fren sistemi 25.08.2020 bayirtman
mainJoystick;
