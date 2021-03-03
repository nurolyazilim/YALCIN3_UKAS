/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_VARS_C
#define INCLUDE__VT3_VARS_C

#include "vt3_runtime.h"
#include "vt3_POU_common.h"
#include "vt3_IO.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/** project version */
const char FAR vt3_const_prj_version[21] = "a01";

/** project name */
const char FAR vt3_const_prj_name[] = "project";

/** device name in vt3 project */
const char FAR vt3_const_dev_name[] = "GIGA";

/** vt3 version */
const char FAR vt3_version[17] = "7.6.3.2-stable";

/** device type - long name */
char const FAR vt3_device_properties_long_name[] = "GIGA 05600005 01";

/** device type - short name */
char const FAR vt3_device_properties_short_name[] = "GIGA_05600005_01";

/** device type - has touch screen */
BOOL const FAR vt3_device_properties_has_touch_screen = FALSE;

/** mds unit - might be used by the application to implement the winscope app protocol */
BYTE const FAR vt3_mdsunit = 0;

/**************************************************************************/

/* definition of constants */

/* variable:     SWVersion_GIGA
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     True
 * comment:      NMS no
 */
const STRING256 FAR SWVersion_GIGA = { 256, 23, "90000000_YALCIN3_UKAS.a" };

/* variable:     SWVersion_MC2M
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     True
 * comment:      NMS no
 */
const STRING256 FAR SWVersion_MC2M = { 256, 23, "90000000_YALCIN3_UKAS.a" };

/* variable:     Limit_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const UINT FAR Limit_BatteryLevel = ((UINT)220U);

/* variable:     AverageQuantity_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (10)
 */
const SINT FAR AverageQuantity_BatteryLevel = ((SINT)10);

/* variable:     AverageQuantityEngineTempGauge
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/EngineTempGaugeFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantityEngineTempGauge = ((SINT)20);

/* variable:     EngineTempGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Minimum Voltage for 40 - 220
 */
const INT FAR EngineTempGaugeValue_Min = ((INT)20);

/* variable:     EngineTempGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum Voltage for 80 - 770
 */
const INT FAR EngineTempGaugeValue_Mid = ((INT)625);

/* variable:     EngineTempGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum Voltage for 120 - 989
 */
const INT FAR EngineTempGaugeValue_Max = ((INT)1220);

/* variable:     EngineTempGaugeValue_1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      250-100
 */
const INT FAR EngineTempGaugeValue_1 = ((INT)250);

/* variable:     EngineTempGaugeValue_2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      600-550
 */
const INT FAR EngineTempGaugeValue_2 = ((INT)600);

/* variable:     EngineTempGaugeValue_3
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      800-780
 */
const INT FAR EngineTempGaugeValue_3 = ((INT)800);

/* variable:     EngineTempGaugeValue_4
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      930-930
 */
const INT FAR EngineTempGaugeValue_4 = ((INT)930);

/* variable:     EngineTempGaugeValue_5
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1020-1020
 */
const INT FAR EngineTempGaugeValue_5 = ((INT)1020);

/* variable:     AverageQuantitySpeedometer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/SpeedometerFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantitySpeedometer = ((SINT)20);

/* variable:     GIGASpeedGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGASpeedGaugeValue_Min = ((INT)30);

/* variable:     GIGASpeedGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGASpeedGaugeValue_Mid = ((INT)1210);

/* variable:     GIGASpeedGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGASpeedGaugeValue_Max = ((INT)2430);

/* variable:     AverageQuantityEngineSpeed
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/EngineSpeedFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30) 20
 */
const SINT FAR AverageQuantityEngineSpeed = ((SINT)2);

/* variable:     GIGAEngineSpeedGaugeValue_1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAEngineSpeedGaugeValue_1 = ((INT)45);

/* variable:     GIGAEngineSpeedGaugeValue_2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAEngineSpeedGaugeValue_2 = ((INT)575);

/* variable:     GIGAEngineSpeedGaugeValue_3
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAEngineSpeedGaugeValue_3 = ((INT)930);

/* variable:     GIGAEngineSpeedGaugeValue_4
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAEngineSpeedGaugeValue_4 = ((INT)1510);

/* variable:     GIGAEngineSpeedGaugeValue_5
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAEngineSpeedGaugeValue_5 = ((INT)1810);

/* variable:     AverageQuantityFuelLevel
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/FuelLevelFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantityFuelLevel = ((SINT)100);

/* variable:     GIGAFuelLevelGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/Data_FuelLevel
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAFuelLevelGaugeValue_Min = ((INT)60);

/* variable:     GIGAFuelLevelGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/Data_FuelLevel
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAFuelLevelGaugeValue_Mid = ((INT)630);

/* variable:     GIGAFuelLevelGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/Data_FuelLevel
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAFuelLevelGaugeValue_Max = ((INT)1200);

/* variable:     AverageQuantityEngineOilPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/EngineOilPressureFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantityEngineOilPressure = ((SINT)30);

/* variable:     GIGAEngineOilPressureGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/Data_EngineOilPressure
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAEngineOilPressureGaugeValue_Min = ((INT)25);

/* variable:     GIGAEngineOilPressureGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/Data_EngineOilPressure
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAEngineOilPressureGaugeValue_Mid = ((INT)625);

/* variable:     GIGAEngineOilPressureGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/Data_EngineOilPressure
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGAEngineOilPressureGaugeValue_Max = ((INT)1235);

/* variable:     AverageQuantityTransOilTemperature
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/TransOilTemperatureFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantityTransOilTemperature = ((SINT)20);

/* variable:     GIGATransOilTemperatureGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/Data_TransOilTemperature
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGATransOilTemperatureGaugeValue_Min = ((INT)70);

/* variable:     GIGATransOilTemperatureGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/Data_TransOilTemperature
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGATransOilTemperatureGaugeValue_Mid = ((INT)630);

/* variable:     GIGATransOilTemperatureGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/Data_TransOilTemperature
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
const INT FAR GIGATransOilTemperatureGaugeValue_Max = ((INT)1200);

/* variable:     AverageQuantityGIGA_ServiceBrake1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantityGIGA_ServiceBrake1 = ((SINT)50);

/* variable:     AverageQuantityGIGA_ServiceBrake2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantityGIGA_ServiceBrake2 = ((SINT)100);

/* variable:     AverageQuantityGIGA_ParkingBrakePressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantityGIGA_ParkingBrakePressure = ((SINT)50);

/* variable:     AverageQuantityGIGA_AccessoryPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
const SINT FAR AverageQuantityGIGA_AccessoryPressure = ((SINT)20);

/**************************************************************************/

