/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN2_C
#define INCLUDE__VT3_DISP__SCREEN2_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen2.h"
#include "vt3_Event__Screen2.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* invalid chain for the indicators in layer 0 */
static BOOL FAR FARPTR const vt3_screen_screen_2_layer_0_invalid_chain[] =
{
	&vt3_screen_union.screen_2.Date_Text.invalid,
	&vt3_screen_union.screen_2.Time_Text.invalid,
	&vt3_screen_union.screen_2.Date_Time_Headline.invalid,
	&vt3_screen_union.screen_2.Date_Time_Caption_Text.invalid,
	&vt3_screen_union.screen_2.Return_Text.invalid,
	&vt3_screen_union.screen_2.Update_Min_Text.invalid,
	&vt3_screen_union.screen_2.Update_Hour_Text.invalid,
	&vt3_screen_union.screen_2.Update_Time_SemiColon.invalid,
	&vt3_screen_union.screen_2.Update_Month_Text.invalid,
	&vt3_screen_union.screen_2.Update_Day_Text.invalid,
	&vt3_screen_union.screen_2.Update_Date_Slash1.invalid,
	&vt3_screen_union.screen_2.Update_Year_Text.invalid,
	&vt3_screen_union.screen_2.Update_Date_Slash2.invalid,
	&vt3_screen_union.screen_2.Return_Text_2.invalid,
	NULL /* sentinel */
};

/* invalid chain for the indicators in layer 1 */
static BOOL FAR FARPTR const vt3_screen_screen_2_layer_1_invalid_chain[] =
{
	NULL /* sentinel */
};

/* ROM configuration of indicator screen_2 */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_screen_2 = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* event code       */ vt3_event_ind_screen_2,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, 0 /* = RGB(0, 0, 0) */, 0 },
}; /* __ROM_value__ind_screen_2 */

/* initialization of the runtime status of indicator screen_2 */
static const vt3_indicator_ScreenModel FAR __init_value__ind_screen_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2,
}; /* __init_value__ind_screen_2 */

/* ROM configuration of indicator Date_Text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_2_Date_Text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_2_Date_Text,
	/* width            */ 140,
	/* height           */ 28,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_DsDigitalNormal22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_2_Date_Text */

/* initialization of the runtime status of indicator Date_Text */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_2_Date_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Date_Text,
	/* x                */ 159,
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
}; /* __init_value__ind_screen_2_Date_Text */

/* ROM configuration of indicator Time_Text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_2_Time_Text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_2_Time_Text,
	/* width            */ 138,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_DsDigitalNormal22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_2_Time_Text */

/* initialization of the runtime status of indicator Time_Text */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_2_Time_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Time_Text,
	/* x                */ 160,
	/* y                */ 72,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Time_Text */

/* ROM configuration of indicator Date_Time_Headline */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_2_Date_Time_Headline = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_2_Date_Time_Headline,
	/* width            */ 288,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold20,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_2_Date_Time_Headline */

/* initialization of the runtime status of indicator Date_Time_Headline */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_2_Date_Time_Headline = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Date_Time_Headline,
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
}; /* __init_value__ind_screen_2_Date_Time_Headline */

/* status of indicator Date_Time_Caption_Text: array text */
static const UINT16 FAR ind_screen_2_Date_Time_Caption_Text_text[2] = {
	GIGA_ST_TEXT0,
	GIGA_ST_TEXT0,
}; /* ind_screen_2_Date_Time_Caption_Text_text[] */

/* status of indicator Date_Time_Caption_Text: array font */
static const vt3_font FARPTR const ind_screen_2_Date_Time_Caption_Text_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_2_Date_Time_Caption_Text_font[] */

/* status of indicator Date_Time_Caption_Text: array color */
static const vt3_color FAR ind_screen_2_Date_Time_Caption_Text_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_2_Date_Time_Caption_Text_color[] */

/* ROM configuration of indicator Date_Time_Caption_Text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_2_Date_Time_Caption_Text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_2_Date_Time_Caption_Text,
	/* width            */ 140,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_2_Date_Time_Caption_Text_text,
	/* font             */ ind_screen_2_Date_Time_Caption_Text_font,
	/* color            */ ind_screen_2_Date_Time_Caption_Text_color,
}; /* __ROM_value__ind_screen_2_Date_Time_Caption_Text */

/* initialization of the runtime status of indicator Date_Time_Caption_Text */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_2_Date_Time_Caption_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Date_Time_Caption_Text,
	/* x                */ 8,
	/* y                */ 72,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Date_Time_Caption_Text */

