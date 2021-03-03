/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN6_C
#define INCLUDE__VT3_DISP__SCREEN6_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen6.h"
#include "vt3_Event__Screen6.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* invalid chain for the indicators in layer 0 */
static BOOL FAR FARPTR const vt3_screen_screen_6_layer_0_invalid_chain[] =
{
	&vt3_screen_union.screen_6.multibitmap.invalid,
	&vt3_screen_union.screen_6.multitext.invalid,
	&vt3_screen_union.screen_6.multitext_3.invalid,
	&vt3_screen_union.screen_6.multitext_3_2.invalid,
	&vt3_screen_union.screen_6.multitext_3_3.invalid,
	&vt3_screen_union.screen_6.multitext_3_3_2.invalid,
	&vt3_screen_union.screen_6.multitext_4.invalid,
	&vt3_screen_union.screen_6.multitext_4_2.invalid,
	&vt3_screen_union.screen_6.multitext_4_3.invalid,
	NULL /* sentinel */
};

/* invalid chain for the indicators in layer 1 */
static BOOL FAR FARPTR const vt3_screen_screen_6_layer_1_invalid_chain[] =
{
	NULL /* sentinel */
};

/* ROM configuration of indicator screen_6 */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_screen_6 = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, 0 /* = RGB(0, 0, 0) */, 0 },
}; /* __ROM_value__ind_screen_6 */

/* initialization of the runtime status of indicator screen_6 */
static const vt3_indicator_ScreenModel FAR __init_value__ind_screen_6 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6,
}; /* __init_value__ind_screen_6 */

