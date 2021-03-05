/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN1_C
#define INCLUDE__VT3_DISP__SCREEN1_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen1.h"
#include "vt3_Event__Screen1.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* invalid chain for the indicators in layer 0 */
static BOOL FAR FARPTR const vt3_screen_screen_1_layer_0_invalid_chain[] =
{
	&vt3_screen_union.screen_1.multitext_1.invalid,
	&vt3_screen_union.screen_1.multitext_1_2.invalid,
	&vt3_screen_union.screen_1.simple_text_2.invalid,
	&vt3_screen_union.screen_1.simple_text_2_2.invalid,
	&vt3_screen_union.screen_1.multibitmap_2_3.invalid,
	&vt3_screen_union.screen_1.multitext.invalid,
	&vt3_screen_union.screen_1.multitext_2.invalid,
	&vt3_screen_union.screen_1.multitext_3.invalid,
	&vt3_screen_union.screen_1.multitext_4.invalid,
	&vt3_screen_union.screen_1.number_2_3_2.invalid,
	&vt3_screen_union.screen_1.simple_text.invalid,
	&vt3_screen_union.screen_1.BG_FBPressGauge.invalid,
	&vt3_screen_union.screen_1.FBPressValue.invalid,
	&vt3_screen_union.screen_1.FBPressValueUnit.invalid,
	&vt3_screen_union.screen_1.FBPressValue_2.invalid,
	&vt3_screen_union.screen_1.FBPressValueUnit_2.invalid,
	&vt3_screen_union.screen_1.FBPressValue_3.invalid,
	&vt3_screen_union.screen_1.FBPressValueUnit_3.invalid,
	&vt3_screen_union.screen_1.FBPressValue_4.invalid,
	&vt3_screen_union.screen_1.FBPressValueUnit_4.invalid,
	&vt3_screen_union.screen_1.multibitmap_2_3_2.invalid,
	&vt3_screen_union.screen_1.multibitmap_2_3_2_2.invalid,
	&vt3_screen_union.screen_1.multibitmap_2_3_2_3.invalid,
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	&vt3_screen_union.screen_1.number_2_3_2_3.invalid,
	&vt3_screen_union.screen_1.EngineHour.invalid,
	&vt3_screen_union.screen_1.simple_rect_5.invalid,
	&vt3_screen_union.screen_1.multitext_5.invalid,
	&vt3_screen_union.screen_1.simple_text_3_3_2.invalid,
	&vt3_screen_union.screen_1.multitext_6.invalid,
	&vt3_screen_union.screen_1.multitext_6_2.invalid,
	&vt3_screen_union.screen_1.multitext_6_3.invalid,
	&vt3_screen_union.screen_1.multitext_7.invalid,
	&vt3_screen_union.screen_1.FBPressValue_3_2.invalid,
	&vt3_screen_union.screen_1.FBPressValue_3_2_2.invalid,
	&vt3_screen_union.screen_1.simple_text_2_3.invalid,
	&vt3_screen_union.screen_1.simple_text_2_3_2.invalid,
	&vt3_screen_union.screen_1.vvrPump.invalid,
	&vt3_screen_union.screen_1.simple_text_2_3_3.invalid,
	&vt3_screen_union.screen_1.simple_text_2_3_3_2.invalid,
	&vt3_screen_union.screen_1.FBPressValue_3_2_3.invalid,
	&vt3_screen_union.screen_1.vvrPump_2.invalid,
	&vt3_screen_union.screen_1.simple_text_2_3_3_3.invalid,
	&vt3_screen_union.screen_1.vvrPump_3.invalid,
	&vt3_screen_union.screen_1.simple_text_2_3_3_4.invalid,
	&vt3_screen_union.screen_1.FBPressValue_3_2_2_2.invalid,
	NULL /* sentinel */
};

/* invalid chain for the indicators in layer 1 */
static BOOL FAR FARPTR const vt3_screen_screen_1_layer_1_invalid_chain[] =
{
	&vt3_screen_union.screen_1.multibitmap_2.invalid,
	&vt3_screen_union.screen_1.multibitmap_2_2.invalid,
	&vt3_screen_union.screen_1.FBPressGauge.invalid,
	&vt3_screen_union.screen_1.BG_FBPressGauge_2.invalid,
	&vt3_screen_union.screen_1.FBPressGauge_2.invalid,
	&vt3_screen_union.screen_1.BG_FBPressGauge_3.invalid,
	&vt3_screen_union.screen_1.FBPressGauge_3.invalid,
	&vt3_screen_union.screen_1.BG_FBPressGauge_4.invalid,
	&vt3_screen_union.screen_1.FBPressGauge_4.invalid,
	&vt3_screen_union.screen_1.simple_rect.invalid,
	&vt3_screen_union.screen_1.simple_rect_2.invalid,
	&vt3_screen_union.screen_1.simple_rect_2_2.invalid,
	&vt3_screen_union.screen_1.simple_rect_3.invalid,
	&vt3_screen_union.screen_1.simple_rect_3_2.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator screen_1 */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_screen_1 = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, 0 /* = RGB(0, 0, 0) */, 0 },
}; /* __ROM_value__ind_screen_1 */

/* initialization of the runtime status of indicator screen_1 */
static const vt3_indicator_ScreenModel FAR __init_value__ind_screen_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1,
}; /* __init_value__ind_screen_1 */

/* status of indicator multitext_1: array text */
static const UINT16 FAR ind_screen_1_multitext_1_text[7] = {
	IDS_TEXT0,
	IDS_TEXT1,
	IDS_TEXT2,
	IDS_TEXT3,
	IDS_TEXT4,
	IDS_TEXT5,
	IDS_TEXT21,
}; /* ind_screen_1_multitext_1_text[] */

/* status of indicator multitext_1: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_1_font[7] = {
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
}; /* ind_screen_1_multitext_1_font[] */

/* status of indicator multitext_1: array color */
static const vt3_color FAR ind_screen_1_multitext_1_color[7] = {
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_1_multitext_1_color[] */

/* ROM configuration of indicator multitext_1 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_1_multitext_1,
	/* width            */ 242,
	/* height           */ 19,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 7,
	/* text             */ ind_screen_1_multitext_1_text,
	/* font             */ ind_screen_1_multitext_1_font,
	/* color            */ ind_screen_1_multitext_1_color,
}; /* __ROM_value__ind_screen_1_multitext_1 */

/* initialization of the runtime status of indicator multitext_1 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_1,
	/* x                */ 4,
	/* y                */ 88,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 4,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_1 */

/* status of indicator multitext_1_2: array text */
static const UINT16 FAR ind_screen_1_multitext_1_2_text[9] = {
	IDS_TEXT0,
	IDS_TEXT6,
	IDS_TEXT7,
	IDS_TEXT8,
	IDS_TEXT12,
	IDS_TEXT32,
	IDS_TEXT54,
	IDS_TEXT55,
	IDS_TEXT56,
}; /* ind_screen_1_multitext_1_2_text[] */

/* status of indicator multitext_1_2: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_1_2_font[9] = {
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular16, 
	vt3_font_CourierNewRegular15, 
	vt3_font_CourierNewRegular14, 
	vt3_font_CourierNewRegular14, 
	vt3_font_CourierNewRegular14, 
	vt3_font_CourierNewRegular14, 
}; /* ind_screen_1_multitext_1_2_font[] */

/* status of indicator multitext_1_2: array color */
static const vt3_color FAR ind_screen_1_multitext_1_2_color[9] = {
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	249 /* = RGB(255, 0, 0) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_1_multitext_1_2_color[] */

/* ROM configuration of indicator multitext_1_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_1_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_1_multitext_1_2,
	/* width            */ 244,
	/* height           */ 19,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 9,
	/* text             */ ind_screen_1_multitext_1_2_text,
	/* font             */ ind_screen_1_multitext_1_2_font,
	/* color            */ ind_screen_1_multitext_1_2_color,
}; /* __ROM_value__ind_screen_1_multitext_1_2 */

/* initialization of the runtime status of indicator multitext_1_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_1_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_1_2,
	/* x                */ 2,
	/* y                */ 113,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 8,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_1_2 */

/* ROM configuration of indicator simple_text_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_2,
	/* width            */ 121,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_2 */

/* initialization of the runtime status of indicator simple_text_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_2,
	/* x                */ 100,
	/* y                */ 28,
	/* color            */ 31 /* = RGB(42, 223, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_simple_text_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_text_2_3_3.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator simple_text_2_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_2_2,
	/* width            */ 121,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_2_2 */

/* initialization of the runtime status of indicator simple_text_2_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_2_2,
	/* x                */ 100,
	/* y                */ 46,
	/* color            */ 31 /* = RGB(42, 223, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_2_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_simple_text_2_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_text_2_3_3.invalid,
	NULL /* sentinel */
};