/* status of indicator Return_Text: array text */
static const UINT16 FAR ind_screen_2_Return_Text_text[2] = {
	GIGA_TEXT4,
	GIGA_TEXT4,
}; /* ind_screen_2_Return_Text_text[] */

/* status of indicator Return_Text: array font */
static const vt3_font FARPTR const ind_screen_2_Return_Text_font[2] = {
	vt3_font_ArialRegular16, 
	vt3_font_ArialRegular16, 
}; /* ind_screen_2_Return_Text_font[] */

/* status of indicator Return_Text: array color */
static const vt3_color FAR ind_screen_2_Return_Text_color[2] = {
	63 /* = RGB(85, 191, 255) */, 
	4 /* = RGB(255, 255, 255) */, 
}; /* ind_screen_2_Return_Text_color[] */

/* ROM configuration of indicator Return_Text */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_2_Return_Text = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_2_Return_Text,
	/* width            */ 140,
	/* height           */ 18,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_2_Return_Text_text,
	/* font             */ ind_screen_2_Return_Text_font,
	/* color            */ ind_screen_2_Return_Text_color,
}; /* __ROM_value__ind_screen_2_Return_Text */

/* initialization of the runtime status of indicator Return_Text */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_2_Return_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Return_Text,
	/* x                */ 8,
	/* y                */ 115,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Return_Text */

/* input mask of indicator Update_Min_Text */
static const WORD FAR vt3_indicator_input_mask_ind_screen_2_Update_Min_Text[] = {
	SIMPLE_TEXT_EDITABLE_MASK_9,
	SIMPLE_TEXT_EDITABLE_MASK_9,
	0x3A, /* verbatim : */
	SIMPLE_TEXT_EDITABLE_MASK_9,
	SIMPLE_TEXT_EDITABLE_MASK_9,
	0 // end-of-mask sentinel
}; /* vt3_indicator_input_mask_ind_screen_2_Update_Min_Text[] */

/* ROM configuration of indicator Update_Min_Text */
static const vt3_indicator_ROM_SimpleTextEditable FAR __ROM_value__ind_screen_2_Update_Min_Text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleTextEditable,
	/* event code          */ vt3_event_ind_screen_2_Update_Min_Text,
	/* width               */ 22,
	/* height              */ 24,
	/* layer               */ 0,
	/* halign              */ VT3_ALIGN_CENTRE,
	/* valign              */ VT3_ALIGN_CENTRE,
	/* font                */ vt3_font_DsDigitalNormal22,
	/* timer               */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* kbd_align           */ VT3_ALIGN_DOWN,
	/* kbd_bmp             */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, 0 },
	/* input_mask          */ vt3_indicator_input_mask_ind_screen_2_Update_Min_Text,
	/* numeric_format_mask */ (const WORD FARPTR) NULL,
	/* password            */ 0,
	/* bg_focus            */ VT3_COLOR_NOTHING,
}; /* __ROM_value__ind_screen_2_Update_Min_Text    */

/* initialization of the runtime status of indicator Update_Min_Text */
static const vt3_indicator_SimpleTextEditable FAR __init_value__ind_screen_2_Update_Min_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Update_Min_Text,
	/* x                */ 242,
	/* y                */ 146,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_apply        */ 0,
	/* key_cancel       */ 0,
	/* kbd_x            */ 0,
	/* kbd_y            */ 0,
}; /* __init_value__ind_screen_2_Update_Min_Text */

/* ROM configuration of indicator Update_Hour_Text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_2_Update_Hour_Text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_2_Update_Hour_Text,
	/* width            */ 25,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_DsDigitalNormal22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_2_Update_Hour_Text */

/* initialization of the runtime status of indicator Update_Hour_Text */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_2_Update_Hour_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Update_Hour_Text,
	/* x                */ 197,
	/* y                */ 146,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Update_Hour_Text */

/* ROM configuration of indicator Update_Time_SemiColon */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_2_Update_Time_SemiColon = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_2_Update_Time_SemiColon,
	/* width            */ 8,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_DsDigitalNormal22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_2_Update_Time_SemiColon */

/* initialization of the runtime status of indicator Update_Time_SemiColon */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_2_Update_Time_SemiColon = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Update_Time_SemiColon,
	/* x                */ 228,
	/* y                */ 146,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Update_Time_SemiColon */