/* status of indicator multibitmap: array bitmap */
static const vt3_image FAR ind_screen_6_multibitmap_bitmap[8] = {
	{ VT3IMG_BITMAP_RLE, vt3_BMP__6_40Bb_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
	{ VT3IMG_BITMAP_RLE, vt3_BMP__2_40Ddd_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
	{ VT3IMG_BITMAP_RLE, vt3_BMP__0_40Ee_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
	{ VT3IMG_BITMAP_RLE, vt3_BMP__12_Logging_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
	{ VT3IMG_BITMAP_RLE, vt3_BMP__3_Trflag_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
	{ VT3IMG_BITMAP_RLE, vt3_BMP__5_Enflag_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
	{ VT3IMG_BITMAP_RLE, vt3_BMP__10_Qtrflag_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
	{ VT3IMG_BITMAP_RLE, vt3_BMP__8_40Ff_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
}; /* ind_screen_6_multibitmap_bitmap[] */

/* ROM configuration of indicator multibitmap */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_6_multibitmap = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_6_multibitmap,
	/* width            */ 128,
	/* height           */ 104,
	/* layer            */ 0,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 8,
	/* bitmap           */ ind_screen_6_multibitmap_bitmap,
}; /* __ROM_value__ind_screen_6_multibitmap */

/* initialization of the runtime status of indicator multibitmap */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_6_multibitmap = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multibitmap,
	/* x                */ 178,
	/* y                */ 79,
	/* timeout          */ 0,
	/* currentValue     */ 6,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multibitmap */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_screen_6_multitext_text[2] = {
	GIGA_TEXT0,
	GIGA_TEXT0,
}; /* ind_screen_6_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_screen_6_multitext_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_6_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_screen_6_multitext_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_6_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_6_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_6_multitext,
	/* width            */ 120,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_6_multitext_text,
	/* font             */ ind_screen_6_multitext_font,
	/* color            */ ind_screen_6_multitext_color,
}; /* __ROM_value__ind_screen_6_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_6_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multitext,
	/* x                */ 12,
	/* y                */ 80,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multitext */

/* status of indicator multitext_3: array text */
static const UINT16 FAR ind_screen_6_multitext_3_text[2] = {
	GIGA_TEXT5,
	GIGA_TEXT5,
}; /* ind_screen_6_multitext_3_text[] */

/* status of indicator multitext_3: array font */
static const vt3_font FARPTR const ind_screen_6_multitext_3_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_6_multitext_3_font[] */

/* status of indicator multitext_3: array color */
static const vt3_color FAR ind_screen_6_multitext_3_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_6_multitext_3_color[] */

/* ROM configuration of indicator multitext_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_6_multitext_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_6_multitext_3,
	/* width            */ 160,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_6_multitext_3_text,
	/* font             */ ind_screen_6_multitext_3_font,
	/* color            */ ind_screen_6_multitext_3_color,
}; /* __ROM_value__ind_screen_6_multitext_3 */

/* initialization of the runtime status of indicator multitext_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_6_multitext_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multitext_3,
	/* x                */ 12,
	/* y                */ 110,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multitext_3 */

/* status of indicator multitext_3_2: array text */
static const UINT16 FAR ind_screen_6_multitext_3_2_text[2] = {
	GIGA_TEXT4,
	GIGA_TEXT4,
}; /* ind_screen_6_multitext_3_2_text[] */

/* status of indicator multitext_3_2: array font */
static const vt3_font FARPTR const ind_screen_6_multitext_3_2_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_6_multitext_3_2_font[] */

/* status of indicator multitext_3_2: array color */
static const vt3_color FAR ind_screen_6_multitext_3_2_color[2] = {
	191 /* = RGB(255, 95, 85) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_6_multitext_3_2_color[] */

/* ROM configuration of indicator multitext_3_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_6_multitext_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_6_multitext_3_2,
	/* width            */ 104,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_6_multitext_3_2_text,
	/* font             */ ind_screen_6_multitext_3_2_font,
	/* color            */ ind_screen_6_multitext_3_2_color,
}; /* __ROM_value__ind_screen_6_multitext_3_2 */

/* initialization of the runtime status of indicator multitext_3_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_6_multitext_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multitext_3_2,
	/* x                */ 11,
	/* y                */ 185,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multitext_3_2 */

/* status of indicator multitext_3_3: array text */
static const UINT16 FAR ind_screen_6_multitext_3_3_text[2] = {
	GIGA_TEXT3,
	GIGA_TEXT3,
}; /* ind_screen_6_multitext_3_3_text[] */

/* status of indicator multitext_3_3: array font */
static const vt3_font FARPTR const ind_screen_6_multitext_3_3_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_6_multitext_3_3_font[] */

/* status of indicator multitext_3_3: array color */
static const vt3_color FAR ind_screen_6_multitext_3_3_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_6_multitext_3_3_color[] */

/* ROM configuration of indicator multitext_3_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_6_multitext_3_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_6_multitext_3_3,
	/* width            */ 145,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_6_multitext_3_3_text,
	/* font             */ ind_screen_6_multitext_3_3_font,
	/* color            */ ind_screen_6_multitext_3_3_color,
}; /* __ROM_value__ind_screen_6_multitext_3_3 */

/* initialization of the runtime status of indicator multitext_3_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_6_multitext_3_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multitext_3_3,
	/* x                */ 12,
	/* y                */ 135,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multitext_3_3 */

/* status of indicator multitext_3_3_2: array text */
static const UINT16 FAR ind_screen_6_multitext_3_3_2_text[2] = {
	GIGA_TEXT6,
	GIGA_TEXT6,
}; /* ind_screen_6_multitext_3_3_2_text[] */

/* status of indicator multitext_3_3_2: array font */
static const vt3_font FARPTR const ind_screen_6_multitext_3_3_2_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_6_multitext_3_3_2_font[] */

/* status of indicator multitext_3_3_2: array color */
static const vt3_color FAR ind_screen_6_multitext_3_3_2_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_6_multitext_3_3_2_color[] */

/* ROM configuration of indicator multitext_3_3_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_6_multitext_3_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_6_multitext_3_3_2,
	/* width            */ 129,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_6_multitext_3_3_2_text,
	/* font             */ ind_screen_6_multitext_3_3_2_font,
	/* color            */ ind_screen_6_multitext_3_3_2_color,
}; /* __ROM_value__ind_screen_6_multitext_3_3_2 */

/* initialization of the runtime status of indicator multitext_3_3_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_6_multitext_3_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multitext_3_3_2,
	/* x                */ 11,
	/* y                */ 160,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multitext_3_3_2 */

/* status of indicator multitext_4: array text */
static const UINT16 FAR ind_screen_6_multitext_4_text[2] = {
	GIGA_TEXT7,
	GIGA_TEXT7,
}; /* ind_screen_6_multitext_4_text[] */

/* status of indicator multitext_4: array font */
static const vt3_font FARPTR const ind_screen_6_multitext_4_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_6_multitext_4_font[] */

/* status of indicator multitext_4: array color */
static const vt3_color FAR ind_screen_6_multitext_4_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_6_multitext_4_color[] */

/* ROM configuration of indicator multitext_4 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_6_multitext_4 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_6_multitext_4,
	/* width            */ 73,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_6_multitext_4_text,
	/* font             */ ind_screen_6_multitext_4_font,
	/* color            */ ind_screen_6_multitext_4_color,
}; /* __ROM_value__ind_screen_6_multitext_4 */

/* initialization of the runtime status of indicator multitext_4 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_6_multitext_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multitext_4,
	/* x                */ 21,
	/* y                */ 27,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multitext_4 */

/* status of indicator multitext_4_2: array text */
static const UINT16 FAR ind_screen_6_multitext_4_2_text[2] = {
	GIGA_TEXT8,
	GIGA_TEXT8,
}; /* ind_screen_6_multitext_4_2_text[] */

/* status of indicator multitext_4_2: array font */
static const vt3_font FARPTR const ind_screen_6_multitext_4_2_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_6_multitext_4_2_font[] */

/* status of indicator multitext_4_2: array color */
static const vt3_color FAR ind_screen_6_multitext_4_2_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_6_multitext_4_2_color[] */

/* ROM configuration of indicator multitext_4_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_6_multitext_4_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_6_multitext_4_2,
	/* width            */ 78,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_6_multitext_4_2_text,
	/* font             */ ind_screen_6_multitext_4_2_font,
	/* color            */ ind_screen_6_multitext_4_2_color,
}; /* __ROM_value__ind_screen_6_multitext_4_2 */

/* initialization of the runtime status of indicator multitext_4_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_6_multitext_4_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multitext_4_2,
	/* x                */ 111,
	/* y                */ 27,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multitext_4_2 */

/* status of indicator multitext_4_3: array text */
static const UINT16 FAR ind_screen_6_multitext_4_3_text[2] = {
	GIGA_TEXT9,
	GIGA_TEXT9,
}; /* ind_screen_6_multitext_4_3_text[] */

/* status of indicator multitext_4_3: array font */
static const vt3_font FARPTR const ind_screen_6_multitext_4_3_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_6_multitext_4_3_font[] */

/* status of indicator multitext_4_3: array color */
static const vt3_color FAR ind_screen_6_multitext_4_3_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_6_multitext_4_3_color[] */

/* ROM configuration of indicator multitext_4_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_6_multitext_4_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_6_multitext_4_3,
	/* width            */ 87,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_6_multitext_4_3_text,
	/* font             */ ind_screen_6_multitext_4_3_font,
	/* color            */ ind_screen_6_multitext_4_3_color,
}; /* __ROM_value__ind_screen_6_multitext_4_3 */

