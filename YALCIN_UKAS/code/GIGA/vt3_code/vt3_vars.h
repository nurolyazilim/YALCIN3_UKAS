/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_VARS_H
#define INCLUDE__VT3_VARS_H

#include "vt3_base.h"
#include "vt3_extra.h"
#include "vt3_POU_string_typedef.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/**************************************************************************/

/* declaration of constants */

extern const char FAR vt3_const_prj_version[21];
extern const char FAR vt3_version[17];
extern const BYTE FAR vt3_mdsunit;

/* variable:     SWVersion_GIGA
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     True
 * comment:      NMS no
 */
extern const STRING256 FAR SWVersion_GIGA;

/* variable:     SWVersion_MC2M
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     True
 * comment:      NMS no
 */
extern const STRING256 FAR SWVersion_MC2M;

/* variable:     Limit_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const UINT FAR Limit_BatteryLevel;

/* variable:     AverageQuantity_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (10)
 */
extern const SINT FAR AverageQuantity_BatteryLevel;

/* variable:     AverageQuantityEngineTempGauge
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/EngineTempGaugeFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantityEngineTempGauge;

/* variable:     EngineTempGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Minimum Voltage for 40 - 220
 */
extern const INT FAR EngineTempGaugeValue_Min;

/* variable:     EngineTempGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum Voltage for 80 - 770
 */
extern const INT FAR EngineTempGaugeValue_Mid;

/* variable:     EngineTempGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum Voltage for 120 - 989
 */
extern const INT FAR EngineTempGaugeValue_Max;

/* variable:     EngineTempGaugeValue_1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      250-100
 */
extern const INT FAR EngineTempGaugeValue_1;

/* variable:     EngineTempGaugeValue_2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      600-550
 */
extern const INT FAR EngineTempGaugeValue_2;

/* variable:     EngineTempGaugeValue_3
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      800-780
 */
extern const INT FAR EngineTempGaugeValue_3;

/* variable:     EngineTempGaugeValue_4
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      930-930
 */
extern const INT FAR EngineTempGaugeValue_4;

/* variable:     EngineTempGaugeValue_5
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1020-1020
 */
extern const INT FAR EngineTempGaugeValue_5;

/* variable:     AverageQuantitySpeedometer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/SpeedometerFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantitySpeedometer;

/* variable:     GIGASpeedGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGASpeedGaugeValue_Min;

/* variable:     GIGASpeedGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGASpeedGaugeValue_Mid;

/* variable:     GIGASpeedGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGASpeedGaugeValue_Max;

/* variable:     AverageQuantityEngineSpeed
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/EngineSpeedFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30) 20
 */
extern const SINT FAR AverageQuantityEngineSpeed;

/* variable:     GIGAEngineSpeedGaugeValue_1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAEngineSpeedGaugeValue_1;

/* variable:     GIGAEngineSpeedGaugeValue_2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAEngineSpeedGaugeValue_2;

/* variable:     GIGAEngineSpeedGaugeValue_3
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAEngineSpeedGaugeValue_3;

/* variable:     GIGAEngineSpeedGaugeValue_4
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAEngineSpeedGaugeValue_4;

/* variable:     GIGAEngineSpeedGaugeValue_5
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAEngineSpeedGaugeValue_5;

/* variable:     AverageQuantityFuelLevel
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/FuelLevelFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantityFuelLevel;

/* variable:     GIGAFuelLevelGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/Data_FuelLevel
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAFuelLevelGaugeValue_Min;

/* variable:     GIGAFuelLevelGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/Data_FuelLevel
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAFuelLevelGaugeValue_Mid;

/* variable:     GIGAFuelLevelGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/Data_FuelLevel
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAFuelLevelGaugeValue_Max;

/* variable:     AverageQuantityEngineOilPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/EngineOilPressureFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantityEngineOilPressure;

/* variable:     GIGAEngineOilPressureGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/Data_EngineOilPressure
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAEngineOilPressureGaugeValue_Min;

/* variable:     GIGAEngineOilPressureGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/Data_EngineOilPressure
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAEngineOilPressureGaugeValue_Mid;

/* variable:     GIGAEngineOilPressureGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/Data_EngineOilPressure
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGAEngineOilPressureGaugeValue_Max;

/* variable:     AverageQuantityTransOilTemperature
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/TransOilTemperatureFilter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantityTransOilTemperature;

/* variable:     GIGATransOilTemperatureGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/Data_TransOilTemperature
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGATransOilTemperatureGaugeValue_Min;

/* variable:     GIGATransOilTemperatureGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/Data_TransOilTemperature
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGATransOilTemperatureGaugeValue_Mid;

/* variable:     GIGATransOilTemperatureGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/Data_TransOilTemperature
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR GIGATransOilTemperatureGaugeValue_Max;

/* variable:     AverageQuantityGIGA_ServiceBrake1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantityGIGA_ServiceBrake1;

/* variable:     AverageQuantityGIGA_ServiceBrake2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantityGIGA_ServiceBrake2;

/* variable:     AverageQuantityGIGA_ParkingBrakePressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantityGIGA_ParkingBrakePressure;

/* variable:     AverageQuantityGIGA_AccessoryPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantityGIGA_AccessoryPressure;

/**************************************************************************/

/* declaration of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_Open
 * definition:   /project/GIGA/CAN_Open
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/GIGA/CAN_Open
 */
extern BOOL FAR vt3_can_alarm_busoff_CAN_Open;

/* variable:     GIGA_MC2M_ResetTrip
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GIGA_MC2M_ResetTrip;

/* variable:     GIGA_MC2M_GIGAOdometerBackup
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR GIGA_MC2M_GIGAOdometerBackup;

/* variable:     vt3_can_period_CAN_713
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/GIGA/CAN_Open/CAN_713
 */
extern UINT FAR vt3_can_period_CAN_713;

/* variable:     vt3_can_trigger_CAN_713
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/GIGA/CAN_Open/CAN_713
 */
extern BOOL FAR vt3_can_trigger_CAN_713;

/* variable:     vt3_can_alarm_CAN_151
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 */
extern BOOL FAR vt3_can_alarm_CAN_151;

/* variable:     MC2M_TERA_EngineSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_EngineSpeed;

/* variable:     MC2M_TERA_VehicleSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_VehicleSpeed;

/* variable:     MC2M_TERA_FuelLevel_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_FuelLevel_1;

/* variable:     MC2M_TERA_EngineTempValue
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_EngineTempValue;

/* variable:     MC2M_TERA_BatteryLevel
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_BatteryLevel;

/* variable:     MC2M_TERA_EngineOilPressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_EngineOilPressure;

/* variable:     vt3_can_alarm_CAN_152
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 */
extern BOOL FAR vt3_can_alarm_CAN_152;

/* variable:     MC2M_TERA_ParkingBrakePressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ParkingBrakePressure;

/* variable:     MC2M_TERA_ServiceBrake1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ServiceBrake1;

/* variable:     MC2M_TERA_ServiceBrake2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ServiceBrake2;

/* variable:     MC2M_TERA_AccessoryPressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_AccessoryPressure;

/* variable:     MC2M_TERA_TransOilTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_TransOilTemperature;

/* variable:     MC2M_TERA_CurrentGear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_CurrentGear;

/* variable:     MC2M_TERA_OutSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_OutSideTemperature;

/* variable:     MC2M_TERA_InSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_InSideTemperature;

/* variable:     vt3_can_alarm_CAN_153
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 */
extern BOOL FAR vt3_can_alarm_CAN_153;