/* status of indicator multibitmap_2: array bitmap */
static const vt3_image FAR ind_screen_1_multibitmap_2_bitmap[1] = {
	{ VT3IMG_BITMAP_RLE, vt3_BMP__8_NurolLogo3_0_1, 0, VT3_COLOR_TRANSPARENT }, 
}; /* ind_screen_1_multibitmap_2_bitmap[] */

/* ROM configuration of indicator multibitmap_2 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_1_multibitmap_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_1_multibitmap_2,
	/* width            */ 92,
	/* height           */ 86,
	/* layer            */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_screen_1_multibitmap_2_bitmap,
}; /* __ROM_value__ind_screen_1_multibitmap_2 */

/* initialization of the runtime status of indicator multibitmap_2 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_1_multibitmap_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multibitmap_2,
	/* x                */ 0,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multibitmap_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_multibitmap_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_3_2.invalid,
	NULL /* sentinel */
};

/* status of indicator multibitmap_2_2: array bitmap */
static const vt3_image FAR ind_screen_1_multibitmap_2_2_bitmap[1] = {
	{ VT3IMG_BITMAP_RLE, vt3_BMP__12_EjderLogo2_0_1, 0, VT3_COLOR_TRANSPARENT }, 
}; /* ind_screen_1_multibitmap_2_2_bitmap[] */

/* ROM configuration of indicator multibitmap_2_2 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_1_multibitmap_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_1_multibitmap_2_2,
	/* width            */ 92,
	/* height           */ 86,
	/* layer            */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_screen_1_multibitmap_2_2_bitmap,
}; /* __ROM_value__ind_screen_1_multibitmap_2_2 */

/* initialization of the runtime status of indicator multibitmap_2_2 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_1_multibitmap_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multibitmap_2_2,
	/* x                */ 227,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multibitmap_2_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_multibitmap_2_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_3_2.invalid,
	NULL /* sentinel */
};

/* status of indicator multibitmap_2_3: array bitmap */
static const vt3_image FAR ind_screen_1_multibitmap_2_3_bitmap[1] = {
	{ VT3IMG_BITMAP_RLE, vt3_BMP__10_NurolLogo41_0_0, 0, VT3_COLOR_TRANSPARENT }, 
}; /* ind_screen_1_multibitmap_2_3_bitmap[] */

/* ROM configuration of indicator multibitmap_2_3 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_1_multibitmap_2_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_1_multibitmap_2_3,
	/* width            */ 100,
	/* height           */ 25,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_screen_1_multibitmap_2_3_bitmap,
}; /* __ROM_value__ind_screen_1_multibitmap_2_3 */

/* initialization of the runtime status of indicator multibitmap_2_3 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_1_multibitmap_2_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multibitmap_2_3,
	/* x                */ 110,
	/* y                */ 1,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multibitmap_2_3 */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_screen_1_multitext_text[1] = {
	IDS_TEXT17,
}; /* ind_screen_1_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_font[1] = {
	vt3_font_CourierNewRegular9, 
}; /* ind_screen_1_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_screen_1_multitext_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_1_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_MultiText FARPTR)) NULL,
	/* width            */ 90,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_1_multitext_text,
	/* font             */ ind_screen_1_multitext_font,
	/* color            */ ind_screen_1_multitext_color,
}; /* __ROM_value__ind_screen_1_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext,
	/* x                */ 129,
	/* y                */ 143,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_multitext_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* status of indicator multitext_2: array text */
static const UINT16 FAR ind_screen_1_multitext_2_text[1] = {
	IDS_TEXT18,
}; /* ind_screen_1_multitext_2_text[] */

/* status of indicator multitext_2: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_2_font[1] = {
	vt3_font_CourierNewRegular9, 
}; /* ind_screen_1_multitext_2_font[] */

/* status of indicator multitext_2: array color */
static const vt3_color FAR ind_screen_1_multitext_2_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_1_multitext_2_color[] */

/* ROM configuration of indicator multitext_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_MultiText FARPTR)) NULL,
	/* width            */ 90,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_1_multitext_2_text,
	/* font             */ ind_screen_1_multitext_2_font,
	/* color            */ ind_screen_1_multitext_2_color,
}; /* __ROM_value__ind_screen_1_multitext_2 */

/* initialization of the runtime status of indicator multitext_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_2,
	/* x                */ 223,
	/* y                */ 143,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_multitext_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* status of indicator multitext_3: array text */
static const UINT16 FAR ind_screen_1_multitext_3_text[1] = {
	IDS_TEXT19,
}; /* ind_screen_1_multitext_3_text[] */

/* status of indicator multitext_3: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_3_font[1] = {
	vt3_font_CourierNewRegular10, 
}; /* ind_screen_1_multitext_3_font[] */

/* status of indicator multitext_3: array color */
static const vt3_color FAR ind_screen_1_multitext_3_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_1_multitext_3_color[] */

/* ROM configuration of indicator multitext_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_MultiText FARPTR)) NULL,
	/* width            */ 98,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_1_multitext_3_text,
	/* font             */ ind_screen_1_multitext_3_font,
	/* color            */ ind_screen_1_multitext_3_color,
}; /* __ROM_value__ind_screen_1_multitext_3 */

/* initialization of the runtime status of indicator multitext_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_3,
	/* x                */ 127,
	/* y                */ 193,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_3 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_multitext_3_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* status of indicator multitext_4: array text */
static const UINT16 FAR ind_screen_1_multitext_4_text[1] = {
	IDS_TEXT20,
}; /* ind_screen_1_multitext_4_text[] */

/* status of indicator multitext_4: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_4_font[1] = {
	vt3_font_CourierNewRegular10, 
}; /* ind_screen_1_multitext_4_font[] */

/* status of indicator multitext_4: array color */
static const vt3_color FAR ind_screen_1_multitext_4_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_1_multitext_4_color[] */

/* ROM configuration of indicator multitext_4 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_4 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_MultiText FARPTR)) NULL,
	/* width            */ 79,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_1_multitext_4_text,
	/* font             */ ind_screen_1_multitext_4_font,
	/* color            */ ind_screen_1_multitext_4_color,
}; /* __ROM_value__ind_screen_1_multitext_4 */

/* initialization of the runtime status of indicator multitext_4 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_4,
	/* x                */ 228,
	/* y                */ 193,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_4 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_multitext_4_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator number_2_3_2 */
static const char FAR ind_screen_1_number_2_3_2__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_number_2_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_number_2_3_2,
	/* width            */ 52,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* separator        */ ind_screen_1_number_2_3_2__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_number_2_3_2 */

/* initialization of the runtime status of indicator number_2_3_2 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_number_2_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_number_2_3_2,
	/* x                */ 37,
	/* y                */ 155,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 1234567,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_number_2_3_2 */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text,
	/* width            */ 15,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text,
	/* x                */ 95,
	/* y                */ 155,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text */

/* ROM configuration of indicator BG_FBPressGauge */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_BG_FBPressGauge = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 92,
	/* height           */ 26,
	/* thick            */ 1,
	/* layer            */ 0,
}; /* __ROM_value__ind_screen_1_BG_FBPressGauge */

/* initialization of the runtime status of indicator BG_FBPressGauge */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_BG_FBPressGauge = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_BG_FBPressGauge,
	/* x                */ 126,
	/* y                */ 157,
	/* border           */ 4 /* = RGB(255, 255, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_TRANSPARENT,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_BG_FBPressGauge */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_BG_FBPressGauge_invalid_chain[] =
{
	&vt3_screen_union.screen_1.FBPressValue.invalid,
	&vt3_screen_union.screen_1.FBPressValueUnit.invalid,
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressGauge */
static const vt3_indicator_ROM_GaugeBar FAR __ROM_value__ind_screen_1_FBPressGauge = {
	/* virtual method table */ &vt3_indicator_VMT_GaugeBar,
	/* event code       */ vt3_event_ind_screen_1_FBPressGauge,
	/* width            */ 90,
	/* height           */ 24,
	/* orientation      */ VT3_ORIENTATION_LEFT_RIGHT,
	/* fill0            */ { VT3IMG_COLOR, (ICONPTR)NULL, 249 /* = RGB(255, 0, 0) */, 0 },
	/* fill1            */ { VT3IMG_COLOR, (ICONPTR)NULL, 249 /* = RGB(255, 0, 0) */, 0 },
	/* fill2            */ { VT3IMG_COLOR, (ICONPTR)NULL, 63 /* = RGB(85, 191, 255) */, 0 },
	/* bg               */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, 0 },
	/* layer            */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_FBPressGauge */

/* initialization of the runtime status of indicator FBPressGauge */
static const vt3_indicator_GaugeBar FAR __init_value__ind_screen_1_FBPressGauge = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressGauge,
	/* x                */ 127,
	/* y                */ 158,
	/* minValue         */ 0,
	/* zone1Value       */ 45,
	/* zone2Value       */ 45,
	/* maxValue         */ 85,
	/* currentValue     */ 85,
	/* timeout          */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressGauge */

/* ROM configuration of indicator FBPressValue */
static const char FAR ind_screen_1_FBPressValue__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_FBPressValue = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_FBPressValue,
	/* width            */ 36,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* separator        */ ind_screen_1_FBPressValue__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_FBPressValue */

/* initialization of the runtime status of indicator FBPressValue */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_FBPressValue = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValue,
	/* x                */ 133,
	/* y                */ 162,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 85,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValue */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_FBPressValue_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressValueUnit */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_FBPressValueUnit = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_FBPressValueUnit,
	/* width            */ 30,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_FBPressValueUnit */

/* initialization of the runtime status of indicator FBPressValueUnit */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_FBPressValueUnit = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValueUnit,
	/* x                */ 173,
	/* y                */ 162,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValueUnit */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_FBPressValueUnit_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator BG_FBPressGauge_2 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_BG_FBPressGauge_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 92,
	/* height           */ 26,
	/* thick            */ 1,
	/* layer            */ 1,
}; /* __ROM_value__ind_screen_1_BG_FBPressGauge_2 */

