/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN4_C
#define INCLUDE__VT3_DISP__SCREEN4_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen4.h"
#include "vt3_Event__Screen4.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* invalid chain for the indicators in layer 0 */
static BOOL FAR FARPTR const vt3_screen_screen_4_layer_0_invalid_chain[] =
{
	&vt3_screen_union.screen_4.simple_text_07.invalid,
	&vt3_screen_union.screen_4.simple_text_08.invalid,
	&vt3_screen_union.screen_4.simple_text_09.invalid,
	&vt3_screen_union.screen_4.simple_text_10.invalid,
	&vt3_screen_union.screen_4.Return_Text_2.invalid,
	&vt3_screen_union.screen_4.Date_Time_Caption_Text.invalid,
	&vt3_screen_union.screen_4.Return_Text.invalid,
	&vt3_screen_union.screen_4.multitext.invalid,
	&vt3_screen_union.screen_4.multitext_3.invalid,
	&vt3_screen_union.screen_4.multitext_3_2.invalid,
	&vt3_screen_union.screen_4.multitext_2.invalid,
	&vt3_screen_union.screen_4.multitext_2_2.invalid,
	&vt3_screen_union.screen_4.multitext_2_2_2.invalid,
	&vt3_screen_union.screen_4.multitext_2_2_2_2.invalid,
	&vt3_screen_union.screen_4.multitext_2_2_2_3.invalid,
	NULL /* sentinel */
};

/* invalid chain for the indicators in layer 1 */
static BOOL FAR FARPTR const vt3_screen_screen_4_layer_1_invalid_chain[] =
{
	NULL /* sentinel */
};

/* ROM configuration of indicator screen_4 */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_screen_4 = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* event code       */ vt3_event_ind_screen_4,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, 0 /* = RGB(0, 0, 0) */, 0 },
}; /* __ROM_value__ind_screen_4 */

/* initialization of the runtime status of indicator screen_4 */
static const vt3_indicator_ScreenModel FAR __init_value__ind_screen_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4,
}; /* __init_value__ind_screen_4 */

/* ROM configuration of indicator simple_text_07 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_4_simple_text_07 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_4_simple_text_07,
	/* width            */ 24,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialRegular13,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_4_simple_text_07 */

/* initialization of the runtime status of indicator simple_text_07 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_4_simple_text_07 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_simple_text_07,
	/* x                */ 32,
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
}; /* __init_value__ind_screen_4_simple_text_07 */

/* ROM configuration of indicator simple_text_08 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_4_simple_text_08 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_4_simple_text_08,
	/* width            */ 16,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialRegular13,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_4_simple_text_08 */

/* initialization of the runtime status of indicator simple_text_08 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_4_simple_text_08 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_simple_text_08,
	/* x                */ 104,
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
}; /* __init_value__ind_screen_4_simple_text_08 */

/* ROM configuration of indicator simple_text_09 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_4_simple_text_09 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_4_simple_text_09,
	/* width            */ 16,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialRegular13,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_4_simple_text_09 */

/* initialization of the runtime status of indicator simple_text_09 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_4_simple_text_09 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_simple_text_09,
	/* x                */ 188,
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
}; /* __init_value__ind_screen_4_simple_text_09 */

/* ROM configuration of indicator simple_text_10 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_4_simple_text_10 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_4_simple_text_10,
	/* width            */ 24,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialRegular13,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_4_simple_text_10 */

/* initialization of the runtime status of indicator simple_text_10 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_4_simple_text_10 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_simple_text_10,
	/* x                */ 256,
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
}; /* __init_value__ind_screen_4_simple_text_10 */

/* status of indicator Return_Text_2: array text */
static const UINT16 FAR ind_screen_4_Return_Text_2_text[2] = {
	GIGA_ST_TEXT1,
	GIGA_ST_TEXT1,
}; /* ind_screen_4_Return_Text_2_text[] */