/* definition of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_Open
 * definition:   /project/GIGA/CAN_Open
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/GIGA/CAN_Open
 */
BOOL FAR vt3_can_alarm_busoff_CAN_Open;

/* variable:     GIGA_MC2M_ResetTrip
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR GIGA_MC2M_ResetTrip;

/* variable:     GIGA_MC2M_GIGAOdometerBackup
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR GIGA_MC2M_GIGAOdometerBackup;

/* variable:     vt3_can_period_CAN_713
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/GIGA/CAN_Open/CAN_713
 */
UINT FAR vt3_can_period_CAN_713;

/* variable:     vt3_can_trigger_CAN_713
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/GIGA/CAN_Open/CAN_713
 */
BOOL FAR vt3_can_trigger_CAN_713;

/* variable:     vt3_can_alarm_CAN_151
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 */
BOOL FAR vt3_can_alarm_CAN_151;

/* variable:     MC2M_TERA_EngineSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UINT FAR MC2M_TERA_EngineSpeed;

/* variable:     MC2M_TERA_VehicleSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_VehicleSpeed;

/* variable:     MC2M_TERA_FuelLevel_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_FuelLevel_1;

/* variable:     MC2M_TERA_EngineTempValue
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_EngineTempValue;

/* variable:     MC2M_TERA_BatteryLevel
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UINT FAR MC2M_TERA_BatteryLevel;

/* variable:     MC2M_TERA_EngineOilPressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_EngineOilPressure;

/* variable:     vt3_can_alarm_CAN_152
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 */
BOOL FAR vt3_can_alarm_CAN_152;

/* variable:     MC2M_TERA_ParkingBrakePressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_ParkingBrakePressure;

/* variable:     MC2M_TERA_ServiceBrake1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_ServiceBrake1;

/* variable:     MC2M_TERA_ServiceBrake2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_ServiceBrake2;

/* variable:     MC2M_TERA_AccessoryPressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_AccessoryPressure;

/* variable:     MC2M_TERA_TransOilTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_TransOilTemperature;

/* variable:     MC2M_TERA_CurrentGear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_CurrentGear;

/* variable:     MC2M_TERA_OutSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_OutSideTemperature;

/* variable:     MC2M_TERA_InSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_InSideTemperature;

/* variable:     vt3_can_alarm_CAN_153
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 */
BOOL FAR vt3_can_alarm_CAN_153;

/* variable:     MC2M_TERA_Icon_Status_L01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L01;

/* variable:     MC2M_TERA_Icon_Status_L02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L02;

/* variable:     MC2M_TERA_Icon_Status_L03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L03;

/* variable:     MC2M_TERA_Icon_Status_L04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L04;

/* variable:     MC2M_TERA_Icon_Status_L05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L05;

/* variable:     MC2M_TERA_Icon_Status_L06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L06;

/* variable:     MC2M_TERA_Icon_Status_L07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L07;

/* variable:     MC2M_TERA_Icon_Status_L08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L08;

/* variable:     MC2M_TERA_Icon_Status_L09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L09;

/* variable:     MC2M_TERA_Icon_Status_L10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L10;

/* variable:     MC2M_TERA_Icon_Status_L11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L11;

/* variable:     MC2M_TERA_Icon_Status_L12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L12;

/* variable:     MC2M_TERA_Icon_Status_L13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L13;

/* variable:     MC2M_TERA_Icon_Status_L14_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L14_1;

/* variable:     MC2M_TERA_Icon_Status_L15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L15;

/* variable:     MC2M_TERA_Icon_Status_L16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L16;

/* variable:     MC2M_TERA_Icon_Status_L17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L17;

/* variable:     MC2M_TERA_Icon_Status_L18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L18;

/* variable:     MC2M_TERA_Icon_Status_L19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L19;

/* variable:     MC2M_TERA_Icon_Status_L20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L20;

/* variable:     MC2M_TERA_Icon_Status_L21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L21;

/* variable:     MC2M_TERA_Icon_Status_L22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L22;

/* variable:     MC2M_TERA_Icon_Status_L23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L23;

/* variable:     MC2M_TERA_Icon_Status_L24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L24;

/* variable:     MC2M_TERA_Icon_Status_L25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L25;

/* variable:     MC2M_TERA_Icon_Status_L26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L26;

/* variable:     MC2M_TERA_Icon_Status_L27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L27;

/* variable:     MC2M_TERA_Icon_Status_L28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L28;

/* variable:     MC2M_TERA_Icon_Status_L29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L29;

/* variable:     MC2M_TERA_Icon_Status_L30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L30;

/* variable:     MC2M_TERA_Icon_Status_L31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L31;

/* variable:     MC2M_TERA_Icon_Status_L32
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L32;

/* variable:     MC2M_TERA_Icon_Status_L33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L33;

/* variable:     MC2M_TERA_Icon_Status_L34
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L34;

/* variable:     MC2M_TERA_Icon_Status_L35
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L35;

/* variable:     MC2M_TERA_Icon_Status_L36
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L36;

/* variable:     MC2M_TERA_Icon_Status_L37
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L37;

/* variable:     MC2M_TERA_Icon_Status_L38
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L38;

/* variable:     MC2M_TERA_Icon_Status_L39
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L39;

/* variable:     MC2M_TERA_Icon_Status_L40
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L40;

/* variable:     MC2M_TERA_Icon_Status_L41
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L41;

/* variable:     MC2M_TERA_Icon_Status_L42
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L42;

/* variable:     MC2M_TERA_Icon_Status_L43
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L43;

/* variable:     MC2M_TERA_Icon_Status_BO_S1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_BO_S1;

/* variable:     MC2M_TERA_Icon_Status_BO_S2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_BO_S2;

/* variable:     MC2M_TERA_Icon_Status_BO_S3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_BO_S3;

/* variable:     MC2M_TERA_Icon_Status_GIGA_Bsy
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_GIGA_Bsy;

/* variable:     MC2M_TERA_Icon_Status_BO_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_BO_1;

/* variable:     MC2M_TERA_Icon_Status_BO_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_BO_2;

/* variable:     MC2M_TERA_Icon_Status_L14_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L14_2;

/* variable:     MC2M_TERA_Icon_Status_L14_3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L14_3;

/* variable:     MC2M_TERA_Icon_Status_L14_4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L14_4;

/* variable:     MC2M_TERA_Icon_Status_L14_5
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_L14_5;

/* variable:     MC2M_TERA_Icon_Status_TankType
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_Icon_Status_TankType;

/* variable:     MC2M_TERA_Icon_Status_BO_0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Icon_Status_BO_0;

/* variable:     vt3_can_alarm_CAN_154
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 */
BOOL FAR vt3_can_alarm_CAN_154;

