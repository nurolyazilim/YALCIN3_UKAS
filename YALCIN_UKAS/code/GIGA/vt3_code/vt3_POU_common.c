/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU_COMMON_C
#define INCLUDE__VT3_POU_COMMON_C

#include "vt3_runtime.h"
#include "vt3_POU__cycle.h"
#include "vt3_POU__Data_EngineTempGauge.h"
#include "vt3_POU__mainEngineTempGauge.h"
#include "vt3_POU__Data_SpeedometerGauge.h"
#include "vt3_POU__mainSpeedometer.h"
#include "vt3_POU__Data_EngineSpeed.h"
#include "vt3_POU__mainEngineSpeed.h"
#include "vt3_POU__Data_FuelLevel.h"
#include "vt3_POU__mainFuelLevel.h"
#include "vt3_POU__Data_EngineOilPressure.h"
#include "vt3_POU__mainEngineOilPressure.h"
#include "vt3_POU__Data_TransOilTemperature.h"
#include "vt3_POU__mainTransOilTemperature.h"
#include "vt3_POU__mainAnalogGauges.h"
#include "vt3_POU__Data_mainDigitalGauges.h"
#include "vt3_POU__mainDigitalGauges.h"
#include "vt3_POU__Data_DiffLock.h"
#include "vt3_POU__mainDiffLock.h"
#include "vt3_POU__mainIgnitionOff.h"
#include "vt3_POU__mainFunctions.h"
#include "vt3_POU__SetDateTime1.h"
#include "vt3_POU__GIGAMenu1.h"
#include "vt3_POU__Interpolate.h"
#include "vt3_POU__ARRAY30UINT.h"
#include "vt3_POU__ARRAY100UINT.h"
#include "vt3_POU__EngineTempGaugeFilter_data.h"
#include "vt3_POU__SpeedometerFilter_data.h"
#include "vt3_POU__EngineSpeedFilter_data.h"
#include "vt3_POU__FuelLevelFilter_data.h"
#include "vt3_POU__EngineOilPressureFilter_data.h"
#include "vt3_POU__TransOilTemperatureFilter_data.h"
#include "vt3_POU__mainDigitalGauges_data.h"
#include "vt3_POU__ARRAY120UINT.h"
#include "vt3_POU__ARR_100_SINT.h"
#include "vt3_POU__global_data.h"
#include "vt3_POU__LampAlarm.h"
#include "vt3_POU__MessageReceiver.h"

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
	EngineTempGaugeFilter_data__init();
	Data_EngineTempGauge__init();
	mainEngineTempGauge__init();
	SpeedometerFilter_data__init();
	Data_SpeedometerGauge__init();
	mainSpeedometer__init();
	EngineSpeedFilter_data__init();
	Data_EngineSpeed__init();
	mainEngineSpeed__init();
	FuelLevelFilter_data__init();
	Data_FuelLevel__init();
	mainFuelLevel__init();
	EngineOilPressureFilter_data__init();
	Data_EngineOilPressure__init();
	mainEngineOilPressure__init();
	TransOilTemperatureFilter_data__init();
	Data_TransOilTemperature__init();
	mainTransOilTemperature__init();
	mainAnalogGauges__init();
	mainDigitalGauges_data__init();
	Data_mainDigitalGauges__init();
	mainDigitalGauges__init();
	Data_DiffLock__init();
	mainDiffLock__init();
	mainIgnitionOff__init();
	mainFunctions__init();
	SetDateTime1__init();
	GIGAMenu1__init();
	LampAlarm__init();
	MessageReceiver__init();
}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_POU_COMMON_C */

/* end of file */