/* status of indicator Return_Text_2: array font */
static const vt3_font FARPTR const ind_screen_4_Return_Text_2_font[2] = {
	vt3_font_ArialRegular15, 
	vt3_font_ArialRegular15, 
}; /* ind_screen_4_Return_Text_2_font[] */

/* status of indicator Return_Text_2: array color */
static const vt3_color FAR ind_screen_4_Return_Text_2_color[2] = {
	4 /* = RGB(255, 255, 255) */, 
	191 /* = RGB(255, 95, 85) */, 
}; /* ind_screen_4_Return_Text_2_color[] */

/* ROM configuration of indicator Return_Text_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_Return_Text_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_Return_Text_2,
	/* width            */ 80,
	/* height           */ 17,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_4_Return_Text_2_text,
	/* font             */ ind_screen_4_Return_Text_2_font,
	/* color            */ ind_screen_4_Return_Text_2_color,
}; /* __ROM_value__ind_screen_4_Return_Text_2 */

/* initialization of the runtime status of indicator Return_Text_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_Return_Text_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_Return_Text_2,
	/* x                */ 232,
	/* y                */ 216,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_Return_Text_2 */

/* status of indicator Date_Time_Caption_Text: array text */
static const UINT16 FAR ind_screen_4_Date_Time_Caption_Text_text[2] = {
	GIGA_ST_TEXT2,
	GIGA_ST_TEXT2,
}; /* ind_screen_4_Date_Time_Caption_Text_text[] */

/* status of indicator Date_Time_Caption_Text: array font */
static const vt3_font FARPTR const ind_screen_4_Date_Time_Caption_Text_font[2] = {
	vt3_font_ArialRegular15, 
	vt3_font_ArialRegular15, 
}; /* ind_screen_4_Date_Time_Caption_Text_font[] */

/* status of indicator Date_Time_Caption_Text: array color */
static const vt3_color FAR ind_screen_4_Date_Time_Caption_Text_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_4_Date_Time_Caption_Text_color[] */

/* ROM configuration of indicator Date_Time_Caption_Text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_Date_Time_Caption_Text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_Date_Time_Caption_Text,
	/* width            */ 168,
	/* height           */ 40,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_4_Date_Time_Caption_Text_text,
	/* font             */ ind_screen_4_Date_Time_Caption_Text_font,
	/* color            */ ind_screen_4_Date_Time_Caption_Text_color,
}; /* __ROM_value__ind_screen_4_Date_Time_Caption_Text */

/* initialization of the runtime status of indicator Date_Time_Caption_Text */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_Date_Time_Caption_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_Date_Time_Caption_Text,
	/* x                */ 8,
	/* y                */ 64,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_Date_Time_Caption_Text */

/* status of indicator Return_Text: array text */
static const UINT16 FAR ind_screen_4_Return_Text_text[2] = {
	GIGA_TEXT4,
	GIGA_TEXT4,
}; /* ind_screen_4_Return_Text_text[] */

/* status of indicator Return_Text: array font */
static const vt3_font FARPTR const ind_screen_4_Return_Text_font[2] = {
	vt3_font_ArialRegular15, 
	vt3_font_ArialRegular15, 
}; /* ind_screen_4_Return_Text_font[] */

/* status of indicator Return_Text: array color */
static const vt3_color FAR ind_screen_4_Return_Text_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_4_Return_Text_color[] */

/* ROM configuration of indicator Return_Text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_Return_Text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_Return_Text,
	/* width            */ 128,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_4_Return_Text_text,
	/* font             */ ind_screen_4_Return_Text_font,
	/* color            */ ind_screen_4_Return_Text_color,
}; /* __ROM_value__ind_screen_4_Return_Text */

/* initialization of the runtime status of indicator Return_Text */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_Return_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_Return_Text,
	/* x                */ 184,
	/* y                */ 72,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_Return_Text */

/* status of indicator multitext: array text */
static const UINT16 FAR ind_screen_4_multitext_text[1] = {
	IDS_TEXT26,
}; /* ind_screen_4_multitext_text[] */