/* variable:     MC2M_TERA_LampAlarm_L01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L01;

/* variable:     MC2M_TERA_LampAlarm_L02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L02;

/* variable:     MC2M_TERA_LampAlarm_L03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L03;

/* variable:     MC2M_TERA_LampAlarm_L04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L04;

/* variable:     MC2M_TERA_LampAlarm_L05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L05;

/* variable:     MC2M_TERA_LampAlarm_L06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L06;

/* variable:     MC2M_TERA_LampAlarm_L07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L07;

/* variable:     MC2M_TERA_LampAlarm_L08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L08;

/* variable:     MC2M_TERA_LampAlarm_L09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L09;

/* variable:     MC2M_TERA_LampAlarm_L10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L10;

/* variable:     MC2M_TERA_LampAlarm_L11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L11;

/* variable:     MC2M_TERA_LampAlarm_L12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L12;

/* variable:     MC2M_TERA_LampAlarm_L13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L13;

/* variable:     MC2M_TERA_LampAlarm_L14
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L14;

/* variable:     MC2M_TERA_LampAlarm_L15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L15;

/* variable:     MC2M_TERA_LampAlarm_L16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L16;

/* variable:     MC2M_TERA_LampAlarm_L17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L17;

/* variable:     MC2M_TERA_LampAlarm_L18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L18;

/* variable:     MC2M_TERA_LampAlarm_L19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L19;

/* variable:     MC2M_TERA_LampAlarm_L20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L20;

/* variable:     MC2M_TERA_LampAlarm_L21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L21;

/* variable:     MC2M_TERA_LampAlarm_L22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L22;

/* variable:     MC2M_TERA_LampAlarm_L23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L23;

/* variable:     MC2M_TERA_LampAlarm_L24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L24;

/* variable:     MC2M_TERA_LampAlarm_L25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L25;

/* variable:     MC2M_TERA_LampAlarm_L26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L26;

/* variable:     MC2M_TERA_LampAlarm_L27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L27;

/* variable:     MC2M_TERA_LampAlarm_L28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L28;

/* variable:     MC2M_TERA_LampAlarm_L29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L29;

/* variable:     MC2M_TERA_LampAlarm_L30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L30;

/* variable:     MC2M_TERA_LampAlarm_L31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L31;

/* variable:     MC2M_TERA_LampAlarm_L32
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L32;

/* variable:     MC2M_TERA_LampAlarm_L33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L33;

/* variable:     MC2M_TERA_LampAlarm_L34
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L34;

/* variable:     MC2M_TERA_LampAlarm_L35
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L35;

/* variable:     MC2M_TERA_LampAlarm_L36
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_LampAlarm_L36;

/* variable:     vt3_can_alarm_CAN_155
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 */
BOOL FAR vt3_can_alarm_CAN_155;

/* variable:     MC2M_TERA_AngleX
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR MC2M_TERA_AngleX;

/* variable:     MC2M_TERA_AngleY
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR MC2M_TERA_AngleY;

/* variable:     MC2M_TERA_FuelLevel_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_FuelLevel_2;

/* variable:     MC2M_TERA_FuelTankSel1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_FuelTankSel1;

/* variable:     MC2M_TERA_FuelTankSel2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_FuelTankSel2;

/* variable:     MC2M_TERA_BackDoorTest_Buzzer
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_BackDoorTest_Buzzer;

/* variable:     vt3_can_alarm_CAN_156
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 */
BOOL FAR vt3_can_alarm_CAN_156;

