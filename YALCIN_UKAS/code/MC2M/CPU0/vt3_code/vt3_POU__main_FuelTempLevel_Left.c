/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_FUELTEMPLEVEL_LEFT_C
#define INCLUDE__VT3_POU__MAIN_FUELTEMPLEVEL_LEFT_C

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
static const vt3_screen_initializer FAR __init_table__main_FuelTempLevel_Left[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_FuelTempLevel_Left[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_FuelTempLevel_Left_t FAR __const__main_FuelTempLevel_Left__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i                    */ ((SINT)0),
}; /* end of __const__main_FuelTempLevel_Left__param_init */

/* initialization of PROGRAM status */
void main_FuelTempLevel_Left__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_FuelTempLevel_Left; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_FuelTempLevel_Left, &__const__main_FuelTempLevel_Left__param_init, sizeof __const__main_FuelTempLevel_Left__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_FuelTempLevel_Left__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	main_FuelTempLevel_Left.ENO = main_FuelTempLevel_Left.EN;
	if ( ! main_FuelTempLevel_Left.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalTempInput_FuelT_L = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_196 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)2));
			for ( main_FuelTempLevel_Left.i = ((SINT)0); main_FuelTempLevel_Left.i <= _forstop_196; main_FuelTempLevel_Left.i += 1 )
			{
				TempInputArray_FuelT_L[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)1)),
					(main_FuelTempLevel_Left.i)), 100)] = (UINT)(TempInputArray_FuelT_L[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)2)),
					(main_FuelTempLevel_Left.i)), 100)]);
			}
			
		}

		TempInputArray_FuelT_L[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(AIN_FuelTankLeft_Temp);

		{
			/* for loop */
			const SINT _forstop_531 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)1));
			for ( main_FuelTempLevel_Left.i = ((SINT)0); main_FuelTempLevel_Left.i <= _forstop_531; main_FuelTempLevel_Left.i += 1 )
			{
				TotalTempInput_FuelT_L = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalTempInput_FuelT_L),
					(TempInputArray_FuelT_L[vt3_check_array_boundary((main_FuelTempLevel_Left.i), 100)]));
			}
			
		}

		TempInputFiltered_FuelT_L = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalTempInput_FuelT_L)),
				SINT_TO_REAL((SINT)(((SINT)50)))));

		if ( (NMSGUI_MC2M_fuel_temp_left_touch) ) {
			TempLevel_Normalized_FuelT_L = (INT)(NMSGUI_MC2M_fuel_temp_left);
		} else if  ( TRUE ) {
			if ( LT_DINT_2((TempInputFiltered_FuelT_L),
				(INT)(((INT)40))) ) {
				TempLevel_Normalized_FuelT_L = (INT)(INT)(((INT)-40));
			} else if  ( LE_DINT_2((TempInputFiltered_FuelT_L),
				(INT)(((INT)204))) ) {
				TempLevel_Normalized_FuelT_L = (INT)Interpolate(UINT_TO_INT((TempInputFiltered_FuelT_L)),
					(INT)(((INT)40)),
					(INT)(((INT)204)),
					(INT)(((INT)-40)),
					(INT)(((INT)150)));
			} else if  ( TRUE ) {
				TempLevel_Normalized_FuelT_L = (INT)(INT)(((INT)150));
			}
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

#endif /* INCLUDE__VT3_POU__MAIN_FUELTEMPLEVEL_LEFT_C */

/* end of file */