/* status of indicator multitext: array font */
static const vt3_font FARPTR const ind_screen_4_multitext_font[1] = {
	vt3_font_ArialRegular20, 
}; /* ind_screen_4_multitext_font[] */

/* status of indicator multitext: array color */
static const vt3_color FAR ind_screen_4_multitext_color[1] = {
	63 /* = RGB(85, 191, 255) */, 
}; /* ind_screen_4_multitext_color[] */

/* ROM configuration of indicator multitext */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_multitext = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_multitext,
	/* width            */ 288,
	/* height           */ 48,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_4_multitext_text,
	/* font             */ ind_screen_4_multitext_font,
	/* color            */ ind_screen_4_multitext_color,
}; /* __ROM_value__ind_screen_4_multitext */

/* initialization of the runtime status of indicator multitext */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_multitext = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_multitext,
	/* x                */ 16,
	/* y                */ 8,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_multitext */

/* status of indicator multitext_3: array text */
static const UINT16 FAR ind_screen_4_multitext_3_text[1] = {
	IDS_TEXT27,
}; /* ind_screen_4_multitext_3_text[] */

/* status of indicator multitext_3: array font */
static const vt3_font FARPTR const ind_screen_4_multitext_3_font[1] = {
	vt3_font_ArialRegular12, 
}; /* ind_screen_4_multitext_3_font[] */

/* status of indicator multitext_3: array color */
static const vt3_color FAR ind_screen_4_multitext_3_color[1] = {
	191 /* = RGB(255, 95, 85) */, 
}; /* ind_screen_4_multitext_3_color[] */

/* ROM configuration of indicator multitext_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_multitext_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_multitext_3,
	/* width            */ 160,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_4_multitext_3_text,
	/* font             */ ind_screen_4_multitext_3_font,
	/* color            */ ind_screen_4_multitext_3_color,
}; /* __ROM_value__ind_screen_4_multitext_3 */

/* initialization of the runtime status of indicator multitext_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_multitext_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_multitext_3,
	/* x                */ 0,
	/* y                */ 104,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_multitext_3 */

/* status of indicator multitext_3_2: array text */
static const UINT16 FAR ind_screen_4_multitext_3_2_text[1] = {
	IDS_TEXT28,
}; /* ind_screen_4_multitext_3_2_text[] */

/* status of indicator multitext_3_2: array font */
static const vt3_font FARPTR const ind_screen_4_multitext_3_2_font[1] = {
	vt3_font_ArialRegular12, 
}; /* ind_screen_4_multitext_3_2_font[] */

/* status of indicator multitext_3_2: array color */
static const vt3_color FAR ind_screen_4_multitext_3_2_color[1] = {
	191 /* = RGB(255, 95, 85) */, 
}; /* ind_screen_4_multitext_3_2_color[] */

/* ROM configuration of indicator multitext_3_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_multitext_3_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_multitext_3_2,
	/* width            */ 152,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 1,
	/* text             */ ind_screen_4_multitext_3_2_text,
	/* font             */ ind_screen_4_multitext_3_2_font,
	/* color            */ ind_screen_4_multitext_3_2_color,
}; /* __ROM_value__ind_screen_4_multitext_3_2 */

/* initialization of the runtime status of indicator multitext_3_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_multitext_3_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_multitext_3_2,
	/* x                */ 160,
	/* y                */ 104,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_multitext_3_2 */

/* status of indicator multitext_2: array text */
static const UINT16 FAR ind_screen_4_multitext_2_text[2] = {
	IDS_TEXT29,
	IDS_TEXT29,
}; /* ind_screen_4_multitext_2_text[] */

/* status of indicator multitext_2: array font */
static const vt3_font FARPTR const ind_screen_4_multitext_2_font[2] = {
	vt3_font_ArialRegular13, 
	vt3_font_ArialRegular13, 
}; /* ind_screen_4_multitext_2_font[] */