/* variable:     MC2M_TERA_Icon_Status_L01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L01;

/* variable:     MC2M_TERA_Icon_Status_L02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L02;

/* variable:     MC2M_TERA_Icon_Status_L03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L03;

/* variable:     MC2M_TERA_Icon_Status_L04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L04;

/* variable:     MC2M_TERA_Icon_Status_L05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L05;

/* variable:     MC2M_TERA_Icon_Status_L06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L06;

/* variable:     MC2M_TERA_Icon_Status_L07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L07;

/* variable:     MC2M_TERA_Icon_Status_L08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L08;

/* variable:     MC2M_TERA_Icon_Status_L09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L09;

/* variable:     MC2M_TERA_Icon_Status_L10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L10;

/* variable:     MC2M_TERA_Icon_Status_L11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L11;

/* variable:     MC2M_TERA_Icon_Status_L12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L12;

/* variable:     MC2M_TERA_Icon_Status_L13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L13;

/* variable:     MC2M_TERA_Icon_Status_L14_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_1;

/* variable:     MC2M_TERA_Icon_Status_L15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L15;

/* variable:     MC2M_TERA_Icon_Status_L16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L16;

/* variable:     MC2M_TERA_Icon_Status_L17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L17;

/* variable:     MC2M_TERA_Icon_Status_L18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L18;

/* variable:     MC2M_TERA_Icon_Status_L19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L19;

/* variable:     MC2M_TERA_Icon_Status_L20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L20;

/* variable:     MC2M_TERA_Icon_Status_L21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L21;

/* variable:     MC2M_TERA_Icon_Status_L22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L22;

/* variable:     MC2M_TERA_Icon_Status_L23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L23;

/* variable:     MC2M_TERA_Icon_Status_L24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L24;

/* variable:     MC2M_TERA_Icon_Status_L25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L25;

/* variable:     MC2M_TERA_Icon_Status_L26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L26;

/* variable:     MC2M_TERA_Icon_Status_L27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L27;

/* variable:     MC2M_TERA_Icon_Status_L28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L28;

/* variable:     MC2M_TERA_Icon_Status_L29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L29;

/* variable:     MC2M_TERA_Icon_Status_L30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L30;

/* variable:     MC2M_TERA_Icon_Status_L31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L31;

/* variable:     MC2M_TERA_Icon_Status_L32
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L32;

/* variable:     MC2M_TERA_Icon_Status_L33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L33;

/* variable:     MC2M_TERA_Icon_Status_L34
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L34;

/* variable:     MC2M_TERA_Icon_Status_L35
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L35;

/* variable:     MC2M_TERA_Icon_Status_L36
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L36;

/* variable:     MC2M_TERA_Icon_Status_L37
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L37;

/* variable:     MC2M_TERA_Icon_Status_L38
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L38;

/* variable:     MC2M_TERA_Icon_Status_L39
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L39;

/* variable:     MC2M_TERA_Icon_Status_L40
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L40;

/* variable:     MC2M_TERA_Icon_Status_L41
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L41;

/* variable:     MC2M_TERA_Icon_Status_L42
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L42;

/* variable:     MC2M_TERA_Icon_Status_L43
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L43;

/* variable:     MC2M_TERA_Icon_Status_BO_S1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_S1;

/* variable:     MC2M_TERA_Icon_Status_BO_S2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_S2;

/* variable:     MC2M_TERA_Icon_Status_BO_S3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_S3;

/* variable:     MC2M_TERA_Icon_Status_GIGA_Bsy
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_GIGA_Bsy;

/* variable:     MC2M_TERA_Icon_Status_BO_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_1;

/* variable:     MC2M_TERA_Icon_Status_BO_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_2;

/* variable:     MC2M_TERA_Icon_Status_L14_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_2;

/* variable:     MC2M_TERA_Icon_Status_L14_3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_3;

/* variable:     MC2M_TERA_Icon_Status_L14_4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_4;

/* variable:     MC2M_TERA_Icon_Status_L14_5
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_5;

/* variable:     MC2M_TERA_Icon_Status_TankType
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_Icon_Status_TankType;

/* variable:     MC2M_TERA_Icon_Status_BO_0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_0;

/* variable:     vt3_can_alarm_CAN_154
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 */
extern BOOL FAR vt3_can_alarm_CAN_154;

/* variable:     MC2M_TERA_LampAlarm_L01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L01;

/* variable:     MC2M_TERA_LampAlarm_L02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L02;

/* variable:     MC2M_TERA_LampAlarm_L03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L03;

/* variable:     MC2M_TERA_LampAlarm_L04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L04;

/* variable:     MC2M_TERA_LampAlarm_L05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L05;

/* variable:     MC2M_TERA_LampAlarm_L06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L06;

/* variable:     MC2M_TERA_LampAlarm_L07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L07;

/* variable:     MC2M_TERA_LampAlarm_L08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L08;

/* variable:     MC2M_TERA_LampAlarm_L09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L09;

/* variable:     MC2M_TERA_LampAlarm_L10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L10;

/* variable:     MC2M_TERA_LampAlarm_L11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L11;

/* variable:     MC2M_TERA_LampAlarm_L12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L12;

/* variable:     MC2M_TERA_LampAlarm_L13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L13;

/* variable:     MC2M_TERA_LampAlarm_L14
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L14;

/* variable:     MC2M_TERA_LampAlarm_L15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L15;

/* variable:     MC2M_TERA_LampAlarm_L16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L16;

/* variable:     MC2M_TERA_LampAlarm_L17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L17;

/* variable:     MC2M_TERA_LampAlarm_L18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L18;

/* variable:     MC2M_TERA_LampAlarm_L19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L19;

/* variable:     MC2M_TERA_LampAlarm_L20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L20;

/* variable:     MC2M_TERA_LampAlarm_L21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L21;

/* variable:     MC2M_TERA_LampAlarm_L22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L22;

/* variable:     MC2M_TERA_LampAlarm_L23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L23;

/* variable:     MC2M_TERA_LampAlarm_L24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L24;

/* variable:     MC2M_TERA_LampAlarm_L25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L25;

/* variable:     MC2M_TERA_LampAlarm_L26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L26;

/* variable:     MC2M_TERA_LampAlarm_L27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L27;

/* variable:     MC2M_TERA_LampAlarm_L28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L28;

/* variable:     MC2M_TERA_LampAlarm_L29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L29;

/* variable:     MC2M_TERA_LampAlarm_L30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L30;

/* variable:     MC2M_TERA_LampAlarm_L31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L31;

/* variable:     MC2M_TERA_LampAlarm_L32
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L32;

/* variable:     MC2M_TERA_LampAlarm_L33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L33;

/* variable:     MC2M_TERA_LampAlarm_L34
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L34;

/* variable:     MC2M_TERA_LampAlarm_L35
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L35;

/* variable:     MC2M_TERA_LampAlarm_L36
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L36;

/* variable:     vt3_can_alarm_CAN_155
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 */
extern BOOL FAR vt3_can_alarm_CAN_155;

/* variable:     MC2M_TERA_AngleX
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_AngleX;

/* variable:     MC2M_TERA_AngleY
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_AngleY;

/* variable:     MC2M_TERA_FuelLevel_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_FuelLevel_2;

/* variable:     MC2M_TERA_FuelTankSel1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_FuelTankSel1;

/* variable:     MC2M_TERA_FuelTankSel2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_FuelTankSel2;

/* variable:     MC2M_TERA_BackDoorTest_Buzzer
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_BackDoorTest_Buzzer;

/* variable:     vt3_can_alarm_CAN_156
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 */
extern BOOL FAR vt3_can_alarm_CAN_156;

