/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINFUELLEVEL_C
#define INCLUDE__VT3_POU__MAINFUELLEVEL_C

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
static const vt3_screen_initializer FAR __init_table__mainFuelLevel[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainFuelLevel[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainFuelLevel_t FAR __const__mainFuelLevel__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainFuelLevel__param_init */

/* initialization of PROGRAM status */
void mainFuelLevel__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainFuelLevel; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainFuelLevel, &__const__mainFuelLevel__param_init, sizeof __const__mainFuelLevel__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainFuelLevel__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	mainFuelLevel.ENO = mainFuelLevel.EN;
	if ( ! mainFuelLevel.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalFuelLevelInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_259 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_259; i += 1 )
			{
				FuelLevelInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)1)),
					(i)), 100)] = (UINT)(FuelLevelInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		FuelLevelInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)SINT_TO_UINT((MC2M_TERA_FuelLevel_1));

		{
			/* for loop */
			const SINT _forstop_575 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_575; i += 1 )
			{
				TotalFuelLevelInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalFuelLevelInput),
					(FuelLevelInputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		FuelLevel = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalFuelLevelInput)),
				SINT_TO_REAL((SINT)(((SINT)100)))));

		if ( EQ_WORD_2((FuelLevel),
			((SINT)0)) ) {
			GIGAFuelLevel = (UINT)INT_TO_UINT((INT)(((INT)60)));
		} else if  ( LE_WORD_2((FuelLevel),
			((SINT)50)) ) {
			GIGAFuelLevel = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((FuelLevel)),
					((SINT)0),
					((SINT)50),
					(INT)(((INT)60)),
					(INT)(((INT)630))));
		} else if  ( LE_WORD_2((FuelLevel),
			((SINT)100)) ) {
			GIGAFuelLevel = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((FuelLevel)),
					((SINT)50),
					((SINT)100),
					(INT)(((INT)630)),
					(INT)(((INT)1200))));
		} else if  ( TRUE ) {
			GIGAFuelLevel = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((FuelLevel)),
					((SINT)100),
					((SINT)120),
					(INT)(((INT)1200)),
					ADD_INT((INT)(((INT)1200)),
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

#endif /* INCLUDE__VT3_POU__MAINFUELLEVEL_C */

/* end of file */
