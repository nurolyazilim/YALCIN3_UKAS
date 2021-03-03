/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINFUNCTIONS_C
#define INCLUDE__VT3_POU__MAINFUNCTIONS_C

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
static const vt3_screen_initializer FAR __init_table__mainFunctions[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainFunctions[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainFunctions_t FAR __const__mainFunctions__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i2                   */ ((SINT)0),
}; /* end of __const__mainFunctions__param_init */

/* initialization of PROGRAM status */
void mainFunctions__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainFunctions; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainFunctions, &__const__mainFunctions__param_init, sizeof __const__mainFunctions__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainFunctions__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainFunctions.ENO = mainFunctions.EN;
	if ( ! mainFunctions.EN )
		return;


	{
		/* literal constants used in ST */
		static const STRING(19) FAR _const_0 = { 19, 19, " Engine Protection " };
		static const STRING(1) FAR _const_1 = { 1, 1, "\n" };
		static const STRING(19) FAR _const_2 = { 19, 19, "Override Devre Disi" };
		/* end of literals */

		/* statements */
		led_tmp = (led_tmp_prev);

		
		mainAnalogGauges__call();

		
		mainDigitalGauges__call();

		
		mainDiffLock__call();

		
		LampAlarm__call();

		MOVE_STRING((PSTRING)&EngineProtectionERROnScreen, CONCAT_STRING(3,
			(PSTRING)&_const_0,
			(PSTRING)&_const_1,
			(PSTRING)&_const_2));

		TotalInput_BatteryLevel = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_769 = SUB_SINT((SINT)(((SINT)10)),
			((SINT)2));
			for ( mainFunctions.i2 = ((SINT)0); mainFunctions.i2 <= _forstop_769; mainFunctions.i2 += 1 )
			{
				InputArray_BatteryLevel[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)10)),
						((SINT)1)),
					(mainFunctions.i2)), 30)] = (UINT)(InputArray_BatteryLevel[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)10)),
						((SINT)2)),
					(mainFunctions.i2)), 30)]);
			}
			
		}

		InputArray_BatteryLevel[vt3_check_array_boundary(((SINT)0), 30)] = (UINT)(MC2M_TERA_BatteryLevel);

		{
			/* for loop */
			const SINT _forstop_1084 = SUB_SINT((SINT)(((SINT)10)),
			((SINT)1));
			for ( mainFunctions.i2 = ((SINT)0); mainFunctions.i2 <= _forstop_1084; mainFunctions.i2 += 1 )
			{
				TotalInput_BatteryLevel = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalInput_BatteryLevel),
					(InputArray_BatteryLevel[vt3_check_array_boundary((mainFunctions.i2), 30)]));
			}
			
		}

		InputFiltered_BatteryLevel = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalInput_BatteryLevel)),
				SINT_TO_REAL((SINT)(((SINT)10)))));

		AlarmState_BatteryLevel = LT_WORD_2((InputFiltered_BatteryLevel),
			(UINT)(((UINT)220U)));

		if ( (MC2M_TERA_Icon_Status_L38) ) {
			Cmd_Buzzer_Ctr = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Cmd_Buzzer_Ctr),
				((SINT)100));
		} else if  ( TRUE ) {
			Cmd_Buzzer_Ctr = (UDINT)((SINT)0);
			Stat_Buzzer = FALSE;
			Buzzer_Frequency = (UINT)((SINT)0);
		}

		if ( AND_BOOL((MC2M_TERA_Icon_Status_L38),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Buzzer_Ctr),
				((INT)800))) ) {
			Stat_Buzzer = TRUE;
			Buzzer_Frequency = (UINT)((INT)1000);
		} else if  ( AND_BOOL((MC2M_TERA_Icon_Status_L38),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Buzzer_Ctr),
				((INT)1600))) ) {
			Stat_Buzzer = FALSE;
			Buzzer_Frequency = (UINT)((SINT)0);
		} else if  ( AND_BOOL((MC2M_TERA_Icon_Status_L38),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Buzzer_Ctr),
				((INT)1600))) ) {
			Cmd_Buzzer_Ctr = (UDINT)((SINT)0);
			Buzzer_Frequency = (UINT)((SINT)0);
		}

		if ( (BIT_Test_Init) ) {
			Cmd_Buzzer_Ctr2 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Cmd_Buzzer_Ctr2),
				((SINT)1));
		} else if  ( TRUE ) {
			Cmd_Buzzer_Ctr2 = (UDINT)((SINT)0);
		}

		if ( AND_BOOL((BIT_Test_Init),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Buzzer_Ctr2),
				((SINT)50))) ) {
			if ( LT_WORD_2((EngineSpeed),
				((INT)400)) ) {
				GIGALedOverride = TRUE;
				GIGAGaugeOverride0 = (INT)((INT)1250);
				GIGAGaugeOverride1 = (INT)((INT)1250);
				GIGAGaugeOverride2 = (INT)((INT)1815);
				GIGAGaugeOverride3 = (INT)((INT)1230);
				GIGAGaugeOverride4 = (INT)((INT)1230);
				GIGAGaugeOverride5 = (INT)((INT)2420);
				GIGABarGaugeOverride = (USINT)((SINT)80);
				GIGAEngineOilPressure = (UINT)((SINT)0);
				GIGAEngineTempValue = (UINT)((SINT)0);
				GIGAEngineSpeed = (UINT)((SINT)0);
				GIGATransOilTemperature = (UINT)((SINT)0);
				GIGAFuelLevel = (UINT)((SINT)0);
				GIGASpeed = (UINT)((SINT)0);
			} else if  ( TRUE ) {
				GIGALedOverride = FALSE;
				GIGAGaugeOverride0 = (INT)((SINT)0);
				GIGAGaugeOverride1 = (INT)((SINT)0);
				GIGAGaugeOverride2 = (INT)((SINT)0);
				GIGAGaugeOverride3 = (INT)((SINT)0);
				GIGAGaugeOverride4 = (INT)((SINT)0);
				GIGAGaugeOverride5 = (INT)((SINT)0);
				GIGABarGaugeOverride = (USINT)((SINT)0);
			}
		} else if  ( AND_BOOL((BIT_Test_Init),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Buzzer_Ctr2),
				((SINT)100))) ) {
			GIGALedOverride = FALSE;
			GIGAGaugeOverride0 = (INT)((SINT)0);
			GIGAGaugeOverride1 = (INT)((SINT)0);
			GIGAGaugeOverride2 = (INT)((SINT)0);
			GIGAGaugeOverride3 = (INT)((SINT)0);
			GIGAGaugeOverride4 = (INT)((SINT)0);
			GIGAGaugeOverride5 = (INT)((SINT)0);
			GIGABarGaugeOverride = (USINT)((SINT)0);
		} else if  ( AND_BOOL((BIT_Test_Init),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Buzzer_Ctr2),
				((SINT)100))) ) {
			BIT_Test_Init = FALSE;
			GIGAGaugeOverride0 = (INT)((SINT)0);
			GIGAGaugeOverride1 = (INT)((SINT)0);
			GIGAGaugeOverride2 = (INT)((SINT)0);
			GIGAGaugeOverride3 = (INT)((SINT)0);
			GIGAGaugeOverride4 = (INT)((SINT)0);
			GIGAGaugeOverride5 = (INT)((SINT)0);
			GIGABarGaugeOverride = (USINT)((SINT)0);
		}

		GIGA_MC2M_GIGAOdometerBackup = (UDINT)VT3_ATOMIC_READ_UDINT(GIGAOdometerBackup);

		if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)5)),
			((SINT)0)) ) {
			toggle_500ms = NOT_BOOL((toggle_500ms));
		}

		if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)2)),
			((SINT)0)) ) {
			toggle_200ms = NOT_BOOL((toggle_200ms));
		}

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

#endif /* INCLUDE__VT3_POU__MAINFUNCTIONS_C */

/* end of file */
