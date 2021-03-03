/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINENGINEOILPRESSURE_C
#define INCLUDE__VT3_POU__MAINENGINEOILPRESSURE_C

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
static const vt3_screen_initializer FAR __init_table__mainEngineOilPressure[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainEngineOilPressure[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainEngineOilPressure_t FAR __const__mainEngineOilPressure__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainEngineOilPressure__param_init */

/* initialization of PROGRAM status */
void mainEngineOilPressure__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainEngineOilPressure; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainEngineOilPressure, &__const__mainEngineOilPressure__param_init, sizeof __const__mainEngineOilPressure__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainEngineOilPressure__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	mainEngineOilPressure.ENO = mainEngineOilPressure.EN;
	if ( ! mainEngineOilPressure.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalEngineOilPressureInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_301 = SUB_SINT((SINT)(((SINT)30)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_301; i += 1 )
			{
				EngineOilPressureInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)30)),
						((SINT)1)),
					(i)), 100)] = (UINT)(EngineOilPressureInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)30)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		EngineOilPressureInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_EngineOilPressure);

		{
			/* for loop */
			const SINT _forstop_665 = SUB_SINT((SINT)(((SINT)30)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_665; i += 1 )
			{
				TotalEngineOilPressureInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalEngineOilPressureInput),
					(EngineOilPressureInputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		EngineOilPressure = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalEngineOilPressureInput)),
				SINT_TO_REAL((SINT)(((SINT)30)))));

		if ( EQ_WORD_2((EngineOilPressure),
			((SINT)0)) ) {
			GIGAEngineOilPressure = (UINT)INT_TO_UINT((INT)(((INT)25)));
		} else if  ( LE_WORD_2((EngineOilPressure),
			((SINT)40)) ) {
			GIGAEngineOilPressure = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineOilPressure)),
					((SINT)0),
					((SINT)40),
					(INT)(((INT)25)),
					(INT)(((INT)625))));
		} else if  ( LE_WORD_2((EngineOilPressure),
			((SINT)80)) ) {
			GIGAEngineOilPressure = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineOilPressure)),
					((SINT)40),
					((SINT)80),
					(INT)(((INT)625)),
					(INT)(((INT)1235))));
		} else if  ( TRUE ) {
			GIGAEngineOilPressure = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineOilPressure)),
					((SINT)80),
					((SINT)100),
					(INT)(((INT)1235)),
					ADD_INT((INT)(((INT)1235)),
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

#endif /* INCLUDE__VT3_POU__MAINENGINEOILPRESSURE_C */

/* end of file */
