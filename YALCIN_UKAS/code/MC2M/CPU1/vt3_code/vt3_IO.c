/* device:       /project/MC2M/CPU1 */
/* device model: MC2M_2CPU\CPU1 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_IO_C
#define INCLUDE__VT3_IO_C

#include "vt3_runtime.h"
#include "vt3_IO.h"
#include "vt3_POU_common.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* this device has no I/O */

BYTE FAR vt3_force_flags   [1];
UINT FAR vt3_force_values  [1];

void vt3_IO_init(void)
{
}

void vt3_IO_cycle(void)
{
}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_IO_C */

/* end of file */