/* variable:     MC2M_TERA_SWConfig0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWConfig0;

/* variable:     MC2M_TERA_SWConfig1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWConfig1;

/* variable:     MC2M_TERA_SWVersions0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWVersions0;

/* variable:     MC2M_TERA_SWVersions1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWVersions1;

/* variable:     MC2M_TERA_SWVersions2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWVersions2;

/* variable:     MC2M_TERA_AuxPressureLow_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_AuxPressureLow_Stat;

/* variable:     MC2M_TERA_Engine_Brake_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Engine_Brake_Stat;

/* variable:     MC2M_TERA_WaterInFuel_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_WaterInFuel_Stat;

/* variable:     MC2M_TERA_BackDoorTest_Prd
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_BackDoorTest_Prd;

/* variable:     vt3_can_alarm_CAN_157
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 */
extern BOOL FAR vt3_can_alarm_CAN_157;

/* variable:     MC2M_TERA_DIAG_INP45
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP45;

/* variable:     vt3_can_alarm_CAN_162
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 */
extern BOOL FAR vt3_can_alarm_CAN_162;

/* variable:     MC2M_TERA_DIAG_PresLevel_Normalized
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_PresLevel_Normalized;

/* variable:     vt3_can_alarm_CAN_163
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 */
extern BOOL FAR vt3_can_alarm_CAN_163;

/* variable:     MC2M_TERA_DIAG_HTempLevel_Normalized
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_HTempLevel_Normalized;

/* variable:     MC2M_TERA_DIAG_TotalEngineHours
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_DIAG_TotalEngineHours;

/* variable:     MC2M_TERA_DIAG_Stat_4x4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_DIAG_Stat_4x4;

/* variable:     vt3_can_alarm_CAN_164
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 */
extern BOOL FAR vt3_can_alarm_CAN_164;

/* variable:     MC2M_TERA_TCM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_TCM_SuspectParameterNumber;

/* variable:     MC2M_TERA_ECM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_ECM_SuspectParameterNumber;

/* variable:     vt3_can_alarm_CAN_165
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 */
extern BOOL FAR vt3_can_alarm_CAN_165;

/* variable:     MC2M_TERA_EBS_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_EBS_SuspectParameterNumber;

/* variable:     MC2M_TERA_TCM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_TCM_FailureModeIdentifier;

/* variable:     MC2M_TERA_ECM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ECM_FailureModeIdentifier;

/* variable:     MC2M_TERA_EBS_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_EBS_FailureModeIdentifier;

/* variable:     MC2M_TERA_TCM_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_TCM_OccurrenceCount;

/* variable:     vt3_can_alarm_CAN_166
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 */
extern BOOL FAR vt3_can_alarm_CAN_166;

/* variable:     MC2M_TERA_ECM_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ECM_OccurrenceCount;

/* variable:     MC2M_TERA_EBS_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_EBS_OccurrenceCount;

/* variable:     MC2M_TERA_RadiatorTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_RadiatorTemp;

/* variable:     MC2M_TERA_HTempInputFiltered
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_HTempInputFiltered;

/* variable:     vt3_can_alarm_CAN_168
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 */
extern BOOL FAR vt3_can_alarm_CAN_168;

/* variable:     MC2M_TERA_TripCounter
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_TripCounter;

/* variable:     MC2M_TERA_TotalOdometer
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_TotalOdometer;

/* variable:     vt3_can_alarm_CAN_169
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 */
extern BOOL FAR vt3_can_alarm_CAN_169;

/* variable:     MC2M_TERA_DIAG_TotalEngineHours_Old
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_DIAG_TotalEngineHours_Old;

/* variable:     MC2M_TERA_DIAG_EngineCoolantLevel
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_DIAG_EngineCoolantLevel;

/* variable:     MC2M_TERA_DIAG_VvrPump
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_VvrPump;

/* variable:     MC2M_TERA_DIAG_VVRPumpTrigger
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_DIAG_VVRPumpTrigger;

/* variable:     MC2M_TERA_DIAG_CACTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_CACTemp;

/* variable:     MC2M_TERA_DIAG_RadiatorTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_RadiatorTemp;

/* variable:     vt3_can_alarm_CAN_181
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_181
 */
extern BOOL FAR vt3_can_alarm_CAN_181;

/* variable:     MUX_KL15_Ignition
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_KL15_Ignition;

/* variable:     vt3_can_alarm_CAN_187
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_MODE/CAN_Open/CAN_187
 */
extern BOOL FAR vt3_can_alarm_CAN_187;

/* variable:     IOMODE_DIGIN29
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_15  
 */
extern BOOL FAR IOMODE_DIGIN29;

/* variable:     vt3_can_alarm_CAN_186
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_MODE_2/CAN_Open/CAN_186
 */
extern BOOL FAR vt3_can_alarm_CAN_186;

/* variable:     IOMODE_2_DIGIN00_Winch_RC_Up
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_6 - Vinç Kontrol Switch (MOM)-Uzaktan Kmnda UP
 */
extern BOOL FAR IOMODE_2_DIGIN00_Winch_RC_Up;

/* variable:     IOMODE_2_DIGIN29
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_15 -
 */
extern BOOL FAR IOMODE_2_DIGIN29;

/* variable:     vt3_can_alarm_CAN_Light_4E
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 */
extern BOOL FAR vt3_can_alarm_CAN_Light_4E;

/* variable:     OMNIA_LEFT_Light_P1_Park
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_LEFT_Light_P1_Park;

/* variable:     vt3_can_alarm_CAN_Wiper_4F
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 */
extern BOOL FAR vt3_can_alarm_CAN_Wiper_4F;

/* variable:     OMNIA_RIGHT_WiperLOW
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_RIGHT_WiperLOW;

/* variable:     vt3_can_alarm_CAN_18D
 * definition:   /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 */
extern BOOL FAR vt3_can_alarm_CAN_18D;

/* variable:     AMUCBO_AngleX
 * definition:   /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR AMUCBO_AngleX;

/* variable:     vt3_can_alarm_CAN_792
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_792
 */
extern BOOL FAR vt3_can_alarm_CAN_792;

/* variable:     NMSGUI_MC2M_hydraulic_tank_pressure
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR NMSGUI_MC2M_hydraulic_tank_pressure;

/* variable:     NMSGUI_MC2M_hydraulic_tank_temp
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR NMSGUI_MC2M_hydraulic_tank_temp;

/* variable:     vt3_can_alarm_CAN_793
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_793
 */
extern BOOL FAR vt3_can_alarm_CAN_793;

/* variable:     NMSGUI_MC2M_hydraulic_tank_pressure_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_hydraulic_tank_pressure_touch;

/* variable:     NMSGUI_MC2M_hydraulic_tank_temp_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_hydraulic_tank_temp_touch;

/* variable:     Icon_Status_L04
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR Icon_Status_L04;

/* variable:     Icon_Status_L11
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Park Lamps
 */
extern SINT FAR Icon_Status_L11;

/* variable:     Icon_Status_L12
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Kısalar
 */
extern SINT FAR Icon_Status_L12;

/* variable:     DateTimeNow
 * definition:   /project/GIGA/global_data
 * type:         DATE_AND_TIME
 * address:      not specified
 * constant:     False
 * comment:      Current Date and Time
 */
extern DATE_AND_TIME FAR DateTimeNow;

/* variable:     DateTimeUpdate
 * definition:   /project/GIGA/global_data
 * type:         DATE_AND_TIME
 * address:      not specified
 * constant:     False
 * comment:      Requested Date and Time
 */
