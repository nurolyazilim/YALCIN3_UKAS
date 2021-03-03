/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN5_C
#define INCLUDE__VT3_DISP__SCREEN5_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen5.h"
#include "vt3_Event__Screen5.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* invalid chain for the indicators in layer 0 */
static BOOL FAR FARPTR const vt3_screen_screen_5_layer_0_invalid_chain[] =
{
	&vt3_screen_union.screen_5.multitext_3_2.invalid,
	&vt3_screen_union.screen_5.simple_text_3_3.invalid,
	&vt3_screen_union.screen_5.simple_text_3_2.invalid,
	&vt3_screen_union.screen_5.simple_text_3_4.invalid,
	&vt3_screen_union.screen_5.simple_text_3_3_2.invalid,
	&vt3_screen_union.screen_5.simple_text_3_3_3.invalid,
	&vt3_screen_union.screen_5.simple_text_3_3_4.invalid,
	&vt3_screen_union.screen_5.simple_text_3_3_5.invalid,
	&vt3_screen_union.screen_5.simple_text_3_3_6.invalid,
	&vt3_screen_union.screen_5.EngineHour.invalid,
	&vt3_screen_union.screen_5.simple_text_3_7.invalid,
	&vt3_screen_union.screen_5.FBPressValue_3.invalid,
	&vt3_screen_union.screen_5.simple_text_3_7_2.invalid,
	&vt3_screen_union.screen_5.simple_text_3_7_2_2.invalid,
	&vt3_screen_union.screen_5.FBPressValue_3_2.invalid,
	&vt3_screen_union.screen_5.EngineHour_2.invalid,
	&vt3_screen_union.screen_5.simple_text_3_7_3.invalid,
	&vt3_screen_union.screen_5.EngineHour_2_2.invalid,
	&vt3_screen_union.screen_5.simple_text_3_7_3_2.invalid,
	&vt3_screen_union.screen_5.multitext.invalid,
	&vt3_screen_union.screen_5.multitext_2.invalid,
	&vt3_screen_union.screen_5.multitext_2_2.invalid,
	&vt3_screen_union.screen_5.multitext_2_3.invalid,
	&vt3_screen_union.screen_5.multitext_2_4.invalid,
	&vt3_screen_union.screen_5.multitext_2_4_2.invalid,
	&vt3_screen_union.screen_5.multitext_2_4_3.invalid,
	&vt3_screen_union.screen_5.multitext_2_4_4.invalid,
	&vt3_screen_union.screen_5.multitext_2_4_5.invalid,
	&vt3_screen_union.screen_5.EngineHour_2_3.invalid,
	NULL /* sentinel */
};

/* invalid chain for the indicators in layer 1 */
static BOOL FAR FARPTR const vt3_screen_screen_5_layer_1_invalid_chain[] =
{
	NULL /* sentinel */
};

/* ROM configuration of indicator screen_5 */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_screen_5 = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* no event code    */ (void (*)(UINT8)) NULL,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, 0 /* = RGB(0, 0, 0) */, 0 },
}; /* __ROM_value__ind_screen_5 */

/* initialization of the runtime status of indicator screen_5 */
static const vt3_indicator_ScreenModel FAR __init_value__ind_screen_5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5,
}; /* __init_value__ind_screen_5 */

/* status of indicator multitext_3_2: array text */
static const UINT16 FAR ind_screen_5_multitext_3_2_text[2] = {
	GIGA_TEXT4,
	GIGA_TEXT4,
}; /* ind_screen_5_multitext_3_2_text[] */

/* status of indicator multitext_3_2: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_3_2_font[2] = {
	vt3_font_ArialRegular15, 
	vt3_font_ArialRegular15, 
}; /* ind_screen_5_multitext_3_2_font[] */

