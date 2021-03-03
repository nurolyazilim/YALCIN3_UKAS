/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU_COMMON_C
#define INCLUDE__VT3_POU_COMMON_C

#include "vt3_runtime.h"
#include "vt3_POU__Enum13.h"
#include "vt3_POU__Enum14.h"
#include "vt3_POU__Enum15.h"
#include "vt3_POU__Enum16.h"
#include "vt3_POU__Enum17.h"
#include "vt3_POU__Enum255.h"
#include "vt3_POU__Enum256.h"
#include "vt3_POU__Enum257.h"
#include "vt3_POU__Enum258.h"
#include "vt3_POU__Enum259.h"
#include "vt3_POU__Enum260.h"
#include "vt3_POU__Enum261.h"
#include "vt3_POU__Enum262.h"
#include "vt3_POU__Enum334.h"
#include "vt3_POU__Enum342.h"
#include "vt3_POU__Enum346.h"
#include "vt3_POU__Enum347.h"
#include "vt3_POU__Enum348.h"
#include "vt3_POU__Enum349.h"
#include "vt3_POU__Enum350.h"
#include "vt3_POU__Enum351.h"
#include "vt3_POU__Enum352.h"
#include "vt3_POU__Enum353.h"
#include "vt3_POU__Enum354.h"
#include "vt3_POU__Enum355.h"
#include "vt3_POU__Enum356.h"
#include "vt3_POU__Enum357.h"
#include "vt3_POU__Enum358.h"
#include "vt3_POU__Enum359.h"
#include "vt3_POU__Enum360.h"
#include "vt3_POU__Enum361.h"
#include "vt3_POU__Enum362.h"
#include "vt3_POU__Enum363.h"
#include "vt3_POU__Enum364.h"
#include "vt3_POU__Enum365.h"
#include "vt3_POU__Enum366.h"
#include "vt3_POU__Enum367.h"
#include "vt3_POU__Enum368.h"
#include "vt3_POU__Enum369.h"
#include "vt3_POU__Enum370.h"
#include "vt3_POU__Enum375.h"
#include "vt3_POU__Enum45.h"
#include "vt3_POU__Enum46.h"
#include "vt3_POU__Enum47.h"
#include "vt3_POU__Enum48.h"
#include "vt3_POU__Enum49.h"
#include "vt3_POU__Enum50.h"
#include "vt3_POU__Enum51.h"
#include "vt3_POU__Enum52.h"
#include "vt3_POU__Enum53.h"
#include "vt3_POU__Enum54.h"
#include "vt3_POU__Enum55.h"
#include "vt3_POU__Enum63.h"
#include "vt3_POU__Enum64.h"
#include "vt3_POU__Enum65.h"
#include "vt3_POU__Enum66.h"
#include "vt3_POU__Enum67.h"
#include "vt3_POU__Enum68.h"
#include "vt3_POU__Enum69.h"
#include "vt3_POU__Enum70.h"
#include "vt3_POU__Enum71.h"
#include "vt3_POU__Enum72.h"
#include "vt3_POU__Enum73.h"
#include "vt3_POU__Enum74.h"
#include "vt3_POU__Enum75.h"
#include "vt3_POU__Enum76.h"
#include "vt3_POU__Enum77.h"
#include "vt3_POU__Enum78.h"
#include "vt3_POU__Enum79.h"
#include "vt3_POU__Enum80.h"
#include "vt3_POU__Enum81.h"
#include "vt3_POU__Enum82.h"
#include "vt3_POU__Enum83.h"
#include "vt3_POU__Enum84.h"
#include "vt3_POU__Enum85.h"
#include "vt3_POU__Enum86.h"
#include "vt3_POU__array_2_of_byte.h"
#include "vt3_POU__Enum_TransOilFilterRestriction.h"
#include "vt3_POU__Enum_TransOilLevel.h"
#include "vt3_POU__Enum_SelectedTank.h"
#include "vt3_POU__Enum_ParkerCommands.h"
#include "vt3_POU__Enum87.h"
#include "vt3_POU__Enum88.h"
#include "vt3_POU__ARRAY100UDINT.h"
#include "vt3_POU__ARRAY100USINT.h"
#include "vt3_POU__dataArray.h"
#include "vt3_POU__global_data.h"
#include "vt3_POU__cycle.h"
#include "vt3_POU__Data_WarningLights.h"
#include "vt3_POU__mainWarningLights.h"
#include "vt3_POU__Data_EngineTempGauge.h"
#include "vt3_POU__mainEngineTempGauge.h"
#include "vt3_POU__Data_Speed.h"
#include "vt3_POU__Data_SpeedometerGauge.h"
#include "vt3_POU__mainSpeedometer.h"
#include "vt3_POU__mainAnalogGauges.h"
#include "vt3_POU__mainTeraScreen.h"
#include "vt3_POU__main_Lxicon.h"
#include "vt3_POU__ECM_DM_data.h"
#include "vt3_POU__ECM_global_data_program.h"
#include "vt3_POU__can_callback_DM01_ECM.h"
#include "vt3_POU__DM01_ECM_decode.h"
#include "vt3_POU__Data_ECM.h"
#include "vt3_POU__mainECM_Management.h"
#include "vt3_POU__TCM_DM_data.h"
#include "vt3_POU__TCM_global_data_program.h"
#include "vt3_POU__can_callback_DM01_TCM.h"
#include "vt3_POU__DM01_TCM_decode.h"
#include "vt3_POU__Data_TCM.h"
#include "vt3_POU__mainTCM_Management.h"
#include "vt3_POU__EBS_DM_data.h"
#include "vt3_POU__EBS_global_data_program.h"
#include "vt3_POU__can_callback_DM01_EBS.h"
#include "vt3_POU__DM01_EBS_decode.h"
#include "vt3_POU__Data_EBS.h"
#include "vt3_POU__mainEBS_Management.h"
#include "vt3_POU__Alarm_data.h"
#include "vt3_POU__Data_Limit.h"
#include "vt3_POU__mainDiagnostics.h"
#include "vt3_POU__mainMC2MDiagnostics.h"
#include "vt3_POU__EL_format_local2.h"
#include "vt3_POU__Data_Lamps_In.h"
#include "vt3_POU__Data_Lamps_Out.h"
#include "vt3_POU__mainLamps.h"
#include "vt3_POU__Data_Wipers.h"
#include "vt3_POU__mainWipers.h"
#include "vt3_POU__Data_Dropbox.h"
#include "vt3_POU__mainDropbox.h"
#include "vt3_POU__Data_Resistances.h"
#include "vt3_POU__mainResistances.h"
#include "vt3_POU__Data_EngineProtection.h"
#include "vt3_POU__mainEngineProtection.h"
#include "vt3_POU__Data_ABS4WD.h"
#include "vt3_POU__mainABS4WD.h"
#include "vt3_POU__Data_DiffLock.h"
#include "vt3_POU__mainDiffLock.h"
#include "vt3_POU__Data_J1939_CANOpen.h"
#include "vt3_POU__mainJ1939toCANOpen.h"
#include "vt3_POU__mainECM_TCM_ABS_DIAG.h"
#include "vt3_POU__WinchControl.h"
#include "vt3_POU__Data_Winch_In.h"
#include "vt3_POU__Data_Winch_Out.h"
#include "vt3_POU__BlackOutControl.h"
#include "vt3_POU__Data_BO_In.h"
#include "vt3_POU__Data_BO_Out.h"
#include "vt3_POU__mainOtherFunctions.h"
#include "vt3_POU__Data_Other_In.h"
#include "vt3_POU__Data_Others_Out.h"
#include "vt3_POU__Data_OutSideTemp_Calibration.h"
#include "vt3_POU__Data_OutSideTemp_MinMax.h"
#include "vt3_POU__outsideTemperatur.h"
#include "vt3_POU__Data_InSideTemp_Calibration.h"
#include "vt3_POU__Data_InSideTemp_MinMax.h"
#include "vt3_POU__inSideTemperatur.h"
#include "vt3_POU__Data_DoorControl_Out.h"
#include "vt3_POU__Data_DoorControl_In.h"
#include "vt3_POU__doorsControl.h"
#include "vt3_POU__Sensor_Data.h"
#include "vt3_POU__vehiclePosition.h"
#include "vt3_POU__Data_FuelTank.h"
#include "vt3_POU__FuelTankControl.h"
#include "vt3_POU__main_FuelLevel_Right.h"
#include "vt3_POU__main_FuelLevel_Left.h"
#include "vt3_POU__Data_EngineBrake.h"
#include "vt3_POU__mainEngineBrake.h"
#include "vt3_POU__AselsanDiagnostic.h"
#include "vt3_POU__main_UKAS_Control.h"
#include "vt3_POU__main_UKAS_Receive_Control.h"
#include "vt3_POU__data_UKAS.h"
#include "vt3_POU__mainMobileye.h"
#include "vt3_POU__global_data_nmsgui.h"
#include "vt3_POU__mainNMSGUI.h"
#include "vt3_POU__mainVVR.h"
#include "vt3_POU__RPM_Set.h"
#include "vt3_POU__mainJoystick.h"
#include "vt3_POU__Interpolate.h"
#include "vt3_POU__ActivateWDO.h"
#include "vt3_POU__ARRAY30UINT.h"
#include "vt3_POU__ARRAY100UINT.h"
#include "vt3_POU__Data_FuelLevel_Right.h"
#include "vt3_POU__Data_FuelLevel_Left.h"
#include "vt3_POU__ARRAY120UINT.h"
#include "vt3_POU__Data_OutSideTemp_SensorFilter.h"
#include "vt3_POU__Data_InSideTemp_SensorFilter.h"
#include "vt3_POU__pressureSensorsControl.h"
#include "vt3_POU__Data_SensorCalibration1.h"
#include "vt3_POU__Data_SensorFilter1.h"
#include "vt3_POU__mainSensor1.h"
#include "vt3_POU__Data_SensorCalibration2.h"
#include "vt3_POU__Data_SensorFilter2.h"
#include "vt3_POU__mainSensor2.h"
#include "vt3_POU__Data_SensorCalibration3.h"
#include "vt3_POU__Data_SensorFilter3.h"
#include "vt3_POU__mainSensor3.h"
#include "vt3_POU__Data_SensorCalibration4.h"
#include "vt3_POU__Data_SensorFilter4.h"
#include "vt3_POU__mainSensor4.h"
#include "vt3_POU__Sensor_HydrolicPressure_Filter_data.h"
#include "vt3_POU__Data_HydrolicPressure_Calibration.h"
#include "vt3_POU__Data_HydrolicPressure_Sensor.h"
#include "vt3_POU__main_HydrolicPressureSensor.h"
#include "vt3_POU__Sensor_HydrolicTemp_Filter_data.h"
#include "vt3_POU__Data_HydrolicTemp_Calibration.h"
#include "vt3_POU__Data_HydrolicTemp_Sensor.h"
#include "vt3_POU__main_HydrolicTempSensor.h"
#include "vt3_POU__main_WebastoTempSensor.h"
#include "vt3_POU__Data_WebastoTemp_Sensor.h"
#include "vt3_POU__Data_Webasto_Calibration.h"
#include "vt3_POU__Sensor_WebastoTemp_Filter_data.h"
#include "vt3_POU__mainFrontPark.h"
#include "vt3_POU__DATA_FuelTempLevel_Left.h"
#include "vt3_POU__main_FuelTempLevel_Left.h"
#include "vt3_POU__DATA_FuelTempLevel_Right.h"
#include "vt3_POU__main_FuelTempLevel_Right.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* table of ENDIANNESS */
const vt3_endianness_table_t FAR vt3_endianness_table[] = {
	/* SA    endianness*/
	{ 18, 0 }, 
	{  5, 1 }, 
	{ 133, 1 }, 
	{ 13, 1 }, 
	{  2, 0 }, 
	{ 50, 0 }, 
	{  0, 0 } /* sentinel */
}; /* end of vt3_endianness_table[] */


