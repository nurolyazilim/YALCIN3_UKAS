/* device:       /project/MC2M/CPU1 */
/* device model: MC2M_2CPU\CPU1 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP_COMMON_C
#define INCLUDE__VT3_DISP_COMMON_C

#include "vt3_runtime.h"
#include "vt3_disp_common.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* all screens share the same memory */
vt3_screen_union_t FAR vt3_screen_union;

/* screen size */
const unsigned int vt3_screen_width  =     0;
const unsigned int vt3_screen_height =     0;

/* force redraw screen background in case of change of subscreen */
BOOL vt3_force_redraw_screen_background = FALSE;

/* focus navigation tables, forward direction */
const vt3_focus_sequence_t FARPTR const vt3_focus_sequence_forward[] = {
	 (const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_focus_sequence_forward[] */

/* focus navigation tables, backward direction */
const vt3_focus_sequence_t FARPTR const vt3_focus_sequence_backward[] = {
	(const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_focus_sequence_backward[] */

/* knob_sel navigation tables, forward direction */
const vt3_focus_sequence_t FARPTR const vt3_knob_sel_sequence_forward[] = {
	 (const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_knob_sel_sequence_forward[] */

/* knob_sel navigation tables, backward direction */
const vt3_focus_sequence_t FARPTR const vt3_knob_sel_sequence_backward[] = {
	(const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_knob_sel_sequence_backward[] */

/* index to previous screen */
UINT FAR vt3_current_screen;

/* finite state machine for events */
static BYTE FAR vt3_display_event;

/* global display initialization function */
void vt3_disp_init(void)
{
	/* initializations */
	vt3_screen         = 0;
	vt3_current_screen = -1;
	vt3_display_event  = VT3_DISP_EVENT_CLOSE;
	vt3_language       = 0;
}

/* global display drawing function */
void vt3_disp_draw(void)
{
	/* finited state machine, control screen change */
	switch ( vt3_display_event )
	{
	case VT3_DISP_EVENT_OPEN:
		/* complete screen change process: return to normal operation */
		vt3_display_event = VT3_DISP_EVENT_REFRESH;
		break;

	case VT3_DISP_EVENT_REFRESH:
		if ( vt3_screen != vt3_current_screen )
		{
			/* begin screen change process: release focus */
			(void) vt3_set_focus_null();
			/* tear down previous screen */
			vt3_display_event = VT3_DISP_EVENT_CLOSE;
		}
		break;

	case VT3_DISP_EVENT_CLOSE:
		/* continue screen change process: bring up new screen */
		vt3_display_event  = VT3_DISP_EVENT_OPEN;
		vt3_current_screen = vt3_screen;
		(void) FarMemSet(&vt3_screen_union, 0, sizeof vt3_screen_union);
		switch ( vt3_current_screen )
		{
		}
		break;
	}

	/* screen selection */
	switch ( vt3_current_screen )
	{
	}

	/* transfer image from memory to frame buffer */
	LcdRefresh();
}

/* knob selector properties array init*/
const vt3_knob_sel_prop_t vt3_screen_ks_ptr[] = {
{0, VT3_COLOR_NOTHING},/* default, no screen */
};

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP_COMMON_C */

/* end of file */
