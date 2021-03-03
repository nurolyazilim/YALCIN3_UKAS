/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DATA_MAINDIGITALGAUGES_C
#define INCLUDE__VT3_POU__DATA_MAINDIGITALGAUGES_C

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

/* initializers of global variables */
static const USINT FAR __init_value__MC2M_GIGA_ServiceBrake1 = ((USINT)20U);
static const USINT FAR __init_value__MC2M_GIGA_ServiceBrake2 = ((USINT)30U);
static const USINT FAR __init_value__MC2M_GIGA_ParkingBrakePressure = ((USINT)40U);
static const USINT FAR __init_value__MC2M_GIGA_AccessoryPressure = ((USINT)50U);

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__Data_mainDigitalGauges[] = {
	{ &MC2M_GIGA_ServiceBrake1, &__init_value__MC2M_GIGA_ServiceBrake1, 1 },
	{ &MC2M_GIGA_ServiceBrake2, &__init_value__MC2M_GIGA_ServiceBrake2, 1 },
	{ &MC2M_GIGA_ParkingBrakePressure, &__init_value__MC2M_GIGA_ParkingBrakePressure, 1 },
	{ &MC2M_GIGA_AccessoryPressure, &__init_value__MC2M_GIGA_AccessoryPressure, 1 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__Data_mainDigitalGauges[] */

/* initialization of global data block */
void Data_mainDigitalGauges__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__Data_mainDigitalGauges; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__DATA_MAINDIGITALGAUGES_C */

/* end of file */