/* task trampoline for cycle */
static void __task__cycle__(void)
{
	cycle__call();
	vt3_free_temporary_strings();
}

/* table of TASKS */
const vt3_task_table_t FAR vt3_task_table[] = {
	/* priority   period    delay   program */
	{        10,     100,       0,  __task__cycle__ },
	{ 0, 0, 0, (void (*)(void)) NULL } /* sentinel */
}; /* end of vt3_task_table[] */

/* idle TASK */
void vt3_idle_task(void)
{
	/* PROGRAM PLC_PRG is not declared: idle task does nothing */
}


/* this function is called at the beginning to initialize all POUs */
void vt3_init_all_pous(void)
{
	global_data__init();
	cycle__init();
	Data_WarningLights__init();
	mainWarningLights__init();
	Data_EngineTempGauge__init();
	mainEngineTempGauge__init();
	Data_Speed__init();
	Data_SpeedometerGauge__init();
	mainSpeedometer__init();
	mainAnalogGauges__init();
	mainTeraScreen__init();
	main_Lxicon__init();
	ECM_DM_data__init();
	ECM_global_data_program__init();
	DM01_ECM_decode__init();
	Data_ECM__init();
	mainECM_Management__init();
	TCM_DM_data__init();
	TCM_global_data_program__init();
	DM01_TCM_decode__init();
	Data_TCM__init();
	mainTCM_Management__init();
	EBS_DM_data__init();
	EBS_global_data_program__init();
	DM01_EBS_decode__init();
	Data_EBS__init();
	mainEBS_Management__init();
	Alarm_data__init();
	Data_Limit__init();
	mainDiagnostics__init();
	mainMC2MDiagnostics__init();
	EL_format_local2__init();
	Data_Lamps_In__init();
	Data_Lamps_Out__init();
	mainLamps__init();
	Data_Wipers__init();
	mainWipers__init();
	Data_Dropbox__init();
	mainDropbox__init();
	Data_Resistances__init();
	mainResistances__init();
	Data_EngineProtection__init();
	mainEngineProtection__init();
	Data_ABS4WD__init();
	mainABS4WD__init();
	Data_DiffLock__init();
	mainDiffLock__init();
	Data_J1939_CANOpen__init();
	mainJ1939toCANOpen__init();
	mainECM_TCM_ABS_DIAG__init();
	WinchControl__init();
	Data_Winch_In__init();
	Data_Winch_Out__init();
	BlackOutControl__init();
	Data_BO_In__init();
	Data_BO_Out__init();
	mainOtherFunctions__init();
	Data_Other_In__init();
	Data_Others_Out__init();
	Data_OutSideTemp_SensorFilter__init();
	Data_OutSideTemp_Calibration__init();
	Data_OutSideTemp_MinMax__init();
	outsideTemperatur__init();
	Data_InSideTemp_SensorFilter__init();
	Data_InSideTemp_Calibration__init();
	Data_InSideTemp_MinMax__init();
	inSideTemperatur__init();
	Data_DoorControl_Out__init();
	Data_DoorControl_In__init();
	doorsControl__init();
	Sensor_Data__init();
	vehiclePosition__init();
	Data_FuelTank__init();
	FuelTankControl__init();
	Data_FuelLevel_Right__init();
	main_FuelLevel_Right__init();
	Data_FuelLevel_Left__init();
	main_FuelLevel_Left__init();
	Data_EngineBrake__init();
	mainEngineBrake__init();
	AselsanDiagnostic__init();
	main_UKAS_Control__init();
	main_UKAS_Receive_Control__init();
	data_UKAS__init();
	mainMobileye__init();
	global_data_nmsgui__init();
	mainNMSGUI__init();
	mainVVR__init();
	RPM_Set__init();
	mainJoystick__init();
	ActivateWDO__init();
	pressureSensorsControl__init();
	Data_SensorCalibration1__init();
	Data_SensorFilter1__init();
	mainSensor1__init();
	Data_SensorCalibration2__init();
	Data_SensorFilter2__init();
	mainSensor2__init();
	Data_SensorCalibration3__init();
	Data_SensorFilter3__init();
	mainSensor3__init();
	Data_SensorCalibration4__init();
	Data_SensorFilter4__init();
	mainSensor4__init();
	Sensor_HydrolicPressure_Filter_data__init();
	Data_HydrolicPressure_Calibration__init();
	Data_HydrolicPressure_Sensor__init();
	main_HydrolicPressureSensor__init();
	Sensor_HydrolicTemp_Filter_data__init();
	Data_HydrolicTemp_Calibration__init();
	Data_HydrolicTemp_Sensor__init();
	main_HydrolicTempSensor__init();
	main_WebastoTempSensor__init();
	Data_WebastoTemp_Sensor__init();
	Data_Webasto_Calibration__init();
	Sensor_WebastoTemp_Filter_data__init();
	mainFrontPark__init();
	DATA_FuelTempLevel_Left__init();
	main_FuelTempLevel_Left__init();
	DATA_FuelTempLevel_Right__init();
	main_FuelTempLevel_Right__init();
}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_POU_COMMON_C */

/* end of file */