/* variable:     MC2M_TERA_SWConfig0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_SWConfig0;

/* variable:     MC2M_TERA_SWConfig1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_SWConfig1;

/* variable:     MC2M_TERA_SWVersions0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_SWVersions0;

/* variable:     MC2M_TERA_SWVersions1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_SWVersions1;

/* variable:     MC2M_TERA_SWVersions2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_SWVersions2;

/* variable:     MC2M_TERA_AuxPressureLow_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_AuxPressureLow_Stat;

/* variable:     MC2M_TERA_Engine_Brake_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_Engine_Brake_Stat;

/* variable:     MC2M_TERA_WaterInFuel_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_WaterInFuel_Stat;

/* variable:     MC2M_TERA_BackDoorTest_Prd
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UINT FAR MC2M_TERA_BackDoorTest_Prd;

/* variable:     vt3_can_alarm_CAN_157
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 */
BOOL FAR vt3_can_alarm_CAN_157;

/* variable:     MC2M_TERA_DIAG_INP45
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MC2M_TERA_DIAG_INP45;

/* variable:     vt3_can_alarm_CAN_162
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 */
BOOL FAR vt3_can_alarm_CAN_162;

/* variable:     MC2M_TERA_DIAG_PresLevel_Normalized
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR MC2M_TERA_DIAG_PresLevel_Normalized;

/* variable:     vt3_can_alarm_CAN_163
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 */
BOOL FAR vt3_can_alarm_CAN_163;

/* variable:     MC2M_TERA_DIAG_HTempLevel_Normalized
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR MC2M_TERA_DIAG_HTempLevel_Normalized;

/* variable:     MC2M_TERA_DIAG_TotalEngineHours
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR MC2M_TERA_DIAG_TotalEngineHours;

/* variable:     MC2M_TERA_DIAG_Stat_4x4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_DIAG_Stat_4x4;

/* variable:     vt3_can_alarm_CAN_164
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 */
BOOL FAR vt3_can_alarm_CAN_164;

/* variable:     MC2M_TERA_TCM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR MC2M_TERA_TCM_SuspectParameterNumber;

/* variable:     MC2M_TERA_ECM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR MC2M_TERA_ECM_SuspectParameterNumber;

/* variable:     vt3_can_alarm_CAN_165
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 */
BOOL FAR vt3_can_alarm_CAN_165;

/* variable:     MC2M_TERA_EBS_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR MC2M_TERA_EBS_SuspectParameterNumber;

/* variable:     MC2M_TERA_TCM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_TCM_FailureModeIdentifier;

/* variable:     MC2M_TERA_ECM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_ECM_FailureModeIdentifier;

/* variable:     MC2M_TERA_EBS_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_EBS_FailureModeIdentifier;

/* variable:     MC2M_TERA_TCM_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_TCM_OccurrenceCount;

/* variable:     vt3_can_alarm_CAN_166
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 */
BOOL FAR vt3_can_alarm_CAN_166;

/* variable:     MC2M_TERA_ECM_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_ECM_OccurrenceCount;

/* variable:     MC2M_TERA_EBS_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_EBS_OccurrenceCount;

/* variable:     MC2M_TERA_RadiatorTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR MC2M_TERA_RadiatorTemp;

/* variable:     MC2M_TERA_HTempInputFiltered
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UINT FAR MC2M_TERA_HTempInputFiltered;

/* variable:     vt3_can_alarm_CAN_168
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 */
BOOL FAR vt3_can_alarm_CAN_168;

/* variable:     MC2M_TERA_TripCounter
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR MC2M_TERA_TripCounter;

/* variable:     MC2M_TERA_TotalOdometer
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR MC2M_TERA_TotalOdometer;

/* variable:     vt3_can_alarm_CAN_169
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 */
BOOL FAR vt3_can_alarm_CAN_169;

/* variable:     MC2M_TERA_DIAG_TotalEngineHours_Old
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR MC2M_TERA_DIAG_TotalEngineHours_Old;

/* variable:     MC2M_TERA_DIAG_EngineCoolantLevel
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR MC2M_TERA_DIAG_EngineCoolantLevel;

/* variable:     MC2M_TERA_DIAG_VvrPump
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR MC2M_TERA_DIAG_VvrPump;

/* variable:     MC2M_TERA_DIAG_VVRPumpTrigger
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_DIAG_VVRPumpTrigger;

/* variable:     MC2M_TERA_DIAG_CACTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR MC2M_TERA_DIAG_CACTemp;

/* variable:     MC2M_TERA_DIAG_RadiatorTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR MC2M_TERA_DIAG_RadiatorTemp;

/* variable:     vt3_can_alarm_CAN_181
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_181
 */
BOOL FAR vt3_can_alarm_CAN_181;

/* variable:     MUX_KL15_Ignition
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR MUX_KL15_Ignition;

/* variable:     vt3_can_alarm_CAN_187
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_MODE/CAN_Open/CAN_187
 */
BOOL FAR vt3_can_alarm_CAN_187;

/* variable:     IOMODE_DIGIN29
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_15  
 */
BOOL FAR IOMODE_DIGIN29;

/* variable:     vt3_can_alarm_CAN_186
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_MODE_2/CAN_Open/CAN_186
 */
BOOL FAR vt3_can_alarm_CAN_186;

/* variable:     IOMODE_2_DIGIN00_Winch_RC_Up
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_6 - Vinç Kontrol Switch (MOM)-Uzaktan Kmnda UP
 */
BOOL FAR IOMODE_2_DIGIN00_Winch_RC_Up;

/* variable:     IOMODE_2_DIGIN29
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_15 -
 */
BOOL FAR IOMODE_2_DIGIN29;