/* status of indicator multitext_2: array color */
static const vt3_color FAR ind_screen_4_multitext_2_color[2] = {
	4 /* = RGB(255, 255, 255) */, 
	32 /* = RGB(42, 255, 0) */, 
}; /* ind_screen_4_multitext_2_color[] */

/* ROM configuration of indicator multitext_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_multitext_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_multitext_2,
	/* width            */ 40,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_4_multitext_2_text,
	/* font             */ ind_screen_4_multitext_2_font,
	/* color            */ ind_screen_4_multitext_2_color,
}; /* __ROM_value__ind_screen_4_multitext_2 */

/* initialization of the runtime status of indicator multitext_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_multitext_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_multitext_2,
	/* x                */ 24,
	/* y                */ 128,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_multitext_2 */

/* status of indicator multitext_2_2: array text */
static const UINT16 FAR ind_screen_4_multitext_2_2_text[2] = {
	IDS_TEXT30,
	IDS_TEXT30,
}; /* ind_screen_4_multitext_2_2_text[] */

/* status of indicator multitext_2_2: array font */
static const vt3_font FARPTR const ind_screen_4_multitext_2_2_font[2] = {
	vt3_font_ArialRegular13, 
	vt3_font_ArialRegular13, 
}; /* ind_screen_4_multitext_2_2_font[] */

/* status of indicator multitext_2_2: array color */
static const vt3_color FAR ind_screen_4_multitext_2_2_color[2] = {
	4 /* = RGB(255, 255, 255) */, 
	32 /* = RGB(42, 255, 0) */, 
}; /* ind_screen_4_multitext_2_2_color[] */

/* ROM configuration of indicator multitext_2_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_multitext_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_multitext_2_2,
	/* width            */ 64,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_4_multitext_2_2_text,
	/* font             */ ind_screen_4_multitext_2_2_font,
	/* color            */ ind_screen_4_multitext_2_2_color,
}; /* __ROM_value__ind_screen_4_multitext_2_2 */

/* initialization of the runtime status of indicator multitext_2_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_multitext_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_multitext_2_2,
	/* x                */ 80,
	/* y                */ 128,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_multitext_2_2 */

/* status of indicator multitext_2_2_2: array text */
static const UINT16 FAR ind_screen_4_multitext_2_2_2_text[2] = {
	IDS_TEXT29,
	IDS_TEXT29,
}; /* ind_screen_4_multitext_2_2_2_text[] */

/* status of indicator multitext_2_2_2: array font */
static const vt3_font FARPTR const ind_screen_4_multitext_2_2_2_font[2] = {
	vt3_font_ArialRegular13, 
	vt3_font_ArialRegular13, 
}; /* ind_screen_4_multitext_2_2_2_font[] */

/* status of indicator multitext_2_2_2: array color */
static const vt3_color FAR ind_screen_4_multitext_2_2_2_color[2] = {
	4 /* = RGB(255, 255, 255) */, 
	32 /* = RGB(42, 255, 0) */, 
}; /* ind_screen_4_multitext_2_2_2_color[] */

/* ROM configuration of indicator multitext_2_2_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_multitext_2_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_multitext_2_2_2,
	/* width            */ 64,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_4_multitext_2_2_2_text,
	/* font             */ ind_screen_4_multitext_2_2_2_font,
	/* color            */ ind_screen_4_multitext_2_2_2_color,
}; /* __ROM_value__ind_screen_4_multitext_2_2_2 */

/* initialization of the runtime status of indicator multitext_2_2_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_multitext_2_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_multitext_2_2_2,
	/* x                */ 160,
	/* y                */ 128,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_multitext_2_2_2 */

/* status of indicator multitext_2_2_2_2: array text */
static const UINT16 FAR ind_screen_4_multitext_2_2_2_2_text[2] = {
	IDS_TEXT30,
	IDS_TEXT30,
}; /* ind_screen_4_multitext_2_2_2_2_text[] */

/* status of indicator multitext_2_2_2_2: array font */
static const vt3_font FARPTR const ind_screen_4_multitext_2_2_2_2_font[2] = {
	vt3_font_ArialRegular13, 
	vt3_font_ArialRegular13, 
}; /* ind_screen_4_multitext_2_2_2_2_font[] */

