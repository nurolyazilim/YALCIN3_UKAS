/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_IO_H
#define INCLUDE__VT3_IO_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* index for I/O local points */
#define VT3_IO_INDEX_DIGIN_KEY_K15        (  35)  /* INPUTKEY   */
#define VT3_IO_INDEX_AinLightInp          (  39)  /* AINPUTLIGHT */

/* total number of local I/O resources */
#define VT3_IO_COUNT                      (  45)

/* size of memory arrays for %I %Q %S */
#define BYTEI_SIZE                        (VT3_IO_COUNT * 4)
#define BYTEQ_SIZE                        (VT3_IO_COUNT * 2)
#define BYTES_SIZE                        (VT3_IO_COUNT * 1)

/* I/O force flags and values (used by the debugger) */
extern BYTE FAR vt3_force_flags           [VT3_IO_COUNT];
extern UINT FAR vt3_force_values          [VT3_IO_COUNT];

/* This function is called by the runtime system at the beginning.
 * In initializes all local and remote I/O resources */
void vt3_IO_init(void);

/* This function is called by the runtime system at time intervals = VT3_TASK_PERIOD_IO
 * In read and writes all local and remote I/O resources */
void vt3_IO_cycle(void);

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_IO_H */

/* end of file */