/* variable:     vt3_can_alarm_CAN_Light_4E
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 */
BOOL FAR vt3_can_alarm_CAN_Light_4E;

/* variable:     OMNIA_LEFT_Light_P1_Park
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR OMNIA_LEFT_Light_P1_Park;

/* variable:     vt3_can_alarm_CAN_Wiper_4F
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 */
BOOL FAR vt3_can_alarm_CAN_Wiper_4F;

/* variable:     OMNIA_RIGHT_WiperLOW
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR OMNIA_RIGHT_WiperLOW;

/* variable:     vt3_can_alarm_CAN_18D
 * definition:   /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 */
BOOL FAR vt3_can_alarm_CAN_18D;

/* variable:     AMUCBO_AngleX
 * definition:   /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR AMUCBO_AngleX;

/* variable:     vt3_can_alarm_CAN_792
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_792
 */
BOOL FAR vt3_can_alarm_CAN_792;

/* variable:     NMSGUI_MC2M_hydraulic_tank_pressure
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR NMSGUI_MC2M_hydraulic_tank_pressure;

/* variable:     NMSGUI_MC2M_hydraulic_tank_temp
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR NMSGUI_MC2M_hydraulic_tank_temp;

/* variable:     vt3_can_alarm_CAN_793
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_793
 */
BOOL FAR vt3_can_alarm_CAN_793;

/* variable:     NMSGUI_MC2M_hydraulic_tank_pressure_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR NMSGUI_MC2M_hydraulic_tank_pressure_touch;

/* variable:     NMSGUI_MC2M_hydraulic_tank_temp_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR NMSGUI_MC2M_hydraulic_tank_temp_touch;

/* variable:     Icon_Status_L04
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR Icon_Status_L04;

/* variable:     Icon_Status_L11
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Park Lamps
 */
SINT FAR Icon_Status_L11;

/* variable:     Icon_Status_L12
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Kısalar
 */
SINT FAR Icon_Status_L12;

/* variable:     DateTimeNow
 * definition:   /project/GIGA/global_data
 * type:         DATE_AND_TIME
 * address:      not specified
 * constant:     False
 * comment:      Current Date and Time
 */
DATE_AND_TIME FAR DateTimeNow;

/* variable:     DateTimeUpdate
 * definition:   /project/GIGA/global_data
 * type:         DATE_AND_TIME
 * address:      not specified
 * constant:     False
 * comment:      Requested Date and Time
 */
DATE_AND_TIME FAR DateTimeUpdate;

/* variable:     SetDateTime
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Update Date and Time
 */
BOOL FAR SetDateTime;

/* variable:     DateNow
 * definition:   /project/GIGA/global_data
 * type:         DATE
 * address:      not specified
 * constant:     False
 * comment:      Tarih - GUNCEL
 */
DATE FAR DateNow;

/* variable:     DateOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(10)
 * address:      not specified
 * constant:     False
 * comment:      Ekranda Tarih
 */
STRING10 FAR DateOnScreen;

/* variable:     TimeNow
 * definition:   /project/GIGA/global_data
 * type:         TIME_OF_DAY
 * address:      not specified
 * constant:     False
 * comment:      Zaman - GUNCEL
 */
TIME_OF_DAY FAR TimeNow;

/* variable:     TimeOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      not specified
 * constant:     False
 * comment:      Ekranda Zaman
 */
STRING5 FAR TimeOnScreen;

/* variable:     ZeroPrefixMinute
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      Önüne sıfır
 */
STRING256 FAR ZeroPrefixMinute;

/* variable:     ZeroPrefixDay
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      Önune sıfır
 */
STRING256 FAR ZeroPrefixDay;

/* variable:     ScreenLight
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Parlaklığı
 */
USINT FAR ScreenLight;

/* variable:     ScreenLight_BO
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Blackout durumunda Ekran Parlaklığı
 */
USINT FAR ScreenLight_BO;

/* variable:     ShowBrightnessBar
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Ekran Parlaklığı Çubuğunu Göster
 */
BOOL FAR ShowBrightnessBar;

/* variable:     BrightnessBarTOF
 * definition:   /project/GIGA/global_data
 * type:         TOF
 * address:      not specified
 * constant:     False
 * comment:      Ekran Parlaklığı Çubuğunu Göster TOF
 */
TOF FAR BrightnessBarTOF;

/* variable:     DayUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Gün
 */
INT FAR DayUpdate;

/* variable:     MonthUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Ay
 */
INT FAR MonthUpdate;

/* variable:     YearUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Yıl
 */
INT FAR YearUpdate;

/* variable:     HourUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Saat
 */
INT FAR HourUpdate;

/* variable:     MinuteUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Dakika
 */
INT FAR MinuteUpdate;

/* variable:     DateStringUpdate
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Tarih
 */
STRING256 FAR DateStringUpdate;

/* variable:     TimeStringUpdate
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Zaman
 */
STRING256 FAR TimeStringUpdate;

/* variable:     DateTimeUpdating
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Saat Tarih Güncelleniyor
 */
BOOL FAR DateTimeUpdating;

/* variable:     BrightnessUpdating
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Saat Tarih Güncelleniyor
 */
BOOL FAR BrightnessUpdating;

/* variable:     InfoNo
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
SINT FAR InfoNo;

/* variable:     InfoNo2
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
SINT FAR InfoNo2;

/* variable:     InfoNo3
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
SINT FAR InfoNo3;

/* variable:     InfoNo4
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
SINT FAR InfoNo4;

/* variable:     InfoNo5
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
SINT FAR InfoNo5;

/* variable:     InfoNo6
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
SINT FAR InfoNo6;

/* variable:     TotalAlarm
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Toplam Gönderilen Alarm Sayısı
 */