extern DATE_AND_TIME FAR DateTimeUpdate;

/* variable:     SetDateTime
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Update Date and Time
 */
extern BOOL FAR SetDateTime;

/* variable:     DateNow
 * definition:   /project/GIGA/global_data
 * type:         DATE
 * address:      not specified
 * constant:     False
 * comment:      Tarih - GUNCEL
 */
extern DATE FAR DateNow;

/* variable:     DateOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(10)
 * address:      not specified
 * constant:     False
 * comment:      Ekranda Tarih
 */
extern STRING10 FAR DateOnScreen;

/* variable:     TimeNow
 * definition:   /project/GIGA/global_data
 * type:         TIME_OF_DAY
 * address:      not specified
 * constant:     False
 * comment:      Zaman - GUNCEL
 */
extern TIME_OF_DAY FAR TimeNow;

/* variable:     TimeOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      not specified
 * constant:     False
 * comment:      Ekranda Zaman
 */
extern STRING5 FAR TimeOnScreen;

/* variable:     ZeroPrefixMinute
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      Önüne sıfır
 */
extern STRING256 FAR ZeroPrefixMinute;

/* variable:     ZeroPrefixDay
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      Önune sıfır
 */
extern STRING256 FAR ZeroPrefixDay;

/* variable:     ScreenLight
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Parlaklığı
 */
extern USINT FAR ScreenLight;

/* variable:     ScreenLight_BO
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Blackout durumunda Ekran Parlaklığı
 */
extern USINT FAR ScreenLight_BO;

/* variable:     ShowBrightnessBar
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Ekran Parlaklığı Çubuğunu Göster
 */
extern BOOL FAR ShowBrightnessBar;

/* variable:     BrightnessBarTOF
 * definition:   /project/GIGA/global_data
 * type:         TOF
 * address:      not specified
 * constant:     False
 * comment:      Ekran Parlaklığı Çubuğunu Göster TOF
 */
extern TOF FAR BrightnessBarTOF;

/* variable:     DayUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Gün
 */
extern INT FAR DayUpdate;

/* variable:     MonthUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Ay
 */
extern INT FAR MonthUpdate;

/* variable:     YearUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Yıl
 */
extern INT FAR YearUpdate;

/* variable:     HourUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Saat
 */
extern INT FAR HourUpdate;

/* variable:     MinuteUpdate
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Dakika
 */
extern INT FAR MinuteUpdate;

/* variable:     DateStringUpdate
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Tarih
 */
extern STRING256 FAR DateStringUpdate;

/* variable:     TimeStringUpdate
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      Ekrandan Güncelleme - Zaman
 */
extern STRING256 FAR TimeStringUpdate;

/* variable:     DateTimeUpdating
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Saat Tarih Güncelleniyor
 */
extern BOOL FAR DateTimeUpdating;

/* variable:     BrightnessUpdating
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Saat Tarih Güncelleniyor
 */
extern BOOL FAR BrightnessUpdating;

/* variable:     InfoNo
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
extern SINT FAR InfoNo;

/* variable:     InfoNo2
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
extern SINT FAR InfoNo2;

/* variable:     InfoNo3
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
extern SINT FAR InfoNo3;

/* variable:     InfoNo4
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
extern SINT FAR InfoNo4;

/* variable:     InfoNo5
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
extern SINT FAR InfoNo5;

/* variable:     InfoNo6
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Info Açıklama No
 */
extern SINT FAR InfoNo6;

/* variable:     TotalAlarm
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Toplam Gönderilen Alarm Sayısı
 */
extern SINT FAR TotalAlarm;

/* variable:     TotalAlarm2
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Toplam Gönderilen Alarm Sayısı
 */
extern SINT FAR TotalAlarm2;

/* variable:     indexAlarm
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Alarm indisi
 */
extern SINT FAR indexAlarm;

/* variable:     indexAlarm2
 * definition:   /project/GIGA/global_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Alarm indisi
 */
extern SINT FAR indexAlarm2;

/* variable:     Stat_MirrorCamera
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Yan ayna kamera ekran durumu
 */
extern BOOL FAR Stat_MirrorCamera;

/* variable:     RTRIG_Cam
 * definition:   /project/GIGA/global_data
 * type:         R_TRIG
 * address:      not specified
 * constant:     False
 * comment:      Kamera Trigger
 */
extern R_TRIG FAR RTRIG_Cam;

/* variable:     inSideTemperature
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      iç ortam sıcaklığı
 */
extern STRING256 FAR inSideTemperature;

/* variable:     outSideTemperature
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      dış ortam sıcaklığı
 */
extern STRING256 FAR outSideTemperature;

/* variable:     vehicleAngleX
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Araç x ekseni derece
 */
extern INT FAR vehicleAngleX;

/* variable:     vehicleAngleY
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Araç y ekseni derece
 */
extern INT FAR vehicleAngleY;

/* variable:     SWVersionOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern STRING256 FAR SWVersionOnScreen;

/* variable:     SWVersion
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR SWVersion;

/* variable:     SWVersion_Stat
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      yazı görünme durumu
 */
extern BOOL FAR SWVersion_Stat;

/* variable:     SWVersion_TRIG
 * definition:   /project/GIGA/global_data
 * type:         R_TRIG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern R_TRIG FAR SWVersion_TRIG;

/* variable:     nullString
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern STRING256 FAR nullString;

/* variable:     AuxPressureLowOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern STRING256 FAR AuxPressureLowOnScreen;

/* variable:     AuxPressureLow_Stat
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR AuxPressureLow_Stat;

/* variable:     ScreenTripMeter
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UDINT FAR ScreenTripMeter;

/* variable:     led_tmp
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR led_tmp;

/* variable:     Backlight
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UINT FAR Backlight;

/* variable:     BacklightScreen
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      750
 */
extern UINT FAR BacklightScreen;

/* variable:     GIGASpeed
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UINT FAR GIGASpeed;

/* variable:     GIGAEngineSpeed
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UINT FAR GIGAEngineSpeed;

/* variable:     GIGAFuelLevel
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UINT FAR GIGAFuelLevel;

/* variable:     GIGAEngineTempValue
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UINT FAR GIGAEngineTempValue;

/* variable:     GIGAEngineOilPressure
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UINT FAR GIGAEngineOilPressure;

/* variable:     GIGATransOilTemperature
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UINT FAR GIGATransOilTemperature;

/* variable:     led_tmp_prev
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR led_tmp_prev;

/* variable:     Backlight_prev
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UINT FAR Backlight_prev;

/* variable:     SaveParameter
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR SaveParameter;

/* variable:     EngineProtectionERROnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern STRING256 FAR EngineProtectionERROnScreen;

/* variable:     ActiveAlarm
 * definition:   /project/GIGA/global_data
 * type:         ARR_100_SINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
extern ARR_100_SINT FAR ActiveAlarm;

/* variable:     ActiveAlarm2
 * definition:   /project/GIGA/global_data
 * type:         ARR_100_SINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
extern ARR_100_SINT FAR ActiveAlarm2;

/* variable:     Buzzer_Frequency
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
extern UINT FAR Buzzer_Frequency;

/* variable:     Buzzer_Level
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
extern USINT FAR Buzzer_Level;

/* variable:     Buzzer_Loop
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Aktif Alarmlar
 */
extern UDINT FAR Buzzer_Loop;

