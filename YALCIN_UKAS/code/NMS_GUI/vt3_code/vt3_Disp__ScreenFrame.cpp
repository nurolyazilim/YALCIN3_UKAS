/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREENFRAME_CPP
#define INCLUDE__VT3_DISP__SCREENFRAME_CPP

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"



/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator screen_frame */
static const vt3_indicator_ROM_ScreenFrameModel FAR __ROM_value__ind_screen_frame = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenFrameModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
}; /* __ROM_value__ind_screen_frame */

/* initialization of the runtime status of indicator screen_frame */
static const vt3_indicator_ScreenFrameModel FAR __init_value__ind_screen_frame = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame,
}; /* __init_value__ind_screen_frame */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator screen_backlight */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_screen_backlight = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalIndicator FARPTR)) NULL,
	/* hwNumber         */ 1200,
}; /* __ROM_value__ind_screen_frame_screen_backlight */

/* initialization of the runtime status of indicator screen_backlight */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_screen_backlight = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_screen_backlight,
	/* currentValue     */ 255,
}; /* __init_value__ind_screen_frame_screen_backlight */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator buzzer */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_buzzer = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalIndicator FARPTR)) NULL,
	/* hwNumber         */ 1202,
}; /* __ROM_value__ind_screen_frame_buzzer */

/* initialization of the runtime status of indicator buzzer */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_buzzer = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_buzzer,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_buzzer */


#pragma GCC diagnostic pop


/* runtime status of physical indicators */
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_screen_backlight;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer;

/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_frame[] = {
	{ &ind_screen_frame_screen_backlight, &__init_value__ind_screen_frame_screen_backlight, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_buzzer, &__init_value__ind_screen_frame_buzzer, sizeof(vt3_indicator_PhysicalIndicator) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_frame(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_frame; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_frame(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_screen_frame(event);

	/* indicator "screen_backlight" of type "PhysicalIndicator" */

	/* draw the indicator: screen_backlight */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_screen_backlight);


	/* indicator "buzzer" of type "PhysicalIndicator" */

	/* draw the indicator: buzzer */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_buzzer);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_frame() */


#endif /* INCLUDE__VT3_DISP__SCREENFRAME_CPP */

/* end of file */
