/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__WINCHCONTROL_C
#define INCLUDE__VT3_POU__WINCHCONTROL_C

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
static const vt3_screen_initializer FAR __init_table__WinchControl[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__WinchControl[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const WinchControl_t FAR __const__WinchControl__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__WinchControl__param_init */

/* initialization of PROGRAM status */
void WinchControl__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__WinchControl; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&WinchControl, &__const__WinchControl__param_init, sizeof __const__WinchControl__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void WinchControl__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	WinchControl.ENO = WinchControl.EN;
	if ( ! WinchControl.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		stat_endOfRope = (IOMODE_2_DIGIN06_EndOfRope);

		stat_winch_clutch_RC = (IOMODE_2_DIGIN10_Winch_RC_Clutch);

		stat_winch_clutch_RS = (IOMODE_2_DIGIN08_Winch_RS_Clutch);

		stat_winch_Up_RS = AND_BOOL((IOMODE_2_DIGIN11_Winch_RS_Up),
			NOT_BOOL((IOMODE_2_DIGIN09_Winch_RS_Down)));

		stat_winch_Down_RS = AND_BOOL((IOMODE_2_DIGIN09_Winch_RS_Down),
			NOT_BOOL((IOMODE_2_DIGIN11_Winch_RS_Up)));

		stat_winch_Up_RC = AND_BOOL((IOMODE_2_DIGIN00_Winch_RC_Up),
			NOT_BOOL((IOMODE_2_DIGIN02_Winch_RC_Down)));

		stat_winch_Down_RC = AND_BOOL((IOMODE_2_DIGIN02_Winch_RC_Down),
			NOT_BOOL((IOMODE_2_DIGIN00_Winch_RC_Up)));

		MC2M_MUX_DIGOUT23_Winch_Up = OR_BOOL(AND_BOOL((stat_winch_Up_RS),
				NOT_BOOL((stat_winch_Down_RC))),
			(stat_winch_Up_RC));

		MC2M_MUX_DIGOUT24_Winch_Down = OR_BOOL(AND_BOOL((stat_winch_Down_RS),
				NOT_BOOL((stat_winch_Up_RC))),
			(stat_winch_Down_RC));

		MC2M_MUX_DIGOUT25_Winch_Clutch = OR_BOOL((stat_winch_clutch_RC),
			(stat_winch_clutch_RS));

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

#endif /* INCLUDE__VT3_POU__WINCHCONTROL_C */

/* end of file */