/* initialization of the runtime status of indicator BG_FBPressGauge_2 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_BG_FBPressGauge_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_BG_FBPressGauge_2,
	/* x                */ 126,
	/* y                */ 205,
	/* border           */ 4 /* = RGB(255, 255, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_NOTHING,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_BG_FBPressGauge_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_BG_FBPressGauge_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.FBPressGauge_2.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressGauge_2 */
static const vt3_indicator_ROM_GaugeBar FAR __ROM_value__ind_screen_1_FBPressGauge_2 = {
	/* virtual method table */ &vt3_indicator_VMT_GaugeBar,
	/* event code       */ vt3_event_ind_screen_1_FBPressGauge_2,
	/* width            */ 90,
	/* height           */ 24,
	/* orientation      */ VT3_ORIENTATION_LEFT_RIGHT,
	/* fill0            */ { VT3IMG_COLOR, (ICONPTR)NULL, 249 /* = RGB(255, 0, 0) */, 0 },
	/* fill1            */ { VT3IMG_COLOR, (ICONPTR)NULL, 249 /* = RGB(255, 0, 0) */, 0 },
	/* fill2            */ { VT3IMG_COLOR, (ICONPTR)NULL, 63 /* = RGB(85, 191, 255) */, 0 },
	/* bg               */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, 0 },
	/* layer            */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_FBPressGauge_2 */

/* initialization of the runtime status of indicator FBPressGauge_2 */
static const vt3_indicator_GaugeBar FAR __init_value__ind_screen_1_FBPressGauge_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressGauge_2,
	/* x                */ 127,
	/* y                */ 206,
	/* minValue         */ 0,
	/* zone1Value       */ 45,
	/* zone2Value       */ 45,
	/* maxValue         */ 85,
	/* currentValue     */ 85,
	/* timeout          */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressGauge_2 */

/* ROM configuration of indicator FBPressValue_2 */
static const char FAR ind_screen_1_FBPressValue_2__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_FBPressValue_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_FBPressValue_2,
	/* width            */ 36,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* separator        */ ind_screen_1_FBPressValue_2__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_FBPressValue_2 */

/* initialization of the runtime status of indicator FBPressValue_2 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_FBPressValue_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValue_2,
	/* x                */ 133,
	/* y                */ 210,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 85,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValue_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_FBPressValue_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressValueUnit_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_FBPressValueUnit_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_FBPressValueUnit_2,
	/* width            */ 30,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_FBPressValueUnit_2 */

/* initialization of the runtime status of indicator FBPressValueUnit_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_FBPressValueUnit_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValueUnit_2,
	/* x                */ 173,
	/* y                */ 210,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValueUnit_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_FBPressValueUnit_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator BG_FBPressGauge_3 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_BG_FBPressGauge_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 92,
	/* height           */ 26,
	/* thick            */ 1,
	/* layer            */ 1,
}; /* __ROM_value__ind_screen_1_BG_FBPressGauge_3 */

/* initialization of the runtime status of indicator BG_FBPressGauge_3 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_BG_FBPressGauge_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_BG_FBPressGauge_3,
	/* x                */ 224,
	/* y                */ 157,
	/* border           */ 4 /* = RGB(255, 255, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_NOTHING,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_BG_FBPressGauge_3 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_BG_FBPressGauge_3_invalid_chain[] =
{
	&vt3_screen_union.screen_1.FBPressGauge_3.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressGauge_3 */
static const vt3_indicator_ROM_GaugeBar FAR __ROM_value__ind_screen_1_FBPressGauge_3 = {
	/* virtual method table */ &vt3_indicator_VMT_GaugeBar,
	/* event code       */ vt3_event_ind_screen_1_FBPressGauge_3,
	/* width            */ 90,
	/* height           */ 24,
	/* orientation      */ VT3_ORIENTATION_LEFT_RIGHT,
	/* fill0            */ { VT3IMG_COLOR, (ICONPTR)NULL, 182 /* = RGB(255, 31, 0) */, 0 },
	/* fill1            */ { VT3IMG_COLOR, (ICONPTR)NULL, 249 /* = RGB(255, 0, 0) */, 0 },
	/* fill2            */ { VT3IMG_COLOR, (ICONPTR)NULL, 63 /* = RGB(85, 191, 255) */, 0 },
	/* bg               */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, 0 },
	/* layer            */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_FBPressGauge_3 */

/* initialization of the runtime status of indicator FBPressGauge_3 */
static const vt3_indicator_GaugeBar FAR __init_value__ind_screen_1_FBPressGauge_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressGauge_3,
	/* x                */ 225,
	/* y                */ 158,
	/* minValue         */ 0,
	/* zone1Value       */ 45,
	/* zone2Value       */ 45,
	/* maxValue         */ 85,
	/* currentValue     */ 85,
	/* timeout          */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressGauge_3 */

/* ROM configuration of indicator FBPressValue_3 */
static const char FAR ind_screen_1_FBPressValue_3__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_FBPressValue_3 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_FBPressValue_3,
	/* width            */ 36,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* separator        */ ind_screen_1_FBPressValue_3__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_FBPressValue_3 */

/* initialization of the runtime status of indicator FBPressValue_3 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_FBPressValue_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValue_3,
	/* x                */ 230,
	/* y                */ 162,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 85,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValue_3 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_FBPressValue_3_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressValueUnit_3 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_FBPressValueUnit_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_FBPressValueUnit_3,
	/* width            */ 30,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_FBPressValueUnit_3 */

/* initialization of the runtime status of indicator FBPressValueUnit_3 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_FBPressValueUnit_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValueUnit_3,
	/* x                */ 270,
	/* y                */ 162,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValueUnit_3 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_FBPressValueUnit_3_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator BG_FBPressGauge_4 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_BG_FBPressGauge_4 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 92,
	/* height           */ 26,
	/* thick            */ 1,
	/* layer            */ 1,
}; /* __ROM_value__ind_screen_1_BG_FBPressGauge_4 */

/* initialization of the runtime status of indicator BG_FBPressGauge_4 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_BG_FBPressGauge_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_BG_FBPressGauge_4,
	/* x                */ 224,
	/* y                */ 205,
	/* border           */ 4 /* = RGB(255, 255, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_NOTHING,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_BG_FBPressGauge_4 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_BG_FBPressGauge_4_invalid_chain[] =
{
	&vt3_screen_union.screen_1.FBPressGauge_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressGauge_4 */
static const vt3_indicator_ROM_GaugeBar FAR __ROM_value__ind_screen_1_FBPressGauge_4 = {
	/* virtual method table */ &vt3_indicator_VMT_GaugeBar,
	/* event code       */ vt3_event_ind_screen_1_FBPressGauge_4,
	/* width            */ 90,
	/* height           */ 24,
	/* orientation      */ VT3_ORIENTATION_LEFT_RIGHT,
	/* fill0            */ { VT3IMG_COLOR, (ICONPTR)NULL, 182 /* = RGB(255, 31, 0) */, 0 },
	/* fill1            */ { VT3IMG_COLOR, (ICONPTR)NULL, 249 /* = RGB(255, 0, 0) */, 0 },
	/* fill2            */ { VT3IMG_COLOR, (ICONPTR)NULL, 63 /* = RGB(85, 191, 255) */, 0 },
	/* bg               */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_TRANSPARENT, 0 },
	/* layer            */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_FBPressGauge_4 */