/* status of indicator multitext_2_2_2_2: array color */
static const vt3_color FAR ind_screen_4_multitext_2_2_2_2_color[2] = {
	4 /* = RGB(255, 255, 255) */, 
	32 /* = RGB(42, 255, 0) */, 
}; /* ind_screen_4_multitext_2_2_2_2_color[] */

/* ROM configuration of indicator multitext_2_2_2_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_multitext_2_2_2_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_multitext_2_2_2_2,
	/* width            */ 72,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_4_multitext_2_2_2_2_text,
	/* font             */ ind_screen_4_multitext_2_2_2_2_font,
	/* color            */ ind_screen_4_multitext_2_2_2_2_color,
}; /* __ROM_value__ind_screen_4_multitext_2_2_2_2 */

/* initialization of the runtime status of indicator multitext_2_2_2_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_multitext_2_2_2_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_multitext_2_2_2_2,
	/* x                */ 232,
	/* y                */ 128,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_multitext_2_2_2_2 */

/* status of indicator multitext_2_2_2_3: array text */
static const UINT16 FAR ind_screen_4_multitext_2_2_2_3_text[2] = {
	IDS_TEXT41,
	IDS_TEXT41,
}; /* ind_screen_4_multitext_2_2_2_3_text[] */

/* status of indicator multitext_2_2_2_3: array font */
static const vt3_font FARPTR const ind_screen_4_multitext_2_2_2_3_font[2] = {
	vt3_font_ArialRegular13, 
	vt3_font_ArialRegular13, 
}; /* ind_screen_4_multitext_2_2_2_3_font[] */

/* status of indicator multitext_2_2_2_3: array color */
static const vt3_color FAR ind_screen_4_multitext_2_2_2_3_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	183 /* = RGB(255, 31, 85) */, 
}; /* ind_screen_4_multitext_2_2_2_3_color[] */

/* ROM configuration of indicator multitext_2_2_2_3 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_4_multitext_2_2_2_3 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_4_multitext_2_2_2_3,
	/* width            */ 144,
	/* height           */ 16,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_4_multitext_2_2_2_3_text,
	/* font             */ ind_screen_4_multitext_2_2_2_3_font,
	/* color            */ ind_screen_4_multitext_2_2_2_3_color,
}; /* __ROM_value__ind_screen_4_multitext_2_2_2_3 */