/* status of indicator multitext_3_2: array color */
static const vt3_color FAR ind_screen_5_multitext_3_2_color[2] = {
	4 /* = RGB(255, 255, 255) */, 
	191 /* = RGB(255, 95, 85) */, 
}; /* ind_screen_5_multitext_3_2_color[] */

/* ROM configuration of indicator multitext_3_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_3_2,
	/* width            */ 80,
	/* height           */ 17,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_5_multitext_3_2_text,
	/* font             */ ind_screen_5_multitext_3_2_font,
	/* color            */ ind_screen_5_multitext_3_2_color,
}; /* __ROM_value__ind_screen_5_multitext_3_2 */

/* initialization of the runtime status of indicator multitext_3_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_3_2,
	/* x                */ 232,
	/* y                */ 216,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_3_2 */

/* ROM configuration of indicator simple_text_3_3 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_3,
	/* width            */ 56,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_3 */

/* initialization of the runtime status of indicator simple_text_3_3 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_3,
	/* x                */ 144,
	/* y                */ 96,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_3 */

/* ROM configuration of indicator simple_text_3_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_2,
	/* width            */ 56,
	/* height           */ 17,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialRegular15,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_2 */

/* initialization of the runtime status of indicator simple_text_3_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_2,
	/* x                */ 144,
	/* y                */ 64,
	/* color            */ 191 /* = RGB(255, 95, 85) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_2 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_5_simple_text_3_2_invalid_chain[] =
{
	&vt3_screen_union.screen_5.simple_text_3_3_2.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator simple_text_3_4 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_4 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_4,
	/* width            */ 56,
	/* height           */ 17,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialRegular15,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_4 */

/* initialization of the runtime status of indicator simple_text_3_4 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_4,
	/* x                */ 240,
	/* y                */ 64,
	/* color            */ 191 /* = RGB(255, 95, 85) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_4 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_5_simple_text_3_4_invalid_chain[] =
{
	&vt3_screen_union.screen_5.simple_text_3_3_5.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator simple_text_3_3_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_3_2,
	/* width            */ 56,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_3_2 */

/* initialization of the runtime status of indicator simple_text_3_3_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_3_2,
	/* x                */ 144,
	/* y                */ 80,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_3_2 */

/* ROM configuration of indicator simple_text_3_3_3 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_3_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_3_3,
	/* width            */ 56,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_3_3 */

/* initialization of the runtime status of indicator simple_text_3_3_3 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_3_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_3_3,
	/* x                */ 144,
	/* y                */ 112,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_3_3 */

/* ROM configuration of indicator simple_text_3_3_4 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_3_4 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_3_4,
	/* width            */ 56,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_3_4 */

/* initialization of the runtime status of indicator simple_text_3_3_4 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_3_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_3_4,
	/* x                */ 240,
	/* y                */ 96,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_3_4 */

/* ROM configuration of indicator simple_text_3_3_5 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_3_5 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_3_5,
	/* width            */ 56,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_3_5 */

/* initialization of the runtime status of indicator simple_text_3_3_5 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_3_5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_3_5,
	/* x                */ 240,
	/* y                */ 80,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_3_5 */

/* ROM configuration of indicator simple_text_3_3_6 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_3_6 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_3_6,
	/* width            */ 56,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_3_6 */

/* initialization of the runtime status of indicator simple_text_3_3_6 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_3_6 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_3_6,
	/* x                */ 240,
	/* y                */ 112,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_3_6 */

/* ROM configuration of indicator EngineHour */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_EngineHour = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_EngineHour,
	/* width            */ 64,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_EngineHour */

/* initialization of the runtime status of indicator EngineHour */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_EngineHour = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_EngineHour,
	/* x                */ 144,
	/* y                */ 168,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_EngineHour */

/* ROM configuration of indicator simple_text_3_7 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_7 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_7,
	/* width            */ 32,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_7 */

/* initialization of the runtime status of indicator simple_text_3_7 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_7 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_7,
	/* x                */ 216,
	/* y                */ 168,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_7 */

