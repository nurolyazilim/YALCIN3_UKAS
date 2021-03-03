/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINSPEEDOMETER_C
#define INCLUDE__VT3_POU__MAINSPEEDOMETER_C

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
static const vt3_screen_initializer FAR __init_table__mainSpeedometer[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainSpeedometer[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainSpeedometer_t FAR __const__mainSpeedometer__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainSpeedometer__param_init */

/* initialization of PROGRAM status */
void mainSpeedometer__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainSpeedometer; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainSpeedometer, &__const__mainSpeedometer__param_init, sizeof __const__mainSpeedometer__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainSpeedometer__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	mainSpeedometer.ENO = mainSpeedometer.EN;
	if ( ! mainSpeedometer.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalSpeedometerInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_199 = SUB_SINT((SINT)(((SINT)20)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_199; i += 1 )
			{
				SpeedometerInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)20)),
						((SINT)1)),
					(i)), 100)] = (UINT)(SpeedometerInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)20)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		SpeedometerInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_VehicleSpeed);

		{
			/* for loop */
			const SINT _forstop_512 = SUB_SINT((SINT)(((SINT)20)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_512; i += 1 )
			{
				TotalSpeedometerInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalSpeedometerInput),
					(SpeedometerInputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		Speedometer = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalSpeedometerInput)),
				SINT_TO_REAL((SINT)(((SINT)20)))));

		if ( EQ_WORD_2((Speedometer),
			((SINT)0)) ) {
			GIGASpeed = (UINT)INT_TO_UINT((INT)(((INT)30)));
		} else if  ( LE_WORD_2((Speedometer),
			((SINT)70)) ) {
			GIGASpeed = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((Speedometer)),
					((SINT)0),
					((SINT)70),
					(INT)(((INT)30)),
					(INT)(((INT)1210))));
		} else if  ( LE_WORD_2((Speedometer),
			((INT)140)) ) {
			GIGASpeed = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((Speedometer)),
					((SINT)70),
					((INT)140),
					(INT)(((INT)1210)),
					(INT)(((INT)2430))));
		} else if  ( TRUE ) {
			GIGASpeed = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((Speedometer)),
					((INT)140),
					((INT)160),
					(INT)(((INT)2430)),
					ADD_INT((INT)(((INT)2430)),
						((INT)200))));
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

#endif /* INCLUDE__VT3_POU__MAINSPEEDOMETER_C */

/* end of file */