/* initialization of the runtime status of indicator multitext_4_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_6_multitext_4_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_6_multitext_4_3,
	/* x                */ 205,
	/* y                */ 27,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_6_multitext_4_3 */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_6[] = {
	{ &vt3_screen_union.screen_6._background, &__init_value__ind_screen_6, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.screen_6.multibitmap, &__init_value__ind_screen_6_multibitmap, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen_6.multitext, &__init_value__ind_screen_6_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_6.multitext_3, &__init_value__ind_screen_6_multitext_3, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_6.multitext_3_2, &__init_value__ind_screen_6_multitext_3_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_6.multitext_3_3, &__init_value__ind_screen_6_multitext_3_3, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_6.multitext_3_3_2, &__init_value__ind_screen_6_multitext_3_3_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_6.multitext_4, &__init_value__ind_screen_6_multitext_4, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_6.multitext_4_2, &__init_value__ind_screen_6_multitext_4_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_6.multitext_4_3, &__init_value__ind_screen_6_multitext_4_3, sizeof(vt3_indicator_MultiText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_6(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_6; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_6(BYTE event)
{
	/* invalidate text indicators in case of language change */
	if ( vt3_language != vt3_old_language )
	{
		/* indicators to be invalidated in case of language change */
		static BOOL FAR FARPTR const change_language_invalid_chain[] =
		{
			&vt3_screen_union.screen_6.multitext.invalid,
			&vt3_screen_union.screen_6.multitext_3.invalid,
			&vt3_screen_union.screen_6.multitext_3_2.invalid,
			&vt3_screen_union.screen_6.multitext_3_3.invalid,
			&vt3_screen_union.screen_6.multitext_3_3_2.invalid,
			&vt3_screen_union.screen_6.multitext_4.invalid,
			&vt3_screen_union.screen_6.multitext_4_2.invalid,
			&vt3_screen_union.screen_6.multitext_4_3.invalid,
			NULL /* sentinel */
		};
		vt3_follow_invalid_chain(change_language_invalid_chain);
		vt3_old_language = vt3_language;
	}

	/* event procedure for the screen */
	vt3_event_ind_screen_6(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.screen_6._background);

	/* indicator "multibitmap" of type "MultiBitmap" */

	/* draw the indicator: multibitmap */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen_6.multibitmap);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_6.multitext);


	/* indicator "multitext_3" of type "MultiText" */

	/* draw the indicator: multitext_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_6.multitext_3);


	/* indicator "multitext_3_2" of type "MultiText" */

	/* draw the indicator: multitext_3_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_6.multitext_3_2);


	/* indicator "multitext_3_3" of type "MultiText" */

	/* draw the indicator: multitext_3_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_6.multitext_3_3);


	/* indicator "multitext_3_3_2" of type "MultiText" */

	/* draw the indicator: multitext_3_3_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_6.multitext_3_3_2);


	/* indicator "multitext_4" of type "MultiText" */

	/* draw the indicator: multitext_4 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_6.multitext_4);


	/* indicator "multitext_4_2" of type "MultiText" */

	/* draw the indicator: multitext_4_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_6.multitext_4_2);


	/* indicator "multitext_4_3" of type "MultiText" */

	/* draw the indicator: multitext_4_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_6.multitext_4_3);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_6() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_screen_6[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_screen_6[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_screen_6[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_screen_6[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_screen_6[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_screen_6[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_screen_6[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_screen_6[] */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN6_C */

/* end of file */
