/* device:       /project/MC2M/CPU1 */
/* device model: MC2M_2CPU\CPU1 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU_COMMON_C
#define INCLUDE__VT3_POU_COMMON_C

#include "vt3_runtime.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* table of ENDIANNESS */
const vt3_endianness_table_t FAR vt3_endianness_table[] = {
	/* SA    endianness*/
	{ 18, 0 }, 
	{  5, 1 }, 
	{ 133, 1 }, 
	{ 13, 1 }, 
	{  2, 0 }, 
	{ 50, 0 }, 
	{  0, 0 } /* sentinel */
}; /* end of vt3_endianness_table[] */


/* table of TASKS */
const vt3_task_table_t FAR vt3_task_table[] = {
	/* priority   period    delay   program */
	{ 0, 0, 0, (void (*)(void)) NULL } /* sentinel */
}; /* end of vt3_task_table[] */

/* idle TASK */
void vt3_idle_task(void)
{
	/* PROGRAM PLC_PRG is not declared: idle task does nothing */
}


/* this function is called at the beginning to initialize all POUs */
void vt3_init_all_pous(void)
{
}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_POU_COMMON_C */

/* end of file */
