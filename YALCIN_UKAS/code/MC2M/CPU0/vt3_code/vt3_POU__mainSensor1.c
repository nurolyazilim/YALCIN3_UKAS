/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINSENSOR1_C
#define INCLUDE__VT3_POU__MAINSENSOR1_C

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
static const vt3_screen_initializer FAR __init_table__mainSensor1[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainSensor1[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainSensor1_t FAR __const__mainSensor1__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i                    */ ((SINT)0),
	/* AIN_ParkBrakePressureSensor_Temp */ ((UINT)0U),
}; /* end of __const__mainSensor1__param_init */

/* initialization of PROGRAM status */
void mainSensor1__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainSensor1; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainSensor1, &__const__mainSensor1__param_init, sizeof __const__mainSensor1__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainSensor1__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainSensor1.ENO = mainSensor1.EN;
	if ( ! mainSensor1.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalInput_Sensor1 = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_356 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)2));
			for ( mainSensor1.i = ((SINT)0); mainSensor1.i <= _forstop_356; mainSensor1.i += 1 )
			{
				InputArray_Sensor1[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)1)),
					(mainSensor1.i)), 100)] = (UINT)(InputArray_Sensor1[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)2)),
					(mainSensor1.i)), 100)]);
			}
			
		}

		mainSensor1.AIN_ParkBrakePressureSensor_Temp = (UINT)(AIN_ParkBrakePressureSensor);

		if ( LT_WORD_2((AIN_ParkBrakePressureSensor),
			((INT)4000)) ) {
			mainSensor1.AIN_ParkBrakePressureSensor_Temp = (UINT)((INT)4000);
		}

		InputArray_Sensor1[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((mainSensor1.AIN_ParkBrakePressureSensor_Temp)),
				(INT)(((INT)4000)),
				(INT)(((INT)20000)),
				(INT)(((INT)0)),
				(INT)(((INT)160))));

		

		{
			/* for loop */
			const SINT _forstop_956 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)1));
			for ( mainSensor1.i = ((SINT)0); mainSensor1.i <= _forstop_956; mainSensor1.i += 1 )
			{
				TotalInput_Sensor1 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalInput_Sensor1),
					(InputArray_Sensor1[vt3_check_array_boundary((mainSensor1.i), 100)]));
			}
			
		}

		if ( (NMSGUI_MC2M_park_brake_tank_touch) ) {
			InputFiltered_Sensor1 = (UINT)(NMSGUI_MC2M_park_brake_tank);
		} else if  ( TRUE ) {
			InputFiltered_Sensor1 = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalInput_Sensor1)),
					SINT_TO_REAL((SINT)(((SINT)100)))));
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

#endif /* INCLUDE__VT3_POU__MAINSENSOR1_C */

/* end of file */
