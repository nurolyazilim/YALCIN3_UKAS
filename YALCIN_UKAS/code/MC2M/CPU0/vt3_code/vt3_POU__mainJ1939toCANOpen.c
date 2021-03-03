/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINJ1939TOCANOPEN_C
#define INCLUDE__VT3_POU__MAINJ1939TOCANOPEN_C

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

/* initializers of addressed variables */

/* table of initializators of addressed variables */
static const vt3_screen_initializer FAR __init_table__mainJ1939toCANOpen[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainJ1939toCANOpen[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainJ1939toCANOpen_t FAR __const__mainJ1939toCANOpen__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* Ehr_updateTout       */ ((INT)200),
}; /* end of __const__mainJ1939toCANOpen__param_init */

/* initialization of PROGRAM status */
void mainJ1939toCANOpen__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainJ1939toCANOpen; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainJ1939toCANOpen, &__const__mainJ1939toCANOpen__param_init, sizeof __const__mainJ1939toCANOpen__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainJ1939toCANOpen__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainJ1939toCANOpen.ENO = mainJ1939toCANOpen.EN;
	if ( ! mainJ1939toCANOpen.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		BatteryLevel = (UINT)(VEP1_BatteryPotentialPowerInput1);

		EngineTempValue = (USINT)INT_TO_USINT((ET1_EngineCoolantTemperature));

		EngineOilPressure = (USINT)REAL_TO_USINT(MUL_REAL(USINT_TO_REAL((EFL_P1_EngineOilPressure)),
				0.4));

		TransOilTemperature = (INT)(TRF1_TransmissionOilTemperature);

		Odometer_EBS_FrontAxleSpeed = (UINT)(EBC2_FrontAxleSpeed);

		if ( LT_WORD_2((BatteryLevel),
			((INT)200)) ) {
			BatteryLevel = (UINT)((INT)200);
		} else if  ( GT_WORD_2((BatteryLevel),
			((INT)320)) ) {
			BatteryLevel = (UINT)((INT)320);
		}

		if ( LT_BYTE_2((EngineTempValue),
			((SINT)40)) ) {
			EngineTempValue = (USINT)((SINT)40);
		} else if  ( GT_BYTE_2((EngineTempValue),
			((SINT)125)) ) {
			EngineTempValue = (USINT)((SINT)125);
		}

		if ( LT_BYTE_2((EngineOilPressure),
			((SINT)0)) ) {
			EngineOilPressure = (USINT)((SINT)0);
		} else if  ( GT_BYTE_2((EngineOilPressure),
			((SINT)80)) ) {
			EngineOilPressure = (USINT)((SINT)80);
		}

		if ( GT_INT_2((TransOilTemperature),
			((INT)150)) ) {
			TransOilTemperature = (INT)((INT)150);
		} else if  ( LT_INT_2((TransOilTemperature),
			((SINT)70)) ) {
			TransOilTemperature = (INT)((SINT)70);
		}

		CCVS_2_TwoSpeedAxleSwitch = (CCVS_TwoSpeedAxleSwitch);

		CCVS_2_ParkingBrakeSwitch = (CCVS_ParkingBrakeSwitch);

		CCVS_2_CruiseControlPauseSwitch = (CCVS_CruiseControlPauseSwitch);

		CCVS_2_ParkBrakeReleaseInhibitRequest = (CCVS_ParkBrakeReleaseInhibitRequest);

		CCVS_2_CruiseControlActive = (CCVS_CruiseControlActive);

		CCVS_2_CruiseControlEnableSwitch = (CCVS_CruiseControlEnableSwitch);

		CCVS_2_BrakeSwitch = (CCVS_BrakeSwitch);

		CCVS_2_ClutchSwitch = (CCVS_ClutchSwitch);

		CCVS_2_CruiseControlSetSwitch = (CCVS_CruiseControlSetSwitch);

		CCVS_2_CruiseControlCoastSwitch = (CCVS_CruiseControlCoastSwitch);

		CCVS_2_CruiseControlResumeSwitch = (CCVS_CruiseControlResumeSwitch);

		CCVS_2_CruiseControlAccelerateSwitch = (CCVS_CruiseControlAccelerateSwitch);

		CCVS_2_CruiseControlSetSpeed = (USINT)(CCVS_CruiseControlSetSpeed);

		CCVS_2_CruiseControlStates = (CCVS_CruiseControlStates);

		CCVS_2_EngineIdleIncrementSwitch = (CCVS_EngineIdleIncrementSwitch);

		CCVS_2_EngineIdleDecrementSwitch = (CCVS_EngineIdleDecrementSwitch);

		CCVS_2_EngineTestModeSwitch = (CCVS_EngineTestModeSwitch);

		CCVS_2_EngineShutdownOverrideSwitch = (CCVS_EngineShutdownOverrideSwitch);

		if ( GT_INT_2((mainJ1939toCANOpen.Ehr_updateTout),
			((SINT)0)) ) {
			mainJ1939toCANOpen.Ehr_updateTout = (INT)SUB_INT((mainJ1939toCANOpen.Ehr_updateTout),
				((SINT)1));
		}

		if ( AND_BOOL(NOT_BOOL((vt3_can_alarm_EHR_Engine_Hours_Revolutions)),
			EQ_INT_2((mainJ1939toCANOpen.Ehr_updateTout),
				((SINT)0))) ) {
			if ( OR_BOOL(AND_BOOL(GT_DWORD_2(SUB_UDINT(VT3_ATOMIC_READ_UDINT(EHR_2_TotalEngineHours),
							VT3_ATOMIC_READ_UDINT(EHR_TotalEngineHours)),
						((INT)200)),
					GT_DWORD_2(VT3_ATOMIC_READ_UDINT(EHR_2_TotalEngineHours),
						VT3_ATOMIC_READ_UDINT(EHR_TotalEngineHours))),
				AND_BOOL(GT_DWORD_2(SUB_UDINT(VT3_ATOMIC_READ_UDINT(EHR_TotalEngineHours),
							VT3_ATOMIC_READ_UDINT(EHR_2_TotalEngineHours)),
						((INT)200)),
					GT_DWORD_2(VT3_ATOMIC_READ_UDINT(EHR_TotalEngineHours),
						VT3_ATOMIC_READ_UDINT(EHR_2_TotalEngineHours)))) ) {
				TotalEngineHours_Old = (UDINT)DIV_UDINT(MUL_UDINT(VT3_ATOMIC_READ_UDINT(EHR_2_TotalEngineHours),
						((SINT)5)),
					((SINT)100));
			}
			EHR_2_TotalEngineHours = (UDINT)VT3_ATOMIC_READ_UDINT(EHR_TotalEngineHours);
		}

		MC2M_TERA_DIAG_TotalEngineHours = (UDINT)DIV_UDINT(MUL_UDINT(VT3_ATOMIC_READ_UDINT(EHR_2_TotalEngineHours),
				((SINT)5)),
			((SINT)100));

		MC2M_TERA_DIAG_TotalEngineHours_Old = (UDINT)VT3_ATOMIC_READ_UDINT(TotalEngineHours_Old);

		EHR_2_TotalEngineRevolutions = (UDINT)VT3_ATOMIC_READ_UDINT(EHR_TotalEngineRevolutions);

		EHR2_DestinationAdr = (UINT)((DINT)65253L);

		
		mainECM_TCM_ABS_DIAG__call();

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return;

	}


	/* end of PROGRAM body */
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__MAINJ1939TOCANOPEN_C */

/* end of file */
