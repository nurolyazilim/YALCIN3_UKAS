/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DATA_OTHERS_OUT_C
#define INCLUDE__VT3_POU__DATA_OTHERS_OUT_C

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
static const SINT FAR __init_value__tankResistanceLimit = ((SINT)-10);
static const INT FAR __init_value__fanActiveDelay = ((INT)5000);
static const TIME FAR __init_value__FireFighterActiveFanTime = 10000;
static const SINT FAR __init_value__engineSpeedRPMConstant = ((SINT)10);
static const SINT FAR __init_value__tankResistanceLimit2 = ((SINT)-10);

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__Data_Others_Out[] = {
	{ &tankResistanceLimit, &__init_value__tankResistanceLimit, 1 },
	{ &fanActiveDelay, &__init_value__fanActiveDelay, 2 },
	{ &FireFighterActiveFanTime, &__init_value__FireFighterActiveFanTime, 4 },
	{ &engineSpeedRPMConstant, &__init_value__engineSpeedRPMConstant, 1 },
	{ &tankResistanceLimit2, &__init_value__tankResistanceLimit2, 1 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__Data_Others_Out[] */

/* initialization of global data block */
void Data_Others_Out__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__Data_Others_Out; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
	TON__init(&Fan_TON);
	TP__init(&Fire_Obj);
	F_TRIG__init(&TriggerCentralLockSystemEnable);
	F_TRIG__init(&TriggerCentralLockSystemDisable);
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__DATA_OTHERS_OUT_C */

/* end of file */
