/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DATA_HYDROLICTEMP_SENSOR_C
#define INCLUDE__VT3_POU__DATA_HYDROLICTEMP_SENSOR_C

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
static const INT FAR __init_value__HTempGaugeValue_Min = ((INT)912);
static const INT FAR __init_value__HTempGaugeValue_Mid = ((INT)496);
static const INT FAR __init_value__HTempGaugeValue_Max = ((INT)381);

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__Data_HydrolicTemp_Sensor[] = {
	{ &HTempGaugeValue_Min, &__init_value__HTempGaugeValue_Min, 2 },
	{ &HTempGaugeValue_Mid, &__init_value__HTempGaugeValue_Mid, 2 },
	{ &HTempGaugeValue_Max, &__init_value__HTempGaugeValue_Max, 2 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__Data_HydrolicTemp_Sensor[] */

/* initialization of global data block */
void Data_HydrolicTemp_Sensor__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__Data_HydrolicTemp_Sensor; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__DATA_HYDROLICTEMP_SENSOR_C */

/* end of file */