/* ROM configuration of indicator FBPressValue_3 */
static const char FAR ind_screen_5_FBPressValue_3__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_5_FBPressValue_3 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_5_FBPressValue_3,
	/* width            */ 56,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* separator        */ ind_screen_5_FBPressValue_3__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_5_FBPressValue_3 */

/* initialization of the runtime status of indicator FBPressValue_3 */
static const vt3_indicator_Number FAR __init_value__ind_screen_5_FBPressValue_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_FBPressValue_3,
	/* x                */ 152,
	/* y                */ 200,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
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
}; /* __init_value__ind_screen_5_FBPressValue_3 */

/* ROM configuration of indicator simple_text_3_7_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_7_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_7_2,
	/* width            */ 40,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_7_2 */

/* initialization of the runtime status of indicator simple_text_3_7_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_7_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_7_2,
	/* x                */ 216,
	/* y                */ 200,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_7_2 */

/* ROM configuration of indicator simple_text_3_7_2_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_7_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_7_2_2,
	/* width            */ 32,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_7_2_2 */

/* initialization of the runtime status of indicator simple_text_3_7_2_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_7_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_7_2_2,
	/* x                */ 216,
	/* y                */ 184,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_7_2_2 */

/* ROM configuration of indicator FBPressValue_3_2 */
static const char FAR ind_screen_5_FBPressValue_3_2__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_5_FBPressValue_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_5_FBPressValue_3_2,
	/* width            */ 56,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* separator        */ ind_screen_5_FBPressValue_3_2__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_5_FBPressValue_3_2 */

/* initialization of the runtime status of indicator FBPressValue_3_2 */
static const vt3_indicator_Number FAR __init_value__ind_screen_5_FBPressValue_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_FBPressValue_3_2,
	/* x                */ 152,
	/* y                */ 184,
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
}; /* __init_value__ind_screen_5_FBPressValue_3_2 */

/* ROM configuration of indicator EngineHour_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_EngineHour_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_EngineHour_2,
	/* width            */ 64,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_EngineHour_2 */

/* initialization of the runtime status of indicator EngineHour_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_EngineHour_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_EngineHour_2,
	/* x                */ 144,
	/* y                */ 136,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_EngineHour_2 */

/* ROM configuration of indicator simple_text_3_7_3 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_7_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_7_3,
	/* width            */ 32,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_7_3 */

/* initialization of the runtime status of indicator simple_text_3_7_3 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_7_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_7_3,
	/* x                */ 216,
	/* y                */ 136,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_7_3 */

/* array of pointers to the overlapped indicators */
static BOOL FAR FARPTR const ind_screen_5_simple_text_3_7_3_invalid_chain[] =
{
	&vt3_screen_union.screen_5.EngineHour_2_3.invalid,
	NULL /* sentinel */
};

/* ROM configuration of indicator EngineHour_2_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_EngineHour_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_EngineHour_2_2,
	/* width            */ 64,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_EngineHour_2_2 */

/* initialization of the runtime status of indicator EngineHour_2_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_EngineHour_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_EngineHour_2_2,
	/* x                */ 144,
	/* y                */ 152,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_EngineHour_2_2 */

/* ROM configuration of indicator simple_text_3_7_3_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_simple_text_3_7_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_simple_text_3_7_3_2,
	/* width            */ 32,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_simple_text_3_7_3_2 */

/* initialization of the runtime status of indicator simple_text_3_7_3_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_simple_text_3_7_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_simple_text_3_7_3_2,
	/* x                */ 216,
	/* y                */ 152,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_simple_text_3_7_3_2 */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_screen_5_multitext_text[1] = {
	IDS_TEXT25,
}; /* ind_screen_5_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_font[1] = {
	vt3_font_ArialRegular20, 
}; /* ind_screen_5_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_screen_5_multitext_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext,
	/* width            */ 288,
	/* height           */ 48,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_text,
	/* font             */ ind_screen_5_multitext_font,
	/* color            */ ind_screen_5_multitext_color,
}; /* __ROM_value__ind_screen_5_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext,
	/* x                */ 16,
	/* y                */ 8,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext */

