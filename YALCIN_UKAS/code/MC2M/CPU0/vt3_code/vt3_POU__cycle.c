/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__CYCLE_C
#define INCLUDE__VT3_POU__CYCLE_C

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
static const vt3_screen_initializer FAR __init_table__cycle[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__cycle[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const cycle_t FAR __const__cycle__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* MuxActivation        */ TRUE,
}; /* end of __const__cycle__param_init */

/* initialization of PROGRAM status */
void cycle__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__cycle; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&cycle, &__const__cycle__param_init, sizeof __const__cycle__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void cycle__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	cycle.ENO = cycle.EN;
	if ( ! cycle.EN )
		return;


	{
		/* literal constants used in ST */
		static const DATE_AND_TIME FAR _const_0 = { 0, 0 };
		/* end of literals */

		/* statements */
		if ( (SaveParameter) ) {
			save_bytearray_P();
		}

		
		ActivateWDO__call();

		if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((INT)600)),
			((SINT)0)) ) {
			TotalMinute = (SINT)ADD_SINT((TotalMinute),
				((SINT)1));
			save_bytearray_R();
			save_bytearray_P();
		}

		if ( GE_SINT_2((TotalMinute),
			((SINT)60)) ) {
			TotalHour = (UINT)ADD_UINT((TotalHour),
				((SINT)1));
			TotalMinute = (SINT)((SINT)0);
			save_bytearray_R();
			save_bytearray_P();
		}

		DateTimeNow = GET_CURRENT_DATE_AND_TIME();

		if ( (SetDateTime) ) {
			if ( NE_DATE_AND_TIME(VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeNow),
				_const_0) ) {
				SET_CURRENT_DATE_AND_TIME(VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeUpdate));
				DateTimeNow = GET_CURRENT_DATE_AND_TIME();
				if ( EQ_DATE_AND_TIME_2(VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeNow),
					VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeUpdate)) ) {
					SetDateTime = FALSE;
				}
			}
		}

		TimeNow = DT_TO_TOD(VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeNow));

		MainLoop = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
			((SINT)1));

		if ( OR_BOOL(OR_BOOL((Cmd_TurnSignal_Left),
				(Cmd_TurnSignal_Right)),
			(Cmd_Hazard)) ) {
			if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(SignalLoop),
					((SINT)4)),
				((SINT)0)) ) {
				Blink07 = NOT_BOOL((Blink07));
			}
			SignalLoop = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(SignalLoop),
				((SINT)1));
		} else if  ( TRUE ) {
			SignalLoop = (UDINT)((SINT)0);
			Blink07 = FALSE;
		}

		if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)6)),
			((SINT)0)) ) {
			Blink06 = NOT_BOOL((Blink06));
		}

		if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)5)),
			((SINT)0)) ) {
			Blink05 = NOT_BOOL((Blink05));
		}

		if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)10)),
			((SINT)0)) ) {
			Blink10 = NOT_BOOL((Blink10));
		}

		MC2M_MUX_LED1 = GE_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)20)),
			((SINT)2));

		MC2M_MUX_LED2 = GE_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)20)),
			((SINT)7));

		MC2M_MUX_LED3 = GE_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)20)),
			((SINT)12));

		MC2M_MUX_LED4 = GE_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)20)),
			((SINT)18));

		
		mainJ1939toCANOpen__call();

		
		mainTCM_Management__call();

		
		mainECM_Management__call();

		
		mainEBS_Management__call();

		
		mainDiagnostics__call();

		
		mainLamps__call();

		
		mainWipers__call();

		
		mainDropbox__call();

		
		mainResistances__call();

		
		mainEngineProtection__call();

		
		mainABS4WD__call();

		
		mainDiffLock__call();

		
		mainWarningLights__call();

		
		mainAnalogGauges__call();

		
		mainTeraScreen__call();

		
		WinchControl__call();

		
		BlackOutControl__call();

		
		mainOtherFunctions__call();

		
		FuelTankControl__call();

		
		doorsControl__call();

		
		pressureSensorsControl__call();

		
		vehiclePosition__call();

		
		inSideTemperatur__call();

		
		outsideTemperatur__call();

		
		main_HydrolicPressureSensor__call();

		
		main_HydrolicTempSensor__call();

		
		main_WebastoTempSensor__call();

		
		mainMC2MDiagnostics__call();

		
		mainEngineBrake__call();

		
		EL_format_local2__call();

		
		AselsanDiagnostic__call();

		
		mainFrontPark__call();

		
		main_UKAS_Control__call();

		
		main_UKAS_Receive_Control__call();

		
		mainMobileye__call();

		
		mainNMSGUI__call();

		
		mainVVR__call();

		
		RPM_Set__call();

		
		mainJoystick__call();

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

#endif /* INCLUDE__VT3_POU__CYCLE_C */

/* end of file */
