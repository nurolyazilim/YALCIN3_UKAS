/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP_COMMON_H
#define INCLUDE__VT3_DISP_COMMON_H

#include "vt3_base.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"
#include "vt3_Disp__Screen1.h"
#include "vt3_Event__Screen1.h"
#include "vt3_Disp__Screen2.h"
#include "vt3_Event__Screen2.h"
#include "vt3_Disp__Screen3.h"
#include "vt3_Event__Screen3.h"
#include "vt3_Disp__Screen4.h"
#include "vt3_Event__Screen4.h"
#include "vt3_Disp__Screen5.h"
#include "vt3_Event__Screen5.h"
#include "vt3_Disp__Screen6.h"
#include "vt3_Event__Screen6.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* the screen numbers */
#define SCREEN_SCREEN_1             (0)
#define SCREEN_SCREEN_2             (1)
#define SCREEN_SCREEN_3             (2)
#define SCREEN_SCREEN_4             (3)
#define SCREEN_SCREEN_5             (4)
#define SCREEN_SCREEN_6             (5)

/* all screens share the same memory */
typedef union vt3_screen_union_t
{
	vt3_screen_struct_screen_1_t screen_1;
	vt3_screen_struct_screen_2_t screen_2;
	vt3_screen_struct_screen_3_t screen_3;
	vt3_screen_struct_screen_4_t screen_4;
	vt3_screen_struct_screen_5_t screen_5;
	vt3_screen_struct_screen_6_t screen_6;
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