/* input mask of indicator Update_Month_Text */
static const WORD FAR vt3_indicator_input_mask_ind_screen_2_Update_Month_Text[] = {
	SIMPLE_TEXT_EDITABLE_MASK_9,
	SIMPLE_TEXT_EDITABLE_MASK_9,
	0x3A, /* verbatim : */
	SIMPLE_TEXT_EDITABLE_MASK_9,
	SIMPLE_TEXT_EDITABLE_MASK_9,
	0 // end-of-mask sentinel
}; /* vt3_indicator_input_mask_ind_screen_2_Update_Month_Text[] */

/* ROM configuration of indicator Update_Month_Text */
static const vt3_indicator_ROM_SimpleTextEditable FAR __ROM_value__ind_screen_2_Update_Month_Text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleTextEditable,
	/* event code          */ vt3_event_ind_screen_2_Update_Month_Text,
	/* width               */ 23,
	/* height              */ 24,
	/* layer               */ 0,
	/* halign              */ VT3_ALIGN_CENTRE,
	/* valign              */ VT3_ALIGN_CENTRE,
	/* font                */ vt3_font_DsDigitalNormal22,
	/* timer               */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* kbd_align           */ VT3_ALIGN_DOWN,
	/* kbd_bmp             */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, 0 },
	/* input_mask          */ vt3_indicator_input_mask_ind_screen_2_Update_Month_Text,
	/* numeric_format_mask */ (const WORD FARPTR) NULL,
	/* password            */ 0,
	/* bg_focus            */ VT3_COLOR_NOTHING,
}; /* __ROM_value__ind_screen_2_Update_Month_Text    */

/* initialization of the runtime status of indicator Update_Month_Text */
static const vt3_indicator_SimpleTextEditable FAR __init_value__ind_screen_2_Update_Month_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Update_Month_Text,
	/* x                */ 207,
	/* y                */ 177,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_apply        */ 0,
	/* key_cancel       */ 0,
	/* kbd_x            */ 0,
	/* kbd_y            */ 0,
}; /* __init_value__ind_screen_2_Update_Month_Text */

/* ROM configuration of indicator Update_Day_Text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_2_Update_Day_Text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_2_Update_Day_Text,
	/* width            */ 24,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_DsDigitalNormal22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_2_Update_Day_Text */

/* initialization of the runtime status of indicator Update_Day_Text */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_2_Update_Day_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Update_Day_Text,
	/* x                */ 157,
	/* y                */ 177,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Update_Day_Text */

/* ROM configuration of indicator Update_Date_Slash1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_2_Update_Date_Slash1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_2_Update_Date_Slash1,
	/* width            */ 14,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_DsDigitalNormal22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_2_Update_Date_Slash1 */

/* initialization of the runtime status of indicator Update_Date_Slash1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_2_Update_Date_Slash1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Update_Date_Slash1,
	/* x                */ 187,
	/* y                */ 177,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Update_Date_Slash1 */

/* input mask of indicator Update_Year_Text */
static const WORD FAR vt3_indicator_input_mask_ind_screen_2_Update_Year_Text[] = {
	SIMPLE_TEXT_EDITABLE_MASK_9,
	SIMPLE_TEXT_EDITABLE_MASK_9,
	0x3A, /* verbatim : */
	SIMPLE_TEXT_EDITABLE_MASK_9,
	SIMPLE_TEXT_EDITABLE_MASK_9,
	0 // end-of-mask sentinel
}; /* vt3_indicator_input_mask_ind_screen_2_Update_Year_Text[] */

/* ROM configuration of indicator Update_Year_Text */
static const vt3_indicator_ROM_SimpleTextEditable FAR __ROM_value__ind_screen_2_Update_Year_Text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleTextEditable,
	/* event code          */ vt3_event_ind_screen_2_Update_Year_Text,
	/* width               */ 53,
	/* height              */ 24,
	/* layer               */ 0,
	/* halign              */ VT3_ALIGN_LEFT,
	/* valign              */ VT3_ALIGN_CENTRE,
	/* font                */ vt3_font_DsDigitalNormal22,
	/* timer               */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* kbd_align           */ VT3_ALIGN_DOWN,
	/* kbd_bmp             */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, 0 },
	/* input_mask          */ vt3_indicator_input_mask_ind_screen_2_Update_Year_Text,
	/* numeric_format_mask */ (const WORD FARPTR) NULL,
	/* password            */ 0,
	/* bg_focus            */ VT3_COLOR_NOTHING,
}; /* __ROM_value__ind_screen_2_Update_Year_Text    */

