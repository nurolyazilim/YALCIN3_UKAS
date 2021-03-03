/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
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
const unsigned int vt3_screen_width  =   320;
const unsigned int vt3_screen_height =   240;

/* force redraw screen background in case of change of subscreen */
BOOL vt3_force_redraw_screen_background = FALSE;

/* focus navigation tables, forward direction */
const vt3_focus_sequence_t FARPTR const vt3_focus_sequence_forward[] = {
	vt3_focus_sequence_forward_ind_screen_1,
	vt3_focus_sequence_forward_ind_screen_2,
	vt3_focus_sequence_forward_ind_screen_3,
	vt3_focus_sequence_forward_ind_screen_4,
	vt3_focus_sequence_forward_ind_screen_5,
	vt3_focus_sequence_forward_ind_screen_6,
	 (const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_focus_sequence_forward[] */

/* focus navigation tables, backward direction */
const vt3_focus_sequence_t FARPTR const vt3_focus_sequence_backward[] = {
	vt3_focus_sequence_backward_ind_screen_1,
	vt3_focus_sequence_backward_ind_screen_2,
	vt3_focus_sequence_backward_ind_screen_3,
	vt3_focus_sequence_backward_ind_screen_4,
	vt3_focus_sequence_backward_ind_screen_5,
	vt3_focus_sequence_backward_ind_screen_6,
	(const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_focus_sequence_backward[] */

/* knob_sel navigation tables, forward direction */
const vt3_focus_sequence_t FARPTR const vt3_knob_sel_sequence_forward[] = {
	vt3_knob_sel_sequence_forward_ind_screen_1,
	vt3_knob_sel_sequence_forward_ind_screen_2,
	vt3_knob_sel_sequence_forward_ind_screen_3,
	vt3_knob_sel_sequence_forward_ind_screen_4,
	vt3_knob_sel_sequence_forward_ind_screen_5,
	vt3_knob_sel_sequence_forward_ind_screen_6,
	 (const vt3_focus_sequence_t FARPTR) NULL,
}; /* vt3_knob_sel_sequence_forward[] */

/* knob_sel navigation tables, backward direction */
const vt3_focus_sequence_t FARPTR const vt3_knob_sel_sequence_backward[] = {
	vt3_knob_sel_sequence_backward_ind_screen_1,
	vt3_knob_sel_sequence_backward_ind_screen_2,
	vt3_knob_sel_sequence_backward_ind_screen_3,
	vt3_knob_sel_sequence_backward_ind_screen_4,
	vt3_knob_sel_sequence_backward_ind_screen_5,
	vt3_knob_sel_sequence_backward_ind_screen_6,
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

	/* initialize screen frame */
	vt3_init_ind_screen_frame();

	/* process the physical elements */
	vt3_draw_ind_screen_frame(VT3_DISP_EVENT_OPEN);
}

/* global display drawing function */
void vt3_disp_draw(void)
{
	/* process the physical elements */
	vt3_draw_ind_screen_frame(VT3_DISP_EVENT_REFRESH);

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
		case SCREEN_SCREEN_1:
			vt3_init_ind_screen_1();
			break;
		case SCREEN_SCREEN_2:
			vt3_init_ind_screen_2();
			break;
		case SCREEN_SCREEN_3:
			vt3_init_ind_screen_3();
			break;
		case SCREEN_SCREEN_4:
			vt3_init_ind_screen_4();
			break;
		case SCREEN_SCREEN_5:
			vt3_init_ind_screen_5();
			break;
		case SCREEN_SCREEN_6:
			vt3_init_ind_screen_6();
			break;
		}
		break;
	}

	/* screen selection */
	switch ( vt3_current_screen )
	{
	case SCREEN_SCREEN_1:
		vt3_draw_ind_screen_1(vt3_display_event);
		break;
	case SCREEN_SCREEN_2:
		vt3_draw_ind_screen_2(vt3_display_event);
		break;
	case SCREEN_SCREEN_3:
		vt3_draw_ind_screen_3(vt3_display_event);
		break;
	case SCREEN_SCREEN_4:
		vt3_draw_ind_screen_4(vt3_display_event);
		break;
	case SCREEN_SCREEN_5:
		vt3_draw_ind_screen_5(vt3_display_event);
		break;
	case SCREEN_SCREEN_6:
		vt3_draw_ind_screen_6(vt3_display_event);
		break;
	}

	/* transfer image from memory to frame buffer */
	LcdRefresh();
}

/* knob selector properties array init*/
const vt3_knob_sel_prop_t vt3_screen_ks_ptr[] = {
{0,252 /* = RGB(0, 0, 255) */},/* screen_1 */
{0,252 /* = RGB(0, 0, 255) */},/* screen_2 */
{0,252 /* = RGB(0, 0, 255) */},/* screen_3 */
{0,250 /* = RGB(0, 255, 0) */},/* screen_4 */
{0,252 /* = RGB(0, 0, 255) */},/* screen_5 */
{0,252 /* = RGB(0, 0, 255) */},/* screen_6 */
};

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP_COMMON_C */

/* end of file */
