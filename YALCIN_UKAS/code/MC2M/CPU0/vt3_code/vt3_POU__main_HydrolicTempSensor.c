/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_HYDROLICTEMPSENSOR_C
#define INCLUDE__VT3_POU__MAIN_HYDROLICTEMPSENSOR_C

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
static const vt3_screen_initializer FAR __init_table__main_HydrolicTempSensor[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_HydrolicTempSensor[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_HydrolicTempSensor_t FAR __const__main_HydrolicTempSensor__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i                    */ ((SINT)0),
}; /* end of __const__main_HydrolicTempSensor__param_init */

/* initialization of PROGRAM status */
void main_HydrolicTempSensor__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_HydrolicTempSensor; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_HydrolicTempSensor, &__const__main_HydrolicTempSensor__param_init, sizeof __const__main_HydrolicTempSensor__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_HydrolicTempSensor__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	main_HydrolicTempSensor.ENO = main_HydrolicTempSensor.EN;
	if ( ! main_HydrolicTempSensor.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		HTempTotalInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_266 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)2));
			for ( main_HydrolicTempSensor.i = ((SINT)0); main_HydrolicTempSensor.i <= _forstop_266; main_HydrolicTempSensor.i += 1 )
			{
				HTempInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)1)),
					(main_HydrolicTempSensor.i)), 100)] = (UINT)(HTempInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)2)),
					(main_HydrolicTempSensor.i)), 100)]);
			}
			
		}

		HTempInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(AIN_VVR_Temperature);

		{
			/* for loop */
			const SINT _forstop_547 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)1));
			for ( main_HydrolicTempSensor.i = ((SINT)0); main_HydrolicTempSensor.i <= _forstop_547; main_HydrolicTempSensor.i += 1 )
			{
				HTempTotalInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(HTempTotalInput),
					(HTempInputArray[vt3_check_array_boundary((main_HydrolicTempSensor.i), 100)]));
			}
			
		}

		HTempInputFiltered = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(HTempTotalInput)),
				SINT_TO_REAL((SINT)(((SINT)50)))));

		MC2M_TERA_HTempInputFiltered = (UINT)(HTempInputFiltered);

		if ( LT_DINT_2((HTempInputFiltered),
			(INT)(((INT)1000))) ) {
			HTempLevel_Normalized = (USINT)((SINT)0);
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1078))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1000)),
					(INT)(((INT)1078)),
					(INT)(((INT)0)),
					(INT)(((INT)20))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1155))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1078)),
					(INT)(((INT)1155)),
					(INT)(((INT)20)),
					(INT)(((INT)40))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1232))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1155)),
					(INT)(((INT)1232)),
					(INT)(((INT)40)),
					(INT)(((INT)60))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1309))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1232)),
					(INT)(((INT)1309)),
					(INT)(((INT)60)),
					(INT)(((INT)80))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1385))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1309)),
					(INT)(((INT)1385)),
					(INT)(((INT)80)),
					(INT)(((INT)100))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1461))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1385)),
					(INT)(((INT)1461)),
					(INT)(((INT)100)),
					(INT)(((INT)120))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1536))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1461)),
					(INT)(((INT)1536)),
					(INT)(((INT)120)),
					(INT)(((INT)140))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1611))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1536)),
					(INT)(((INT)1611)),
					(INT)(((INT)140)),
					(INT)(((INT)160))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1685))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1611)),
					(INT)(((INT)1685)),
					(INT)(((INT)160)),
					(INT)(((INT)180))));
		} else if  ( LE_DINT_2((HTempInputFiltered),
			(INT)(((INT)1759))) ) {
			HTempLevel_Normalized = (USINT)INT_TO_USINT(Interpolate(SUB_INT(UINT_TO_INT((HTempInputFiltered)),
						((SINT)55)),
					(INT)(((INT)1685)),
					(INT)(((INT)1759)),
					(INT)(((INT)180)),
					(INT)(((INT)200))));
		} else if  ( TRUE ) {
			HTempLevel_Normalized = (USINT)((INT)200);
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

#endif /* INCLUDE__VT3_POU__MAIN_HYDROLICTEMPSENSOR_C */

/* end of file */
