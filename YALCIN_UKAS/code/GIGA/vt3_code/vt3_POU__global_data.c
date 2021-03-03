/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__GLOBAL_DATA_C
#define INCLUDE__VT3_POU__GLOBAL_DATA_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* suppress HC12 specific warnings */
#pragma MESSAGE DISABLE C5909 // Assignment in condition
#pragma MESSAGE DISABLE C5918 // Removed dead goto
#pragma MESSAGE DISABLE C5917 // Removed dead assignment
#pragma MESSAGE DISABLE C5660 // Removed dead code
#pragma MESSAGE DISABLE C1420 // Result of function-call is ignored
#pragma MESSAGE DISABLE C4002 // Result not used

/* initializers of global variables */
static const DATE_AND_TIME FAR __init_value__DateTimeNow = { 0, 0 };
static const DATE_AND_TIME FAR __init_value__DateTimeUpdate = { 0, 0 };
static const DATE FAR __init_value__DateNow = 0;
static const STRING10 FAR __init_value__DateOnScreen = { 10, 0, "" };
static const TIME_OF_DAY FAR __init_value__TimeNow = 0UL;
static const STRING5 FAR __init_value__TimeOnScreen = { 5, 0, "" };
static const STRING256 FAR __init_value__ZeroPrefixMinute = { 256, 0, "" };
static const STRING256 FAR __init_value__ZeroPrefixDay = { 256, 0, "" };
static const STRING256 FAR __init_value__DateStringUpdate = { 256, 0, "" };
static const STRING256 FAR __init_value__TimeStringUpdate = { 256, 0, "" };
static const STRING256 FAR __init_value__inSideTemperature = { 256, 0, "" };
static const STRING256 FAR __init_value__outSideTemperature = { 256, 0, "" };
static const STRING256 FAR __init_value__SWVersionOnScreen = { 256, 0, "" };
static const BOOL FAR __init_value__SWVersion_Stat = TRUE;
static const STRING256 FAR __init_value__nullString = { 256, 0, "" };
static const STRING256 FAR __init_value__AuxPressureLowOnScreen = { 256, 0, "" };
static const UINT FAR __init_value__Backlight = ((UINT)500U);
static const STRING256 FAR __init_value__EngineProtectionERROnScreen = { 256, 0, "" };
static const USINT FAR __init_value__Buzzer_Level = ((USINT)1U);
static const BOOL FAR __init_value__BIT_Test_Init = TRUE;
static const STRING5 FAR __init_value__MinuteUptOnScreen = { 5, 0, "" };
static const STRING10 FAR __init_value__DateOnScreen2 = { 10, 0, "" };
static const STRING5 FAR __init_value__HourUptOnScreen = { 5, 0, "" };
static const STRING5 FAR __init_value__DayUptOnScreen = { 5, 0, "" };
static const STRING5 FAR __init_value__MonthUptOnScreen = { 5, 0, "" };
static const STRING5 FAR __init_value__YearUptOnScreen = { 5, 0, "" };
static const STRING5 FAR __init_value__ScreenBrightHUptOnScreen = { 5, 0, "" };
static const STRING5 FAR __init_value__ScreenBrightLUptOnScreen = { 5, 0, "" };
static const STRING5 FAR __init_value__PanelBrightHUptOnScreen = { 5, 0, "" };
static const STRING5 FAR __init_value__PanelBrightLUptOnScreen = { 5, 0, "" };
static const STRING256 FAR __init_value__DiagMessage01 = { 256, 0, "" };
static const STRING256 FAR __init_value__DiagMessage02 = { 256, 0, "" };
static const STRING256 FAR __init_value__DiagMessage03 = { 256, 0, "" };
static const STRING256 FAR __init_value__DiagMessage04 = { 256, 0, "" };
static const STRING256 FAR __init_value__DiagMessage05 = { 256, 0, "" };
static const STRING256 FAR __init_value__DiagMessage06 = { 256, 0, "" };
static const STRING256 FAR __init_value__DiagMessage07 = { 256, 0, "" };
static const STRING256 FAR __init_value__DiagMessage08 = { 256, 0, "" };
static const STRING256 FAR __init_value__DiagMessage09 = { 256, 0, "" };
static const UINT FAR __init_value__BacklightSetVarH = ((UINT)1000U);
static const UINT FAR __init_value__BacklightSetVarL = ((UINT)250U);
static const UINT FAR __init_value__BacklightScreenSetVarH = ((UINT)1000U);
static const UINT FAR __init_value__BacklightScreenSetVarL = ((UINT)750U);

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__global_data[] = {
	{ &DateTimeNow, &__init_value__DateTimeNow, 8 },
	{ &DateTimeUpdate, &__init_value__DateTimeUpdate, 8 },
	{ &DateNow, &__init_value__DateNow, 4 },
	{ &DateOnScreen, &__init_value__DateOnScreen, 15 },
	{ &TimeNow, &__init_value__TimeNow, 4 },
	{ &TimeOnScreen, &__init_value__TimeOnScreen, 10 },
	{ &ZeroPrefixMinute, &__init_value__ZeroPrefixMinute, 261 },
	{ &ZeroPrefixDay, &__init_value__ZeroPrefixDay, 261 },
	{ &DateStringUpdate, &__init_value__DateStringUpdate, 261 },
	{ &TimeStringUpdate, &__init_value__TimeStringUpdate, 261 },
	{ &inSideTemperature, &__init_value__inSideTemperature, 261 },
	{ &outSideTemperature, &__init_value__outSideTemperature, 261 },
	{ &SWVersionOnScreen, &__init_value__SWVersionOnScreen, 261 },
	{ &SWVersion_Stat, &__init_value__SWVersion_Stat, 1 },
	{ &nullString, &__init_value__nullString, 261 },
	{ &AuxPressureLowOnScreen, &__init_value__AuxPressureLowOnScreen, 261 },
	{ &Backlight, &__init_value__Backlight, 2 },
	{ &EngineProtectionERROnScreen, &__init_value__EngineProtectionERROnScreen, 261 },
	{ &Buzzer_Level, &__init_value__Buzzer_Level, 1 },
	{ &BIT_Test_Init, &__init_value__BIT_Test_Init, 1 },
	{ &MinuteUptOnScreen, &__init_value__MinuteUptOnScreen, 10 },
	{ &DateOnScreen2, &__init_value__DateOnScreen2, 15 },
	{ &HourUptOnScreen, &__init_value__HourUptOnScreen, 10 },
	{ &DayUptOnScreen, &__init_value__DayUptOnScreen, 10 },
	{ &MonthUptOnScreen, &__init_value__MonthUptOnScreen, 10 },
	{ &YearUptOnScreen, &__init_value__YearUptOnScreen, 10 },
	{ &ScreenBrightHUptOnScreen, &__init_value__ScreenBrightHUptOnScreen, 10 },
	{ &ScreenBrightLUptOnScreen, &__init_value__ScreenBrightLUptOnScreen, 10 },
	{ &PanelBrightHUptOnScreen, &__init_value__PanelBrightHUptOnScreen, 10 },
	{ &PanelBrightLUptOnScreen, &__init_value__PanelBrightLUptOnScreen, 10 },
	{ &DiagMessage01, &__init_value__DiagMessage01, 261 },
	{ &DiagMessage02, &__init_value__DiagMessage02, 261 },
	{ &DiagMessage03, &__init_value__DiagMessage03, 261 },
	{ &DiagMessage04, &__init_value__DiagMessage04, 261 },
	{ &DiagMessage05, &__init_value__DiagMessage05, 261 },
	{ &DiagMessage06, &__init_value__DiagMessage06, 261 },
	{ &DiagMessage07, &__init_value__DiagMessage07, 261 },
	{ &DiagMessage08, &__init_value__DiagMessage08, 261 },
	{ &DiagMessage09, &__init_value__DiagMessage09, 261 },
	{ &BacklightSetVarH, &__init_value__BacklightSetVarH, 2 },
	{ &BacklightSetVarL, &__init_value__BacklightSetVarL, 2 },
	{ &BacklightScreenSetVarH, &__init_value__BacklightScreenSetVarH, 2 },
	{ &BacklightScreenSetVarL, &__init_value__BacklightScreenSetVarL, 2 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__global_data[] */

/* initialization of global data block */
void global_data__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__global_data; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
	TOF__init(&BrightnessBarTOF);
	R_TRIG__init(&RTRIG_Cam);
	R_TRIG__init(&SWVersion_TRIG);
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__GLOBAL_DATA_C */

/* end of file */
