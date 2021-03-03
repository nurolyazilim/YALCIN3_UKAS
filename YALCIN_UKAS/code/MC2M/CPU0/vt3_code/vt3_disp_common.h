/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP_COMMON_H
#define INCLUDE__VT3_DISP_COMMON_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* the screen numbers */

/* all screens share the same memory */
typedef union vt3_screen_union_t
{

	BYTE no_screen; /**< to avoid an empty union */
} vt3_screen_union_t;

/* extern variables */
extern vt3_screen_union_t FAR vt3_screen_union;
extern BOOL vt3_force_redraw_screen_background;

/* global display initialization function */
void vt3_disp_init(void);

/* global display drawing function */
void vt3_disp_draw(void);

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP_COMMON_H */

/* end of file */
