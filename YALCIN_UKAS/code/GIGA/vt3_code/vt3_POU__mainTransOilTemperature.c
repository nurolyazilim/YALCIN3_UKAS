/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINTRANSOILTEMPERATURE_C
#define INCLUDE__VT3_POU__MAINTRANSOILTEMPERATURE_C

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
static const vt3_screen_initializer FAR __init_table__mainTransOilTemperature[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainTransOilTemperature[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainTransOilTemperature_t FAR __const__mainTransOilTemperature__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainTransOilTemperature__param_init */

/* initialization of PROGRAM status */
void mainTransOilTemperature__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainTransOilTemperature; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainTransOilTemperature, &__const__mainTransOilTemperature__param_init, sizeof __const__mainTransOilTemperature__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainTransOilTemperature__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	mainTransOilTemperature.ENO = mainTransOilTemperature.EN;
	if ( ! mainTransOilTemperature.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalTransOilTemperatureInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_310 = SUB_SINT((SINT)(((SINT)20)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_310; i += 1 )
			{
				TransOilTemperatureInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)20)),
						((SINT)1)),
					(i)), 100)] = (UINT)(TransOilTemperatureInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)20)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		TransOilTemperatureInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_TransOilTemperature);

		{
			/* for loop */
			const SINT _forstop_688 = SUB_SINT((SINT)(((SINT)20)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_688; i += 1 )
			{
				TotalTransOilTemperatureInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalTransOilTemperatureInput),
					(TransOilTemperatureInputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		TransOilTemperature = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalTransOilTemperatureInput)),
				SINT_TO_REAL((SINT)(((SINT)20)))));

		if ( LE_WORD_2((TransOilTemperature),
			((SINT)70)) ) {
			GIGATransOilTemperature = (UINT)INT_TO_UINT((INT)(((INT)70)));
		} else if  ( LE_WORD_2((TransOilTemperature),
			((SINT)120)) ) {
			GIGATransOilTemperature = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((TransOilTemperature)),
					((SINT)70),
					((SINT)120),
					(INT)(((INT)70)),
					(INT)(((INT)630))));
		} else if  ( LE_WORD_2((TransOilTemperature),
			((INT)170)) ) {
			GIGATransOilTemperature = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((TransOilTemperature)),
					((SINT)120),
					((INT)170),
					(INT)(((INT)630)),
					(INT)(((INT)1200))));
		} else if  ( TRUE ) {
			GIGATransOilTemperature = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((TransOilTemperature)),
					((INT)170),
					((INT)190),
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

#endif /* INCLUDE__VT3_POU__MAINTRANSOILTEMPERATURE_C */

/* end of file */
