
IF (MC2M_TERA_VehicleSpeed < 10 AND CurrentGear > -1 AND MC2M_TERA_EngineSpeed > 0 AND IOMODE_DIGIN15_Park_Sensor_En) THEN
    MC2M_IOMODE_DOUT02_ParkSensorControl := TRUE;
ELSE
    MC2M_IOMODE_DOUT02_ParkSensorControl := FALSE;
END_IF
