/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__INSIDETEMPERATUR_C
#define INCLUDE__VT3_POU__INSIDETEMPERATUR_C

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
static const vt3_screen_initializer FAR __init_table__inSideTemperatur[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__inSideTemperatur[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const inSideTemperatur_t FAR __const__inSideTemperatur__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i                    */ ((SINT)0),
}; /* end of __const__inSideTemperatur__param_init */

/* initialization of PROGRAM status */
void inSideTemperatur__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__inSideTemperatur; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&inSideTemperatur, &__const__inSideTemperatur__param_init, sizeof __const__inSideTemperatur__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void inSideTemperatur__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	inSideTemperatur.ENO = inSideTemperatur.EN;
	if ( ! inSideTemperatur.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalTemInput_2 = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_229 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)2));
			for ( inSideTemperatur.i = ((SINT)0); inSideTemperatur.i <= _forstop_229; inSideTemperatur.i += 1 )
			{
				TemInputArray_2[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)1)),
					(inSideTemperatur.i)), 120)] = (UINT)(TemInputArray_2[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)2)),
					(inSideTemperatur.i)), 120)]);
			}
			
		}

		{
			/* for loop */
			const SINT _forstop_455 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)1));
			for ( inSideTemperatur.i = ((SINT)0); inSideTemperatur.i <= _forstop_455; inSideTemperatur.i += 1 )
			{
				TotalTemInput_2 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalTemInput_2),
					(TemInputArray_2[vt3_check_array_boundary((inSideTemperatur.i), 120)]));
			}
			
		}

		TemInputFiltered_2 = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalTemInput_2)),
				SINT_TO_REAL((SINT)(((SINT)50)))));

		if ( LT_DINT_2((TemInputFiltered_2),
			(INT)(((INT)552))) ) {
			TemLevelNormalized_2 = (INT)(INT)(((INT)-50));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)789))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)552)),
				(INT)(((INT)789)),
				(INT)(((INT)110)),
				(INT)(((INT)90)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)1006))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)789)),
				(INT)(((INT)1006)),
				(INT)(((INT)90)),
				(INT)(((INT)75)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)1245))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)1006)),
				(INT)(((INT)1245)),
				(INT)(((INT)75)),
				(INT)(((INT)60)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)1481))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)1245)),
				(INT)(((INT)1481)),
				(INT)(((INT)60)),
				(INT)(((INT)45)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)1625))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)1481)),
				(INT)(((INT)1625)),
				(INT)(((INT)45)),
				(INT)(((INT)35)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)1750))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)1625)),
				(INT)(((INT)1750)),
				(INT)(((INT)35)),
				(INT)(((INT)25)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)1854))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)1750)),
				(INT)(((INT)1854)),
				(INT)(((INT)25)),
				(INT)(((INT)15)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)1969))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)1854)),
				(INT)(((INT)1969)),
				(INT)(((INT)15)),
				(INT)(((INT)0)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)2021))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)1969)),
				(INT)(((INT)2021)),
				(INT)(((INT)0)),
				(INT)(((INT)-10)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)2058))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)2021)),
				(INT)(((INT)2058)),
				(INT)(((INT)-10)),
				(INT)(((INT)-20)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)2083))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)2058)),
				(INT)(((INT)2083)),
				(INT)(((INT)-20)),
				(INT)(((INT)-30)));
		} else if  ( LE_DINT_2((TemInputFiltered_2),
			(INT)(((INT)2109))) ) {
			TemLevelNormalized_2 = (INT)Interpolate(UINT_TO_INT((TemInputFiltered_2)),
				(INT)(((INT)2083)),
				(INT)(((INT)2109)),
				(INT)(((INT)-30)),
				(INT)(((INT)-50)));
		} else if  ( TRUE ) {
			TemLevelNormalized_2 = (INT)(INT)(((INT)110));
		}

		TotalTemInput_22 = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_3801 = SUB_SINT((SINT)(((SINT)30)),
			((SINT)2));
			for ( inSideTemperatur.i = ((SINT)0); inSideTemperatur.i <= _forstop_3801; inSideTemperatur.i += 1 )
			{
				TemInputArray_22[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)30)),
						((SINT)1)),
					(inSideTemperatur.i)), 120)] = (UINT)(TemInputArray_22[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)30)),
						((SINT)2)),
					(inSideTemperatur.i)), 120)]);
			}
			
		}

		TemInputArray_22[vt3_check_array_boundary(((SINT)0), 120)] = (UINT)INT_TO_UINT((TemLevelNormalized_2));

		{
			/* for loop */
			const SINT _forstop_4045 = SUB_SINT((SINT)(((SINT)30)),
			((SINT)1));
			for ( inSideTemperatur.i = ((SINT)0); inSideTemperatur.i <= _forstop_4045; inSideTemperatur.i += 1 )
			{
				TotalTemInput_22 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalTemInput_22),
					(TemInputArray_22[vt3_check_array_boundary((inSideTemperatur.i), 120)]));
			}
			
		}

		TemInputFiltered_22 = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalTemInput_22)),
				SINT_TO_REAL((SINT)(((SINT)30)))));

		inSideTemperature = (SINT)UINT_TO_SINT((TemInputFiltered_22));

		MC2M_TERA_InSideTemperature = (SINT)(inSideTemperature);

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

#endif /* INCLUDE__VT3_POU__INSIDETEMPERATUR_C */

/* end of file */
