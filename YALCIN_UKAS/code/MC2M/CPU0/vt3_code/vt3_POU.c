/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU_C
#define INCLUDE__VT3_POU_C

#include "vt3_POU__global_data.c"
#include "vt3_POU__cycle.c"
#include "vt3_POU__Data_WarningLights.c"
#include "vt3_POU__mainWarningLights.c"
#include "vt3_POU__Data_EngineTempGauge.c"
#include "vt3_POU__mainEngineTempGauge.c"
#include "vt3_POU__Data_Speed.c"
#include "vt3_POU__Data_SpeedometerGauge.c"
#include "vt3_POU__mainSpeedometer.c"
#include "vt3_POU__mainAnalogGauges.c"
#include "vt3_POU__mainTeraScreen.c"
#include "vt3_POU__main_Lxicon.c"
#include "vt3_POU__ECM_DM_data.c"
#include "vt3_POU__ECM_global_data_program.c"
#include "vt3_POU__can_callback_DM01_ECM.c"
#include "vt3_POU__DM01_ECM_decode.c"
#include "vt3_POU__Data_ECM.c"
#include "vt3_POU__mainECM_Management.c"
#include "vt3_POU__TCM_DM_data.c"
#include "vt3_POU__TCM_global_data_program.c"
#include "vt3_POU__can_callback_DM01_TCM.c"
#include "vt3_POU__DM01_TCM_decode.c"
#include "vt3_POU__Data_TCM.c"
#include "vt3_POU__mainTCM_Management.c"
#include "vt3_POU__EBS_DM_data.c"
#include "vt3_POU__EBS_global_data_program.c"
#include "vt3_POU__can_callback_DM01_EBS.c"
#include "vt3_POU__DM01_EBS_decode.c"
#include "vt3_POU__Data_EBS.c"
#include "vt3_POU__mainEBS_Management.c"
#include "vt3_POU__Alarm_data.c"
#include "vt3_POU__Data_Limit.c"
#include "vt3_POU__mainDiagnostics.c"
#include "vt3_POU__mainMC2MDiagnostics.c"
#include "vt3_POU__EL_format_local2.c"
#include "vt3_POU__Data_Lamps_In.c"
#include "vt3_POU__Data_Lamps_Out.c"
#include "vt3_POU__mainLamps.c"
#include "vt3_POU__Data_Wipers.c"
#include "vt3_POU__mainWipers.c"
#include "vt3_POU__Data_Dropbox.c"
#include "vt3_POU__mainDropbox.c"
#include "vt3_POU__Data_Resistances.c"
#include "vt3_POU__mainResistances.c"
#include "vt3_POU__Data_EngineProtection.c"
#include "vt3_POU__mainEngineProtection.c"
#include "vt3_POU__Data_ABS4WD.c"
#include "vt3_POU__mainABS4WD.c"
#include "vt3_POU__Data_DiffLock.c"
#include "vt3_POU__mainDiffLock.c"
#include "vt3_POU__Data_J1939_CANOpen.c"
#include "vt3_POU__mainJ1939toCANOpen.c"
#include "vt3_POU__mainECM_TCM_ABS_DIAG.c"
#include "vt3_POU__WinchControl.c"
#include "vt3_POU__Data_Winch_In.c"
#include "vt3_POU__Data_Winch_Out.c"
#include "vt3_POU__BlackOutControl.c"
#include "vt3_POU__Data_BO_In.c"
#include "vt3_POU__Data_BO_Out.c"
#include "vt3_POU__mainOtherFunctions.c"
#include "vt3_POU__Data_Other_In.c"
#include "vt3_POU__Data_Others_Out.c"
#include "vt3_POU__Data_OutSideTemp_SensorFilter.c"
#include "vt3_POU__Data_OutSideTemp_Calibration.c"
#include "vt3_POU__Data_OutSideTemp_MinMax.c"
#include "vt3_POU__outsideTemperatur.c"
#include "vt3_POU__Data_InSideTemp_SensorFilter.c"
#include "vt3_POU__Data_InSideTemp_Calibration.c"
#include "vt3_POU__Data_InSideTemp_MinMax.c"
#include "vt3_POU__inSideTemperatur.c"
#include "vt3_POU__Data_DoorControl_Out.c"
#include "vt3_POU__Data_DoorControl_In.c"
#include "vt3_POU__doorsControl.c"
#include "vt3_POU__Sensor_Data.c"
#include "vt3_POU__vehiclePosition.c"
#include "vt3_POU__Data_FuelTank.c"
#include "vt3_POU__FuelTankControl.c"
#include "vt3_POU__Data_FuelLevel_Right.c"
#include "vt3_POU__main_FuelLevel_Right.c"
#include "vt3_POU__Data_FuelLevel_Left.c"
#include "vt3_POU__main_FuelLevel_Left.c"
#include "vt3_POU__Data_EngineBrake.c"
#include "vt3_POU__mainEngineBrake.c"
#include "vt3_POU__AselsanDiagnostic.c"
#include "vt3_POU__main_UKAS_Control.c"
#include "vt3_POU__main_UKAS_Receive_Control.c"
#include "vt3_POU__data_UKAS.c"
#include "vt3_POU__mainMobileye.c"
#include "vt3_POU__global_data_nmsgui.c"
#include "vt3_POU__mainNMSGUI.c"
#include "vt3_POU__mainVVR.c"
#include "vt3_POU__RPM_Set.c"
#include "vt3_POU__mainJoystick.c"
#include "vt3_POU__Interpolate.c"
#include "vt3_POU__ActivateWDO.c"
#include "vt3_POU__pressureSensorsControl.c"
#include "vt3_POU__Data_SensorCalibration1.c"
#include "vt3_POU__Data_SensorFilter1.c"
#include "vt3_POU__mainSensor1.c"
#include "vt3_POU__Data_SensorCalibration2.c"
#include "vt3_POU__Data_SensorFilter2.c"
#include "vt3_POU__mainSensor2.c"
#include "vt3_POU__Data_SensorCalibration3.c"
#include "vt3_POU__Data_SensorFilter3.c"
#include "vt3_POU__mainSensor3.c"
#include "vt3_POU__Data_SensorCalibration4.c"
#include "vt3_POU__Data_SensorFilter4.c"
#include "vt3_POU__mainSensor4.c"
#include "vt3_POU__Sensor_HydrolicPressure_Filter_data.c"
#include "vt3_POU__Data_HydrolicPressure_Calibration.c"
#include "vt3_POU__Data_HydrolicPressure_Sensor.c"
#include "vt3_POU__main_HydrolicPressureSensor.c"
#include "vt3_POU__Sensor_HydrolicTemp_Filter_data.c"
#include "vt3_POU__Data_HydrolicTemp_Calibration.c"
#include "vt3_POU__Data_HydrolicTemp_Sensor.c"
#include "vt3_POU__main_HydrolicTempSensor.c"
#include "vt3_POU__main_WebastoTempSensor.c"
#include "vt3_POU__Data_WebastoTemp_Sensor.c"
#include "vt3_POU__Data_Webasto_Calibration.c"
#include "vt3_POU__Sensor_WebastoTemp_Filter_data.c"
#include "vt3_POU__mainFrontPark.c"
#include "vt3_POU__DATA_FuelTempLevel_Left.c"
#include "vt3_POU__main_FuelTempLevel_Left.c"
#include "vt3_POU__DATA_FuelTempLevel_Right.c"
#include "vt3_POU__main_FuelTempLevel_Right.c"
#include "vt3_POU_common.c"
#include "vt3_vars.c"

#endif /* INCLUDE__VT3_POU_C */

/* end of file */