/* initialization of the runtime status of indicator Update_Year_Text */
static const vt3_indicator_SimpleTextEditable FAR __init_value__ind_screen_2_Update_Year_Text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Update_Year_Text,
	/* x                */ 256,
	/* y                */ 177,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_apply        */ 0,
	/* key_cancel       */ 0,
	/* kbd_x            */ 0,
	/* kbd_y            */ 0,
}; /* __init_value__ind_screen_2_Update_Year_Text */

/* ROM configuration of indicator Update_Date_Slash2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_2_Update_Date_Slash2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_2_Update_Date_Slash2,
	/* width            */ 14,
	/* height           */ 24,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_DsDigitalNormal22,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_2_Update_Date_Slash2 */

/* initialization of the runtime status of indicator Update_Date_Slash2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_2_Update_Date_Slash2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Update_Date_Slash2,
	/* x                */ 236,
	/* y                */ 177,
	/* color            */ 4 /* = RGB(255, 255, 255) */,
	/* color_old        */ 0 /* = RGB(0, 0, 0) */,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Update_Date_Slash2 */

/* status of indicator Return_Text_2: array text */
static const UINT16 FAR ind_screen_2_Return_Text_2_text[2] = {
	GIGA_ST_TEXT1,
	GIGA_ST_TEXT1,
}; /* ind_screen_2_Return_Text_2_text[] */

/* status of indicator Return_Text_2: array font */
static const vt3_font FARPTR const ind_screen_2_Return_Text_2_font[2] = {
	vt3_font_ArialRegular15, 
	vt3_font_ArialRegular15, 
}; /* ind_screen_2_Return_Text_2_font[] */

/* status of indicator Return_Text_2: array color */
static const vt3_color FAR ind_screen_2_Return_Text_2_color[2] = {
	4 /* = RGB(255, 255, 255) */, 
	191 /* = RGB(255, 95, 85) */, 
}; /* ind_screen_2_Return_Text_2_color[] */

/* ROM configuration of indicator Return_Text_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_2_Return_Text_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_2_Return_Text_2,
	/* width            */ 80,
	/* height           */ 17,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 0 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_2_Return_Text_2_text,
	/* font             */ ind_screen_2_Return_Text_2_font,
	/* color            */ ind_screen_2_Return_Text_2_color,
}; /* __ROM_value__ind_screen_2_Return_Text_2 */

