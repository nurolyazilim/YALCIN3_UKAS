/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_HYDROLICPRESSURESENSOR_C
#define INCLUDE__VT3_POU__MAIN_HYDROLICPRESSURESENSOR_C

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
static const vt3_screen_initializer FAR __init_table__main_HydrolicPressureSensor[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_HydrolicPressureSensor[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_HydrolicPressureSensor_t FAR __const__main_HydrolicPressureSensor__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i                    */ ((SINT)0),
}; /* end of __const__main_HydrolicPressureSensor__param_init */

/* initialization of PROGRAM status */
void main_HydrolicPressureSensor__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_HydrolicPressureSensor; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_HydrolicPressureSensor, &__const__main_HydrolicPressureSensor__param_init, sizeof __const__main_HydrolicPressureSensor__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_HydrolicPressureSensor__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	main_HydrolicPressureSensor.ENO = main_HydrolicPressureSensor.EN;
	if ( ! main_HydrolicPressureSensor.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalPresInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_261 = SUB_SINT((AverageQuantityPres),
			((SINT)2));
			for ( main_HydrolicPressureSensor.i = ((SINT)0); main_HydrolicPressureSensor.i <= _forstop_261; main_HydrolicPressureSensor.i += 1 )
			{
				PresInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((AverageQuantityPres),
						((SINT)1)),
					(main_HydrolicPressureSensor.i)), 100)] = (UINT)(PresInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((AverageQuantityPres),
						((SINT)2)),
					(main_HydrolicPressureSensor.i)), 100)]);
			}
			
		}

		PresInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(AIN_VVR_Pressure);

		{
			/* for loop */
			const SINT _forstop_536 = SUB_SINT((AverageQuantityPres),
			((SINT)1));
			for ( main_HydrolicPressureSensor.i = ((SINT)0); main_HydrolicPressureSensor.i <= _forstop_536; main_HydrolicPressureSensor.i += 1 )
			{
				TotalPresInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalPresInput),
					(PresInputArray[vt3_check_array_boundary((main_HydrolicPressureSensor.i), 100)]));
			}
			
		}

		InputFilteredPres = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalPresInput)),
				SINT_TO_REAL((AverageQuantityPres))));

		if ( LT_DINT_2((InputFilteredPres),
			(INT)(((INT)12000))) ) {
			PresLevel_Normalized = (SINT)((SINT)0);
		} else if  ( LE_DINT_2((InputFilteredPres),
			(INT)(((INT)20000))) ) {
			PresLevel_Normalized = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((InputFilteredPres)),
					(INT)(((INT)12000)),
					(INT)(((INT)20000)),
					(INT)(((INT)0)),
					(INT)(((INT)100))));
		} else if  ( TRUE ) {
			PresLevel_Normalized = (SINT)((SINT)100);
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

#endif /* INCLUDE__VT3_POU__MAIN_HYDROLICPRESSURESENSOR_C */

/* end of file */