/* initialization of the runtime status of indicator FBPressGauge_4 */
static const vt3_indicator_GaugeBar FAR __init_value__ind_screen_1_FBPressGauge_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressGauge_4,
	/* x                */ 225,
	/* y                */ 206,
	/* minValue         */ 0,
	/* zone1Value       */ 60,
	/* zone2Value       */ 60,
	/* maxValue         */ 85,
	/* currentValue     */ 85,
	/* timeout          */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressGauge_4 */

/* ROM configuration of indicator FBPressValue_4 */
static const char FAR ind_screen_1_FBPressValue_4__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_FBPressValue_4 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_FBPressValue_4,
	/* width            */ 36,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* separator        */ ind_screen_1_FBPressValue_4__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_FBPressValue_4 */

/* initialization of the runtime status of indicator FBPressValue_4 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_FBPressValue_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValue_4,
	/* x                */ 231,
	/* y                */ 210,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 85,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValue_4 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_FBPressValue_4_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressValueUnit_4 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_FBPressValueUnit_4 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_FBPressValueUnit_4,
	/* width            */ 30,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBoldItalic16,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_FBPressValueUnit_4 */

/* initialization of the runtime status of indicator FBPressValueUnit_4 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_FBPressValueUnit_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValueUnit_4,
	/* x                */ 270,
	/* y                */ 210,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValueUnit_4 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_FBPressValueUnit_4_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_rect_4.invalid,
	NULL /* sentinel */
};

/* status of indicator multibitmap_2_3_2: array bitmap */
static const vt3_image FAR ind_screen_1_multibitmap_2_3_2_bitmap[1] = {
	{ VT3IMG_BITMAP_RLE, vt3_BMP__7_Iconabatterie_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
}; /* ind_screen_1_multibitmap_2_3_2_bitmap[] */

/* ROM configuration of indicator multibitmap_2_3_2 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_1_multibitmap_2_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_1_multibitmap_2_3_2,
	/* width            */ 30,
	/* height           */ 22,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_screen_1_multibitmap_2_3_2_bitmap,
}; /* __ROM_value__ind_screen_1_multibitmap_2_3_2 */

/* initialization of the runtime status of indicator multibitmap_2_3_2 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_1_multibitmap_2_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multibitmap_2_3_2,
	/* x                */ 3,
	/* y                */ 211,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multibitmap_2_3_2 */

/* status of indicator multibitmap_2_3_2_2: array bitmap */
static const vt3_image FAR ind_screen_1_multibitmap_2_3_2_2_bitmap[1] = {
	{ VT3IMG_BITMAP_RLE, vt3_BMP__4_Iconaorologio_0_0, 0, 4 /* = RGB(255, 255, 255) */ }, 
}; /* ind_screen_1_multibitmap_2_3_2_2_bitmap[] */

/* ROM configuration of indicator multibitmap_2_3_2_2 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_1_multibitmap_2_3_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_1_multibitmap_2_3_2_2,
	/* width            */ 30,
	/* height           */ 22,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_screen_1_multibitmap_2_3_2_2_bitmap,
}; /* __ROM_value__ind_screen_1_multibitmap_2_3_2_2 */

/* initialization of the runtime status of indicator multibitmap_2_3_2_2 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_1_multibitmap_2_3_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multibitmap_2_3_2_2,
	/* x                */ 3,
	/* y                */ 177,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multibitmap_2_3_2_2 */

/* status of indicator multibitmap_2_3_2_3: array bitmap */
static const vt3_image FAR ind_screen_1_multibitmap_2_3_2_3_bitmap[1] = {
	{ VT3IMG_BITMAP_RLE, vt3_BMP__1_Iconacruisecontrol_0_0, 0, 0 /* = RGB(0, 0, 0) */ }, 
}; /* ind_screen_1_multibitmap_2_3_2_3_bitmap[] */

/* ROM configuration of indicator multibitmap_2_3_2_3 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_1_multibitmap_2_3_2_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_1_multibitmap_2_3_2_3,
	/* width            */ 30,
	/* height           */ 22,
	/* layer            */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* bitmap           */ ind_screen_1_multibitmap_2_3_2_3_bitmap,
}; /* __ROM_value__ind_screen_1_multibitmap_2_3_2_3 */

/* initialization of the runtime status of indicator multibitmap_2_3_2_3 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_1_multibitmap_2_3_2_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multibitmap_2_3_2_3,
	/* x                */ 3,
	/* y                */ 143,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multibitmap_2_3_2_3 */

/* ROM configuration of indicator simple_rect */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_simple_rect = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 122,
	/* height           */ 32,
	/* thick            */ 1,
	/* layer            */ 1,
}; /* __ROM_value__ind_screen_1_simple_rect */

/* initialization of the runtime status of indicator simple_rect */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_simple_rect = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_rect,
	/* x                */ 0,
	/* y                */ 205,
	/* border           */ 63 /* = RGB(85, 191, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_TRANSPARENT,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_rect */

/* ROM configuration of indicator simple_rect_2 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_simple_rect_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 122,
	/* height           */ 32,
	/* thick            */ 1,
	/* layer            */ 1,
}; /* __ROM_value__ind_screen_1_simple_rect_2 */

/* initialization of the runtime status of indicator simple_rect_2 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_simple_rect_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_rect_2,
	/* x                */ 0,
	/* y                */ 171,
	/* border           */ 63 /* = RGB(85, 191, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_TRANSPARENT,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_rect_2 */

/* ROM configuration of indicator simple_rect_4 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_simple_rect_4 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 194,
	/* height           */ 100,
	/* thick            */ 1,
	/* layer            */ 0,
}; /* __ROM_value__ind_screen_1_simple_rect_4 */

/* initialization of the runtime status of indicator simple_rect_4 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_simple_rect_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_rect_4,
	/* x                */ 124,
	/* y                */ 137,
	/* border           */ 63 /* = RGB(85, 191, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_NOTHING,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_rect_4 */

/* ROM configuration of indicator simple_rect_2_2 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_simple_rect_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 122,
	/* height           */ 32,
	/* thick            */ 1,
	/* layer            */ 1,
}; /* __ROM_value__ind_screen_1_simple_rect_2_2 */

/* initialization of the runtime status of indicator simple_rect_2_2 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_simple_rect_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_rect_2_2,
	/* x                */ 0,
	/* y                */ 137,
	/* border           */ 63 /* = RGB(85, 191, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_TRANSPARENT,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_rect_2_2 */

/* ROM configuration of indicator simple_rect_3 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_simple_rect_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 249,
	/* height           */ 24,
	/* thick            */ 1,
	/* layer            */ 1,
}; /* __ROM_value__ind_screen_1_simple_rect_3 */

/* initialization of the runtime status of indicator simple_rect_3 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_simple_rect_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_rect_3,
	/* x                */ 0,
	/* y                */ 110,
	/* border           */ 63 /* = RGB(85, 191, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_TRANSPARENT,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_rect_3 */

/* ROM configuration of indicator simple_rect_3_2 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_simple_rect_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 249,
	/* height           */ 24,
	/* thick            */ 1,
	/* layer            */ 1,
}; /* __ROM_value__ind_screen_1_simple_rect_3_2 */

/* initialization of the runtime status of indicator simple_rect_3_2 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_simple_rect_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_rect_3_2,
	/* x                */ 0,
	/* y                */ 85,
	/* border           */ 63 /* = RGB(85, 191, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ VT3_COLOR_TRANSPARENT,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_rect_3_2 */

/* ROM configuration of indicator number_2_3_2_3 */
static const char FAR ind_screen_1_number_2_3_2_3__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_number_2_3_2_3 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_number_2_3_2_3,
	/* width            */ 52,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* separator        */ ind_screen_1_number_2_3_2_3__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_number_2_3_2_3 */

/* initialization of the runtime status of indicator number_2_3_2_3 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_number_2_3_2_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_number_2_3_2_3,
	/* x                */ 38,
	/* y                */ 223,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 32,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_number_2_3_2_3 */

/* ROM configuration of indicator EngineHour */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_EngineHour = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_EngineHour,
	/* width            */ 52,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_EngineHour */

/* initialization of the runtime status of indicator EngineHour */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_EngineHour = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_EngineHour,
	/* x                */ 37,
	/* y                */ 189,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_EngineHour */

/* ROM configuration of indicator simple_rect_5 */
static const vt3_indicator_ROM_SimpleRect FAR __ROM_value__ind_screen_1_simple_rect_5 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleRect,
	/* width            */ 67,
	/* height           */ 49,
	/* thick            */ 1,
	/* layer            */ 0,
}; /* __ROM_value__ind_screen_1_simple_rect_5 */