/* status of indicator multitext_2: array text */
static const UINT16 FAR ind_screen_5_multitext_2_text[1] = {
	IDS_TEXT33,
}; /* ind_screen_5_multitext_2_text[] */

/* status of indicator multitext_2: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_2_font[1] = {
	vt3_font_CourierNewRegular11, 
}; /* ind_screen_5_multitext_2_font[] */

/* status of indicator multitext_2: array color */
static const vt3_color FAR ind_screen_5_multitext_2_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_2_color[] */

/* ROM configuration of indicator multitext_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_2,
	/* width            */ 112,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_2_text,
	/* font             */ ind_screen_5_multitext_2_font,
	/* color            */ ind_screen_5_multitext_2_color,
}; /* __ROM_value__ind_screen_5_multitext_2 */

/* initialization of the runtime status of indicator multitext_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_2,
	/* x                */ 8,
	/* y                */ 80,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_2 */

/* status of indicator multitext_2_2: array text */
static const UINT16 FAR ind_screen_5_multitext_2_2_text[1] = {
	IDS_TEXT34,
}; /* ind_screen_5_multitext_2_2_text[] */

/* status of indicator multitext_2_2: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_2_2_font[1] = {
	vt3_font_CourierNewRegular11, 
}; /* ind_screen_5_multitext_2_2_font[] */

/* status of indicator multitext_2_2: array color */
static const vt3_color FAR ind_screen_5_multitext_2_2_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_2_2_color[] */

/* ROM configuration of indicator multitext_2_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_2_2,
	/* width            */ 112,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_2_2_text,
	/* font             */ ind_screen_5_multitext_2_2_font,
	/* color            */ ind_screen_5_multitext_2_2_color,
}; /* __ROM_value__ind_screen_5_multitext_2_2 */

/* initialization of the runtime status of indicator multitext_2_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_2_2,
	/* x                */ 8,
	/* y                */ 96,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_2_2 */

/* status of indicator multitext_2_3: array text */
static const UINT16 FAR ind_screen_5_multitext_2_3_text[1] = {
	IDS_TEXT35,
}; /* ind_screen_5_multitext_2_3_text[] */

/* status of indicator multitext_2_3: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_2_3_font[1] = {
	vt3_font_CourierNewRegular11, 
}; /* ind_screen_5_multitext_2_3_font[] */

/* status of indicator multitext_2_3: array color */
static const vt3_color FAR ind_screen_5_multitext_2_3_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_2_3_color[] */

/* ROM configuration of indicator multitext_2_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_2_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_2_3,
	/* width            */ 112,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_2_3_text,
	/* font             */ ind_screen_5_multitext_2_3_font,
	/* color            */ ind_screen_5_multitext_2_3_color,
}; /* __ROM_value__ind_screen_5_multitext_2_3 */

/* initialization of the runtime status of indicator multitext_2_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_2_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_2_3,
	/* x                */ 8,
	/* y                */ 112,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_2_3 */

/* status of indicator multitext_2_4: array text */
static const UINT16 FAR ind_screen_5_multitext_2_4_text[1] = {
	IDS_TEXT36,
}; /* ind_screen_5_multitext_2_4_text[] */

/* status of indicator multitext_2_4: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_2_4_font[1] = {
	vt3_font_CourierNewRegular11, 
}; /* ind_screen_5_multitext_2_4_font[] */

/* status of indicator multitext_2_4: array color */
static const vt3_color FAR ind_screen_5_multitext_2_4_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_2_4_color[] */

/* ROM configuration of indicator multitext_2_4 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_2_4 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_2_4,
	/* width            */ 112,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_2_4_text,
	/* font             */ ind_screen_5_multitext_2_4_font,
	/* color            */ ind_screen_5_multitext_2_4_color,
}; /* __ROM_value__ind_screen_5_multitext_2_4 */

