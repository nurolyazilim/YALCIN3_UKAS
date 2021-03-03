/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINWIPERS_C
#define INCLUDE__VT3_POU__MAINWIPERS_C

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
static const vt3_screen_initializer FAR __init_table__mainWipers[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainWipers[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainWipers_t FAR __const__mainWipers__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* WIPER_DELAY          */ ((UDINT)2UL),
	/* Wiper_Req_Tout       */ ((UDINT)0UL),
}; /* end of __const__mainWipers__param_init */

/* initialization of PROGRAM status */
void mainWipers__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainWipers; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainWipers, &__const__mainWipers__param_init, sizeof __const__mainWipers__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainWipers__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainWipers.ENO = mainWipers.EN;
	if ( ! mainWipers.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( OR_BOOL(OR_BOOL(OR_BOOL((DIGIN_WiperHigh),
					(DIGIN_WiperLow)),
				(DIGIN_WiperIntermittent)),
			(DIGIN_WiperWasher)) ) {
			if ( LT_DWORD_2(VT3_ATOMIC_READ_UDINT(mainWipers.Wiper_Req_Tout),
				VT3_ATOMIC_READ_UDINT(mainWipers.WIPER_DELAY)) ) {
				mainWipers.Wiper_Req_Tout = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(mainWipers.Wiper_Req_Tout),
					((SINT)1));
			} else if  ( TRUE ) {
				Cmd_WiperHigh = (DIGIN_WiperHigh);
				Cmd_WiperLow = (DIGIN_WiperLow);
				Cmd_WiperIntermittent1 = (DIGIN_WiperIntermittent);
				Cmd_WiperIntermittent2 = (Cmd_WiperIntermittent1);
				Stat_Washer = (DIGIN_WiperWasher);
				DOUT_Washer = (Stat_Washer);
			}
		} else if  ( TRUE ) {
			mainWipers.Wiper_Req_Tout = (UDINT)((SINT)0);
			Cmd_WiperHigh = FALSE;
			Cmd_WiperLow = FALSE;
			Cmd_WiperIntermittent1 = FALSE;
			Cmd_WiperIntermittent2 = FALSE;
			Stat_Washer = FALSE;
			DOUT_Washer = (Stat_Washer);
		}

		if ( (Cmd_WiperHigh) ) {
			Stat_Wiper = (SINT)((SINT)4);
		} else if  ( (Cmd_WiperLow) ) {
			Stat_Wiper = (SINT)((SINT)3);
		} else if  ( (Cmd_WiperIntermittent1) ) {
			Stat_Wiper = (SINT)((SINT)1);
		} else if  ( TRUE ) {
			Stat_Wiper = (SINT)((SINT)0);
		}

		WasherWiperTimer.PT = ((INT)8000);

		WasherWiperTimer.IN = (Stat_Washer);

		
		TOF__call(&WasherWiperTimer);

		if ( OR_BOOL((WasherWiperTimer.Q),
			(DIGIN_WiperWasher)) ) {
			if ( LT_TIME_2(VT3_ATOMIC_READ_TIME(WasherWiperTimer.ET),
				1500) ) {
				Stat_Wiper = (SINT)((SINT)4);
			} else if  ( LT_TIME_2(VT3_ATOMIC_READ_TIME(WasherWiperTimer.ET),
				3000) ) {
				Stat_Wiper = (SINT)((SINT)3);
			} else if  ( LT_TIME_2(VT3_ATOMIC_READ_TIME(WasherWiperTimer.ET),
				7000) ) {
				Stat_Wiper = (SINT)((SINT)0);
			} else if  ( TRUE ) {
				Stat_Wiper = (SINT)((SINT)3);
			}
		}

		ParkClose_TP.IN = EQ_SINT_2((Stat_Wiper),
			((SINT)0));

		ParkClose_TP.PT = ((INT)8000);

		
		TP__call(&ParkClose_TP);

		if ( ((EQ_SINT_2((Stat_Wiper),
			((SINT)1))) || (EQ_SINT_2((Stat_Wiper),
			((SINT)2)))) ) {
			Cmd_Wiper_Intermittent1_Ctr = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Cmd_Wiper_Intermittent1_Ctr),
				((SINT)100));
		} else if  ( TRUE ) {
			Cmd_Wiper_Intermittent1_Ctr = (UDINT)((SINT)0);
			Stat_Wiper_Intermittent1 = FALSE;
		}

		switch ( (Stat_Wiper) )
		{
		case 0:
			DOUT_WiperMotor_1 = FALSE;
			DOUT_WiperMotor_2 = FALSE;
			DOUT_WiperMotorLow_1 = FALSE;
			DOUT_WiperMotorLow_2 = FALSE;
			break;
		case 1:
			DOUT_WiperMotor_1 = FALSE;
			DOUT_WiperMotor_2 = FALSE;
			if ( GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Wiper_Intermittent1_Ctr),
				((INT)5000)) ) {
				Cmd_Wiper_Intermittent1_Ctr = (UDINT)((SINT)0);
			} else if  ( LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Wiper_Intermittent1_Ctr),
				((INT)1000)) ) {
				Stat_Wiper_Intermittent1 = TRUE;
				DOUT_WiperMotorLow_1 = TRUE;
				DOUT_WiperMotorLow_2 = TRUE;
				IsWiper1Stopped = FALSE;
				IsWiper2Stopped = FALSE;
			} else if  ( TRUE ) {
				DOUT_WiperMotorLow_1 = FALSE;
				DOUT_WiperMotorLow_2 = FALSE;
			}
			Stat_WiperOld = (SINT)(Stat_Wiper);
			break;
		case 2:
			DOUT_WiperMotorLow_1 = FALSE;
			DOUT_WiperMotorLow_2 = FALSE;
			if ( GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Wiper_Intermittent1_Ctr),
				((INT)5000)) ) {
				Cmd_Wiper_Intermittent1_Ctr = (UDINT)((SINT)0);
			} else if  ( LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_Wiper_Intermittent1_Ctr),
				((INT)500)) ) {
				Stat_Wiper_Intermittent1 = TRUE;
				DOUT_WiperMotor_1 = TRUE;
				DOUT_WiperMotor_2 = TRUE;
				IsWiper1Stopped = FALSE;
				IsWiper2Stopped = FALSE;
			} else if  ( TRUE ) {
				DOUT_WiperMotor_1 = FALSE;
				DOUT_WiperMotor_2 = FALSE;
			}
			Stat_WiperOld = (SINT)(Stat_Wiper);
			break;
		case 3:
			DOUT_WiperMotor_1 = FALSE;
			DOUT_WiperMotor_2 = FALSE;
			DOUT_WiperMotorLow_1 = TRUE;
			DOUT_WiperMotorLow_2 = TRUE;
			Stat_WiperOld = (SINT)(Stat_Wiper);
			IsWiper1Stopped = FALSE;
			IsWiper2Stopped = FALSE;
			break;
		case 4:
			DOUT_WiperMotorLow_1 = FALSE;
			DOUT_WiperMotorLow_2 = FALSE;
			DOUT_WiperMotor_1 = TRUE;
			DOUT_WiperMotor_2 = TRUE;
			Stat_WiperOld = (SINT)(Stat_Wiper);
			IsWiper1Stopped = FALSE;
			IsWiper2Stopped = FALSE;
			break;
		default:
			DOUT_WiperMotorLow_1 = FALSE;
			DOUT_WiperMotorLow_2 = FALSE;
			Stat_WiperOld = (SINT)(Stat_Wiper);
			;
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

#endif /* INCLUDE__VT3_POU__MAINWIPERS_C */

/* end of file */