SINT FAR TotalAlarm;

/* variable:     TotalAlarm2
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Toplam Gönderilen Alarm Sayısı
 */
SINT FAR TotalAlarm2;

/* variable:     indexAlarm
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Alarm indisi
 */
SINT FAR indexAlarm;

/* variable:     indexAlarm2
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Alarm indisi
 */
SINT FAR indexAlarm2;

/* variable:     Stat_MirrorCamera
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Yan ayna kamera ekran durumu
 */
BOOL FAR Stat_MirrorCamera;

/* variable:     RTRIG_Cam
 * definition:   /project/GIGA/global_data
 * type:         R_TRIG
 * address:      not specified
 * constant:     False
 * comment:      Kamera Trigger
 */
R_TRIG FAR RTRIG_Cam;

/* variable:     inSideTemperature
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      iç ortam sıcaklığı
 */
STRING256 FAR inSideTemperature;

/* variable:     outSideTemperature
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      dış ortam sıcaklığı
 */
STRING256 FAR outSideTemperature;

/* variable:     vehicleAngleX
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Araç x ekseni derece
 */
INT FAR vehicleAngleX;

/* variable:     vehicleAngleY
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Araç y ekseni derece
 */
INT FAR vehicleAngleY;

/* variable:     SWVersionOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      
 */
STRING256 FAR SWVersionOnScreen;

/* variable:     SWVersion
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR SWVersion;

/* variable:     SWVersion_Stat
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      yazı görünme durumu
 */
BOOL FAR SWVersion_Stat;

/* variable:     SWVersion_TRIG
 * definition:   /project/GIGA/global_data
 * type:         R_TRIG
 * address:      not specified
 * constant:     False
 * comment:      
 */
R_TRIG FAR SWVersion_TRIG;

/* variable:     nullString
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
STRING256 FAR nullString;

/* variable:     AuxPressureLowOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
STRING256 FAR AuxPressureLowOnScreen;

/* variable:     AuxPressureLow_Stat
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
BOOL FAR AuxPressureLow_Stat;

/* variable:     ScreenTripMeter
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UDINT FAR ScreenTripMeter;

/* variable:     led_tmp
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
BOOL FAR led_tmp;

/* variable:     Backlight
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UINT FAR Backlight;

/* variable:     BacklightScreen
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      750
 */
UINT FAR BacklightScreen;

/* variable:     GIGASpeed
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UINT FAR GIGASpeed;

/* variable:     GIGAEngineSpeed
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UINT FAR GIGAEngineSpeed;

/* variable:     GIGAFuelLevel
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UINT FAR GIGAFuelLevel;

/* variable:     GIGAEngineTempValue
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UINT FAR GIGAEngineTempValue;

/* variable:     GIGAEngineOilPressure
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UINT FAR GIGAEngineOilPressure;

/* variable:     GIGATransOilTemperature
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UINT FAR GIGATransOilTemperature;

/* variable:     led_tmp_prev
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
BOOL FAR led_tmp_prev;

/* variable:     Backlight_prev
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UINT FAR Backlight_prev;

/* variable:     SaveParameter
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
BOOL FAR SaveParameter;

/* variable:     EngineProtectionERROnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
STRING256 FAR EngineProtectionERROnScreen;

/* variable:     ActiveAlarm
 * definition:   /project/GIGA/global_data
 * type:         ARR_100_SINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
ARR_100_SINT FAR ActiveAlarm;

/* variable:     ActiveAlarm2
 * definition:   /project/GIGA/global_data
 * type:         ARR_100_SINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
ARR_100_SINT FAR ActiveAlarm2;

/* variable:     Buzzer_Frequency
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
UINT FAR Buzzer_Frequency;

/* variable:     Buzzer_Level
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
USINT FAR Buzzer_Level;

/* variable:     Buzzer_Loop
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
UDINT FAR Buzzer_Loop;

/* variable:     Cmd_Buzzer_Ctr
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UDINT FAR Cmd_Buzzer_Ctr;

/* variable:     Cmd_Buzzer_Ctr2
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
UDINT FAR Cmd_Buzzer_Ctr2;

/* variable:     BIT_Test_Init
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
BOOL FAR BIT_Test_Init;

/* variable:     Stat_Buzzer
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
BOOL FAR Stat_Buzzer;

/* variable:     Cmd_Buzzer
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
USINT FAR Cmd_Buzzer;

/* variable:     InputFiltered_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
UINT FAR InputFiltered_BatteryLevel;

/* variable:     TotalInput_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
UDINT FAR TotalInput_BatteryLevel;

/* variable:     InputArray_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         ARRAY30UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
ARRAY30UINT FAR InputArray_BatteryLevel;

/* variable:     AlarmState_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR AlarmState_BatteryLevel;

/* variable:     GIGALedOverride
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR GIGALedOverride;

/* variable:     GIGAGaugeOverride0
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1020
 */
INT FAR GIGAGaugeOverride0;

/* variable:     GIGAGaugeOverride1
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1235 2500
 */
INT FAR GIGAGaugeOverride1;

/* variable:     GIGAGaugeOverride2
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1020
 */
INT FAR GIGAGaugeOverride2;

/* variable:     GIGAGaugeOverride3
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1810
 */
INT FAR GIGAGaugeOverride3;

/* variable:     GIGAGaugeOverride4
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1810
 */
INT FAR GIGAGaugeOverride4;

/* variable:     GIGAGaugeOverride5
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1810
 */
INT FAR GIGAGaugeOverride5;

