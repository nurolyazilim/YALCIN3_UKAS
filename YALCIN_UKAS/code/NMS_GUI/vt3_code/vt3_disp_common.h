/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP_COMMON_H
#define INCLUDE__VT3_DISP_COMMON_H

#include "vt3_base.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"
#include "vt3_Disp__Screen.h"
#include "vt3_Event__Screen.h"


/* the screen numbers */
#define SCREEN_SCREEN               (0)

/* all screens share the same memory */
typedef union vt3_screen_union_t
{
	vt3_screen_struct_screen_t screen;

	/** C++ wants a constructor */
	vt3_screen_union_t()
	{
		memset(this, 0, sizeof(vt3_screen_union_t));
	}

} vt3_screen_union_t;

/* extern variables */
extern vt3_screen_union_t FAR vt3_screen_union;
extern BOOL vt3_force_redraw_screen_background;

/* global display initialization function */
void vt3_disp_init(void);

/* global display drawing function */
void vt3_disp_draw(void);


#endif /* INCLUDE__VT3_DISP_COMMON_H */

/* end of file */
