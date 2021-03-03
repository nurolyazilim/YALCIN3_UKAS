/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN3_C
#define INCLUDE__VT3_DISP__SCREEN3_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen3.h"
#include "vt3_Event__Screen3.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* invalid chain for the indicators in layer 0 */
static BOOL FAR FARPTR const vt3_screen_screen_3_layer_0_invalid_chain[] =
{
	&vt3_screen_union.screen_3.multitext_3_2.invalid,
	&vt3_screen_union.screen_3.Date_Time_Headline.invalid,
	NULL /* sentinel */
};

/* invalid chain for the indicators in layer 1 */
static BOOL FAR FARPTR const vt3_screen_screen_3_layer_1_invalid_chain[] =
{
	&vt3_screen_union.screen_3.SWVersionText.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator screen_3 */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_screen_3 = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, 0 /* = RGB(0, 0, 0) */, 0 },
}; /* __ROM_value__ind_screen_3 */

/* initialization of the runtime status of indicator screen_3 */
static const vt3_indicator_ScreenModel FAR __init_value__ind_screen_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_3,
}; /* __init_value__ind_screen_3 */

/* ROM configuration of indicator SWVersionText */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_3_SWVersionText = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_3_SWVersionText,
	/* width            */ 280,
	/* height           */ 128,
	/* layer            */ 1,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialRegular14,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_3_SWVersionText */

/* initialization of the runtime status of indicator SWVersionText */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_3_SWVersionText = {
	/* ROM parameters   */ &__ROM_value__ind_screen_3_SWVersionText,
	/* x                */ 20,
	/* y                */ 56,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_3_SWVersionText */

/* status of indicator multitext_3_2: array text */
static const UINT16 FAR ind_screen_3_multitext_3_2_text[2] = {
	GIGA_TEXT4,
	GIGA_TEXT4,
}; /* ind_screen_3_multitext_3_2_text[] */

/* status of indicator multitext_3_2: array font */
static const vt3_font FARPTR const ind_screen_3_multitext_3_2_font[2] = {
	vt3_font_ArialRegular15, 
	vt3_font_ArialRegular15, 
}; /* ind_screen_3_multitext_3_2_font[] */

/* status of indicator multitext_3_2: array color */
static const vt3_color FAR ind_screen_3_multitext_3_2_color[2] = {
	4 /* = RGB(255, 255, 255) */, 
	191 /* = RGB(255, 95, 85) */, 
}; /* ind_screen_3_multitext_3_2_color[] */

/* ROM configuration of indicator multitext_3_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_3_multitext_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_3_multitext_3_2,
	/* width            */ 80,
	/* height           */ 17,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_3_multitext_3_2_text,
	/* font             */ ind_screen_3_multitext_3_2_font,
	/* color            */ ind_screen_3_multitext_3_2_color,
}; /* __ROM_value__ind_screen_3_multitext_3_2 */

/* initialization of the runtime status of indicator multitext_3_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_3_multitext_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_3_multitext_3_2,
	/* x                */ 232,
	/* y                */ 216,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_3_multitext_3_2 */

/* ROM configuration of indicator Date_Time_Headline */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_3_Date_Time_Headline = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_3_Date_Time_Headline,
	/* width            */ 288,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialRegular20,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_3_Date_Time_Headline */

/* initialization of the runtime status of indicator Date_Time_Headline */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_3_Date_Time_Headline = {
	/* ROM parameters   */ &__ROM_value__ind_screen_3_Date_Time_Headline,
	/* x                */ 16,
	/* y                */ 8,
	/* color            */ 63 /* = RGB(85, 191, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_3_Date_Time_Headline */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_3[] = {
	{ &vt3_screen_union.screen_3._background, &__init_value__ind_screen_3, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.screen_3.SWVersionText, &__init_value__ind_screen_3_SWVersionText, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_3.multitext_3_2, &__init_value__ind_screen_3_multitext_3_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_3.Date_Time_Headline, &__init_value__ind_screen_3_Date_Time_Headline, sizeof(vt3_indicator_SimpleText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_3(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_3; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_3(BYTE event)
{
	/* invalidate text indicators in case of language change */
	if ( vt3_language != vt3_old_language )
	{
		/* indicators to be invalidated in case of language change */
		static BOOL FAR FARPTR const change_language_invalid_chain[] =
		{
			&vt3_screen_union.screen_3.SWVersionText.invalid,
			&vt3_screen_union.screen_3.multitext_3_2.invalid,
			&vt3_screen_union.screen_3.Date_Time_Headline.invalid,
			NULL /* sentinel */
		};
		vt3_follow_invalid_chain(change_language_invalid_chain);
		vt3_old_language = vt3_language;
	}

	/* event procedure for the screen */
	vt3_event_ind_screen_3(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.screen_3._background);

	/* indicator "SWVersionText" of type "SimpleText" */

	/* draw the indicator: SWVersionText */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_3.SWVersionText);


	/* indicator "multitext_3_2" of type "MultiText" */

	/* draw the indicator: multitext_3_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_3.multitext_3_2);


	/* indicator "Date_Time_Headline" of type "SimpleText" */

	/* draw the indicator: Date_Time_Headline */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_3.Date_Time_Headline);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_3() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_screen_3[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_screen_3[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_screen_3[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_screen_3[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_screen_3[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_screen_3[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_screen_3[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_screen_3[] */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN3_C */

/* end of file */