/* variable:     Cmd_Buzzer_Ctr
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UDINT FAR Cmd_Buzzer_Ctr;

/* variable:     Cmd_Buzzer_Ctr2
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UDINT FAR Cmd_Buzzer_Ctr2;

/* variable:     BIT_Test_Init
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR BIT_Test_Init;

/* variable:     Stat_Buzzer
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Stat_Buzzer;

/* variable:     Cmd_Buzzer
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern USINT FAR Cmd_Buzzer;

/* variable:     InputFiltered_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern UINT FAR InputFiltered_BatteryLevel;

/* variable:     TotalInput_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalInput_BatteryLevel;

/* variable:     InputArray_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         ARRAY30UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY30UINT FAR InputArray_BatteryLevel;

/* variable:     AlarmState_BatteryLevel
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR AlarmState_BatteryLevel;

/* variable:     GIGALedOverride
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GIGALedOverride;

/* variable:     GIGAGaugeOverride0
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1020
 */
extern INT FAR GIGAGaugeOverride0;

/* variable:     GIGAGaugeOverride1
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1235 2500
 */
extern INT FAR GIGAGaugeOverride1;

/* variable:     GIGAGaugeOverride2
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1020
 */
extern INT FAR GIGAGaugeOverride2;

/* variable:     GIGAGaugeOverride3
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1810
 */
extern INT FAR GIGAGaugeOverride3;

/* variable:     GIGAGaugeOverride4
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1810
 */
extern INT FAR GIGAGaugeOverride4;

/* variable:     GIGAGaugeOverride5
 * definition:   /project/GIGA/global_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      1810
 */
extern INT FAR GIGAGaugeOverride5;

/* variable:     GIGABarGaugeOverride
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR GIGABarGaugeOverride;

/* variable:     Light_An_Inp
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR Light_An_Inp;

/* variable:     toggle_500ms
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR toggle_500ms;

/* variable:     toggle_200ms
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR toggle_200ms;

/* variable:     cycle
 * definition:   /project/GIGA/cycle
 * type:         cycle
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern cycle_t FAR cycle;

/* variable:     mainEngineTempGauge
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/mainEngineTempGauge
 * type:         mainEngineTempGauge
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainEngineTempGauge_t FAR mainEngineTempGauge;

/* variable:     mainSpeedometer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/mainSpeedometer
 * type:         mainSpeedometer
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainSpeedometer_t FAR mainSpeedometer;

/* variable:     GIGAEngineSpeedGaugeValue_Min
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR GIGAEngineSpeedGaugeValue_Min;

/* variable:     mainEngineSpeed
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/mainEngineSpeed
 * type:         mainEngineSpeed
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainEngineSpeed_t FAR mainEngineSpeed;

/* variable:     mainFuelLevel
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/mainFuelLevel
 * type:         mainFuelLevel
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainFuelLevel_t FAR mainFuelLevel;

/* variable:     mainEngineOilPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/mainEngineOilPressure
 * type:         mainEngineOilPressure
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainEngineOilPressure_t FAR mainEngineOilPressure;

/* variable:     mainTransOilTemperature
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/mainTransOilTemperature
 * type:         mainTransOilTemperature
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainTransOilTemperature_t FAR mainTransOilTemperature;

/* variable:     mainAnalogGauges
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/mainAnalogGauges
 * type:         mainAnalogGauges
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainAnalogGauges_t FAR mainAnalogGauges;

/* variable:     ServiceBrake1InputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern USINT FAR ServiceBrake1InputFiltered;

/* variable:     TotalGIGA_ServiceBrake1Input
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalGIGA_ServiceBrake1Input;

/* variable:     GIGA_ServiceBrake1InputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY100UINT FAR GIGA_ServiceBrake1InputArray;

/* variable:     GIGA_ServiceBrake1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern USINT FAR GIGA_ServiceBrake1;

/* variable:     ServiceBrake2InputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern USINT FAR ServiceBrake2InputFiltered;

/* variable:     TotalGIGA_ServiceBrake2Input
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalGIGA_ServiceBrake2Input;

/* variable:     GIGA_ServiceBrake2InputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY100UINT FAR GIGA_ServiceBrake2InputArray;

/* variable:     GIGA_ServiceBrake2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern USINT FAR GIGA_ServiceBrake2;

/* variable:     ParkingBrakePressureInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern USINT FAR ParkingBrakePressureInputFiltered;

/* variable:     TotalGIGA_ParkingBrakePressureInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalGIGA_ParkingBrakePressureInput;

/* variable:     GIGA_ParkingBrakePressureInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY100UINT FAR GIGA_ParkingBrakePressureInputArray;

/* variable:     GIGA_ParkingBrakePressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern USINT FAR GIGA_ParkingBrakePressure;

/* variable:     AccessoryPressureInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern USINT FAR AccessoryPressureInputFiltered;

/* variable:     TotalGIGA_AccessoryPressureInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalGIGA_AccessoryPressureInput;

/* variable:     GIGA_AccessoryPressureInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY100UINT FAR GIGA_AccessoryPressureInputArray;

/* variable:     GIGA_AccessoryPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern USINT FAR GIGA_AccessoryPressure;

/* variable:     GIGA_HyraulicLevel
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern USINT FAR GIGA_HyraulicLevel;

/* variable:     GIGA_HyraulicTemp
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR GIGA_HyraulicTemp;

/* variable:     GIGA_VVRPump
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR GIGA_VVRPump;

/* variable:     GIGA_VVRPumpTrigger
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR GIGA_VVRPumpTrigger;

/* variable:     GIGA_CACTemp
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR GIGA_CACTemp;

/* variable:     GIGA_RadiatorTemp
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges_data
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR GIGA_RadiatorTemp;

/* variable:     test
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR test;

/* variable:     hydraulicPressureTimer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR hydraulicPressureTimer;

/* variable:     buzzertimer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR buzzertimer;

/* variable:     mainDigitalGauges
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/mainDigitalGauges
 * type:         mainDigitalGauges
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainDigitalGauges_t FAR mainDigitalGauges;

/* variable:     L10_Difflock_Dropbox
 * definition:   /project/GIGA/Subroutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR L10_Difflock_Dropbox;

/* variable:     L11_Difflock_Front
 * definition:   /project/GIGA/Subroutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR L11_Difflock_Front;

/* variable:     L12_Difflock_Rear
 * definition:   /project/GIGA/Subroutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR L12_Difflock_Rear;

/* variable:     mainDiffLock
 * definition:   /project/GIGA/Subroutines/DiffLock/mainDiffLock
 * type:         mainDiffLock
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainDiffLock_t FAR mainDiffLock;

/* variable:     mainIgnitionOff
 * definition:   /project/GIGA/Subroutines/OtherFunctions/mainIgnitionOff
 * type:         mainIgnitionOff
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainIgnitionOff_t FAR mainIgnitionOff;

/* variable:     mainFunctions
 * definition:   /project/GIGA/Subroutines/OtherFunctions/mainFunctions
 * type:         mainFunctions
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainFunctions_t FAR mainFunctions;

/* variable:     SetDateTime1
 * definition:   /project/GIGA/Subroutines/OtherFunctions/SetDateTime1
 * type:         SetDateTime1
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SetDateTime1_t FAR SetDateTime1;

/* variable:     GIGAMenu1
 * definition:   /project/GIGA/Subroutines/OtherFunctions/GIGAMenu1
 * type:         GIGAMenu1
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern GIGAMenu1_t FAR GIGAMenu1;

/* variable:     LampAlarm
 * definition:   /project/GIGA/LampAlarm
 * type:         LampAlarm
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern LampAlarm_t FAR LampAlarm;

/* variable:     MessageReceiver
 * definition:   /project/GIGA/MessageReceiver
 * type:         MessageReceiver
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern MessageReceiver_t FAR MessageReceiver;

/* variable:     vt3_screen
 * definition:   /project/GIGA
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current screen
 */
