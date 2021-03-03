// Circular Gauge
MC2M_TERA_EngineSpeed  := EEC1_EngineSpeed;                 //UINT   16
//MC2M_TERA_EngineSpeed  := EEC1_EngineSpeed2;

MC2M_TERA_VehicleSpeed := VehicleSpeed;                     //USINT  8  
//MC2M_TERA_VehicleSpeed := VehicleSpeed2;

//Yakıt seviyeleri 
//MC2M_TERA_FuelLevel_1  := FuelLevel_Normalized_TR_TL;//FuelLevel_Normalized_2;iki tank için ortak değişken kullanıldı(FuelTankControl de var zaten)(aaslan)
//MC2M_TERA_FuelLevel_1  := Fuel_Level_2;



MC2M_TERA_EngineTempValue   := EngineTempValue;
//MC2M_TERA_EngineTempValue   := EngineTempValue2;

MC2M_TERA_BatteryLevel      := BatteryLevel;

MC2M_TERA_EngineOilPressure := EngineOilPressure;
//MC2M_TERA_EngineOilPressure := EngineOilPressure2;

// Gauge Bar
// Pressure sensor calculation -----------------------------

    mainSensor1; //Sensor 1 = Parking Brake
    MC2M_TERA_ParkingBrakePressure := UINT_TO_USINT(InputFiltered_Sensor1);
    //MC2M_TERA_ParkingBrakePressure := EngineTempValue2;

    mainSensor2; //Sensor 2 = Service Brake 1
    MC2M_TERA_ServiceBrake1 := UINT_TO_USINT(InputFiltered_Sensor2);
    //MC2M_TERA_ServiceBrake1 := EngineTempValue2+20;

    mainSensor3; //Sensor 3 = Service Brake 2
    MC2M_TERA_ServiceBrake2 := UINT_TO_USINT(InputFiltered_Sensor3);
    //MC2M_TERA_ServiceBrake2 := EngineTempValue2+30;

    mainSensor4; //Sensor 4 = Accessory Pressure
    MC2M_TERA_AccessoryPressure:= UINT_TO_USINT(InputFiltered_Sensor4);
    //MC2M_TERA_AccessoryPressure:= EngineTempValue2-20;

//SPN 177 - Transmission Oil Temperature
MC2M_TERA_TransOilTemperature := INT_TO_USINT(TransOilTemperature);
//MC2M_TERA_TransOilTemperature := TransOilTemperature2;

//----------------------------------------------------------

main_Lxicon; //Icons on screen