/* initialization of the runtime status of indicator simple_rect_5 */
static const vt3_indicator_SimpleRect FAR __init_value__ind_screen_1_simple_rect_5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_rect_5,
	/* x                */ 251,
	/* y                */ 85,
	/* border           */ 63 /* = RGB(85, 191, 255) */,
	/* old_border       */ 0 /* = RGB(0, 0, 0) */,
	/* fill             */ 249 /* = RGB(255, 0, 0) */,
	/* old_fill         */ 245 /* = RGB(42, 63, 85) near (16, 16, 16) */,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_rect_5 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_simple_rect_5_invalid_chain[] =
{
	&vt3_screen_union.screen_1.multitext_5.invalid,
	NULL /* sentinel */
};

/* status of indicator multitext_5: array text */
static const UINT16 FAR ind_screen_1_multitext_5_text[8] = {
	IDS_GEAR_0,
	IDS_GEAR_1,
	IDS_GEAR_2,
	IDS_GEAR_3,
	IDS_GEAR_4,
	IDS_GEAR_5,
	IDS_GEAR_6,
	IDS_GEAR_7,
}; /* ind_screen_1_multitext_5_text[] */

/* status of indicator multitext_5: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_5_font[8] = {
	vt3_font_ArialBoldItalic30, 
	vt3_font_ArialBoldItalic30, 
	vt3_font_ArialBoldItalic30, 
	vt3_font_ArialBoldItalic30, 
	vt3_font_ArialBoldItalic30, 
	vt3_font_ArialBoldItalic30, 
	vt3_font_ArialBoldItalic30, 
	vt3_font_ArialBoldItalic30, 
}; /* ind_screen_1_multitext_5_font[] */

/* status of indicator multitext_5: array color */
static const vt3_color FAR ind_screen_1_multitext_5_color[8] = {
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_1_multitext_5_color[] */

/* ROM configuration of indicator multitext_5 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_5 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_1_multitext_5,
	/* width            */ 53,
	/* height           */ 35,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 8,
	/* text             */ ind_screen_1_multitext_5_text,
	/* font             */ ind_screen_1_multitext_5_font,
	/* color            */ ind_screen_1_multitext_5_color,
}; /* __ROM_value__ind_screen_1_multitext_5 */

/* initialization of the runtime status of indicator multitext_5 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_5,
	/* x                */ 258,
	/* y                */ 93,
	/* background       */ 249 /* = RGB(255, 0, 0) */,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_5 */

/* ROM configuration of indicator simple_text_3_3_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_3_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_3_3_2,
	/* width            */ 15,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_3_3_2 */

/* initialization of the runtime status of indicator simple_text_3_3_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_3_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_3_3_2,
	/* x                */ 96,
	/* y                */ 223,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_3_3_2 */

/* status of indicator multitext_6: array text */
static const UINT16 FAR ind_screen_1_multitext_6_text[1] = {
	IDS_TEXT22,
}; /* ind_screen_1_multitext_6_text[] */

/* status of indicator multitext_6: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_6_font[1] = {
	vt3_font_CourierNewRegular10, 
}; /* ind_screen_1_multitext_6_font[] */

/* status of indicator multitext_6: array color */
static const vt3_color FAR ind_screen_1_multitext_6_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_1_multitext_6_color[] */

/* ROM configuration of indicator multitext_6 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_6 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_1_multitext_6,
	/* width            */ 83,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_1_multitext_6_text,
	/* font             */ ind_screen_1_multitext_6_font,
	/* color            */ ind_screen_1_multitext_6_color,
}; /* __ROM_value__ind_screen_1_multitext_6 */

/* initialization of the runtime status of indicator multitext_6 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_6 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_6,
	/* x                */ 36,
	/* y                */ 143,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_6 */

/* status of indicator multitext_6_2: array text */
static const UINT16 FAR ind_screen_1_multitext_6_2_text[1] = {
	IDS_TEXT23,
}; /* ind_screen_1_multitext_6_2_text[] */

/* status of indicator multitext_6_2: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_6_2_font[1] = {
	vt3_font_CourierNewRegular10, 
}; /* ind_screen_1_multitext_6_2_font[] */

/* status of indicator multitext_6_2: array color */
static const vt3_color FAR ind_screen_1_multitext_6_2_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_1_multitext_6_2_color[] */

/* ROM configuration of indicator multitext_6_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_6_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_1_multitext_6_2,
	/* width            */ 83,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_1_multitext_6_2_text,
	/* font             */ ind_screen_1_multitext_6_2_font,
	/* color            */ ind_screen_1_multitext_6_2_color,
}; /* __ROM_value__ind_screen_1_multitext_6_2 */

/* initialization of the runtime status of indicator multitext_6_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_6_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_6_2,
	/* x                */ 36,
	/* y                */ 177,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_6_2 */

/* status of indicator multitext_6_3: array text */
static const UINT16 FAR ind_screen_1_multitext_6_3_text[1] = {
	IDS_TEXT24,
}; /* ind_screen_1_multitext_6_3_text[] */

/* status of indicator multitext_6_3: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_6_3_font[1] = {
	vt3_font_CourierNewRegular10, 
}; /* ind_screen_1_multitext_6_3_font[] */

/* status of indicator multitext_6_3: array color */
static const vt3_color FAR ind_screen_1_multitext_6_3_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_1_multitext_6_3_color[] */

/* ROM configuration of indicator multitext_6_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_6_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_1_multitext_6_3,
	/* width            */ 82,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_1_multitext_6_3_text,
	/* font             */ ind_screen_1_multitext_6_3_font,
	/* color            */ ind_screen_1_multitext_6_3_color,
}; /* __ROM_value__ind_screen_1_multitext_6_3 */

/* initialization of the runtime status of indicator multitext_6_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_6_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_6_3,
	/* x                */ 36,
	/* y                */ 211,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_6_3 */

/* status of indicator multitext_7: array text */
static const UINT16 FAR ind_screen_1_multitext_7_text[1] = {
	GIGA_TEXT10,
}; /* ind_screen_1_multitext_7_text[] */

/* status of indicator multitext_7: array font */
static const vt3_font FARPTR const ind_screen_1_multitext_7_font[1] = {
	vt3_font_CourierNewRegular11, 
}; /* ind_screen_1_multitext_7_font[] */

/* status of indicator multitext_7: array color */
static const vt3_color FAR ind_screen_1_multitext_7_color[1] = {
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_1_multitext_7_color[] */

/* ROM configuration of indicator multitext_7 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_1_multitext_7 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_1_multitext_7,
	/* width            */ 15,
	/* height           */ 12,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_1_multitext_7_text,
	/* font             */ ind_screen_1_multitext_7_font,
	/* color            */ ind_screen_1_multitext_7_color,
}; /* __ROM_value__ind_screen_1_multitext_7 */

/* initialization of the runtime status of indicator multitext_7 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_1_multitext_7 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_multitext_7,
	/* x                */ 95,
	/* y                */ 189,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_multitext_7 */

/* ROM configuration of indicator FBPressValue_3_2 */
static const char FAR ind_screen_1_FBPressValue_3_2__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_FBPressValue_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_FBPressValue_3_2,
	/* width            */ 32,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* separator        */ ind_screen_1_FBPressValue_3_2__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_FBPressValue_3_2 */

/* initialization of the runtime status of indicator FBPressValue_3_2 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_FBPressValue_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValue_3_2,
	/* x                */ 8,
	/* y                */ 16,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 1000,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValue_3_2 */

/* ROM configuration of indicator FBPressValue_3_2_2 */
static const char FAR ind_screen_1_FBPressValue_3_2_2__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_FBPressValue_3_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_FBPressValue_3_2_2,
	/* width            */ 24,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* separator        */ ind_screen_1_FBPressValue_3_2_2__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_FBPressValue_3_2_2 */

/* initialization of the runtime status of indicator FBPressValue_3_2_2 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_FBPressValue_3_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValue_3_2_2,
	/* x                */ 16,
	/* y                */ 0,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 85,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValue_3_2_2 */

/* ROM configuration of indicator simple_text_2_3 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_2_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_2_3,
	/* width            */ 16,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular12,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_2_3 */

/* initialization of the runtime status of indicator simple_text_2_3 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_2_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_2_3,
	/* x                */ 48,
	/* y                */ 0,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_2_3 */

/* ROM configuration of indicator simple_text_2_3_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_2_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_2_3_2,
	/* width            */ 24,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular10,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_2_3_2 */

/* initialization of the runtime status of indicator simple_text_2_3_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_2_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_2_3_2,
	/* x                */ 48,
	/* y                */ 16,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_2_3_2 */

/* ROM configuration of indicator vvrPump */
static const char FAR ind_screen_1_vvrPump__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_vvrPump = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_vvrPump,
	/* width            */ 24,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialRegular9,
	/* separator        */ ind_screen_1_vvrPump__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 1,
}; /* __ROM_value__ind_screen_1_vvrPump */