/* initialization of the runtime status of indicator multitext_2_4 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_2_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_2_4,
	/* x                */ 8,
	/* y                */ 136,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_2_4 */

/* status of indicator multitext_2_4_2: array text */
static const UINT16 FAR ind_screen_5_multitext_2_4_2_text[1] = {
	IDS_TEXT37,
}; /* ind_screen_5_multitext_2_4_2_text[] */

/* status of indicator multitext_2_4_2: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_2_4_2_font[1] = {
	vt3_font_CourierNewRegular11, 
}; /* ind_screen_5_multitext_2_4_2_font[] */

/* status of indicator multitext_2_4_2: array color */
static const vt3_color FAR ind_screen_5_multitext_2_4_2_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_2_4_2_color[] */

/* ROM configuration of indicator multitext_2_4_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_2_4_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_2_4_2,
	/* width            */ 136,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_2_4_2_text,
	/* font             */ ind_screen_5_multitext_2_4_2_font,
	/* color            */ ind_screen_5_multitext_2_4_2_color,
}; /* __ROM_value__ind_screen_5_multitext_2_4_2 */

/* initialization of the runtime status of indicator multitext_2_4_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_2_4_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_2_4_2,
	/* x                */ 8,
	/* y                */ 152,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_2_4_2 */

/* status of indicator multitext_2_4_3: array text */
static const UINT16 FAR ind_screen_5_multitext_2_4_3_text[1] = {
	IDS_TEXT38,
}; /* ind_screen_5_multitext_2_4_3_text[] */

/* status of indicator multitext_2_4_3: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_2_4_3_font[1] = {
	vt3_font_CourierNewRegular10, 
}; /* ind_screen_5_multitext_2_4_3_font[] */

/* status of indicator multitext_2_4_3: array color */
static const vt3_color FAR ind_screen_5_multitext_2_4_3_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_2_4_3_color[] */

/* ROM configuration of indicator multitext_2_4_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_2_4_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_2_4_3,
	/* width            */ 136,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_2_4_3_text,
	/* font             */ ind_screen_5_multitext_2_4_3_font,
	/* color            */ ind_screen_5_multitext_2_4_3_color,
}; /* __ROM_value__ind_screen_5_multitext_2_4_3 */

/* initialization of the runtime status of indicator multitext_2_4_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_2_4_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_2_4_3,
	/* x                */ 8,
	/* y                */ 168,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_2_4_3 */

/* status of indicator multitext_2_4_4: array text */
static const UINT16 FAR ind_screen_5_multitext_2_4_4_text[1] = {
	IDS_TEXT39,
}; /* ind_screen_5_multitext_2_4_4_text[] */

/* status of indicator multitext_2_4_4: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_2_4_4_font[1] = {
	vt3_font_CourierNewRegular11, 
}; /* ind_screen_5_multitext_2_4_4_font[] */

/* status of indicator multitext_2_4_4: array color */
static const vt3_color FAR ind_screen_5_multitext_2_4_4_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_2_4_4_color[] */

/* ROM configuration of indicator multitext_2_4_4 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_2_4_4 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_2_4_4,
	/* width            */ 136,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_2_4_4_text,
	/* font             */ ind_screen_5_multitext_2_4_4_font,
	/* color            */ ind_screen_5_multitext_2_4_4_color,
}; /* __ROM_value__ind_screen_5_multitext_2_4_4 */

/* initialization of the runtime status of indicator multitext_2_4_4 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_2_4_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_2_4_4,
	/* x                */ 8,
	/* y                */ 184,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_2_4_4 */

/* status of indicator multitext_2_4_5: array text */
static const UINT16 FAR ind_screen_5_multitext_2_4_5_text[1] = {
	IDS_TEXT40,
}; /* ind_screen_5_multitext_2_4_5_text[] */

