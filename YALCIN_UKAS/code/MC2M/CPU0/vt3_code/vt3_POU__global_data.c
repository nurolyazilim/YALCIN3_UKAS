/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__GLOBAL_DATA_C
#define INCLUDE__VT3_POU__GLOBAL_DATA_C

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
static const USINT FAR __init_value__SWVersion = ((USINT)101U);
static const DATE_AND_TIME FAR __init_value__DateTimeNow = { 0, 0 };
static const DATE_AND_TIME FAR __init_value__DateTimeUpdate = { 0, 0 };
static const TIME_OF_DAY FAR __init_value__TimeNow = 0UL;

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__global_data[] = {
	{ &SWVersion, &__init_value__SWVersion, 1 },
	{ &DateTimeNow, &__init_value__DateTimeNow, 8 },
	{ &DateTimeUpdate, &__init_value__DateTimeUpdate, 8 },
	{ &TimeNow, &__init_value__TimeNow, 4 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__global_data[] */

/* initialization of global data block */
void global_data__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__global_data; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__GLOBAL_DATA_C */

/* end of file */
