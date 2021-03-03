/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_WEBASTOTEMPSENSOR_C
#define INCLUDE__VT3_POU__MAIN_WEBASTOTEMPSENSOR_C

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
static const vt3_screen_initializer FAR __init_table__main_WebastoTempSensor[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_WebastoTempSensor[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_WebastoTempSensor_t FAR __const__main_WebastoTempSensor__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i                    */ ((SINT)0),
}; /* end of __const__main_WebastoTempSensor__param_init */

/* initialization of PROGRAM status */
void main_WebastoTempSensor__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_WebastoTempSensor; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_WebastoTempSensor, &__const__main_WebastoTempSensor__param_init, sizeof __const__main_WebastoTempSensor__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_WebastoTempSensor__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	main_WebastoTempSensor.ENO = main_WebastoTempSensor.EN;
	if ( ! main_WebastoTempSensor.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		HTempTotalInput_2 = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_270 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)2));
			for ( main_WebastoTempSensor.i = ((SINT)0); main_WebastoTempSensor.i <= _forstop_270; main_WebastoTempSensor.i += 1 )
			{
				HTempInputArray_2[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)1)),
					(main_WebastoTempSensor.i)), 100)] = (UINT)(HTempInputArray_2[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)2)),
					(main_WebastoTempSensor.i)), 100)]);
			}
			
		}

		HTempInputArray_2[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(AIN_WebastoTankResistanceSensor);

		{
			/* for loop */
			const SINT _forstop_572 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)1));
			for ( main_WebastoTempSensor.i = ((SINT)0); main_WebastoTempSensor.i <= _forstop_572; main_WebastoTempSensor.i += 1 )
			{
				HTempTotalInput_2 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(HTempTotalInput_2),
					(HTempInputArray_2[vt3_check_array_boundary((main_WebastoTempSensor.i), 100)]));
			}
			
		}

		HTempInputFiltered_2 = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(HTempTotalInput_2)),
				SINT_TO_REAL((SINT)(((SINT)50)))));

		if ( LT_WORD_2((HTempInputFiltered_2),
			((INT)150)) ) {
			HTempLevel_Normalized_2 = (SINT)((SINT)-70);
		} else if  ( LT_DINT_2((HTempInputFiltered_2),
			(INT)(((INT)2952))) ) {
			HTempLevel_Normalized_2 = (SINT)((SINT)-50);
		} else if  ( LE_DINT_2((HTempInputFiltered_2),
			(INT)(((INT)5113))) ) {
			HTempLevel_Normalized_2 = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((HTempInputFiltered_2)),
					(INT)(((INT)2952)),
					(INT)(((INT)5113)),
					(INT)(((INT)-50)),
					(INT)(((INT)-25))));
		} else if  ( LE_DINT_2((HTempInputFiltered_2),
			(INT)(((INT)7274))) ) {
			HTempLevel_Normalized_2 = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((HTempInputFiltered_2)),
					(INT)(((INT)5113)),
					(INT)(((INT)7274)),
					(INT)(((INT)-25)),
					(INT)(((INT)0))));
		} else if  ( LE_DINT_2((HTempInputFiltered_2),
			(INT)(((INT)9435))) ) {
			HTempLevel_Normalized_2 = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((HTempInputFiltered_2)),
					(INT)(((INT)7274)),
					(INT)(((INT)9435)),
					(INT)(((INT)0)),
					(INT)(((INT)25))));
		} else if  ( LE_DINT_2((HTempInputFiltered_2),
			(INT)(((INT)11596))) ) {
			HTempLevel_Normalized_2 = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((HTempInputFiltered_2)),
					(INT)(((INT)9435)),
					(INT)(((INT)11596)),
					(INT)(((INT)25)),
					(INT)(((INT)50))));
		} else if  ( LE_DINT_2((HTempInputFiltered_2),
			(INT)(((INT)13733))) ) {
			HTempLevel_Normalized_2 = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((HTempInputFiltered_2)),
					(INT)(((INT)11596)),
					(INT)(((INT)13733)),
					(INT)(((INT)50)),
					(INT)(((INT)75))));
		} else if  ( LE_DINT_2((HTempInputFiltered_2),
			(INT)(((INT)15894))) ) {
			HTempLevel_Normalized_2 = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((HTempInputFiltered_2)),
					(INT)(((INT)13733)),
					(INT)(((INT)15894)),
					(INT)(((INT)75)),
					(INT)(((INT)100))));
		} else if  ( LE_DINT_2((HTempInputFiltered_2),
			(INT)(((INT)18055))) ) {
			HTempLevel_Normalized_2 = (SINT)INT_TO_SINT(Interpolate(UINT_TO_INT((HTempInputFiltered_2)),
					(INT)(((INT)15894)),
					(INT)(((INT)18055)),
					(INT)(((INT)100)),
					(INT)(((INT)125))));
		} else if  ( TRUE ) {
			HTempLevel_Normalized_2 = (SINT)((SINT)125);
		}

		fuelTank_2_Temperature = (SINT)(HTempLevel_Normalized_2);

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

#endif /* INCLUDE__VT3_POU__MAIN_WEBASTOTEMPSENSOR_C */

/* end of file */