/* status of indicator multitext_2_4_5: array font */
static const vt3_font FARPTR const ind_screen_5_multitext_2_4_5_font[1] = {
	vt3_font_CourierNewRegular11, 
}; /* ind_screen_5_multitext_2_4_5_font[] */

/* status of indicator multitext_2_4_5: array color */
static const vt3_color FAR ind_screen_5_multitext_2_4_5_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_5_multitext_2_4_5_color[] */

/* ROM configuration of indicator multitext_2_4_5 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_5_multitext_2_4_5 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_5_multitext_2_4_5,
	/* width            */ 136,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 1000 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_5_multitext_2_4_5_text,
	/* font             */ ind_screen_5_multitext_2_4_5_font,
	/* color            */ ind_screen_5_multitext_2_4_5_color,
}; /* __ROM_value__ind_screen_5_multitext_2_4_5 */

/* initialization of the runtime status of indicator multitext_2_4_5 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_5_multitext_2_4_5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_multitext_2_4_5,
	/* x                */ 8,
	/* y                */ 200,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_multitext_2_4_5 */

/* ROM configuration of indicator EngineHour_2_3 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_5_EngineHour_2_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_5_EngineHour_2_3,
	/* width            */ 64,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_CourierNewRegular11,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_5_EngineHour_2_3 */

