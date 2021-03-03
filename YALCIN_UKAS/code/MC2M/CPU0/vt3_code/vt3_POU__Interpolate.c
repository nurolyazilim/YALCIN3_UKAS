/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__INTERPOLATE_C
#define INCLUDE__VT3_POU__INTERPOLATE_C

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

/* FUNCTION definition */
INT Interpolate(INT xm, INT x1, INT x2, INT y1, INT y2)
{
	/* local constants */

	/* local variables */
	INT DataA = ((INT)0); /* Local Data A */
	INT DataB = ((INT)0); /* Local Data B */
	INT DataC = ((INT)0); /* Local Data C */
	INT DataD = ((INT)0); /* Local Data D */
	INT FUNC = ((INT)0); /* Return Value */
	/* end of local variables */

	/* body of code */
	{
		/* literal constants used in ST */
		/* end of literals */

		/* temporary variable for the return value */
		INT __result__ = ((INT)0);

		/* statements */
		if ( EQ_INT_2((INT)(x1),
			(INT)(x2)) ) {
			__result__ = (INT)(INT)(y1);
			goto __return__;
		}

		DataA = (INT)SUB_INT((INT)(y2),
			(INT)(y1));

		DataB = (INT)SUB_INT((INT)(xm),
			(INT)(x1));

		DataC = (INT)SUB_INT((INT)(x2),
			(INT)(x1));

		DataD = (INT)ADD_INT(REAL_TO_INT(DIV_REAL(MUL_REAL(INT_TO_REAL((DataA)),
						INT_TO_REAL((DataB))),
					INT_TO_REAL((DataC)))),
			(INT)(y1));

		if ( GT_INT_2((DataD),
			((INT)32000)) ) {
			__result__ = (INT)((INT)32000);
			goto __return__;
		}

		if ( LT_INT_2((DataD),
			((INT)-32000)) ) {
			__result__ = (INT)((INT)-32000);
			goto __return__;
		}

		__result__ = (INT)(DataD);

		goto __return__;

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return __result__;

	}


	/* end of FUNCTION body */
} /* end of FUNCTION Interpolate */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__INTERPOLATE_C */

/* end of file */
