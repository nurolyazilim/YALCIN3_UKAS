/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_FUELLEVEL_RIGHT_C
#define INCLUDE__VT3_POU__MAIN_FUELLEVEL_RIGHT_C

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
static const vt3_screen_initializer FAR __init_table__main_FuelLevel_Right[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_FuelLevel_Right[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_FuelLevel_Right_t FAR __const__main_FuelLevel_Right__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__main_FuelLevel_Right__param_init */

/* initialization of PROGRAM status */
void main_FuelLevel_Right__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_FuelLevel_Right; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_FuelLevel_Right, &__const__main_FuelLevel_Right__param_init, sizeof __const__main_FuelLevel_Right__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_FuelLevel_Right__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	main_FuelLevel_Right.ENO = main_FuelLevel_Right.EN;
	if ( ! main_FuelLevel_Right.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalFuelInput_R = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_142 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_142; i += 1 )
			{
				FuelInputArray_R[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)1)),
					(i)), 100)] = (UINT)(FuelInputArray_R[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		FuelInputArray_R[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(AIN_Tank_Right_Level);

		{
			/* for loop */
			const SINT _forstop_416 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_416; i += 1 )
			{
				TotalFuelInput_R = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalFuelInput_R),
					(FuelInputArray_R[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		FuelInputFiltered_R = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalFuelInput_R)),
				SINT_TO_REAL((SINT)(((SINT)100)))));

		if ( OR_BOOL(LT_WORD_2((FuelInputFiltered_R),
				((SINT)1)),
			GT_WORD_2((FuelInputFiltered_R),
				((INT)200))) ) {
			FuelLevel_Normalized_R = (SINT)((SINT)110);
		} else if  ( LT_DINT_2((FuelInputFiltered_R),
			(INT)(((INT)3))) ) {
			FuelLevel_Normalized_R = (SINT)((SINT)0);
		} else if  ( LE_DINT_2((FuelInputFiltered_R),
			(INT)(((INT)36))) ) {
			FuelLevel_Normalized_R = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_R)),
					(INT)(((INT)3)),
					(INT)(((INT)36)),
					(INT)(((INT)0)),
					(INT)(((INT)25))));
		} else if  ( LE_DINT_2((FuelInputFiltered_R),
			(INT)(((INT)60))) ) {
			FuelLevel_Normalized_R = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_R)),
					(INT)(((INT)36)),
					(INT)(((INT)60)),
					(INT)(((INT)25)),
					(INT)(((INT)50))));
		} else if  ( LE_DINT_2((FuelInputFiltered_R),
			(INT)(((INT)101))) ) {
			FuelLevel_Normalized_R = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_R)),
					(INT)(((INT)60)),
					(INT)(((INT)101)),
					(INT)(((INT)50)),
					(INT)(((INT)75))));
		} else if  ( LE_DINT_2((FuelInputFiltered_R),
			(INT)(((INT)176))) ) {
			FuelLevel_Normalized_R = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_R)),
					(INT)(((INT)101)),
					(INT)(((INT)176)),
					(INT)(((INT)75)),
					(INT)(((INT)100))));
		} else if  ( TRUE ) {
			FuelLevel_Normalized_R = (SINT)((SINT)100);
		}

		if ( LE_SINT_2((FuelLevel_Normalized_R),
			((SINT)100)) ) {
			FuelLevel_Normalized_R = (SINT)SUB_SINT(((SINT)100),
				(FuelLevel_Normalized_R));
		}

		TotalFuelInput2_R = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_2296 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_2296; i += 1 )
			{
				FuelInputArray2_R[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)1)),
					(i)), 100)] = (UINT)(FuelInputArray2_R[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		FuelInputArray2_R[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)SINT_TO_UINT((FuelLevel_Normalized_R));

		{
			/* for loop */
			const SINT _forstop_2582 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_2582; i += 1 )
			{
				TotalFuelInput2_R = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalFuelInput2_R),
					(FuelInputArray2_R[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		if ( (NMSGUI_MC2M_fuel_level_right_touch) ) {
			FuelLevel_Normalized2_R = (SINT)(NMSGUI_MC2M_fuel_level_right);
		} else if  ( TRUE ) {
			FuelLevel_Normalized2_R = (SINT)REAL_TO_SINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalFuelInput2_R)),
					SINT_TO_REAL((SINT)(((SINT)50)))));
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

#endif /* INCLUDE__VT3_POU__MAIN_FUELLEVEL_RIGHT_C */

/* end of file */
