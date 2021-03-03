/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU_COMMON_CPP
#define INCLUDE__VT3_POU_COMMON_CPP

#include "vt3_runtime.h"
#include "vt3_POU__global_data.h"
#include "vt3_POU__cycle.h"



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


/* task trampoline for cycle */
static void __task__cycle__(void)
{
	cycle__call();
	vt3_free_temporary_strings();
}

/* table of TASKS */
const vt3_task_table_t FAR vt3_task_table[] = {
	/* priority   period    delay   program */
	{        10,     100,       0,  __task__cycle__ },
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
	global_data__init();
	cycle__init();
}



#endif /* INCLUDE__VT3_POU_COMMON_CPP */

/* end of file */