/* initialization of the runtime status of indicator Return_Text_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_2_Return_Text_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_2_Return_Text_2,
	/* x                */ 232,
	/* y                */ 216,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ 4 /* = RGB(255, 255, 255) */,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_2_Return_Text_2 */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_2[] = {
	{ &vt3_screen_union.screen_2._background, &__init_value__ind_screen_2, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.screen_2.Date_Text, &__init_value__ind_screen_2_Date_Text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_2.Time_Text, &__init_value__ind_screen_2_Time_Text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_2.Date_Time_Headline, &__init_value__ind_screen_2_Date_Time_Headline, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_2.Date_Time_Caption_Text, &__init_value__ind_screen_2_Date_Time_Caption_Text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_2.Return_Text, &__init_value__ind_screen_2_Return_Text, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen_2.Update_Min_Text, &__init_value__ind_screen_2_Update_Min_Text, sizeof(vt3_indicator_SimpleTextEditable) },
	{ &vt3_screen_union.screen_2.Update_Hour_Text, &__init_value__ind_screen_2_Update_Hour_Text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_2.Update_Time_SemiColon, &__init_value__ind_screen_2_Update_Time_SemiColon, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_2.Update_Month_Text, &__init_value__ind_screen_2_Update_Month_Text, sizeof(vt3_indicator_SimpleTextEditable) },
	{ &vt3_screen_union.screen_2.Update_Day_Text, &__init_value__ind_screen_2_Update_Day_Text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_2.Update_Date_Slash1, &__init_value__ind_screen_2_Update_Date_Slash1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_2.Update_Year_Text, &__init_value__ind_screen_2_Update_Year_Text, sizeof(vt3_indicator_SimpleTextEditable) },
	{ &vt3_screen_union.screen_2.Update_Date_Slash2, &__init_value__ind_screen_2_Update_Date_Slash2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen_2.Return_Text_2, &__init_value__ind_screen_2_Return_Text_2, sizeof(vt3_indicator_MultiText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen_2(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen_2; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen_2(BYTE event)
{
	/* invalidate text indicators in case of language change */
	if ( vt3_language != vt3_old_language )
	{
		/* indicators to be invalidated in case of language change */
		static BOOL FAR FARPTR const change_language_invalid_chain[] =
		{
			&vt3_screen_union.screen_2.Date_Text.invalid,
			&vt3_screen_union.screen_2.Time_Text.invalid,
			&vt3_screen_union.screen_2.Date_Time_Headline.invalid,
			&vt3_screen_union.screen_2.Date_Time_Caption_Text.invalid,
			&vt3_screen_union.screen_2.Return_Text.invalid,
			&vt3_screen_union.screen_2.Update_Min_Text.invalid,
			&vt3_screen_union.screen_2.Update_Hour_Text.invalid,
			&vt3_screen_union.screen_2.Update_Time_SemiColon.invalid,
			&vt3_screen_union.screen_2.Update_Month_Text.invalid,
			&vt3_screen_union.screen_2.Update_Day_Text.invalid,
			&vt3_screen_union.screen_2.Update_Date_Slash1.invalid,
			&vt3_screen_union.screen_2.Update_Year_Text.invalid,
			&vt3_screen_union.screen_2.Update_Date_Slash2.invalid,
			&vt3_screen_union.screen_2.Return_Text_2.invalid,
			NULL /* sentinel */
		};
		vt3_follow_invalid_chain(change_language_invalid_chain);
		vt3_old_language = vt3_language;
	}

	/* event procedure for the screen */
	vt3_event_ind_screen_2(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.screen_2._background);

	/* indicator "Date_Text" of type "SimpleText" */

	/* draw the indicator: Date_Text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_2.Date_Text);


	/* indicator "Time_Text" of type "SimpleText" */

	/* draw the indicator: Time_Text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_2.Time_Text);


	/* indicator "Date_Time_Headline" of type "SimpleText" */

	/* draw the indicator: Date_Time_Headline */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_2.Date_Time_Headline);


	/* indicator "Date_Time_Caption_Text" of type "MultiText" */

	/* draw the indicator: Date_Time_Caption_Text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_2.Date_Time_Caption_Text);


	/* indicator "Return_Text" of type "MultiText" */

	/* draw the indicator: Return_Text */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_2.Return_Text);


	/* indicator "Update_Min_Text" of type "SimpleTextEditable" */

	/* draw the indicator: Update_Min_Text */
	vt3_draw_indicator_SimpleTextEditable(event, &vt3_screen_union.screen_2.Update_Min_Text);


	/* indicator "Update_Hour_Text" of type "SimpleText" */

	/* draw the indicator: Update_Hour_Text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_2.Update_Hour_Text);


	/* indicator "Update_Time_SemiColon" of type "SimpleText" */

	/* draw the indicator: Update_Time_SemiColon */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_2.Update_Time_SemiColon);


	/* indicator "Update_Month_Text" of type "SimpleTextEditable" */

	/* draw the indicator: Update_Month_Text */
	vt3_draw_indicator_SimpleTextEditable(event, &vt3_screen_union.screen_2.Update_Month_Text);


	/* indicator "Update_Day_Text" of type "SimpleText" */

	/* draw the indicator: Update_Day_Text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_2.Update_Day_Text);


	/* indicator "Update_Date_Slash1" of type "SimpleText" */

	/* draw the indicator: Update_Date_Slash1 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_2.Update_Date_Slash1);


	/* indicator "Update_Year_Text" of type "SimpleTextEditable" */

	/* draw the indicator: Update_Year_Text */
	vt3_draw_indicator_SimpleTextEditable(event, &vt3_screen_union.screen_2.Update_Year_Text);


	/* indicator "Update_Date_Slash2" of type "SimpleText" */

	/* draw the indicator: Update_Date_Slash2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen_2.Update_Date_Slash2);


	/* indicator "Return_Text_2" of type "MultiText" */

	/* draw the indicator: Return_Text_2 */
	vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen_2.Return_Text_2);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_2() */

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_screen_2[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Min_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Min_Text, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Month_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Month_Text, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Year_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Year_Text, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_screen_2[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_screen_2[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Year_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Year_Text, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Month_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Month_Text, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Min_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Min_Text, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_screen_2[] */

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_screen_2[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Min_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Min_Text, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Month_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Month_Text, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Year_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Year_Text, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_screen_2[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_screen_2[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Year_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Year_Text, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Month_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Month_Text, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Min_Text, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen_2.Update_Min_Text, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_screen_2[] */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN2_C */

/* end of file */