extern UINT FAR vt3_screen;

/* variable:     vt3_language
 * definition:   /project/GIGA
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      index of current language
 */
extern UINT FAR vt3_language;

/* variable:     vt3_alarm_disconnected_TERA12
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_TERA12;

/* variable:     vt3_alarm_disconnected_MC2M_CPU0
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_MC2M_CPU0;

/* variable:     vt3_alarm_disconnected_MC2M_CPU1
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_MC2M_CPU1;

/* variable:     vt3_alarm_disconnected_Debug_GUI
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_Debug_GUI;

/* variable:     vt3_alarm_disconnected_NMS_GUI
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_NMS_GUI;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_bytearray_R_warning
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %R
 */
extern BOOL FAR vt3_bytearray_R_warning;

/* variable:     vt3_bytearray_R_error
 * definition:   /project/GIGA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %R
 */
extern BOOL FAR vt3_bytearray_R_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/GIGA
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
extern WORD FAR vt3_alarm_inhibition_bitmask;

/**************************************************************************/

/* declaration of variables with address in %M */

/* variable:     MainLoop
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      %MD0
 * constant:     False
 * comment:      
 */
#define MainLoop (*(UDINT FARPTR)(&BYTEM[0]))

/* variable:     colord
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB4
 * constant:     False
 * comment:      Ekranda Tarih
 */
#define colord (*(USINT FARPTR)(&BYTEM[4]))

/* variable:     SubMenuVar
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB5
 * constant:     False
 * comment:      boş string
 */
#define SubMenuVar (*(USINT FARPTR)(&BYTEM[5]))

/* variable:     IgnitionOn
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      %MX6
 * constant:     False
 * comment:      boş string
 */
#define IgnitionOn (*(BOOL FARPTR)(&BYTEM[6]))

/* variable:     MenuVar
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB7
 * constant:     False
 * comment:      boş string
 */
#define MenuVar (*(USINT FARPTR)(&BYTEM[7]))

/* variable:     Testvar
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB8
 * constant:     False
 * comment:      boş string
 */
#define Testvar (*(USINT FARPTR)(&BYTEM[8]))

/* variable:     Testvar2
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB9
 * constant:     False
 * comment:      boş string
 */
#define Testvar2 (*(USINT FARPTR)(&BYTEM[9]))

/* variable:     GIGAFuelAlarm
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      %MX10
 * constant:     False
 * comment:      boş string
 */
#define GIGAFuelAlarm (*(BOOL FARPTR)(&BYTEM[10]))

/* variable:     ActiveScreen
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB11
 * constant:     False
 * comment:      boş string
 */
#define ActiveScreen (*(USINT FARPTR)(&BYTEM[11]))

/* variable:     GIGAMenuVar05
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB12
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuVar05 (*(USINT FARPTR)(&BYTEM[12]))

/* variable:     Cmd_GIGAMenu_Active
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      %MX13
 * constant:     False
 * comment:      boş string
 */
#define Cmd_GIGAMenu_Active (*(BOOL FARPTR)(&BYTEM[13]))

/* variable:     Secret_Menu01
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB14
 * constant:     False
 * comment:      boş string
 */
#define Secret_Menu01 (*(USINT FARPTR)(&BYTEM[14]))

/* variable:     GIGAMenuNo
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB15
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuNo (*(USINT FARPTR)(&BYTEM[15]))

/* variable:     ScreenOdometer
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      %MD16
 * constant:     False
 * comment:      boş string
 */
#define ScreenOdometer (*(UDINT FARPTR)(&BYTEM[16]))

/* variable:     GIGAMenuVar01
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB20
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuVar01 (*(USINT FARPTR)(&BYTEM[20]))

/* variable:     GIGAMenuVar02
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB21
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuVar02 (*(USINT FARPTR)(&BYTEM[21]))

/* variable:     GIGAMenuVar03
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB22
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuVar03 (*(USINT FARPTR)(&BYTEM[22]))

/* variable:     GIGAMenuVar04
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB23
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuVar04 (*(USINT FARPTR)(&BYTEM[23]))

/* variable:     Stat_GIGAMenu_Ctr1
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      %MD24
 * constant:     False
 * comment:      boş string
 */
#define Stat_GIGAMenu_Ctr1 (*(UDINT FARPTR)(&BYTEM[24]))

/* variable:     MinuteUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M28
 * constant:     False
 * comment:      boş string
 */
#define MinuteUptOnScreen (*(STRING5 FARPTR)(&BYTEM[28]))

/* variable:     EngineOilPressureInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/EngineOilPressureFilter_data
 * type:         UINT
 * address:      %MW38
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define EngineOilPressureInputFiltered (*(UINT FARPTR)(&BYTEM[38]))

/* variable:     DateOnScreen2
 * definition:   /project/GIGA/global_data
 * type:         STRING(10)
 * address:      %M40
 * constant:     False
 * comment:      Ekranda Tarih
 */
#define DateOnScreen2 (*(STRING10 FARPTR)(&BYTEM[40]))

/* variable:     SubMenuVar2
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB55
 * constant:     False
 * comment:      boş string
 */
#define SubMenuVar2 (*(USINT FARPTR)(&BYTEM[55]))

/* variable:     DayUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M56
 * constant:     False
 * comment:      boş string
 */
#define DayUptOnScreen (*(STRING5 FARPTR)(&BYTEM[56]))

/* variable:     EngineOilPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/EngineOilPressureFilter_data
 * type:         UINT
 * address:      %MW66
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define EngineOilPressure (*(UINT FARPTR)(&BYTEM[66]))

/* variable:     MonthUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M68
 * constant:     False
 * comment:      boş string
 */
#define MonthUptOnScreen (*(STRING5 FARPTR)(&BYTEM[68]))

/* variable:     EngineSpeedInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/EngineSpeedFilter_data
 * type:         UINT
 * address:      %MW78
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define EngineSpeedInputFiltered (*(UINT FARPTR)(&BYTEM[78]))

/* variable:     YearUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M80
 * constant:     False
 * comment:      boş string
 */
#define YearUptOnScreen (*(STRING5 FARPTR)(&BYTEM[80]))

/* variable:     FuelLevelInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/FuelLevelFilter_data
 * type:         UINT
 * address:      %MW90
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define FuelLevelInputFiltered (*(UINT FARPTR)(&BYTEM[90]))

/* variable:     TotalEngineOilPressureInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/EngineOilPressureFilter_data
 * type:         UDINT
 * address:      %MD92
 * constant:     False
 * comment:      Total Value
 */
#define TotalEngineOilPressureInput (*(UDINT FARPTR)(&BYTEM[92]))

/* variable:     EngineOilPressureInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineOilPressure/EngineOilPressureFilter_data
 * type:         ARRAY100UINT
 * address:      %M96
 * constant:     False
 * comment:      Array of Signal
 */
#define EngineOilPressureInputArray (*(ARRAY100UINT FARPTR)(&BYTEM[96]))

/* variable:     TotalEngineSpeedInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/EngineSpeedFilter_data
 * type:         UDINT
 * address:      %MD296
 * constant:     False
 * comment:      Total Value
 */
#define TotalEngineSpeedInput (*(UDINT FARPTR)(&BYTEM[296]))