/* initialization of the runtime status of indicator EngineHour_2_3 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_5_EngineHour_2_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_5_EngineHour_2_3,
	/* x                */ 240,
	/* y                */ 136,
	/* color            */ VT3_COLOR_TRANSPARENT,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_5_EngineHour_2_3 */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_5[] = {
	{ &vt3_screen_union.screen_5._background, &__init_value__ind_screen_5, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.screen_5.multitext_3_2, &__init_value__ind_screen_5_multitext_3_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.simple_text_3_3, &__init_value__ind_screen_5_simple_text_3_3, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_2, &__init_value__ind_screen_5_simple_text_3_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_4, &__init_value__ind_screen_5_simple_text_3_4, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_3_2, &__init_value__ind_screen_5_simple_text_3_3_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_3_3, &__init_value__ind_screen_5_simple_text_3_3_3, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_3_4, &__init_value__ind_screen_5_simple_text_3_3_4, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_3_5, &__init_value__ind_screen_5_simple_text_3_3_5, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_3_6, &__init_value__ind_screen_5_simple_text_3_3_6, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.EngineHour, &__init_value__ind_screen_5_EngineHour, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_7, &__init_value__ind_screen_5_simple_text_3_7, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.FBPressValue_3, &__init_value__ind_screen_5_FBPressValue_3, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_5.simple_text_3_7_2, &__init_value__ind_screen_5_simple_text_3_7_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_7_2_2, &__init_value__ind_screen_5_simple_text_3_7_2_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.FBPressValue_3_2, &__init_value__ind_screen_5_FBPressValue_3_2, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen_5.EngineHour_2, &__init_value__ind_screen_5_EngineHour_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_7_3, &__init_value__ind_screen_5_simple_text_3_7_3, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.EngineHour_2_2, &__init_value__ind_screen_5_EngineHour_2_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.simple_text_3_7_3_2, &__init_value__ind_screen_5_simple_text_3_7_3_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_5.multitext, &__init_value__ind_screen_5_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.multitext_2, &__init_value__ind_screen_5_multitext_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.multitext_2_2, &__init_value__ind_screen_5_multitext_2_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.multitext_2_3, &__init_value__ind_screen_5_multitext_2_3, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.multitext_2_4, &__init_value__ind_screen_5_multitext_2_4, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.multitext_2_4_2, &__init_value__ind_screen_5_multitext_2_4_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.multitext_2_4_3, &__init_value__ind_screen_5_multitext_2_4_3, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.multitext_2_4_4, &__init_value__ind_screen_5_multitext_2_4_4, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.multitext_2_4_5, &__init_value__ind_screen_5_multitext_2_4_5, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_5.EngineHour_2_3, &__init_value__ind_screen_5_EngineHour_2_3, sizeof(vt3_indicator_SimpleText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_5(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_5; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_5(BYTE event)
{
	/* invalidate text indicators in case of language change */
	if ( vt3_language != vt3_old_language )
	{
		/* indicators to be invalidated in case of language change */
		static BOOL FAR FARPTR const change_language_invalid_chain[] =
		{
			&vt3_screen_union.screen_5.multitext_3_2.invalid,
			&vt3_screen_union.screen_5.simple_text_3_3.invalid,
			&vt3_screen_union.screen_5.simple_text_3_2.invalid,
			&vt3_screen_union.screen_5.simple_text_3_4.invalid,
			&vt3_screen_union.screen_5.simple_text_3_3_2.invalid,
			&vt3_screen_union.screen_5.simple_text_3_3_3.invalid,
			&vt3_screen_union.screen_5.simple_text_3_3_4.invalid,
			&vt3_screen_union.screen_5.simple_text_3_3_5.invalid,
			&vt3_screen_union.screen_5.simple_text_3_3_6.invalid,
			&vt3_screen_union.screen_5.EngineHour.invalid,
			&vt3_screen_union.screen_5.simple_text_3_7.invalid,
			&vt3_screen_union.screen_5.simple_text_3_7_2.invalid,
			&vt3_screen_union.screen_5.simple_text_3_7_2_2.invalid,
			&vt3_screen_union.screen_5.EngineHour_2.invalid,
			&vt3_screen_union.screen_5.simple_text_3_7_3.invalid,
			&vt3_screen_union.screen_5.EngineHour_2_2.invalid,
			&vt3_screen_union.screen_5.simple_text_3_7_3_2.invalid,
			&vt3_screen_union.screen_5.multitext.invalid,
			&vt3_screen_union.screen_5.multitext_2.invalid,
			&vt3_screen_union.screen_5.multitext_2_2.invalid,
			&vt3_screen_union.screen_5.multitext_2_3.invalid,
			&vt3_screen_union.screen_5.multitext_2_4.invalid,
			&vt3_screen_union.screen_5.multitext_2_4_2.invalid,
			&vt3_screen_union.screen_5.multitext_2_4_3.invalid,
			&vt3_screen_union.screen_5.multitext_2_4_4.invalid,
			&vt3_screen_union.screen_5.multitext_2_4_5.invalid,
			&vt3_screen_union.screen_5.EngineHour_2_3.invalid,
			NULL /* sentinel */
		};
		vt3_follow_invalid_chain(change_language_invalid_chain);
		vt3_old_language = vt3_language;
	}

	/* event procedure for the screen */
	vt3_event_ind_screen_5(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.screen_5._background);

	/* indicator "multitext_3_2" of type "MultiText" */

	/* draw the indicator: multitext_3_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_3_2);


	/* indicator "simple_text_3_3" of type "SimpleText" */

	/* draw the indicator: simple_text_3_3 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_3);


	/* indicator "simple_text_3_2" of type "SimpleText" */

	/* draw the indicator: simple_text_3_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_2);

	/* mark as invalid the indicators overlapped by simple_text_3_2 */
	if ( vt3_screen_union.screen_5.simple_text_3_2.changed )
	{
		vt3_follow_invalid_chain(ind_screen_5_simple_text_3_2_invalid_chain);
	}


	/* indicator "simple_text_3_4" of type "SimpleText" */

	/* draw the indicator: simple_text_3_4 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_4);

	/* mark as invalid the indicators overlapped by simple_text_3_4 */
	if ( vt3_screen_union.screen_5.simple_text_3_4.changed )
	{
		vt3_follow_invalid_chain(ind_screen_5_simple_text_3_4_invalid_chain);
	}


	/* indicator "simple_text_3_3_2" of type "SimpleText" */

	/* draw the indicator: simple_text_3_3_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_3_2);


	/* indicator "simple_text_3_3_3" of type "SimpleText" */

	/* draw the indicator: simple_text_3_3_3 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_3_3);


	/* indicator "simple_text_3_3_4" of type "SimpleText" */

	/* draw the indicator: simple_text_3_3_4 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_3_4);


	/* indicator "simple_text_3_3_5" of type "SimpleText" */

	/* draw the indicator: simple_text_3_3_5 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_3_5);


	/* indicator "simple_text_3_3_6" of type "SimpleText" */

	/* draw the indicator: simple_text_3_3_6 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_3_6);


	/* indicator "EngineHour" of type "SimpleText" */

	/* draw the indicator: EngineHour */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.EngineHour);


	/* indicator "simple_text_3_7" of type "SimpleText" */

	/* draw the indicator: simple_text_3_7 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_7);


	/* indicator "FBPressValue_3" of type "Number" */

	/* draw the indicator: FBPressValue_3 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_5.FBPressValue_3);


	/* indicator "simple_text_3_7_2" of type "SimpleText" */

	/* draw the indicator: simple_text_3_7_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_7_2);


	/* indicator "simple_text_3_7_2_2" of type "SimpleText" */

	/* draw the indicator: simple_text_3_7_2_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_7_2_2);


	/* indicator "FBPressValue_3_2" of type "Number" */

	/* draw the indicator: FBPressValue_3_2 */
	vt3_draw_indicator_Number(event, &vt3_screen_union.screen_5.FBPressValue_3_2);


	/* indicator "EngineHour_2" of type "SimpleText" */

	/* draw the indicator: EngineHour_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.EngineHour_2);


	/* indicator "simple_text_3_7_3" of type "SimpleText" */

	/* draw the indicator: simple_text_3_7_3 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_7_3);

	/* mark as invalid the indicators overlapped by simple_text_3_7_3 */
	if ( vt3_screen_union.screen_5.simple_text_3_7_3.changed )
	{
		vt3_follow_invalid_chain(ind_screen_5_simple_text_3_7_3_invalid_chain);
	}


	/* indicator "EngineHour_2_2" of type "SimpleText" */

	/* draw the indicator: EngineHour_2_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.EngineHour_2_2);


	/* indicator "simple_text_3_7_3_2" of type "SimpleText" */

	/* draw the indicator: simple_text_3_7_3_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.simple_text_3_7_3_2);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext);


	/* indicator "multitext_2" of type "MultiText" */

	/* draw the indicator: multitext_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_2);


	/* indicator "multitext_2_2" of type "MultiText" */

	/* draw the indicator: multitext_2_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_2_2);


	/* indicator "multitext_2_3" of type "MultiText" */

	/* draw the indicator: multitext_2_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_2_3);


	/* indicator "multitext_2_4" of type "MultiText" */

	/* draw the indicator: multitext_2_4 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_2_4);


	/* indicator "multitext_2_4_2" of type "MultiText" */

	/* draw the indicator: multitext_2_4_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_2_4_2);


	/* indicator "multitext_2_4_3" of type "MultiText" */

	/* draw the indicator: multitext_2_4_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_2_4_3);


	/* indicator "multitext_2_4_4" of type "MultiText" */

	/* draw the indicator: multitext_2_4_4 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_2_4_4);


	/* indicator "multitext_2_4_5" of type "MultiText" */

	/* draw the indicator: multitext_2_4_5 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_5.multitext_2_4_5);


	/* indicator "EngineHour_2_3" of type "SimpleText" */

	/* draw the indicator: EngineHour_2_3 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_5.EngineHour_2_3);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_5() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_screen_5[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_screen_5[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_screen_5[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_screen_5[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_screen_5[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_screen_5[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_screen_5[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_screen_5[] */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN5_C */

/* end of file */