/* variable:     GIGABarGaugeOverride
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
USINT FAR GIGABarGaugeOverride;

/* variable:     Light_An_Inp
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UINT FAR Light_An_Inp;

/* variable:     toggle_500ms
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR toggle_500ms;

/* variable:     toggle_200ms
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR toggle_200ms;

/* variable:     cycle
 * definition:   /project/GIGA/cycle
 * type:         cycle
 * address:      not specified
 * constant:     False
 * comment:      
 */
cycle_t FAR cycle;

/* variable:     mainEngineTempGauge
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/mainEngineTempGauge
 * type:         mainEngineTempGauge
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainEngineTempGauge_t FAR mainEngineTempGauge;

/* variable:     mainSpeedometer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/mainSpeedometer
 * type:         mainSpeedometer
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainSpeedometer_t FAR mainSpeedometer;

/* variable:     GIGAEngineSpeedGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR GIGAEngineSpeedGaugeValue_Min;

/* variable:     mainEngineSpeed
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/mainEngineSpeed
 * type:         mainEngineSpeed
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainEngineSpeed_t FAR mainEngineSpeed;

/* variable:     mainFuelLevel
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/mainFuelLevel
 * type:         mainFuelLevel
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainFuelLevel_t FAR mainFuelLevel;

/* variable:     mainEngineOilPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/mainEngineOilPressure
 * type:         mainEngineOilPressure
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainEngineOilPressure_t FAR mainEngineOilPressure;

/* variable:     mainTransOilTemperature
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/mainTransOilTemperature
 * type:         mainTransOilTemperature
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainTransOilTemperature_t FAR mainTransOilTemperature;

/* variable:     mainAnalogGauges
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/mainAnalogGauges
 * type:         mainAnalogGauges
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainAnalogGauges_t FAR mainAnalogGauges;

/* variable:     ServiceBrake1InputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
USINT FAR ServiceBrake1InputFiltered;

/* variable:     TotalGIGA_ServiceBrake1Input
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
UDINT FAR TotalGIGA_ServiceBrake1Input;

/* variable:     GIGA_ServiceBrake1InputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
ARRAY100UINT FAR GIGA_ServiceBrake1InputArray;

/* variable:     GIGA_ServiceBrake1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
USINT FAR GIGA_ServiceBrake1;

/* variable:     ServiceBrake2InputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
USINT FAR ServiceBrake2InputFiltered;

/* variable:     TotalGIGA_ServiceBrake2Input
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
UDINT FAR TotalGIGA_ServiceBrake2Input;

/* variable:     GIGA_ServiceBrake2InputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
ARRAY100UINT FAR GIGA_ServiceBrake2InputArray;

/* variable:     GIGA_ServiceBrake2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
USINT FAR GIGA_ServiceBrake2;

/* variable:     ParkingBrakePressureInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
USINT FAR ParkingBrakePressureInputFiltered;

/* variable:     TotalGIGA_ParkingBrakePressureInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
UDINT FAR TotalGIGA_ParkingBrakePressureInput;

/* variable:     GIGA_ParkingBrakePressureInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
ARRAY100UINT FAR GIGA_ParkingBrakePressureInputArray;

/* variable:     GIGA_ParkingBrakePressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
USINT FAR GIGA_ParkingBrakePressure;

/* variable:     AccessoryPressureInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
USINT FAR AccessoryPressureInputFiltered;

/* variable:     TotalGIGA_AccessoryPressureInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
UDINT FAR TotalGIGA_AccessoryPressureInput;

/* variable:     GIGA_AccessoryPressureInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
ARRAY100UINT FAR GIGA_AccessoryPressureInputArray;

/* variable:     GIGA_AccessoryPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
USINT FAR GIGA_AccessoryPressure;

/* variable:     GIGA_HyraulicLevel
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
USINT FAR GIGA_HyraulicLevel;

/* variable:     GIGA_HyraulicTemp
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR GIGA_HyraulicTemp;

/* variable:     GIGA_VVRPump
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR GIGA_VVRPump;

/* variable:     GIGA_VVRPumpTrigger
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR GIGA_VVRPumpTrigger;

/* variable:     GIGA_CACTemp
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR GIGA_CACTemp;

/* variable:     GIGA_RadiatorTemp
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
INT FAR GIGA_RadiatorTemp;

/* variable:     test
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR test;

/* variable:     hydraulicPressureTimer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR hydraulicPressureTimer;

/* variable:     buzzertimer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UINT FAR buzzertimer;

/* variable:     mainDigitalGauges
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges
 * type:         mainDigitalGauges
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainDigitalGauges_t FAR mainDigitalGauges;

/* variable:     L10_Difflock_Dropbox
 * definition:   /project/GIGA/Subroutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR L10_Difflock_Dropbox;

/* variable:     L11_Difflock_Front
 * definition:   /project/GIGA/Subroutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR L11_Difflock_Front;

/* variable:     L12_Difflock_Rear
 * definition:   /project/GIGA/Subroutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR L12_Difflock_Rear;

/* variable:     mainDiffLock
 * definition:   /project/GIGA/Subroutines/DiffLock/mainDiffLock
 * type:         mainDiffLock
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainDiffLock_t FAR mainDiffLock;

/* variable:     mainIgnitionOff
 * definition:   /project/GIGA/Subroutines/OtherFunctions/mainIgnitionOff
 * type:         mainIgnitionOff
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainIgnitionOff_t FAR mainIgnitionOff;

/* variable:     mainFunctions
 * definition:   /project/GIGA/Subroutines/OtherFunctions/mainFunctions
 * type:         mainFunctions
 * address:      not specified
 * constant:     False
 * comment:      
 */
