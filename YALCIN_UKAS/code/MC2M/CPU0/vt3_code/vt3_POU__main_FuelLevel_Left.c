/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_FUELLEVEL_LEFT_C
#define INCLUDE__VT3_POU__MAIN_FUELLEVEL_LEFT_C

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
static const vt3_screen_initializer FAR __init_table__main_FuelLevel_Left[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_FuelLevel_Left[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_FuelLevel_Left_t FAR __const__main_FuelLevel_Left__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__main_FuelLevel_Left__param_init */

/* initialization of PROGRAM status */
void main_FuelLevel_Left__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_FuelLevel_Left; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_FuelLevel_Left, &__const__main_FuelLevel_Left__param_init, sizeof __const__main_FuelLevel_Left__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_FuelLevel_Left__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	main_FuelLevel_Left.ENO = main_FuelLevel_Left.EN;
	if ( ! main_FuelLevel_Left.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalFuelInput_L = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_142 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_142; i += 1 )
			{
				FuelInputArray_L[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)1)),
					(i)), 100)] = (UINT)(FuelInputArray_L[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		FuelInputArray_L[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(AIN_Tank_Left_Level);

		{
			/* for loop */
			const SINT _forstop_411 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_411; i += 1 )
			{
				TotalFuelInput_L = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalFuelInput_L),
					(FuelInputArray_L[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		FuelInputFiltered_L = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalFuelInput_L)),
				SINT_TO_REAL((SINT)(((SINT)100)))));

		if ( OR_BOOL(LT_WORD_2((FuelInputFiltered_L),
				((SINT)0)),
			GT_WORD_2((FuelInputFiltered_L),
				((INT)15000))) ) {
			FuelLevel_Normalized_L = (SINT)((SINT)110);
		} else if  ( LT_DINT_2((FuelInputFiltered_L),
			(INT)(((INT)0))) ) {
			FuelLevel_Normalized_L = (SINT)((SINT)0);
		} else if  ( LE_DINT_2((FuelInputFiltered_L),
			(INT)(((INT)7844))) ) {
			FuelLevel_Normalized_L = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_L)),
					(INT)(((INT)0)),
					(INT)(((INT)7844)),
					(INT)(((INT)0)),
					(INT)(((INT)20))));
		} else if  ( LE_DINT_2((FuelInputFiltered_L),
			(INT)(((INT)9799))) ) {
			FuelLevel_Normalized_L = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_L)),
					(INT)(((INT)7844)),
					(INT)(((INT)9799)),
					(INT)(((INT)20)),
					(INT)(((INT)40))));
		} else if  ( LE_DINT_2((FuelInputFiltered_L),
			(INT)(((INT)11391))) ) {
			FuelLevel_Normalized_L = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_L)),
					(INT)(((INT)9799)),
					(INT)(((INT)11391)),
					(INT)(((INT)40)),
					(INT)(((INT)60))));
		} else if  ( LE_DINT_2((FuelInputFiltered_L),
			(INT)(((INT)12755))) ) {
			FuelLevel_Normalized_L = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_L)),
					(INT)(((INT)11391)),
					(INT)(((INT)12755)),
					(INT)(((INT)60)),
					(INT)(((INT)80))));
		} else if  ( LE_DINT_2((FuelInputFiltered_L),
			(INT)(((INT)14210))) ) {
			FuelLevel_Normalized_L = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((FuelInputFiltered_L)),
					(INT)(((INT)12755)),
					(INT)(((INT)14210)),
					(INT)(((INT)80)),
					(INT)(((INT)100))));
		} else if  ( TRUE ) {
			FuelLevel_Normalized_L = (SINT)((SINT)100);
		}

		TotalFuelInput2_L = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_2632 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_2632; i += 1 )
			{
				FuelInputArray2_L[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)1)),
					(i)), 100)] = (UINT)(FuelInputArray2_L[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		FuelInputArray2_L[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)SINT_TO_UINT((FuelLevel_Normalized_L));

		{
			/* for loop */
			const SINT _forstop_2918 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_2918; i += 1 )
			{
				TotalFuelInput2_L = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalFuelInput2_L),
					(FuelInputArray2_L[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		if ( (NMSGUI_MC2M_fuel_level_left_touch) ) {
			FuelLevel_Normalized2_L = (SINT)(NMSGUI_MC2M_fuel_level_left);
		} else if  ( TRUE ) {
			FuelLevel_Normalized2_L = (SINT)REAL_TO_SINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalFuelInput2_L)),
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

#endif /* INCLUDE__VT3_POU__MAIN_FUELLEVEL_LEFT_C */

/* end of file */