/* initialization of the runtime status of indicator vvrPump */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_vvrPump = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_vvrPump,
	/* x                */ 16,
	/* y                */ 43,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_vvrPump */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_vvrPump_invalid_chain[] =
{
	&vt3_screen_union.screen_1.vvrPump_3.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator simple_text_2_3_3 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_2_3_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_2_3_3,
	/* width            */ 63,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular10,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_2_3_3 */

/* initialization of the runtime status of indicator simple_text_2_3_3 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_2_3_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_2_3_3,
	/* x                */ 42,
	/* y                */ 45,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_2_3_3 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_simple_text_2_3_3_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_text_2_3_3_3.invalid,
	&vt3_screen_union.screen_1.simple_text_2_3_3_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator simple_text_2_3_3_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_2_3_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_2_3_3_2,
	/* width            */ 48,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular10,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_2_3_3_2 */

/* initialization of the runtime status of indicator simple_text_2_3_3_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_2_3_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_2_3_3_2,
	/* x                */ 48,
	/* y                */ 72,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_2_3_3_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_1_simple_text_2_3_3_2_invalid_chain[] =
{
	&vt3_screen_union.screen_1.simple_text_2_3_3_4.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator FBPressValue_3_2_3 */
static const char FAR ind_screen_1_FBPressValue_3_2_3__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_FBPressValue_3_2_3 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_FBPressValue_3_2_3,
	/* width            */ 32,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* separator        */ ind_screen_1_FBPressValue_3_2_3__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_FBPressValue_3_2_3 */

/* initialization of the runtime status of indicator FBPressValue_3_2_3 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_FBPressValue_3_2_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValue_3_2_3,
	/* x                */ 8,
	/* y                */ 72,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 1000,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValue_3_2_3 */

/* ROM configuration of indicator vvrPump_2 */
static const char FAR ind_screen_1_vvrPump_2__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_vvrPump_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_vvrPump_2,
	/* width            */ 24,
	/* height           */ 10,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialRegular9,
	/* separator        */ ind_screen_1_vvrPump_2__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 1,
}; /* __ROM_value__ind_screen_1_vvrPump_2 */

/* initialization of the runtime status of indicator vvrPump_2 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_vvrPump_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_vvrPump_2,
	/* x                */ 16,
	/* y                */ 32,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_vvrPump_2 */

/* ROM configuration of indicator simple_text_2_3_3_3 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_2_3_3_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_2_3_3_3,
	/* width            */ 32,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular10,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_2_3_3_3 */

/* initialization of the runtime status of indicator simple_text_2_3_3_3 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_2_3_3_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_2_3_3_3,
	/* x                */ 48,
	/* y                */ 32,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_2_3_3_3 */

/* ROM configuration of indicator vvrPump_3 */
static const char FAR ind_screen_1_vvrPump_3__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_vvrPump_3 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_vvrPump_3,
	/* width            */ 24,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialRegular9,
	/* separator        */ ind_screen_1_vvrPump_3__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 1,
}; /* __ROM_value__ind_screen_1_vvrPump_3 */

/* initialization of the runtime status of indicator vvrPump_3 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_vvrPump_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_vvrPump_3,
	/* x                */ 16,
	/* y                */ 56,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_vvrPump_3 */

/* ROM configuration of indicator simple_text_2_3_3_4 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_1_simple_text_2_3_3_4 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_1_simple_text_2_3_3_4,
	/* width            */ 24,
	/* height           */ 19,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular17,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_1_simple_text_2_3_3_4 */

/* initialization of the runtime status of indicator simple_text_2_3_3_4 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_1_simple_text_2_3_3_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_simple_text_2_3_3_4,
	/* x                */ 48,
	/* y                */ 56,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_simple_text_2_3_3_4 */

/* ROM configuration of indicator FBPressValue_3_2_2_2 */
static const char FAR ind_screen_1_FBPressValue_3_2_2_2__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_1_FBPressValue_3_2_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_1_FBPressValue_3_2_2_2,
	/* width            */ 32,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* separator        */ ind_screen_1_FBPressValue_3_2_2_2__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_1_FBPressValue_3_2_2_2 */