mainFunctions_t FAR mainFunctions;

/* variable:     SetDateTime1
 * definition:   /project/GIGA/Subroutines/OtherFunctions/SetDateTime1
 * type:         SetDateTime1
 * address:      not specified
 * constant:     False
 * comment:      
 */
SetDateTime1_t FAR SetDateTime1;

/* variable:     GIGAMenu1
 * definition:   /project/GIGA/Subroutines/OtherFunctions/GIGAMenu1
 * type:         GIGAMenu1
 * address:      not specified
 * constant:     False
 * comment:      
 */
GIGAMenu1_t FAR GIGAMenu1;

/* variable:     LampAlarm
 * definition:   /project/GIGA/LampAlarm
 * type:         LampAlarm
 * address:      not specified
 * constant:     False
 * comment:      
 */
LampAlarm_t FAR LampAlarm;

/* variable:     MessageReceiver
 * definition:   /project/GIGA/MessageReceiver
 * type:         MessageReceiver
 * address:      not specified
 * constant:     False
 * comment:      
 */
MessageReceiver_t FAR MessageReceiver;

/* variable:     vt3_screen
 * definition:   /project/GIGA
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current screen
 */
UINT FAR vt3_screen;

/* variable:     vt3_language
 * definition:   /project/GIGA
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current language
 */
UINT FAR vt3_language;

/* variable:     vt3_alarm_disconnected_TERA12
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_TERA12;

/* variable:     vt3_alarm_disconnected_MC2M_CPU0
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_MC2M_CPU0;

/* variable:     vt3_alarm_disconnected_MC2M_CPU1
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_MC2M_CPU1;

/* variable:     vt3_alarm_disconnected_Debug_GUI
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_Debug_GUI;

/* variable:     vt3_alarm_disconnected_NMS_GUI
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_NMS_GUI;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_bytearray_R_warning
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %R
 */
BOOL FAR vt3_bytearray_R_warning;

/* variable:     vt3_bytearray_R_error
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %R
 */
BOOL FAR vt3_bytearray_R_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/GIGA
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
WORD FAR vt3_alarm_inhibition_bitmask;

/**************************************************************************/

/* definition of memory const size */
const unsigned int BYTEM_SIZE_EXTERN = BYTEM_SIZE;
const unsigned int BYTEP_SIZE_EXTERN = BYTEP_SIZE;
const unsigned int BYTER_SIZE_EXTERN = BYTER_SIZE;
const unsigned int BYTEI_SIZE_EXTERN = BYTEI_SIZE;
const unsigned int BYTEQ_SIZE_EXTERN = BYTEQ_SIZE;
const unsigned int BYTES_SIZE_EXTERN = BYTES_SIZE;
const unsigned int BYTEF_SIZE_EXTERN = BYTEF_SIZE;
const unsigned int BYTEE_SIZE_EXTERN = BYTEE_SIZE;
const unsigned int BYTEK_SIZE_EXTERN = BYTEK_SIZE;
const unsigned int VT3_IO_COUNT_EXTERN = VT3_IO_COUNT;


/* definition of memory arrays */
#pragma DATA_SEG DSEG DSEG_M
BYTE FAR BYTEM[BYTEM_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_P
BYTE FAR BYTEP[BYTEP_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_R
BYTE FAR BYTER[BYTER_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_I
BYTE FAR BYTEI[BYTEI_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_Q
BYTE FAR BYTEQ[BYTEQ_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_S
BYTE FAR BYTES[BYTES_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_F
BYTE FAR BYTEF[BYTEF_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_E
BYTE FAR BYTEE[BYTEE_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_K
BYTE FAR BYTEK[BYTEK_SIZE] attribute_aligned_4;

/**************************************************************************/

/* table of string size initializers */
const vt3_string_size_initializer_t vt3_string_sizes[] = {
	{ &DateStringUpdate.size, 256 },
	{ &ZeroPrefixDay.size, 256 },
	{ &DiagMessage09.size, 256 },
	{ &DiagMessage08.size, 256 },
	{ &DiagMessage07.size, 256 },
	{ &DiagMessage06.size, 256 },
	{ &DiagMessage05.size, 256 },
	{ &DiagMessage04.size, 256 },
	{ &DiagMessage03.size, 256 },
	{ &DiagMessage02.size, 256 },
	{ &EngineProtectionERROnScreen.size, 256 },
	{ &inSideTemperature.size, 256 },
	{ &ZeroPrefixMinute.size, 256 },
	{ &outSideTemperature.size, 256 },
	{ &DateOnScreen.size, 10 },
	{ &YearUptOnScreen.size, 5 },
	{ &ScreenBrightLUptOnScreen.size, 5 },
	{ &TimeStringUpdate.size, 256 },
	{ &MinuteUptOnScreen.size, 5 },
	{ &AuxPressureLowOnScreen.size, 256 },
	{ &ScreenBrightHUptOnScreen.size, 5 },
	{ &DayUptOnScreen.size, 5 },
	{ &SWVersionOnScreen.size, 256 },
	{ &TimeOnScreen.size, 5 },
	{ &HourUptOnScreen.size, 5 },
	{ &DiagMessage01.size, 256 },
	{ &nullString.size, 256 },
	{ &MonthUptOnScreen.size, 5 },
	{ &DateOnScreen2.size, 10 },
	{ &PanelBrightHUptOnScreen.size, 5 },
	{ &PanelBrightLUptOnScreen.size, 5 },
	{ (UINT FARPTR) NULL, 0 } /* sentinel */
}; /* vt3_string_sizes */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_VARS_C */

/* end of file */
