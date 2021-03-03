/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINTERASCREEN_C
#define INCLUDE__VT3_POU__MAINTERASCREEN_C

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
static const vt3_screen_initializer FAR __init_table__mainTeraScreen[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainTeraScreen[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainTeraScreen_t FAR __const__mainTeraScreen__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainTeraScreen__param_init */

/* initialization of PROGRAM status */
void mainTeraScreen__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainTeraScreen; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainTeraScreen, &__const__mainTeraScreen__param_init, sizeof __const__mainTeraScreen__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainTeraScreen__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainTeraScreen.ENO = mainTeraScreen.EN;
	if ( ! mainTeraScreen.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		MC2M_TERA_EngineSpeed = (UINT)(EEC1_EngineSpeed);

		MC2M_TERA_VehicleSpeed = (USINT)(VehicleSpeed);

		MC2M_TERA_EngineTempValue = (USINT)(EngineTempValue);

		MC2M_TERA_BatteryLevel = (UINT)(BatteryLevel);

		MC2M_TERA_EngineOilPressure = (USINT)(EngineOilPressure);

		
		mainSensor1__call();

		MC2M_TERA_ParkingBrakePressure = (USINT)UINT_TO_USINT((InputFiltered_Sensor1));

		
		mainSensor2__call();

		MC2M_TERA_ServiceBrake1 = (USINT)UINT_TO_USINT((InputFiltered_Sensor2));

		
		mainSensor3__call();

		MC2M_TERA_ServiceBrake2 = (USINT)UINT_TO_USINT((InputFiltered_Sensor3));

		
		mainSensor4__call();

		MC2M_TERA_AccessoryPressure = (USINT)UINT_TO_USINT((InputFiltered_Sensor4));

		MC2M_TERA_TransOilTemperature = (USINT)INT_TO_USINT((TransOilTemperature));

		
		main_Lxicon__call();

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

#endif /* INCLUDE__VT3_POU__MAINTERASCREEN_C */

/* end of file */