/* variable:     EngineSpeed
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/EngineSpeedFilter_data
 * type:         UINT
 * address:      %MW300
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define EngineSpeed (*(UINT FARPTR)(&BYTEM[300]))

/* variable:     FuelLevel
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/FuelLevelFilter_data
 * type:         UINT
 * address:      %MW302
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define FuelLevel (*(UINT FARPTR)(&BYTEM[302]))

/* variable:     TotalFuelLevelInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/FuelLevelFilter_data
 * type:         UDINT
 * address:      %MD304
 * constant:     False
 * comment:      Total Value
 */
#define TotalFuelLevelInput (*(UDINT FARPTR)(&BYTEM[304]))

/* variable:     SpeedometerInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/SpeedometerFilter_data
 * type:         UINT
 * address:      %MW308
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define SpeedometerInputFiltered (*(UINT FARPTR)(&BYTEM[308]))

/* variable:     Speedometer
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/SpeedometerFilter_data
 * type:         UINT
 * address:      %MW310
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define Speedometer (*(UINT FARPTR)(&BYTEM[310]))

/* variable:     TotalSpeedometerInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/SpeedometerFilter_data
 * type:         UDINT
 * address:      %MD312
 * constant:     False
 * comment:      Total Value
 */
#define TotalSpeedometerInput (*(UDINT FARPTR)(&BYTEM[312]))

/* variable:     EngineTempGaugeInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/EngineTempGaugeFilter_data
 * type:         UINT
 * address:      %MW316
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define EngineTempGaugeInputFiltered (*(UINT FARPTR)(&BYTEM[316]))

/* variable:     EngineTempGauge
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/EngineTempGaugeFilter_data
 * type:         UINT
 * address:      %MW318
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define EngineTempGauge (*(UINT FARPTR)(&BYTEM[318]))

/* variable:     HourUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M320
 * constant:     False
 * comment:      boş string
 */
#define HourUptOnScreen (*(STRING5 FARPTR)(&BYTEM[320]))

/* variable:     TransOilTemperatureInputFiltered
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/TransOilTemperatureFilter_data
 * type:         UINT
 * address:      %MW330
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define TransOilTemperatureInputFiltered (*(UINT FARPTR)(&BYTEM[330]))

/* variable:     DiagMessage01
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M332
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage01 (*(STRING256 FARPTR)(&BYTEM[332]))

/* variable:     GIGAMenuVar06
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB593
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuVar06 (*(USINT FARPTR)(&BYTEM[593]))

/* variable:     GIGAMenuVar07
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB594
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuVar07 (*(USINT FARPTR)(&BYTEM[594]))

/* variable:     GIGAMenuVar08
 * definition:   /project/GIGA/global_data
 * type:         USINT
 * address:      %MB595
 * constant:     False
 * comment:      boş string
 */
#define GIGAMenuVar08 (*(USINT FARPTR)(&BYTEM[595]))

/* variable:     DiagMessage02
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M596
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage02 (*(STRING256 FARPTR)(&BYTEM[596]))

/* variable:     DiagMessage03
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M860
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage03 (*(STRING256 FARPTR)(&BYTEM[860]))

/* variable:     DiagMessage04
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M1124
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage04 (*(STRING256 FARPTR)(&BYTEM[1124]))

/* variable:     DiagMessage05
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M1388
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage05 (*(STRING256 FARPTR)(&BYTEM[1388]))

/* variable:     DiagMessage06
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M1652
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage06 (*(STRING256 FARPTR)(&BYTEM[1652]))

/* variable:     EngineSpeedInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/EngineSpeedFilter_data
 * type:         ARRAY100UINT
 * address:      %M1916
 * constant:     False
 * comment:      Array of Signal
 */
#define EngineSpeedInputArray (*(ARRAY100UINT FARPTR)(&BYTEM[1916]))

/* variable:     FuelLevelInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/FuelLevel/FuelLevelFilter_data
 * type:         ARRAY100UINT
 * address:      %M2116
 * constant:     False
 * comment:      Array of Signal
 */
#define FuelLevelInputArray (*(ARRAY100UINT FARPTR)(&BYTEM[2116]))

/* variable:     SpeedometerInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/Speedometer/SpeedometerFilter_data
 * type:         ARRAY100UINT
 * address:      %M2316
 * constant:     False
 * comment:      Array of Signal
 */
#define SpeedometerInputArray (*(ARRAY100UINT FARPTR)(&BYTEM[2316]))

/* variable:     TotalEngineTempGaugeInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/EngineTempGaugeFilter_data
 * type:         UDINT
 * address:      %MD2516
 * constant:     False
 * comment:      Total Value
 */
#define TotalEngineTempGaugeInput (*(UDINT FARPTR)(&BYTEM[2516]))

/* variable:     EngineTempGaugeInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineTempGauge/EngineTempGaugeFilter_data
 * type:         ARRAY100UINT
 * address:      %M2520
 * constant:     False
 * comment:      Array of Signal
 */
#define EngineTempGaugeInputArray (*(ARRAY100UINT FARPTR)(&BYTEM[2520]))

/* variable:     TotalTransOilTemperatureInput
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/TransOilTemperatureFilter_data
 * type:         UDINT
 * address:      %MD2720
 * constant:     False
 * comment:      Total Value
 */
#define TotalTransOilTemperatureInput (*(UDINT FARPTR)(&BYTEM[2720]))

/* variable:     TransOilTemperatureInputArray
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/TransOilTemperatureFilter_data
 * type:         ARRAY100UINT
 * address:      %M2724
 * constant:     False
 * comment:      Array of Signal
 */
#define TransOilTemperatureInputArray (*(ARRAY100UINT FARPTR)(&BYTEM[2724]))

/* variable:     TransOilTemperature
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/TransOilTemperature/TransOilTemperatureFilter_data
 * type:         UINT
 * address:      %MW2924
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define TransOilTemperature (*(UINT FARPTR)(&BYTEM[2924]))

/* variable:     DiagMessage07
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M2928
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage07 (*(STRING256 FARPTR)(&BYTEM[2928]))

/* variable:     DiagMessage08
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M3192
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage08 (*(STRING256 FARPTR)(&BYTEM[3192]))

/* variable:     DiagMessage09
 * definition:   /project/GIGA/global_data
 * type:         STRING
 * address:      %M3456
 * constant:     False
 * comment:      boş string
 */
#define DiagMessage09 (*(STRING256 FARPTR)(&BYTEM[3456]))

/* variable:     ScreenBrightHUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M3720
 * constant:     False
 * comment:      boş string
 */
#define ScreenBrightHUptOnScreen (*(STRING5 FARPTR)(&BYTEM[3720]))

/* variable:     ScreenBrightLUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M3732
 * constant:     False
 * comment:      boş string
 */
#define ScreenBrightLUptOnScreen (*(STRING5 FARPTR)(&BYTEM[3732]))

/* variable:     PanelBrightHUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M3744
 * constant:     False
 * comment:      boş string
 */
#define PanelBrightHUptOnScreen (*(STRING5 FARPTR)(&BYTEM[3744]))

/* variable:     PanelBrightLUptOnScreen
 * definition:   /project/GIGA/global_data
 * type:         STRING(5)
 * address:      %M3756
 * constant:     False
 * comment:      boş string
 */
#define PanelBrightLUptOnScreen (*(STRING5 FARPTR)(&BYTEM[3756]))

/* size of array BYTEM */
#define BYTEM_SIZE (3766)

/**************************************************************************/