/* initialization of the runtime status of indicator multitext_2_2_2_3 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_4_multitext_2_2_2_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_4_multitext_2_2_2_3,
	/* x                */ 160,
	/* y                */ 184,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_4_multitext_2_2_2_3 */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_4[] = {
	{ &vt3_screen_union.screen_4._background, &__init_value__ind_screen_4, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.screen_4.simple_text_07, &__init_value__ind_screen_4_simple_text_07, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_4.simple_text_08, &__init_value__ind_screen_4_simple_text_08, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_4.simple_text_09, &__init_value__ind_screen_4_simple_text_09, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_4.simple_text_10, &__init_value__ind_screen_4_simple_text_10, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_4.Return_Text_2, &__init_value__ind_screen_4_Return_Text_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.Date_Time_Caption_Text, &__init_value__ind_screen_4_Date_Time_Caption_Text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.Return_Text, &__init_value__ind_screen_4_Return_Text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.multitext, &__init_value__ind_screen_4_multitext, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.multitext_3, &__init_value__ind_screen_4_multitext_3, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.multitext_3_2, &__init_value__ind_screen_4_multitext_3_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.multitext_2, &__init_value__ind_screen_4_multitext_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.multitext_2_2, &__init_value__ind_screen_4_multitext_2_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.multitext_2_2_2, &__init_value__ind_screen_4_multitext_2_2_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.multitext_2_2_2_2, &__init_value__ind_screen_4_multitext_2_2_2_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_4.multitext_2_2_2_3, &__init_value__ind_screen_4_multitext_2_2_2_3, sizeof(vt3_indicator_MultiText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_4(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_4; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_4(BYTE event)
{
	/* invalidate text indicators in case of language change */
	if ( vt3_language != vt3_old_language )
	{
		/* indicators to be invalidated in case of language change */
		static BOOL FAR FARPTR const change_language_invalid_chain[] =
		{
			&vt3_screen_union.screen_4.simple_text_07.invalid,
			&vt3_screen_union.screen_4.simple_text_08.invalid,
			&vt3_screen_union.screen_4.simple_text_09.invalid,
			&vt3_screen_union.screen_4.simple_text_10.invalid,
			&vt3_screen_union.screen_4.Return_Text_2.invalid,
			&vt3_screen_union.screen_4.Date_Time_Caption_Text.invalid,
			&vt3_screen_union.screen_4.Return_Text.invalid,
			&vt3_screen_union.screen_4.multitext.invalid,
			&vt3_screen_union.screen_4.multitext_3.invalid,
			&vt3_screen_union.screen_4.multitext_3_2.invalid,
			&vt3_screen_union.screen_4.multitext_2.invalid,
			&vt3_screen_union.screen_4.multitext_2_2.invalid,
			&vt3_screen_union.screen_4.multitext_2_2_2.invalid,
			&vt3_screen_union.screen_4.multitext_2_2_2_2.invalid,
			&vt3_screen_union.screen_4.multitext_2_2_2_3.invalid,
			NULL /* sentinel */
		};
		vt3_follow_invalid_chain(change_language_invalid_chain);
		vt3_old_language = vt3_language;
	}

	/* event procedure for the screen */
	vt3_event_ind_screen_4(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.screen_4._background);

	/* indicator "simple_text_07" of type "SimpleText" */

	/* draw the indicator: simple_text_07 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_4.simple_text_07);


	/* indicator "simple_text_08" of type "SimpleText" */

	/* draw the indicator: simple_text_08 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_4.simple_text_08);


	/* indicator "simple_text_09" of type "SimpleText" */

	/* draw the indicator: simple_text_09 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_4.simple_text_09);


	/* indicator "simple_text_10" of type "SimpleText" */

	/* draw the indicator: simple_text_10 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_4.simple_text_10);


	/* indicator "Return_Text_2" of type "MultiText" */

	/* draw the indicator: Return_Text_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.Return_Text_2);


	/* indicator "Date_Time_Caption_Text" of type "MultiText" */

	/* draw the indicator: Date_Time_Caption_Text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.Date_Time_Caption_Text);


	/* indicator "Return_Text" of type "MultiText" */

	/* draw the indicator: Return_Text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.Return_Text);


	/* indicator "multitext" of type "MultiText" */

	/* draw the indicator: multitext */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.multitext);


	/* indicator "multitext_3" of type "MultiText" */

	/* draw the indicator: multitext_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.multitext_3);


	/* indicator "multitext_3_2" of type "MultiText" */

	/* draw the indicator: multitext_3_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.multitext_3_2);


	/* indicator "multitext_2" of type "MultiText" */

	/* draw the indicator: multitext_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.multitext_2);


	/* indicator "multitext_2_2" of type "MultiText" */

	/* draw the indicator: multitext_2_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.multitext_2_2);


	/* indicator "multitext_2_2_2" of type "MultiText" */

	/* draw the indicator: multitext_2_2_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.multitext_2_2_2);


	/* indicator "multitext_2_2_2_2" of type "MultiText" */

	/* draw the indicator: multitext_2_2_2_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.multitext_2_2_2_2);


	/* indicator "multitext_2_2_2_3" of type "MultiText" */

	/* draw the indicator: multitext_2_2_2_3 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_4.multitext_2_2_2_3);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_4() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_screen_4[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_screen_4[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_screen_4[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_screen_4[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_screen_4[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_screen_4[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_screen_4[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_screen_4[] */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN4_C */

/* end of file */