/* initialization of the runtime status of indicator FBPressValue_3_2_2_2 */
static const vt3_indicator_Number FAR __init_value__ind_screen_1_FBPressValue_3_2_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_1_FBPressValue_3_2_2_2,
	/* x                */ 72,
	/* y                */ 0,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ 1000,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_1_FBPressValue_3_2_2_2 */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_1[] = {
	{ &vt3_screen_union.screen_1._background, &__init_value__ind_screen_1, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.screen_1.multitext_1, &__init_value__ind_screen_1_multitext_1, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.multitext_1_2, &__init_value__ind_screen_1_multitext_1_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.simple_text_2, &__init_value__ind_screen_1_simple_text_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.simple_text_2_2, &__init_value__ind_screen_1_simple_text_2_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.multibitmap_2, &__init_value__ind_screen_1_multibitmap_2, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen_1.multibitmap_2_2, &__init_value__ind_screen_1_multibitmap_2_2, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen_1.multibitmap_2_3, &__init_value__ind_screen_1_multibitmap_2_3, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen_1.multitext, &__init_value__ind_screen_1_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.multitext_2, &__init_value__ind_screen_1_multitext_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.multitext_3, &__init_value__ind_screen_1_multitext_3, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.multitext_4, &__init_value__ind_screen_1_multitext_4, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.number_2_3_2, &__init_value__ind_screen_1_number_2_3_2, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.simple_text, &__init_value__ind_screen_1_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.BG_FBPressGauge, &__init_value__ind_screen_1_BG_FBPressGauge, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.FBPressGauge, &__init_value__ind_screen_1_FBPressGauge, sizeof(vt3_indicator_GaugeBar) },
	{ &vt3_screen_union.screen_1.FBPressValue, &__init_value__ind_screen_1_FBPressValue, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.FBPressValueUnit, &__init_value__ind_screen_1_FBPressValueUnit, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.BG_FBPressGauge_2, &__init_value__ind_screen_1_BG_FBPressGauge_2, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.FBPressGauge_2, &__init_value__ind_screen_1_FBPressGauge_2, sizeof(vt3_indicator_GaugeBar) },
	{ &vt3_screen_union.screen_1.FBPressValue_2, &__init_value__ind_screen_1_FBPressValue_2, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.FBPressValueUnit_2, &__init_value__ind_screen_1_FBPressValueUnit_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.BG_FBPressGauge_3, &__init_value__ind_screen_1_BG_FBPressGauge_3, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.FBPressGauge_3, &__init_value__ind_screen_1_FBPressGauge_3, sizeof(vt3_indicator_GaugeBar) },
	{ &vt3_screen_union.screen_1.FBPressValue_3, &__init_value__ind_screen_1_FBPressValue_3, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.FBPressValueUnit_3, &__init_value__ind_screen_1_FBPressValueUnit_3, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.BG_FBPressGauge_4, &__init_value__ind_screen_1_BG_FBPressGauge_4, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.FBPressGauge_4, &__init_value__ind_screen_1_FBPressGauge_4, sizeof(vt3_indicator_GaugeBar) },
	{ &vt3_screen_union.screen_1.FBPressValue_4, &__init_value__ind_screen_1_FBPressValue_4, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.FBPressValueUnit_4, &__init_value__ind_screen_1_FBPressValueUnit_4, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.multibitmap_2_3_2, &__init_value__ind_screen_1_multibitmap_2_3_2, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen_1.multibitmap_2_3_2_2, &__init_value__ind_screen_1_multibitmap_2_3_2_2, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen_1.multibitmap_2_3_2_3, &__init_value__ind_screen_1_multibitmap_2_3_2_3, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen_1.simple_rect, &__init_value__ind_screen_1_simple_rect, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.simple_rect_2, &__init_value__ind_screen_1_simple_rect_2, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.simple_rect_4, &__init_value__ind_screen_1_simple_rect_4, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.simple_rect_2_2, &__init_value__ind_screen_1_simple_rect_2_2, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.simple_rect_3, &__init_value__ind_screen_1_simple_rect_3, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.simple_rect_3_2, &__init_value__ind_screen_1_simple_rect_3_2, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.number_2_3_2_3, &__init_value__ind_screen_1_number_2_3_2_3, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.EngineHour, &__init_value__ind_screen_1_EngineHour, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.simple_rect_5, &__init_value__ind_screen_1_simple_rect_5, sizeof(vt3_indicator_SimpleRect) },
	{ &vt3_screen_union.screen_1.multitext_5, &__init_value__ind_screen_1_multitext_5, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.simple_text_3_3_2, &__init_value__ind_screen_1_simple_text_3_3_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.multitext_6, &__init_value__ind_screen_1_multitext_6, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.multitext_6_2, &__init_value__ind_screen_1_multitext_6_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.multitext_6_3, &__init_value__ind_screen_1_multitext_6_3, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.multitext_7, &__init_value__ind_screen_1_multitext_7, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_1.FBPressValue_3_2, &__init_value__ind_screen_1_FBPressValue_3_2, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.FBPressValue_3_2_2, &__init_value__ind_screen_1_FBPressValue_3_2_2, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.simple_text_2_3, &__init_value__ind_screen_1_simple_text_2_3, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.simple_text_2_3_2, &__init_value__ind_screen_1_simple_text_2_3_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.vvrPump, &__init_value__ind_screen_1_vvrPump, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.simple_text_2_3_3, &__init_value__ind_screen_1_simple_text_2_3_3, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.simple_text_2_3_3_2, &__init_value__ind_screen_1_simple_text_2_3_3_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.FBPressValue_3_2_3, &__init_value__ind_screen_1_FBPressValue_3_2_3, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.vvrPump_2, &__init_value__ind_screen_1_vvrPump_2, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.simple_text_2_3_3_3, &__init_value__ind_screen_1_simple_text_2_3_3_3, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.vvrPump_3, &__init_value__ind_screen_1_vvrPump_3, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_1.simple_text_2_3_3_4, &__init_value__ind_screen_1_simple_text_2_3_3_4, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_1.FBPressValue_3_2_2_2, &__init_value__ind_screen_1_FBPressValue_3_2_2_2, sizeof(vt3_indicator_Number) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_1(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_1; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_1(BYTE event)
{
	/* invalidate text indicators in case of language change */
	if ( vt3_language != vt3_old_language )
	{
		/* indicators to be invalidated in case of language change */
		static BOOL FAR FARPTR const change_language_invalid_chain[] =
		{
			&vt3_screen_union.screen_1.multitext_1.invalid,
			&vt3_screen_union.screen_1.multitext_1_2.invalid,
			&vt3_screen_union.screen_1.simple_text_2.invalid,
			&vt3_screen_union.screen_1.simple_text_2_2.invalid,
			&vt3_screen_union.screen_1.multitext.invalid,
			&vt3_screen_union.screen_1.multitext_2.invalid,
			&vt3_screen_union.screen_1.multitext_3.invalid,
			&vt3_screen_union.screen_1.multitext_4.invalid,
			&vt3_screen_union.screen_1.simple_text.invalid,
			&vt3_screen_union.screen_1.FBPressValueUnit.invalid,
			&vt3_screen_union.screen_1.FBPressValueUnit_2.invalid,
			&vt3_screen_union.screen_1.FBPressValueUnit_3.invalid,
			&vt3_screen_union.screen_1.FBPressValueUnit_4.invalid,
			&vt3_screen_union.screen_1.EngineHour.invalid,
			&vt3_screen_union.screen_1.multitext_5.invalid,
			&vt3_screen_union.screen_1.simple_text_3_3_2.invalid,
			&vt3_screen_union.screen_1.multitext_6.invalid,
			&vt3_screen_union.screen_1.multitext_6_2.invalid,
			&vt3_screen_union.screen_1.multitext_6_3.invalid,
			&vt3_screen_union.screen_1.multitext_7.invalid,
			&vt3_screen_union.screen_1.simple_text_2_3.invalid,
			&vt3_screen_union.screen_1.simple_text_2_3_2.invalid,
			&vt3_screen_union.screen_1.simple_text_2_3_3.invalid,
			&vt3_screen_union.screen_1.simple_text_2_3_3_2.invalid,
			&vt3_screen_union.screen_1.simple_text_2_3_3_3.invalid,
			&vt3_screen_union.screen_1.simple_text_2_3_3_4.invalid,
			NULL /* sentinel */
		};
		vt3_follow_invalid_chain(change_language_invalid_chain);
		vt3_old_language = vt3_language;
	}

	/* event procedure for the screen */
	vt3_event_ind_screen_1(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.screen_1._background);

	/* indicator "multitext_1" of type "MultiText" */

	/* draw the indicator: multitext_1 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_1);


	/* indicator "multitext_1_2" of type "MultiText" */

	/* draw the indicator: multitext_1_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_1_2);


	/* indicator "simple_text_2" of type "SimpleText" */

	/* draw the indicator: simple_text_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_2);

	/* mark as invalid the indicators overlapped by simple_text_2 */
	if ( vt3_screen_union.screen_1.simple_text_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_simple_text_2_invalid_chain);
	}


	/* indicator "simple_text_2_2" of type "SimpleText" */

	/* draw the indicator: simple_text_2_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_2_2);

	/* mark as invalid the indicators overlapped by simple_text_2_2 */
	if ( vt3_screen_union.screen_1.simple_text_2_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_simple_text_2_2_invalid_chain);
	}


	/* indicator "multibitmap_2" of type "MultiBitmap" */

	/* draw the indicator: multibitmap_2 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen_1.multibitmap_2);

	/* mark as invalid the indicators overlapped by multibitmap_2 */
	if ( vt3_screen_union.screen_1.multibitmap_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_multibitmap_2_invalid_chain);
	}


	/* indicator "multibitmap_2_2" of type "MultiBitmap" */

	/* draw the indicator: multibitmap_2_2 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen_1.multibitmap_2_2);

	/* mark as invalid the indicators overlapped by multibitmap_2_2 */
	if ( vt3_screen_union.screen_1.multibitmap_2_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_multibitmap_2_2_invalid_chain);
	}


	/* indicator "multibitmap_2_3" of type "MultiBitmap" */

	/* draw the indicator: multibitmap_2_3 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen_1.multibitmap_2_3);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext);

	/* mark as invalid the indicators overlapped by multitext */
	if ( vt3_screen_union.screen_1.multitext.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_multitext_invalid_chain);
	}


	/* indicator "multitext_2" of type "MultiText" */

	/* draw the indicator: multitext_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_2);

	/* mark as invalid the indicators overlapped by multitext_2 */
	if ( vt3_screen_union.screen_1.multitext_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_multitext_2_invalid_chain);
	}


	/* indicator "multitext_3" of type "MultiText" */

	/* draw the indicator: multitext_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_3);

	/* mark as invalid the indicators overlapped by multitext_3 */
	if ( vt3_screen_union.screen_1.multitext_3.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_multitext_3_invalid_chain);
	}


	/* indicator "multitext_4" of type "MultiText" */

	/* draw the indicator: multitext_4 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_4);

	/* mark as invalid the indicators overlapped by multitext_4 */
	if ( vt3_screen_union.screen_1.multitext_4.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_multitext_4_invalid_chain);
	}


	/* indicator "number_2_3_2" of type "Number" */

	/* draw the indicator: number_2_3_2 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.number_2_3_2);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text);


	/* indicator "BG_FBPressGauge" of type "SimpleRect" */

	/* draw the indicator: BG_FBPressGauge */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.BG_FBPressGauge);

	/* mark as invalid the indicators overlapped by BG_FBPressGauge */
	if ( vt3_screen_union.screen_1.BG_FBPressGauge.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_BG_FBPressGauge_invalid_chain);
	}


	/* indicator "FBPressGauge" of type "GaugeBar" */

	/* draw the indicator: FBPressGauge */
	vt3_draw_indicator_GaugeBar(event, &vt3_screen_union.screen_1.FBPressGauge);


	/* indicator "FBPressValue" of type "Number" */

	/* draw the indicator: FBPressValue */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.FBPressValue);

	/* mark as invalid the indicators overlapped by FBPressValue */
	if ( vt3_screen_union.screen_1.FBPressValue.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_FBPressValue_invalid_chain);
	}


	/* indicator "FBPressValueUnit" of type "SimpleText" */

	/* draw the indicator: FBPressValueUnit */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.FBPressValueUnit);

	/* mark as invalid the indicators overlapped by FBPressValueUnit */
	if ( vt3_screen_union.screen_1.FBPressValueUnit.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_FBPressValueUnit_invalid_chain);
	}


	/* indicator "BG_FBPressGauge_2" of type "SimpleRect" */

	/* draw the indicator: BG_FBPressGauge_2 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.BG_FBPressGauge_2);

	/* mark as invalid the indicators overlapped by BG_FBPressGauge_2 */
	if ( vt3_screen_union.screen_1.BG_FBPressGauge_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_BG_FBPressGauge_2_invalid_chain);
	}


	/* indicator "FBPressGauge_2" of type "GaugeBar" */

	/* draw the indicator: FBPressGauge_2 */
	vt3_draw_indicator_GaugeBar(event, &vt3_screen_union.screen_1.FBPressGauge_2);


	/* indicator "FBPressValue_2" of type "Number" */

	/* draw the indicator: FBPressValue_2 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.FBPressValue_2);

	/* mark as invalid the indicators overlapped by FBPressValue_2 */
	if ( vt3_screen_union.screen_1.FBPressValue_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_FBPressValue_2_invalid_chain);
	}


	/* indicator "FBPressValueUnit_2" of type "SimpleText" */

	/* draw the indicator: FBPressValueUnit_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.FBPressValueUnit_2);

	/* mark as invalid the indicators overlapped by FBPressValueUnit_2 */
	if ( vt3_screen_union.screen_1.FBPressValueUnit_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_FBPressValueUnit_2_invalid_chain);
	}


	/* indicator "BG_FBPressGauge_3" of type "SimpleRect" */

	/* draw the indicator: BG_FBPressGauge_3 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.BG_FBPressGauge_3);

	/* mark as invalid the indicators overlapped by BG_FBPressGauge_3 */
	if ( vt3_screen_union.screen_1.BG_FBPressGauge_3.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_BG_FBPressGauge_3_invalid_chain);
	}


	/* indicator "FBPressGauge_3" of type "GaugeBar" */

	/* draw the indicator: FBPressGauge_3 */
	vt3_draw_indicator_GaugeBar(event, &vt3_screen_union.screen_1.FBPressGauge_3);


	/* indicator "FBPressValue_3" of type "Number" */

	/* draw the indicator: FBPressValue_3 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.FBPressValue_3);

	/* mark as invalid the indicators overlapped by FBPressValue_3 */
	if ( vt3_screen_union.screen_1.FBPressValue_3.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_FBPressValue_3_invalid_chain);
	}


	/* indicator "FBPressValueUnit_3" of type "SimpleText" */

	/* draw the indicator: FBPressValueUnit_3 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.FBPressValueUnit_3);

	/* mark as invalid the indicators overlapped by FBPressValueUnit_3 */
	if ( vt3_screen_union.screen_1.FBPressValueUnit_3.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_FBPressValueUnit_3_invalid_chain);
	}


	/* indicator "BG_FBPressGauge_4" of type "SimpleRect" */

	/* draw the indicator: BG_FBPressGauge_4 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.BG_FBPressGauge_4);

	/* mark as invalid the indicators overlapped by BG_FBPressGauge_4 */
	if ( vt3_screen_union.screen_1.BG_FBPressGauge_4.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_BG_FBPressGauge_4_invalid_chain);
	}


	/* indicator "FBPressGauge_4" of type "GaugeBar" */

	/* draw the indicator: FBPressGauge_4 */
	vt3_draw_indicator_GaugeBar(event, &vt3_screen_union.screen_1.FBPressGauge_4);


	/* indicator "FBPressValue_4" of type "Number" */

	/* draw the indicator: FBPressValue_4 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.FBPressValue_4);

	/* mark as invalid the indicators overlapped by FBPressValue_4 */
	if ( vt3_screen_union.screen_1.FBPressValue_4.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_FBPressValue_4_invalid_chain);
	}


	/* indicator "FBPressValueUnit_4" of type "SimpleText" */

	/* draw the indicator: FBPressValueUnit_4 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.FBPressValueUnit_4);

	/* mark as invalid the indicators overlapped by FBPressValueUnit_4 */
	if ( vt3_screen_union.screen_1.FBPressValueUnit_4.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_FBPressValueUnit_4_invalid_chain);
	}


	/* indicator "multibitmap_2_3_2" of type "MultiBitmap" */

	/* draw the indicator: multibitmap_2_3_2 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen_1.multibitmap_2_3_2);


	/* indicator "multibitmap_2_3_2_2" of type "MultiBitmap" */

	/* draw the indicator: multibitmap_2_3_2_2 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen_1.multibitmap_2_3_2_2);


	/* indicator "multibitmap_2_3_2_3" of type "MultiBitmap" */

	/* draw the indicator: multibitmap_2_3_2_3 */
	vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen_1.multibitmap_2_3_2_3);


	/* indicator "simple_rect" of type "SimpleRect" */

	/* draw the indicator: simple_rect */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.simple_rect);


	/* indicator "simple_rect_2" of type "SimpleRect" */

	/* draw the indicator: simple_rect_2 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.simple_rect_2);


	/* indicator "simple_rect_4" of type "SimpleRect" */

	/* draw the indicator: simple_rect_4 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.simple_rect_4);


	/* indicator "simple_rect_2_2" of type "SimpleRect" */

	/* draw the indicator: simple_rect_2_2 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.simple_rect_2_2);


	/* indicator "simple_rect_3" of type "SimpleRect" */

	/* draw the indicator: simple_rect_3 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.simple_rect_3);


	/* indicator "simple_rect_3_2" of type "SimpleRect" */

	/* draw the indicator: simple_rect_3_2 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.simple_rect_3_2);


	/* indicator "number_2_3_2_3" of type "Number" */

	/* draw the indicator: number_2_3_2_3 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.number_2_3_2_3);


	/* indicator "EngineHour" of type "SimpleText" */

	/* draw the indicator: EngineHour */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.EngineHour);


	/* indicator "simple_rect_5" of type "SimpleRect" */

	/* draw the indicator: simple_rect_5 */
	vt3_draw_indicator_SimpleRect(event, &vt3_screen_union.screen_1.simple_rect_5);

	/* mark as invalid the indicators overlapped by simple_rect_5 */
	if ( vt3_screen_union.screen_1.simple_rect_5.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_simple_rect_5_invalid_chain);
	}


	/* indicator "multitext_5" of type "MultiText" */

	/* draw the indicator: multitext_5 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_5);


	/* indicator "simple_text_3_3_2" of type "SimpleText" */

	/* draw the indicator: simple_text_3_3_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_3_3_2);


	/* indicator "multitext_6" of type "MultiText" */

	/* draw the indicator: multitext_6 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_6);


	/* indicator "multitext_6_2" of type "MultiText" */

	/* draw the indicator: multitext_6_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_6_2);


	/* indicator "multitext_6_3" of type "MultiText" */

	/* draw the indicator: multitext_6_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_6_3);


	/* indicator "multitext_7" of type "MultiText" */

	/* draw the indicator: multitext_7 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_1.multitext_7);


	/* indicator "FBPressValue_3_2" of type "Number" */

	/* draw the indicator: FBPressValue_3_2 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.FBPressValue_3_2);


	/* indicator "FBPressValue_3_2_2" of type "Number" */

	/* draw the indicator: FBPressValue_3_2_2 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.FBPressValue_3_2_2);


	/* indicator "simple_text_2_3" of type "SimpleText" */

	/* draw the indicator: simple_text_2_3 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_2_3);


	/* indicator "simple_text_2_3_2" of type "SimpleText" */

	/* draw the indicator: simple_text_2_3_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_2_3_2);


	/* indicator "vvrPump" of type "Number" */

	/* draw the indicator: vvrPump */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.vvrPump);

	/* mark as invalid the indicators overlapped by vvrPump */
	if ( vt3_screen_union.screen_1.vvrPump.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_vvrPump_invalid_chain);
	}


	/* indicator "simple_text_2_3_3" of type "SimpleText" */

	/* draw the indicator: simple_text_2_3_3 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_2_3_3);

	/* mark as invalid the indicators overlapped by simple_text_2_3_3 */
	if ( vt3_screen_union.screen_1.simple_text_2_3_3.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_simple_text_2_3_3_invalid_chain);
	}


	/* indicator "simple_text_2_3_3_2" of type "SimpleText" */

	/* draw the indicator: simple_text_2_3_3_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_2_3_3_2);

	/* mark as invalid the indicators overlapped by simple_text_2_3_3_2 */
	if ( vt3_screen_union.screen_1.simple_text_2_3_3_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_1_simple_text_2_3_3_2_invalid_chain);
	}


	/* indicator "FBPressValue_3_2_3" of type "Number" */

	/* draw the indicator: FBPressValue_3_2_3 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.FBPressValue_3_2_3);


	/* indicator "vvrPump_2" of type "Number" */

	/* draw the indicator: vvrPump_2 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.vvrPump_2);


	/* indicator "simple_text_2_3_3_3" of type "SimpleText" */

	/* draw the indicator: simple_text_2_3_3_3 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_2_3_3_3);


	/* indicator "vvrPump_3" of type "Number" */

	/* draw the indicator: vvrPump_3 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.vvrPump_3);


	/* indicator "simple_text_2_3_3_4" of type "SimpleText" */

	/* draw the indicator: simple_text_2_3_3_4 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_1.simple_text_2_3_3_4);


	/* indicator "FBPressValue_3_2_2_2" of type "Number" */

	/* draw the indicator: FBPressValue_3_2_2_2 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_1.FBPressValue_3_2_2_2);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_1() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_screen_1[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_screen_1[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_screen_1[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_screen_1[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_screen_1[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_screen_1[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_screen_1[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_screen_1[] */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN1_C */

/* end of file */