/* declaration of variables with address in %P */

/* variable:     tmp_DIGIN_KEY_K15
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      %PX0
 * constant:     False
 * comment:      
 */
#define tmp_DIGIN_KEY_K15 (*(BOOL FARPTR)(&BYTEP[0]))

/* variable:     MC2M_GIGA_ServiceBrake1
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         USINT
 * address:      %PB1
 * constant:     False
 * comment:      
 */
#define MC2M_GIGA_ServiceBrake1 (*(USINT FARPTR)(&BYTEP[1]))

/* variable:     MC2M_GIGA_ServiceBrake2
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         USINT
 * address:      %PB2
 * constant:     False
 * comment:      
 */
#define MC2M_GIGA_ServiceBrake2 (*(USINT FARPTR)(&BYTEP[2]))

/* variable:     MC2M_GIGA_ParkingBrakePressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         USINT
 * address:      %PB3
 * constant:     False
 * comment:      
 */
#define MC2M_GIGA_ParkingBrakePressure (*(USINT FARPTR)(&BYTEP[3]))

/* variable:     BacklightSetVarH
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW4
 * constant:     False
 * comment:      
 */
#define BacklightSetVarH (*(UINT FARPTR)(&BYTEP[4]))

/* variable:     BacklightSetVarL
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW6
 * constant:     False
 * comment:      
 */
#define BacklightSetVarL (*(UINT FARPTR)(&BYTEP[6]))

/* variable:     BacklightScreenSetVarH
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW8
 * constant:     False
 * comment:      
 */
#define BacklightScreenSetVarH (*(UINT FARPTR)(&BYTEP[8]))

/* variable:     BacklightScreenSetVarL
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW10
 * constant:     False
 * comment:      
 */
#define BacklightScreenSetVarL (*(UINT FARPTR)(&BYTEP[10]))

/* variable:     ScreenBrightH
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW12
 * constant:     False
 * comment:      boş string
 */
#define ScreenBrightH (*(UINT FARPTR)(&BYTEP[12]))

/* variable:     ScreenBrightL
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW14
 * constant:     False
 * comment:      boş string
 */
#define ScreenBrightL (*(UINT FARPTR)(&BYTEP[14]))

/* variable:     PanelBrightH
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW16
 * constant:     False
 * comment:      boş string
 */
#define PanelBrightH (*(UINT FARPTR)(&BYTEP[16]))

/* variable:     PanelBrightL
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW18
 * constant:     False
 * comment:      boş string
 */
#define PanelBrightL (*(UINT FARPTR)(&BYTEP[18]))

/* variable:     MC2M_GIGA_AccessoryPressure
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/DigitalGauges/Data_mainDigitalGauges
 * type:         USINT
 * address:      %PB20
 * constant:     False
 * comment:      
 */
#define MC2M_GIGA_AccessoryPressure (*(USINT FARPTR)(&BYTEP[20]))

/* variable:     giga_button_test_var
 * definition:   /project/GIGA/global_data
 * type:         BOOL
 * address:      %PX21
 * constant:     False
 * comment:      
 */
#define giga_button_test_var (*(BOOL FARPTR)(&BYTEP[21]))

/* variable:     Vt3_languageSetVar
 * definition:   /project/GIGA/global_data
 * type:         UINT
 * address:      %PW22
 * constant:     False
 * comment:      
 */
#define Vt3_languageSetVar (*(UINT FARPTR)(&BYTEP[22]))

/* variable:     GIGAEngineSpeedGaugeValue_Mid
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      %PW24
 * constant:     False
 * comment:      
 */
#define GIGAEngineSpeedGaugeValue_Mid (*(INT FARPTR)(&BYTEP[24]))

/* variable:     GIGAEngineSpeedGaugeValue_Max
 * definition:   /project/GIGA/Subroutines/Dashboard_Screen/AnalogueGauges/EngineSpeed/Data_EngineSpeed
 * type:         INT
 * address:      %PW26
 * constant:     False
 * comment:      
 */
#define GIGAEngineSpeedGaugeValue_Max (*(INT FARPTR)(&BYTEP[26]))

/* size of array BYTEP */
#define BYTEP_SIZE (992)

/**************************************************************************/

/* declaration of variables with address in %R */

/* variable:     TotalTripMeter
 * definition:   /project/GIGA/global_data
 * type:         REAL
 * address:      %RD0
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter (*(REAL FARPTR)(&BYTER[0]))

/* variable:     TotalOdometer
 * definition:   /project/GIGA/global_data
 * type:         REAL
 * address:      %RD4
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalOdometer (*(REAL FARPTR)(&BYTER[4]))

/* variable:     TotalTripMeter2
 * definition:   /project/GIGA/global_data
 * type:         REAL
 * address:      %RD8
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter2 (*(REAL FARPTR)(&BYTER[8]))

/* variable:     TotalOdometer2
 * definition:   /project/GIGA/global_data
 * type:         REAL
 * address:      %RD12
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalOdometer2 (*(REAL FARPTR)(&BYTER[12]))

/* variable:     TotalTripMeterX
 * definition:   /project/GIGA/global_data
 * type:         REAL
 * address:      %RD16
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeterX (*(REAL FARPTR)(&BYTER[16]))

/* variable:     GIGAOdometerBackup
 * definition:   /project/GIGA/global_data
 * type:         UDINT
 * address:      %RD20
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define GIGAOdometerBackup (*(UDINT FARPTR)(&BYTER[20]))

/* size of array BYTER */
#define BYTER_SIZE (4000)

/**************************************************************************/

/* declaration of variables with address in %I */

/* variable:     DIGIN_KEY_K15
 * definition:   /project/GIGA/IO_CFG
 * type:         BOOL
 * address:      %IX140
 * constant:     False
 * comment:      INPUTKEY input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_KEY_K15 (*(BOOL FARPTR)(&BYTEI[140]))

/* variable:     AinLightInp
 * definition:   /project/GIGA/IO_CFG
 * type:         UINT
 * address:      %IW156
 * constant:     False
 * comment:      AINPUTLIGHT input, configured as PIN_ADC_ANALOGIN
 */
#define AinLightInp (*(UINT FARPTR)(&BYTEI[156]))


/**************************************************************************/

/* declaration of variables with address in %Q */


/**************************************************************************/

/* declaration of variables with address in %S */


/**************************************************************************/

/* declaration of variables with address in %F */

/* size of array BYTEF */
#define BYTEF_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %E */

/* size of array BYTEE */
#define BYTEE_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %K */

/* size of array BYTEK */
#define BYTEK_SIZE (1)

/**************************************************************************/

/* declaration of memory arrays */

#pragma DATA_SEG DSEG DSEG_M
extern BYTE FAR BYTEM[];
#pragma DATA_SEG DSEG DSEG_P
extern BYTE FAR BYTEP[];
#pragma DATA_SEG DSEG DSEG_R
extern BYTE FAR BYTER[];
#pragma DATA_SEG DSEG DSEG_I
extern BYTE FAR BYTEI[];
#pragma DATA_SEG DSEG DSEG_Q
extern BYTE FAR BYTEQ[];
#pragma DATA_SEG DSEG DSEG_S
extern BYTE FAR BYTES[];
#pragma DATA_SEG DSEG DSEG_F
extern BYTE FAR BYTEF[];
#pragma DATA_SEG DSEG DSEG_E
extern BYTE FAR BYTEE[];
#pragma DATA_SEG DSEG DSEG_K
extern BYTE FAR BYTEK[];

/**************************************************************************/
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_VARS_H */

/* end of file */
