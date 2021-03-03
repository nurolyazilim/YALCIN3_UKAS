/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__ALARM_DATA_C
#define INCLUDE__VT3_POU__ALARM_DATA_C

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

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__Alarm_data[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__Alarm_data[] */

/* initialization of global data block */
void Alarm_data__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__Alarm_data; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
	TON__init(&LampAlarm_L01_TON);
	TON__init(&LampAlarm_L02_TON);
	TON__init(&LampAlarm_L03_TON);
	TON__init(&LampAlarm_L04_TON);
	TON__init(&LampAlarm_L05_TON);
	TON__init(&LampAlarm_L06_TON);
	TON__init(&LampAlarm_L07_TON);
	TON__init(&LampAlarm_L08_TON);
	TON__init(&LampAlarm_L09_TON);
	TON__init(&LampAlarm_L10_TON);
	TON__init(&LampAlarm_L11_TON);
	TON__init(&LampAlarm_L12_TON);
	TON__init(&LampAlarm_L13_TON);
	TON__init(&LampAlarm_L14_TON);
	TON__init(&LampAlarm_L15_TON);
	TON__init(&LampAlarm_L16_TON);
	TON__init(&LampAlarm_L17_TON);
	TON__init(&LampAlarm_L18_TON);
	TON__init(&LampAlarm_L19_TON);
	TON__init(&LampAlarm_L20_TON);
	TON__init(&LampAlarm_L21_TON);
	TON__init(&LampAlarm_L22_TON);
	TON__init(&LampAlarm_L23_TON);
	TON__init(&LampAlarm_L24_TON);
	TON__init(&LampAlarm_L25_TON);
	TON__init(&LampAlarm_L26_TON);
	TON__init(&LampAlarm_L27_TON);
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__ALARM_DATA_C */

/* end of file */
