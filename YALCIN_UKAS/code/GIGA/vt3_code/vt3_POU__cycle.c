/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
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
		static const STRING(1) FAR _const_0 = { 1, 1, "0" };
		static const STRING(0) FAR _const_1 = { 0, 0, "" };
		static const STRING(1) FAR _const_2 = { 1, 1, "0" };
		static const STRING(0) FAR _const_3 = { 0, 0, "" };
		static const STRING(2) FAR _const_4 = { 2, 2, "/0" };
		static const STRING(1) FAR _const_5 = { 1, 1, "/" };
		static const STRING(1) FAR _const_6 = { 1, 1, "/" };
		static const STRING(1) FAR _const_7 = { 1, 1, "/" };
		static const STRING(1) FAR _const_8 = { 1, 1, ":" };
		/* end of literals */

		/* statements */
		MainLoop = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
			((SINT)1));

		if ( LT_DWORD_2(VT3_ATOMIC_READ_UDINT(MainLoop),
			((SINT)2)) ) {
			vt3_language = (UINT)(Vt3_languageSetVar);
		}

		

		DateTimeNow = GET_CURRENT_DATE_AND_TIME();

		if ( (SetDateTime) ) {
			SET_CURRENT_DATE_AND_TIME(VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeUpdate));
			DateTimeNow = GET_CURRENT_DATE_AND_TIME();
			if ( EQ_DATE_AND_TIME_2(VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeNow),
				VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeUpdate)) ) {
				SetDateTime = FALSE;
			}
		}

		DateNow = DT_TO_DATE(VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeNow));

		TimeNow = DT_TO_TOD(VT3_ATOMIC_READ_DATE_AND_TIME(DateTimeNow));

		if ( LT_INT_2(DATE_TO_DAY(VT3_ATOMIC_READ_DATE(DateNow)),
			((SINT)10)) ) {
			MOVE_STRING((PSTRING)&ZeroPrefixDay, (PSTRING)&_const_0);
		} else if  ( TRUE ) {
			MOVE_STRING((PSTRING)&ZeroPrefixDay, (PSTRING)&_const_1);
		}

		if ( LT_INT_2(TOD_TO_MINUTE(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow)),
			((SINT)10)) ) {
			MOVE_STRING((PSTRING)&ZeroPrefixMinute, (PSTRING)&_const_2);
		} else if  ( TRUE ) {
			MOVE_STRING((PSTRING)&ZeroPrefixMinute, (PSTRING)&_const_3);
		}

		if ( NOT_BOOL((DateTimeUpdating)) ) {
			if ( LT_INT_2(DATE_TO_MONTH(VT3_ATOMIC_READ_DATE(DateNow)),
				((SINT)10)) ) {
				MOVE_STRING((PSTRING)&DateOnScreen, CONCAT_STRING(6,
					(PSTRING)&(ZeroPrefixDay),
					INT_TO_STRING(DATE_TO_DAY(VT3_ATOMIC_READ_DATE(DateNow))),
					(PSTRING)&_const_4,
					INT_TO_STRING(DATE_TO_MONTH(VT3_ATOMIC_READ_DATE(DateNow))),
					(PSTRING)&_const_5,
					INT_TO_STRING(DATE_TO_YEAR(VT3_ATOMIC_READ_DATE(DateNow)))));
			} else if  ( TRUE ) {
				MOVE_STRING((PSTRING)&DateOnScreen, CONCAT_STRING(6,
					(PSTRING)&(ZeroPrefixDay),
					INT_TO_STRING(DATE_TO_DAY(VT3_ATOMIC_READ_DATE(DateNow))),
					(PSTRING)&_const_6,
					INT_TO_STRING(DATE_TO_MONTH(VT3_ATOMIC_READ_DATE(DateNow))),
					(PSTRING)&_const_7,
					INT_TO_STRING(DATE_TO_YEAR(VT3_ATOMIC_READ_DATE(DateNow)))));
			}
			MOVE_STRING((PSTRING)&TimeOnScreen, CONCAT_STRING(4,
				INT_TO_STRING(TOD_TO_HOUR(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow))),
				(PSTRING)&_const_8,
				(PSTRING)&(ZeroPrefixMinute),
				INT_TO_STRING(TOD_TO_MINUTE(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow)))));
		}

		if ( (SaveParameter) ) {
			save_bytearray_P();
		}

		led_tmp = FALSE;

		if ( NOT_BOOL((DIGIN_KEY_K15)) ) {
			
			mainIgnitionOff__call();
			IgnitionOn = FALSE;
			GIGALedOverride = FALSE;
			BIT_Test_Init = TRUE;
		} else if  ( TRUE ) {
			IgnitionOn = TRUE;
			
			mainFunctions__call();
			
			MessageReceiver__call();
			Light_An_Inp = (UINT)(AinLightInp);
			if ( NOT_BOOL((MC2M_TERA_Icon_Status_BO_S1)) ) {
				BacklightScreen = (UINT)(BacklightScreenSetVarH);
				if ( (MC2M_TERA_Icon_Status_L11) ) {
					Backlight = (UINT)(BacklightSetVarH);
				} else if  ( TRUE ) {
					Backlight = (UINT)(BacklightSetVarL);
				}
			} else if  ( TRUE ) {
				Backlight = (UINT)((SINT)0);
				BacklightScreen = (UINT)(BacklightScreenSetVarL);
			}
		}

		if ( LE_WORD_2((PanelBrightH),
			((SINT)1)) ) {
			BacklightSetVarH = (UINT)((SINT)50);
		} else if  ( TRUE ) {
			BacklightSetVarH = (UINT)MUL_UINT((PanelBrightH),
				((SINT)100));
		}

		if ( LE_WORD_2((PanelBrightL),
			((SINT)1)) ) {
			BacklightSetVarL = (UINT)((SINT)50);
		} else if  ( TRUE ) {
			BacklightSetVarL = (UINT)MUL_UINT((PanelBrightL),
				((SINT)100));
		}

		if ( LE_WORD_2((ScreenBrightH),
			((SINT)1)) ) {
			BacklightScreenSetVarH = (UINT)((SINT)50);
		} else if  ( TRUE ) {
			BacklightScreenSetVarH = (UINT)MUL_UINT((ScreenBrightH),
				((SINT)100));
		}

		if ( LE_WORD_2((ScreenBrightL),
			((SINT)1)) ) {
			BacklightScreenSetVarL = (UINT)((SINT)50);
		} else if  ( TRUE ) {
			BacklightScreenSetVarL = (UINT)MUL_UINT((ScreenBrightL),
				((SINT)100));
		}

		if ( GT_WORD_2((BacklightScreenSetVarH),
			((INT)1200)) ) {
			BacklightScreenSetVarH = (UINT)((INT)1200);
			save_bytearray_P();
		}

		if ( GT_WORD_2((BacklightScreenSetVarL),
			((INT)1200)) ) {
			BacklightScreenSetVarL = (UINT)((INT)1200);
			save_bytearray_P();
		}

		if ( GT_WORD_2((BacklightSetVarH),
			((INT)1200)) ) {
			BacklightSetVarH = (UINT)((INT)1200);
			save_bytearray_P();
		}

		if ( GT_WORD_2((BacklightSetVarL),
			((INT)1200)) ) {
			BacklightSetVarL = (UINT)((INT)1200);
			save_bytearray_P();
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

#endif /* INCLUDE__VT3_POU__CYCLE_C */

/* end of file */
