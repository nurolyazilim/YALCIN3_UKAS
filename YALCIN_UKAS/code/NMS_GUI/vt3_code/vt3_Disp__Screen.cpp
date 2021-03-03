/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN_CPP
#define INCLUDE__VT3_DISP__SCREEN_CPP

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen.h"
#include "vt3_Event__Screen.h"



/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator screen */
static const vt3_indicator_ROM_ScreenModel FAR __ROM_value__ind_screen = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenModel,
	/* event code       */ vt3_event_ind_screen,
	/* background       */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
}; /* __ROM_value__ind_screen */

/* initialization of the runtime status of indicator screen */
static const vt3_indicator_ScreenModel FAR __init_value__ind_screen = {
	/* ROM parameters   */ &__ROM_value__ind_screen,
}; /* __init_value__ind_screen */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator multiscreen: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_bitmap[2] = {
	{ VT3IMG_BITMAP, vt3_BMP__16_Bg2_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			1280, 720 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_screen_multiscreen_bitmap[] */

/* ROM configuration of indicator multiscreen */
static const vt3_indicator_ROM_SubScreen FAR __ROM_value__ind_screen_multiscreen = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreen,
	/* event code       */ vt3_event_ind_screen_multiscreen,
	/* width            */ 1280,
	/* height           */ 720,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_bitmap,
}; /* __ROM_value__ind_screen_multiscreen */

/* initialization of the runtime status of indicator multiscreen */
static const vt3_indicator_SubScreen FAR __init_value__ind_screen_multiscreen = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen,
	/* x                */ 0,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator 0 */
static const vt3_indicator_ROM_SubScreenPage FAR __ROM_value__ind_screen_multiscreen_0 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreenPage,
}; /* __ROM_value__ind_screen_multiscreen_0 */

/* initialization of the runtime status of indicator 0 */
static const vt3_indicator_SubScreenPage FAR __init_value__ind_screen_multiscreen_0 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0,
}; /* __init_value__ind_screen_multiscreen_0 */


#pragma GCC diagnostic pop

/* ROM configuration of indicator service_brake_tank_1_fb */
static const char FAR ind_screen_multiscreen_0_service_brake_tank_1_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_service_brake_tank_1_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_service_brake_tank_1_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_fb */

/* initialization of the runtime status of indicator service_brake_tank_1_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_1_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_fb,
	/* x                */ 577,
	/* y                */ 84,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_1_fb */

/* ROM configuration of indicator service_brake_tank_2_fb */
static const char FAR ind_screen_multiscreen_0_service_brake_tank_2_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_service_brake_tank_2_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_service_brake_tank_2_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_fb */

/* initialization of the runtime status of indicator service_brake_tank_2_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_2_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_fb,
	/* x                */ 577,
	/* y                */ 214,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_2_fb */

/* ROM configuration of indicator park_brake_tank_fb */
static const char FAR ind_screen_multiscreen_0_park_brake_tank_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_park_brake_tank_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_park_brake_tank_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_park_brake_tank_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_park_brake_tank_fb */

/* initialization of the runtime status of indicator park_brake_tank_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_park_brake_tank_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_park_brake_tank_fb,
	/* x                */ 577,
	/* y                */ 344,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_park_brake_tank_fb */

/* ROM configuration of indicator accessory_tank_fb */
static const char FAR ind_screen_multiscreen_0_accessory_tank_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_accessory_tank_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_accessory_tank_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_accessory_tank_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_accessory_tank_fb */

/* initialization of the runtime status of indicator accessory_tank_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_accessory_tank_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_accessory_tank_fb,
	/* x                */ 577,
	/* y                */ 474,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_accessory_tank_fb */

/* ROM configuration of indicator hydraulic_tank_pressure_fb */
static const char FAR ind_screen_multiscreen_0_hydraulic_tank_pressure_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_hydraulic_tank_pressure_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_fb */

/* initialization of the runtime status of indicator hydraulic_tank_pressure_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_fb,
	/* x                */ 577,
	/* y                */ 604,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_fb */

/* ROM configuration of indicator fuel_level_left_fb */
static const char FAR ind_screen_multiscreen_0_fuel_level_left_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_left_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_level_left_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_level_left_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_left_fb */

/* initialization of the runtime status of indicator fuel_level_left_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_fuel_level_left_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_left_fb,
	/* x                */ 1087,
	/* y                */ 84,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_left_fb */

/* ROM configuration of indicator fuel_level_right_fb */
static const char FAR ind_screen_multiscreen_0_fuel_level_right_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_right_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_level_right_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_level_right_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_right_fb */

/* initialization of the runtime status of indicator fuel_level_right_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_fuel_level_right_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_right_fb,
	/* x                */ 1087,
	/* y                */ 214,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_right_fb */

/* ROM configuration of indicator fuel_temp_left_fb */
static const char FAR ind_screen_multiscreen_0_fuel_temp_left_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_temp_left_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_temp_left_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_fb */

/* initialization of the runtime status of indicator fuel_temp_left_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_fuel_temp_left_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_left_fb,
	/* x                */ 1087,
	/* y                */ 344,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_left_fb */

/* ROM configuration of indicator fuel_temp_right_fb */
static const char FAR ind_screen_multiscreen_0_fuel_temp_right_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_temp_right_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_temp_right_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_fb */

/* initialization of the runtime status of indicator fuel_temp_right_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_fuel_temp_right_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_right_fb,
	/* x                */ 1087,
	/* y                */ 474,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_right_fb */

/* ROM configuration of indicator hydraulic_tank_temp_fb */
static const char FAR ind_screen_multiscreen_0_hydraulic_tank_temp_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_fb,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_hydraulic_tank_temp_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_fb */

/* initialization of the runtime status of indicator hydraulic_tank_temp_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_fb,
	/* x                */ 1087,
	/* y                */ 604,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_fb */


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator service_brake_tank_1_input */
static const char FAR ind_screen_multiscreen_0_service_brake_tank_1_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_service_brake_tank_1_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_service_brake_tank_1_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_NOTHING,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_input */

/* initialization of the runtime status of indicator service_brake_tank_1_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_1_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_input,
	/* x                */ 425,
	/* y                */ 84,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 80,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_1_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator service_brake_tank_2_input */
static const char FAR ind_screen_multiscreen_0_service_brake_tank_2_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_service_brake_tank_2_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_service_brake_tank_2_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_input */

/* initialization of the runtime status of indicator service_brake_tank_2_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_2_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_input,
	/* x                */ 425,
	/* y                */ 214,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 80,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_2_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator park_brake_tank_input */
static const char FAR ind_screen_multiscreen_0_park_brake_tank_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_park_brake_tank_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_park_brake_tank_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_park_brake_tank_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_park_brake_tank_input */

/* initialization of the runtime status of indicator park_brake_tank_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_park_brake_tank_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_park_brake_tank_input,
	/* x                */ 425,
	/* y                */ 344,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 80,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_park_brake_tank_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator accessory_tank_input */
static const char FAR ind_screen_multiscreen_0_accessory_tank_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_accessory_tank_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_accessory_tank_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_accessory_tank_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 1,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_accessory_tank_input */

/* initialization of the runtime status of indicator accessory_tank_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_accessory_tank_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_accessory_tank_input,
	/* x                */ 425,
	/* y                */ 474,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 80,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_accessory_tank_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator hydraulic_tank_pressure_input */
static const char FAR ind_screen_multiscreen_0_hydraulic_tank_pressure_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_hydraulic_tank_pressure_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_input */

/* initialization of the runtime status of indicator hydraulic_tank_pressure_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_input,
	/* x                */ 425,
	/* y                */ 604,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 100,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator fuel_level_left_input */
static const char FAR ind_screen_multiscreen_0_fuel_level_left_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_left_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_level_left_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_level_left_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_left_input */

/* initialization of the runtime status of indicator fuel_level_left_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_fuel_level_left_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_left_input,
	/* x                */ 935,
	/* y                */ 84,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 100,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_left_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator fuel_level_right_input */
static const char FAR ind_screen_multiscreen_0_fuel_level_right_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_right_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_level_right_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_level_right_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_right_input */

/* initialization of the runtime status of indicator fuel_level_right_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_fuel_level_right_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_right_input,
	/* x                */ 935,
	/* y                */ 214,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ 0,
	/* maxValue         */ 100,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_right_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator fuel_temp_left_input */
static const char FAR ind_screen_multiscreen_0_fuel_temp_left_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_temp_left_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_temp_left_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_input */

/* initialization of the runtime status of indicator fuel_temp_left_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_fuel_temp_left_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_left_input,
	/* x                */ 935,
	/* y                */ 344,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ -40,
	/* maxValue         */ 110,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_left_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator fuel_temp_right_input */
static const char FAR ind_screen_multiscreen_0_fuel_temp_right_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_temp_right_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_temp_right_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_input */

/* initialization of the runtime status of indicator fuel_temp_right_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_fuel_temp_right_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_right_input,
	/* x                */ 935,
	/* y                */ 474,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ -40,
	/* maxValue         */ 110,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_right_input */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator hydraulic_tank_temp_input */
static const char FAR ind_screen_multiscreen_0_hydraulic_tank_temp_input__init_separator[] = ".";
static const vt3_indicator_ROM_NumberEditable FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_input = {
	/* virtual method table */ &vt3_indicator_VMT_NumberEditable,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_input,
	/* width            */ 50,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_hydraulic_tank_temp_input__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
	/* bg_focus         */ VT3_COLOR_TRANSPARENT,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_input */

/* initialization of the runtime status of indicator hydraulic_tank_temp_input */
static const vt3_indicator_NumberEditable FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_input = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_input,
	/* x                */ 935,
	/* y                */ 604,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
	/* enabled          */ 1,
	/* minValue         */ -40,
	/* maxValue         */ 110,
	/* key_up           */ 0,
	/* key_down         */ 0,
	/* key_left         */ 0,
	/* key_right        */ 0,
	/* key_enter        */ 0,
	/* key_esc          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_input */


#pragma GCC diagnostic pop

/* ROM configuration of indicator service_brake_tank_1 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_service_brake_tank_1,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1 */

/* initialization of the runtime status of indicator service_brake_tank_1 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_1,
	/* x                */ 254,
	/* y                */ 54,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_1 */

/* ROM configuration of indicator service_brake_tank_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_service_brake_tank_2,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2 */

/* initialization of the runtime status of indicator service_brake_tank_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_2,
	/* x                */ 254,
	/* y                */ 184,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_2 */

/* ROM configuration of indicator park_brake_tank */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_park_brake_tank = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_park_brake_tank,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_park_brake_tank */

/* initialization of the runtime status of indicator park_brake_tank */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_park_brake_tank = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_park_brake_tank,
	/* x                */ 254,
	/* y                */ 314,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_park_brake_tank */

/* ROM configuration of indicator accessory_tank */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_accessory_tank = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_accessory_tank,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_accessory_tank */

/* initialization of the runtime status of indicator accessory_tank */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_accessory_tank = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_accessory_tank,
	/* x                */ 254,
	/* y                */ 444,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_accessory_tank */

/* ROM configuration of indicator hydraulic_tank_pressure */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure */

/* initialization of the runtime status of indicator hydraulic_tank_pressure */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure,
	/* x                */ 254,
	/* y                */ 574,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure */

/* ROM configuration of indicator fuel_level_left */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_left = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_level_left,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_left */

/* initialization of the runtime status of indicator fuel_level_left */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_fuel_level_left = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_left,
	/* x                */ 763,
	/* y                */ 54,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_left */

/* ROM configuration of indicator fuel_level_right */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_right = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_level_right,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_right */

/* initialization of the runtime status of indicator fuel_level_right */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_fuel_level_right = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_right,
	/* x                */ 763,
	/* y                */ 184,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_right */

/* ROM configuration of indicator fuel_temp_left */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_left = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_temp_left,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_left */

/* initialization of the runtime status of indicator fuel_temp_left */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_fuel_temp_left = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_left,
	/* x                */ 763,
	/* y                */ 314,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_left */

/* ROM configuration of indicator fuel_temp_right */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_right = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_temp_right,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_right */

/* initialization of the runtime status of indicator fuel_temp_right */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_fuel_temp_right = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_right,
	/* x                */ 763,
	/* y                */ 444,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_right */

/* ROM configuration of indicator hydraulic_tank_temp */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp,
	/* width            */ 242,
	/* height           */ 32,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp */

/* initialization of the runtime status of indicator hydraulic_tank_temp */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp,
	/* x                */ 763,
	/* y                */ 574,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp */

/* ROM configuration of indicator service_brake_tank_1_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ VT3_COLOR_NOTHING,
	/* color_disabled   */ VT3_COLOR_NOTHING,
	/* color_pressed    */ VT3_COLOR_NOTHING,
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_touch */

/* initialization of the runtime status of indicator service_brake_tank_1_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_1_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_touch,
	/* x                */ 253,
	/* y                */ 81,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_1_touch */

/* ROM configuration of indicator service_brake_tank_2_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_touch */

/* initialization of the runtime status of indicator service_brake_tank_2_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_2_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_touch,
	/* x                */ 253,
	/* y                */ 211,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_2_touch */

/* ROM configuration of indicator park_brake_tank_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_park_brake_tank_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_park_brake_tank_touch */

/* initialization of the runtime status of indicator park_brake_tank_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_park_brake_tank_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_park_brake_tank_touch,
	/* x                */ 253,
	/* y                */ 341,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_park_brake_tank_touch */

/* ROM configuration of indicator accessory_tank_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_accessory_tank_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_accessory_tank_touch */

/* initialization of the runtime status of indicator accessory_tank_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_accessory_tank_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_accessory_tank_touch,
	/* x                */ 253,
	/* y                */ 471,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_accessory_tank_touch */

/* ROM configuration of indicator hydraulic_tank_pressure_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_touch */

/* initialization of the runtime status of indicator hydraulic_tank_pressure_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_touch,
	/* x                */ 253,
	/* y                */ 601,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_touch */

/* ROM configuration of indicator fuel_level_left_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_left_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_left_touch */

/* initialization of the runtime status of indicator fuel_level_left_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_fuel_level_left_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_left_touch,
	/* x                */ 762,
	/* y                */ 81,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_left_touch */

/* ROM configuration of indicator fuel_level_right_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_right_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_right_touch */

/* initialization of the runtime status of indicator fuel_level_right_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_fuel_level_right_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_right_touch,
	/* x                */ 762,
	/* y                */ 211,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_right_touch */

/* ROM configuration of indicator fuel_temp_left_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_touch */

/* initialization of the runtime status of indicator fuel_temp_left_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_fuel_temp_left_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_left_touch,
	/* x                */ 762,
	/* y                */ 341,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_left_touch */

/* ROM configuration of indicator fuel_temp_right_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_touch */

/* initialization of the runtime status of indicator fuel_temp_right_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_fuel_temp_right_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_right_touch,
	/* x                */ 762,
	/* y                */ 471,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_right_touch */

/* ROM configuration of indicator hydraulic_tank_temp_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_touch */

/* initialization of the runtime status of indicator hydraulic_tank_temp_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_touch,
	/* x                */ 762,
	/* y                */ 601,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_touch */

/* ROM configuration of indicator service_brake_tank_1_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_send */

/* initialization of the runtime status of indicator service_brake_tank_1_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_1_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_1_send,
	/* x                */ 309,
	/* y                */ 81,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_1_send */

/* ROM configuration of indicator service_brake_tank_2_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_send */

/* initialization of the runtime status of indicator service_brake_tank_2_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_service_brake_tank_2_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_brake_tank_2_send,
	/* x                */ 309,
	/* y                */ 211,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_service_brake_tank_2_send */

/* ROM configuration of indicator park_brake_tank_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_park_brake_tank_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_park_brake_tank_send */

/* initialization of the runtime status of indicator park_brake_tank_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_park_brake_tank_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_park_brake_tank_send,
	/* x                */ 309,
	/* y                */ 341,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_park_brake_tank_send */

/* ROM configuration of indicator accessory_tank_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_accessory_tank_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_accessory_tank_send */

/* initialization of the runtime status of indicator accessory_tank_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_accessory_tank_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_accessory_tank_send,
	/* x                */ 309,
	/* y                */ 471,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_accessory_tank_send */

/* ROM configuration of indicator hydraulic_tank_pressure_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_send */

/* initialization of the runtime status of indicator hydraulic_tank_pressure_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_send,
	/* x                */ 309,
	/* y                */ 601,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_send */

/* ROM configuration of indicator fuel_level_left_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_left_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_left_send */

/* initialization of the runtime status of indicator fuel_level_left_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_fuel_level_left_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_left_send,
	/* x                */ 818,
	/* y                */ 81,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_left_send */

/* ROM configuration of indicator fuel_level_right_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_right_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_right_send */

/* initialization of the runtime status of indicator fuel_level_right_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_fuel_level_right_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_right_send,
	/* x                */ 818,
	/* y                */ 211,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_right_send */

/* ROM configuration of indicator fuel_temp_right_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_send */

/* initialization of the runtime status of indicator fuel_temp_right_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_fuel_temp_right_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_right_send,
	/* x                */ 818,
	/* y                */ 471,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_right_send */

/* ROM configuration of indicator fuel_temp_left_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_send */

/* initialization of the runtime status of indicator fuel_temp_left_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_fuel_temp_left_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_left_send,
	/* x                */ 818,
	/* y                */ 341,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_left_send */

/* ROM configuration of indicator hydraulic_tank_temp_send */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_send = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__11_SendOff40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__8_SendOn40_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 0,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_send */

/* initialization of the runtime status of indicator hydraulic_tank_temp_send */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_send = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_send,
	/* x                */ 818,
	/* y                */ 601,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_send */

/* ROM configuration of indicator service_break_tank_1_raw_fb */
static const char FAR ind_screen_multiscreen_0_service_break_tank_1_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_service_break_tank_1_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_service_break_tank_1_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_service_break_tank_1_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_service_break_tank_1_raw_fb */

/* initialization of the runtime status of indicator service_break_tank_1_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_service_break_tank_1_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_break_tank_1_raw_fb,
	/* x                */ 577,
	/* y                */ 115,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_service_break_tank_1_raw_fb */

/* ROM configuration of indicator service_break_tank_2_raw_fb */
static const char FAR ind_screen_multiscreen_0_service_break_tank_2_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_service_break_tank_2_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_service_break_tank_2_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_service_break_tank_2_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_service_break_tank_2_raw_fb */

/* initialization of the runtime status of indicator service_break_tank_2_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_service_break_tank_2_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_service_break_tank_2_raw_fb,
	/* x                */ 577,
	/* y                */ 245,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_service_break_tank_2_raw_fb */

/* ROM configuration of indicator park_break_tank_raw_fb */
static const char FAR ind_screen_multiscreen_0_park_break_tank_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_park_break_tank_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_park_break_tank_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_park_break_tank_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_park_break_tank_raw_fb */

/* initialization of the runtime status of indicator park_break_tank_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_park_break_tank_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_park_break_tank_raw_fb,
	/* x                */ 577,
	/* y                */ 375,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_park_break_tank_raw_fb */

/* ROM configuration of indicator accessory_tank_raw_fb */
static const char FAR ind_screen_multiscreen_0_accessory_tank_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_accessory_tank_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_accessory_tank_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_accessory_tank_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_accessory_tank_raw_fb */

/* initialization of the runtime status of indicator accessory_tank_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_accessory_tank_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_accessory_tank_raw_fb,
	/* x                */ 577,
	/* y                */ 505,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_accessory_tank_raw_fb */

/* ROM configuration of indicator hydraulic_tank_pressure_raw_fb */
static const char FAR ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb */

/* initialization of the runtime status of indicator hydraulic_tank_pressure_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb,
	/* x                */ 577,
	/* y                */ 635,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb */

/* ROM configuration of indicator fuel_level_left_raw_fb */
static const char FAR ind_screen_multiscreen_0_fuel_level_left_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_left_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_level_left_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_level_left_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_left_raw_fb */

/* initialization of the runtime status of indicator fuel_level_left_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_fuel_level_left_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_left_raw_fb,
	/* x                */ 1087,
	/* y                */ 115,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_left_raw_fb */

/* ROM configuration of indicator fuel_level_right_raw_fb */
static const char FAR ind_screen_multiscreen_0_fuel_level_right_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_fuel_level_right_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_level_right_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_level_right_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_level_right_raw_fb */

/* initialization of the runtime status of indicator fuel_level_right_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_fuel_level_right_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_level_right_raw_fb,
	/* x                */ 1087,
	/* y                */ 245,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_level_right_raw_fb */

/* ROM configuration of indicator fuel_temp_left_raw_fb */
static const char FAR ind_screen_multiscreen_0_fuel_temp_left_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_temp_left_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_temp_left_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_left_raw_fb */

/* initialization of the runtime status of indicator fuel_temp_left_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_fuel_temp_left_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_left_raw_fb,
	/* x                */ 1087,
	/* y                */ 375,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_left_raw_fb */

/* ROM configuration of indicator fuel_temp_right_raw_fb */
static const char FAR ind_screen_multiscreen_0_fuel_temp_right_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_fuel_temp_right_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_fuel_temp_right_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_fuel_temp_right_raw_fb */

/* initialization of the runtime status of indicator fuel_temp_right_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_fuel_temp_right_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_fuel_temp_right_raw_fb,
	/* x                */ 1087,
	/* y                */ 505,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_fuel_temp_right_raw_fb */

/* ROM configuration of indicator hydraulic_tank_temp_raw_fb */
static const char FAR ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb__init_separator[] = ".";
static const vt3_indicator_ROM_Number FAR __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb = {
	/* virtual method table */ &vt3_indicator_VMT_Number,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb,
	/* width            */ 50,
	/* height           */ 21,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_RIGHT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* font             */ vt3_font_ArialBold16,
	/* separator        */ ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb__init_separator,
	/* digits_unused    */ 0,
	/* decimals         */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* proportional     */ 0,
}; /* __ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb */

/* initialization of the runtime status of indicator hydraulic_tank_temp_raw_fb */
static const vt3_indicator_Number FAR __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb,
	/* x                */ 1087,
	/* y                */ 635,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ 123,
	/* prevValue        */ 0,
	/* lenght           */ 0,
	/* timeout          */ 0,
	/* maxWidth         */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb */


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator alarm_icon_service_tank_1: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_0_alarm_icon_service_tank_1_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__6_28A_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			27, 30 }, 
}; /* ind_screen_multiscreen_0_alarm_icon_service_tank_1_bitmap[] */

/* ROM configuration of indicator alarm_icon_service_tank_1 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_0_alarm_icon_service_tank_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_alarm_icon_service_tank_1,
	/* width            */ 27,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_0_alarm_icon_service_tank_1_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_0_alarm_icon_service_tank_1 */

/* initialization of the runtime status of indicator alarm_icon_service_tank_1 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_0_alarm_icon_service_tank_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_alarm_icon_service_tank_1,
	/* x                */ 366,
	/* y                */ 121,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_alarm_icon_service_tank_1 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator insufficient_pressure_service_tank_1: array text */
static const UINT16 FAR ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_text[2] = {
	IDS_TEXT_NMSGUI_10,
	IDS_TEXT_NMSGUI_10,
}; /* ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_text[] */

/* status of indicator insufficient_pressure_service_tank_1: array font */
static const vt3_font FARPTR const ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_font[2] = {
	vt3_font_ArialBold13, 
	vt3_font_ArialBold13, 
}; /* ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_font[] */

/* status of indicator insufficient_pressure_service_tank_1: array color */
static const vt3_color FAR ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_color[2] = {
	VT3_COLOR_NOTHING, 
	{ 255, 255, 255, 255 }, 
}; /* ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_color[] */

/* ROM configuration of indicator insufficient_pressure_service_tank_1 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_1 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_insufficient_pressure_service_tank_1,
	/* width            */ 100,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_text,
	/* font             */ ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_font,
	/* color            */ ind_screen_multiscreen_0_insufficient_pressure_service_tank_1_color,
}; /* __ROM_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_1 */

/* initialization of the runtime status of indicator insufficient_pressure_service_tank_1 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_1,
	/* x                */ 393,
	/* y                */ 121,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_1 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator alarm_icon_service_tank_2: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_0_alarm_icon_service_tank_2_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__6_28A_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			27, 30 }, 
}; /* ind_screen_multiscreen_0_alarm_icon_service_tank_2_bitmap[] */

/* ROM configuration of indicator alarm_icon_service_tank_2 */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_0_alarm_icon_service_tank_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_alarm_icon_service_tank_2,
	/* width            */ 27,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_0_alarm_icon_service_tank_2_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_0_alarm_icon_service_tank_2 */

/* initialization of the runtime status of indicator alarm_icon_service_tank_2 */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_0_alarm_icon_service_tank_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_alarm_icon_service_tank_2,
	/* x                */ 366,
	/* y                */ 253,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_alarm_icon_service_tank_2 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator insufficient_pressure_service_tank_2: array text */
static const UINT16 FAR ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_text[2] = {
	IDS_TEXT_NMSGUI_10,
	IDS_TEXT_NMSGUI_10,
}; /* ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_text[] */

/* status of indicator insufficient_pressure_service_tank_2: array font */
static const vt3_font FARPTR const ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_font[2] = {
	vt3_font_ArialBold13, 
	vt3_font_ArialBold13, 
}; /* ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_font[] */

/* status of indicator insufficient_pressure_service_tank_2: array color */
static const vt3_color FAR ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_color[2] = {
	VT3_COLOR_NOTHING, 
	{ 255, 255, 255, 255 }, 
}; /* ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_color[] */

/* ROM configuration of indicator insufficient_pressure_service_tank_2 */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_2 = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_insufficient_pressure_service_tank_2,
	/* width            */ 100,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_text,
	/* font             */ ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_font,
	/* color            */ ind_screen_multiscreen_0_insufficient_pressure_service_tank_2_color,
}; /* __ROM_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_2 */

/* initialization of the runtime status of indicator insufficient_pressure_service_tank_2 */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_2,
	/* x                */ 393,
	/* y                */ 259,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_2 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator alarm_icon_park_tank: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_0_alarm_icon_park_tank_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__6_28A_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			27, 30 }, 
}; /* ind_screen_multiscreen_0_alarm_icon_park_tank_bitmap[] */

/* ROM configuration of indicator alarm_icon_park_tank */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_0_alarm_icon_park_tank = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_alarm_icon_park_tank,
	/* width            */ 27,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_0_alarm_icon_park_tank_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_0_alarm_icon_park_tank */

/* initialization of the runtime status of indicator alarm_icon_park_tank */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_0_alarm_icon_park_tank = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_alarm_icon_park_tank,
	/* x                */ 366,
	/* y                */ 381,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_alarm_icon_park_tank */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator insufficient_pressure_park_tank: array text */
static const UINT16 FAR ind_screen_multiscreen_0_insufficient_pressure_park_tank_text[2] = {
	IDS_TEXT_NMSGUI_10,
	IDS_TEXT_NMSGUI_10,
}; /* ind_screen_multiscreen_0_insufficient_pressure_park_tank_text[] */

/* status of indicator insufficient_pressure_park_tank: array font */
static const vt3_font FARPTR const ind_screen_multiscreen_0_insufficient_pressure_park_tank_font[2] = {
	vt3_font_ArialBold13, 
	vt3_font_ArialBold13, 
}; /* ind_screen_multiscreen_0_insufficient_pressure_park_tank_font[] */

/* status of indicator insufficient_pressure_park_tank: array color */
static const vt3_color FAR ind_screen_multiscreen_0_insufficient_pressure_park_tank_color[2] = {
	VT3_COLOR_NOTHING, 
	{ 255, 255, 255, 255 }, 
}; /* ind_screen_multiscreen_0_insufficient_pressure_park_tank_color[] */

/* ROM configuration of indicator insufficient_pressure_park_tank */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_multiscreen_0_insufficient_pressure_park_tank = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_insufficient_pressure_park_tank,
	/* width            */ 100,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_multiscreen_0_insufficient_pressure_park_tank_text,
	/* font             */ ind_screen_multiscreen_0_insufficient_pressure_park_tank_font,
	/* color            */ ind_screen_multiscreen_0_insufficient_pressure_park_tank_color,
}; /* __ROM_value__ind_screen_multiscreen_0_insufficient_pressure_park_tank */

/* initialization of the runtime status of indicator insufficient_pressure_park_tank */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_multiscreen_0_insufficient_pressure_park_tank = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_insufficient_pressure_park_tank,
	/* x                */ 393,
	/* y                */ 381,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_insufficient_pressure_park_tank */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator alarm_icon_accessory_tank: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_0_alarm_icon_accessory_tank_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__6_28A_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			27, 30 }, 
}; /* ind_screen_multiscreen_0_alarm_icon_accessory_tank_bitmap[] */

/* ROM configuration of indicator alarm_icon_accessory_tank */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_0_alarm_icon_accessory_tank = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_alarm_icon_accessory_tank,
	/* width            */ 27,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_0_alarm_icon_accessory_tank_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_0_alarm_icon_accessory_tank */

/* initialization of the runtime status of indicator alarm_icon_accessory_tank */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_0_alarm_icon_accessory_tank = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_alarm_icon_accessory_tank,
	/* x                */ 366,
	/* y                */ 511,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_alarm_icon_accessory_tank */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator insufficient_pressure_accessory_tank: array text */
static const UINT16 FAR ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_text[2] = {
	IDS_TEXT_NMSGUI_10,
	IDS_TEXT_NMSGUI_10,
}; /* ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_text[] */

/* status of indicator insufficient_pressure_accessory_tank: array font */
static const vt3_font FARPTR const ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_font[2] = {
	vt3_font_ArialBold13, 
	vt3_font_ArialBold13, 
}; /* ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_font[] */

/* status of indicator insufficient_pressure_accessory_tank: array color */
static const vt3_color FAR ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_color[2] = {
	VT3_COLOR_NOTHING, 
	{ 255, 255, 255, 255 }, 
}; /* ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_color[] */

/* ROM configuration of indicator insufficient_pressure_accessory_tank */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_multiscreen_0_insufficient_pressure_accessory_tank = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_multiscreen_0_insufficient_pressure_accessory_tank,
	/* width            */ 100,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_text,
	/* font             */ ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_font,
	/* color            */ ind_screen_multiscreen_0_insufficient_pressure_accessory_tank_color,
}; /* __ROM_value__ind_screen_multiscreen_0_insufficient_pressure_accessory_tank */

/* initialization of the runtime status of indicator insufficient_pressure_accessory_tank */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_multiscreen_0_insufficient_pressure_accessory_tank = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_0_insufficient_pressure_accessory_tank,
	/* x                */ 393,
	/* y                */ 511,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_0_insufficient_pressure_accessory_tank */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator 1 */
static const vt3_indicator_ROM_SubScreenPage FAR __ROM_value__ind_screen_multiscreen_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreenPage,
}; /* __ROM_value__ind_screen_multiscreen_1 */

/* initialization of the runtime status of indicator 1 */
static const vt3_indicator_SubScreenPage FAR __init_value__ind_screen_multiscreen_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_1,
}; /* __init_value__ind_screen_multiscreen_1 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator multiscreen_3: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_3_bitmap[2] = {
	{ VT3IMG_BITMAP, vt3_BMP__10_DifflockdropboxBg_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			1280, 720 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_screen_multiscreen_3_bitmap[] */

/* ROM configuration of indicator multiscreen_3 */
static const vt3_indicator_ROM_SubScreen FAR __ROM_value__ind_screen_multiscreen_3 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreen,
	/* event code       */ vt3_event_ind_screen_multiscreen_3,
	/* width            */ 1280,
	/* height           */ 720,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_3_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_3 */

/* initialization of the runtime status of indicator multiscreen_3 */
static const vt3_indicator_SubScreen FAR __init_value__ind_screen_multiscreen_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3,
	/* x                */ 0,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator 0 */
static const vt3_indicator_ROM_SubScreenPage FAR __ROM_value__ind_screen_multiscreen_3_0 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreenPage,
}; /* __ROM_value__ind_screen_multiscreen_3_0 */

/* initialization of the runtime status of indicator 0 */
static const vt3_indicator_SubScreenPage FAR __init_value__ind_screen_multiscreen_3_0 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0,
}; /* __init_value__ind_screen_multiscreen_3_0 */


#pragma GCC diagnostic pop

/* ROM configuration of indicator dropbox_H_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_3_0_dropbox_H_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 80,
	/* height           */ 80,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__3_DropboxHigh_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bitmap_disabled  */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__3_DropboxHigh_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__2_DropboxHighWhite_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_3_0_dropbox_H_touch */

/* initialization of the runtime status of indicator dropbox_H_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_3_0_dropbox_H_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_dropbox_H_touch,
	/* x                */ 395,
	/* y                */ 225,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_3_0_dropbox_H_touch */

/* ROM configuration of indicator dropbox_N_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_3_0_dropbox_N_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 80,
	/* height           */ 80,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__5_DropboxNeutral_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bitmap_disabled  */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__5_DropboxNeutral_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__14_DropboxNeutralWhite_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_3_0_dropbox_N_touch */

/* initialization of the runtime status of indicator dropbox_N_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_3_0_dropbox_N_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_dropbox_N_touch,
	/* x                */ 396,
	/* y                */ 338,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_3_0_dropbox_N_touch */

/* ROM configuration of indicator dropbox_L_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_3_0_dropbox_L_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 80,
	/* height           */ 80,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__13_DropboxLow_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bitmap_disabled  */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__13_DropboxLow_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__1_DropboxLowWhite_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_3_0_dropbox_L_touch */

/* initialization of the runtime status of indicator dropbox_L_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_3_0_dropbox_L_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_dropbox_L_touch,
	/* x                */ 398,
	/* y                */ 470,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_3_0_dropbox_L_touch */

/* ROM configuration of indicator dropbox_admin_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_3_0_dropbox_admin_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_3_0_dropbox_admin_touch */

/* initialization of the runtime status of indicator dropbox_admin_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_3_0_dropbox_admin_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_dropbox_admin_touch,
	/* x                */ 266,
	/* y                */ 186,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_3_0_dropbox_admin_touch */

/* ROM configuration of indicator diff_admin_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_3_0_diff_admin_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 40,
	/* height           */ 40,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__7_AdminOff_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__0_AdminOn_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			40, 40 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_3_0_diff_admin_touch */

/* initialization of the runtime status of indicator diff_admin_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_3_0_diff_admin_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_diff_admin_touch,
	/* x                */ 775,
	/* y                */ 186,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_3_0_diff_admin_touch */

/* ROM configuration of indicator difflock_mid_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_mid_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 100,
	/* height           */ 93,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__17_1EyiiiDifflockBos1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bitmap_disabled  */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__17_1EyiiiDifflockBos1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__9_1EyiiiDifflockOrta1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_mid_touch */

/* initialization of the runtime status of indicator difflock_mid_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_3_0_difflock_mid_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_mid_touch,
	/* x                */ 897,
	/* y                */ 225,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_mid_touch */

/* ROM configuration of indicator difflock_rear_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_rear_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 100,
	/* height           */ 93,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__17_1EyiiiDifflockBos1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bitmap_disabled  */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__17_1EyiiiDifflockBos1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__18_1EyiiiDifflockOrtaArka1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_rear_touch */

/* initialization of the runtime status of indicator difflock_rear_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_3_0_difflock_rear_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_rear_touch,
	/* x                */ 897,
	/* y                */ 341,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_rear_touch */

/* ROM configuration of indicator difflock_front_touch */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_front_touch = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 100,
	/* height           */ 93,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ { 255, 128, 128, 128 },
	/* color_pressed    */ { 255, 0, 0, 0 },
	/* bitmap_enabled   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__17_1EyiiiDifflockBos1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bitmap_disabled  */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__17_1EyiiiDifflockBos1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP_ALPHA, vt3_BMP__19_1EyiiiDifflockHepsi1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_front_touch */

/* initialization of the runtime status of indicator difflock_front_touch */
static const vt3_indicator_Touch FAR __init_value__ind_screen_multiscreen_3_0_difflock_front_touch = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_front_touch,
	/* x                */ 897,
	/* y                */ 457,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_front_touch */


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator difflock_mid_fb: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_3_0_difflock_mid_fb_bitmap[2] = {
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__17_1EyiiiDifflockBos1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__9_1EyiiiDifflockOrta1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 }, 
}; /* ind_screen_multiscreen_3_0_difflock_mid_fb_bitmap[] */

/* ROM configuration of indicator difflock_mid_fb */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_mid_fb = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_difflock_mid_fb,
	/* width            */ 100,
	/* height           */ 93,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_3_0_difflock_mid_fb_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_mid_fb */

/* initialization of the runtime status of indicator difflock_mid_fb */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_3_0_difflock_mid_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_mid_fb,
	/* x                */ 1037,
	/* y                */ 225,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_mid_fb */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator difflock_rear_fb: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_3_0_difflock_rear_fb_bitmap[2] = {
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__9_1EyiiiDifflockOrta1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__18_1EyiiiDifflockOrtaArka1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 }, 
}; /* ind_screen_multiscreen_3_0_difflock_rear_fb_bitmap[] */

/* ROM configuration of indicator difflock_rear_fb */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_rear_fb = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_difflock_rear_fb,
	/* width            */ 100,
	/* height           */ 93,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_3_0_difflock_rear_fb_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_rear_fb */

/* initialization of the runtime status of indicator difflock_rear_fb */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_3_0_difflock_rear_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_rear_fb,
	/* x                */ 1037,
	/* y                */ 341,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_rear_fb */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator difflock_front_fb: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_3_0_difflock_front_fb_bitmap[2] = {
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__18_1EyiiiDifflockOrtaArka1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__19_1EyiiiDifflockHepsi1_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			100, 93 }, 
}; /* ind_screen_multiscreen_3_0_difflock_front_fb_bitmap[] */

/* ROM configuration of indicator difflock_front_fb */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_front_fb = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_difflock_front_fb,
	/* width            */ 100,
	/* height           */ 93,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_3_0_difflock_front_fb_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_front_fb */

/* initialization of the runtime status of indicator difflock_front_fb */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_3_0_difflock_front_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_front_fb,
	/* x                */ 1037,
	/* y                */ 457,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_front_fb */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator dropbox_H_fb: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_3_0_dropbox_H_fb_bitmap[2] = {
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__3_DropboxHigh_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__2_DropboxHighWhite_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 }, 
}; /* ind_screen_multiscreen_3_0_dropbox_H_fb_bitmap[] */

/* ROM configuration of indicator dropbox_H_fb */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_3_0_dropbox_H_fb = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_dropbox_H_fb,
	/* width            */ 80,
	/* height           */ 80,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_3_0_dropbox_H_fb_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_3_0_dropbox_H_fb */

/* initialization of the runtime status of indicator dropbox_H_fb */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_3_0_dropbox_H_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_dropbox_H_fb,
	/* x                */ 535,
	/* y                */ 225,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_dropbox_H_fb */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator dropbox_N_fb: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_3_0_dropbox_N_fb_bitmap[2] = {
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__5_DropboxNeutral_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__14_DropboxNeutralWhite_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 }, 
}; /* ind_screen_multiscreen_3_0_dropbox_N_fb_bitmap[] */

/* ROM configuration of indicator dropbox_N_fb */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_3_0_dropbox_N_fb = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_dropbox_N_fb,
	/* width            */ 80,
	/* height           */ 80,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_3_0_dropbox_N_fb_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_3_0_dropbox_N_fb */

/* initialization of the runtime status of indicator dropbox_N_fb */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_3_0_dropbox_N_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_dropbox_N_fb,
	/* x                */ 535,
	/* y                */ 338,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_dropbox_N_fb */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator dropbox_L_fb: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_3_0_dropbox_L_fb_bitmap[2] = {
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__13_DropboxLow_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__1_DropboxLowWhite_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			80, 80 }, 
}; /* ind_screen_multiscreen_3_0_dropbox_L_fb_bitmap[] */

/* ROM configuration of indicator dropbox_L_fb */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_3_0_dropbox_L_fb = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_dropbox_L_fb,
	/* width            */ 80,
	/* height           */ 80,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_3_0_dropbox_L_fb_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_3_0_dropbox_L_fb */

/* initialization of the runtime status of indicator dropbox_L_fb */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_3_0_dropbox_L_fb = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_dropbox_L_fb,
	/* x                */ 535,
	/* y                */ 470,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_dropbox_L_fb */


#pragma GCC diagnostic pop

/* ROM configuration of indicator dropbox */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_3_0_dropbox = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_dropbox,
	/* width            */ 100,
	/* height           */ 23,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_3_0_dropbox */

/* initialization of the runtime status of indicator dropbox */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_3_0_dropbox = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_dropbox,
	/* x                */ 261,
	/* y                */ 120,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_dropbox */

/* ROM configuration of indicator diff_lock */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_3_0_diff_lock = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_diff_lock,
	/* width            */ 100,
	/* height           */ 23,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold18,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_3_0_diff_lock */

/* initialization of the runtime status of indicator diff_lock */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_3_0_diff_lock = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_diff_lock,
	/* x                */ 770,
	/* y                */ 120,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_diff_lock */


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator alarm_icon_accessory_tank: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_3_0_alarm_icon_accessory_tank_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__6_28A_0_0, 
			{ 255, 0, 0, 0 }, VT3_COLOR_TRANSPARENT, 
			27, 30 }, 
}; /* ind_screen_multiscreen_3_0_alarm_icon_accessory_tank_bitmap[] */

/* ROM configuration of indicator alarm_icon_accessory_tank */
static const vt3_indicator_ROM_MultiBitmap FAR __ROM_value__ind_screen_multiscreen_3_0_alarm_icon_accessory_tank = {
	/* virtual method table */ &vt3_indicator_VMT_MultiBitmap,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_alarm_icon_accessory_tank,
	/* width            */ 27,
	/* height           */ 30,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_3_0_alarm_icon_accessory_tank_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_3_0_alarm_icon_accessory_tank */

/* initialization of the runtime status of indicator alarm_icon_accessory_tank */
static const vt3_indicator_MultiBitmap FAR __init_value__ind_screen_multiscreen_3_0_alarm_icon_accessory_tank = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_alarm_icon_accessory_tank,
	/* x                */ 258,
	/* y                */ 363,
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_alarm_icon_accessory_tank */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator insufficient_pressure_accessory_tank: array text */
static const UINT16 FAR ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_text[2] = {
	IDS_TEXT_NMSGUI_10,
	IDS_TEXT_NMSGUI_10,
}; /* ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_text[] */

/* status of indicator insufficient_pressure_accessory_tank: array font */
static const vt3_font FARPTR const ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_font[2] = {
	vt3_font_ArialBold13, 
	vt3_font_ArialBold13, 
}; /* ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_font[] */

/* status of indicator insufficient_pressure_accessory_tank: array color */
static const vt3_color FAR ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_color[2] = {
	VT3_COLOR_NOTHING, 
	{ 255, 255, 255, 255 }, 
}; /* ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_color[] */

/* ROM configuration of indicator insufficient_pressure_accessory_tank */
static const vt3_indicator_ROM_MultiText FAR __ROM_value__ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank = {
	/* virtual method table */ &vt3_indicator_VMT_MultiText,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank,
	/* width            */ 100,
	/* height           */ 20,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_CENTRE,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* text             */ ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_text,
	/* font             */ ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_font,
	/* color            */ ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank_color,
}; /* __ROM_value__ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank */

/* initialization of the runtime status of indicator insufficient_pressure_accessory_tank */
static const vt3_indicator_MultiText FAR __init_value__ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank,
	/* x                */ 289,
	/* y                */ 363,
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* timeout          */ 0,
	/* currentValue     */ 0,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank */


#pragma GCC diagnostic pop

/* ROM configuration of indicator difflock_mid_txt */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_mid_txt = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_difflock_mid_txt,
	/* width            */ 100,
	/* height           */ 23,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold20,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_mid_txt */

/* initialization of the runtime status of indicator difflock_mid_txt */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_3_0_difflock_mid_txt = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_mid_txt,
	/* x                */ 764,
	/* y                */ 254,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_mid_txt */

/* ROM configuration of indicator difflock_rear_txt */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_rear_txt = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_difflock_rear_txt,
	/* width            */ 100,
	/* height           */ 23,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold20,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_rear_txt */

/* initialization of the runtime status of indicator difflock_rear_txt */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_3_0_difflock_rear_txt = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_rear_txt,
	/* x                */ 764,
	/* y                */ 370,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_rear_txt */

/* ROM configuration of indicator difflock_front_txt */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_multiscreen_3_0_difflock_front_txt = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_multiscreen_3_0_difflock_front_txt,
	/* width            */ 100,
	/* height           */ 23,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_LEFT,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialBold20,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_multiscreen_3_0_difflock_front_txt */

/* initialization of the runtime status of indicator difflock_front_txt */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_multiscreen_3_0_difflock_front_txt = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_0_difflock_front_txt,
	/* x                */ 764,
	/* y                */ 486,
	/* color            */ { 255, 255, 255, 255 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_3_0_difflock_front_txt */


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator 1 */
static const vt3_indicator_ROM_SubScreenPage FAR __ROM_value__ind_screen_multiscreen_3_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreenPage,
}; /* __ROM_value__ind_screen_multiscreen_3_1 */

/* initialization of the runtime status of indicator 1 */
static const vt3_indicator_SubScreenPage FAR __init_value__ind_screen_multiscreen_3_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_3_1,
}; /* __init_value__ind_screen_multiscreen_3_1 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator multiscreen_4: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_4_bitmap[2] = {
	{ VT3IMG_COLOR, (ICONPTR)NULL, { 255, 128, 128, 128 }, { 0, 0, 0, 0 }, 0, 0 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_screen_multiscreen_4_bitmap[] */

/* ROM configuration of indicator multiscreen_4 */
static const vt3_indicator_ROM_SubScreen FAR __ROM_value__ind_screen_multiscreen_4 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreen,
	/* event code       */ vt3_event_ind_screen_multiscreen_4,
	/* width            */ 1280,
	/* height           */ 720,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_4_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_4 */

/* initialization of the runtime status of indicator multiscreen_4 */
static const vt3_indicator_SubScreen FAR __init_value__ind_screen_multiscreen_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_4,
	/* x                */ 0,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_4 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator 0 */
static const vt3_indicator_ROM_SubScreenPage FAR __ROM_value__ind_screen_multiscreen_4_0 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreenPage,
}; /* __ROM_value__ind_screen_multiscreen_4_0 */

/* initialization of the runtime status of indicator 0 */
static const vt3_indicator_SubScreenPage FAR __init_value__ind_screen_multiscreen_4_0 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_4_0,
}; /* __init_value__ind_screen_multiscreen_4_0 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator 1 */
static const vt3_indicator_ROM_SubScreenPage FAR __ROM_value__ind_screen_multiscreen_4_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreenPage,
}; /* __ROM_value__ind_screen_multiscreen_4_1 */

/* initialization of the runtime status of indicator 1 */
static const vt3_indicator_SubScreenPage FAR __init_value__ind_screen_multiscreen_4_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_4_1,
}; /* __init_value__ind_screen_multiscreen_4_1 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* status of indicator multiscreen_2: array bitmap */
static const vt3_image FAR ind_screen_multiscreen_2_bitmap[2] = {
	{ VT3IMG_BITMAP_ALPHA, vt3_BMP__4_Nurollogo_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			250, 150 }, 
	{ VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 }, 
}; /* ind_screen_multiscreen_2_bitmap[] */

/* ROM configuration of indicator multiscreen_2 */
static const vt3_indicator_ROM_SubScreen FAR __ROM_value__ind_screen_multiscreen_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreen,
	/* event code       */ vt3_event_ind_screen_multiscreen_2,
	/* width            */ 1280,
	/* height           */ 720,
	/* layer            */ 0,
	/* timer            */ 100 / VT3_TASK_PERIOD_DISPLAY,
	/* count            */ 2,
	/* bitmap           */ ind_screen_multiscreen_2_bitmap,
}; /* __ROM_value__ind_screen_multiscreen_2 */

/* initialization of the runtime status of indicator multiscreen_2 */
static const vt3_indicator_SubScreen FAR __init_value__ind_screen_multiscreen_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_2,
	/* x                */ 0,
	/* y                */ 0,
	/* timeout          */ 0,
	/* currentValue     */ 1,
	/* prevValue        */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_multiscreen_2 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator 0 */
static const vt3_indicator_ROM_SubScreenPage FAR __ROM_value__ind_screen_multiscreen_2_0 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreenPage,
}; /* __ROM_value__ind_screen_multiscreen_2_0 */

/* initialization of the runtime status of indicator 0 */
static const vt3_indicator_SubScreenPage FAR __init_value__ind_screen_multiscreen_2_0 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_2_0,
}; /* __init_value__ind_screen_multiscreen_2_0 */


#pragma GCC diagnostic pop


/* suppress warning for uninitialized structure fields */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

/* ROM configuration of indicator 1 */
static const vt3_indicator_ROM_SubScreenPage FAR __ROM_value__ind_screen_multiscreen_2_1 = {
	/* virtual method table */ &vt3_indicator_VMT_SubScreenPage,
}; /* __ROM_value__ind_screen_multiscreen_2_1 */

/* initialization of the runtime status of indicator 1 */
static const vt3_indicator_SubScreenPage FAR __init_value__ind_screen_multiscreen_2_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_multiscreen_2_1,
}; /* __init_value__ind_screen_multiscreen_2_1 */


#pragma GCC diagnostic pop

/* ROM configuration of indicator degis */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_degis = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 152,
	/* height           */ 48,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ VT3_COLOR_TRANSPARENT,
	/* color_pressed    */ VT3_COLOR_TRANSPARENT,
	/* bitmap_enabled   */ { VT3IMG_BITMAP, vt3_BMP__12_Button2Available_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			150, 50 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP, vt3_BMP__15_Button2Unavailable_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			150, 50 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_degis */

/* initialization of the runtime status of indicator degis */
static const vt3_indicator_Touch FAR __init_value__ind_screen_degis = {
	/* ROM parameters   */ &__ROM_value__ind_screen_degis,
	/* x                */ 0,
	/* y                */ 0,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ TRUE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_degis */

/* ROM configuration of indicator degis_3 */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_degis_3 = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 152,
	/* height           */ 48,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ VT3_COLOR_TRANSPARENT,
	/* color_pressed    */ VT3_COLOR_TRANSPARENT,
	/* bitmap_enabled   */ { VT3IMG_BITMAP, vt3_BMP__12_Button2Available_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			150, 50 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP, vt3_BMP__15_Button2Unavailable_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			150, 50 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_degis_3 */

/* initialization of the runtime status of indicator degis_3 */
static const vt3_indicator_Touch FAR __init_value__ind_screen_degis_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_degis_3,
	/* x                */ 0,
	/* y                */ 96,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ FALSE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_degis_3 */

/* ROM configuration of indicator degis_2 */
static const vt3_indicator_ROM_Touch FAR __ROM_value__ind_screen_degis_2 = {
	/* virtual method table */ &vt3_indicator_VMT_Touch,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_Touch FARPTR)) NULL,
	/* width            */ 152,
	/* height           */ 48,
	/* font             */ (const vt3_font FARPTR) NULL, 
	/* color_enabled    */ { 255, 0, 0, 0 },
	/* color_disabled   */ VT3_COLOR_TRANSPARENT,
	/* color_pressed    */ VT3_COLOR_TRANSPARENT,
	/* bitmap_enabled   */ { VT3IMG_BITMAP, vt3_BMP__12_Button2Available_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			150, 50 },
	/* bitmap_disabled  */ { VT3IMG_COLOR, (ICONPTR)NULL, VT3_COLOR_NOTHING, { 0, 0, 0, 0 }, 0, 0 },
	/* bitmap_pressed   */ { VT3IMG_BITMAP, vt3_BMP__15_Button2Unavailable_0_0, 
			{ 255, 0, 0, 0 }, { 255, 0, 0, 0 }, 
			150, 50 },
	/* bistable         */ 1,
	/* radio            */ (vt3_indicator_Touch FARPTR const FARPTR) NULL,
}; /* __ROM_value__ind_screen_degis_2 */

/* initialization of the runtime status of indicator degis_2 */
static const vt3_indicator_Touch FAR __init_value__ind_screen_degis_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_degis_2,
	/* x                */ 0,
	/* y                */ 48,
	/* xTouch           */ -1,
	/* yTouch           */ -1,
	/* eventDown        */ FALSE,
	/* eventUp          */ FALSE,
	/* pressedTime      */ 0,
	/* label            */ (PSTRING) NULL,
	/* enabled          */ TRUE,
	/* pressed          */ FALSE,
	/* redrawState      */ FALSE, // not used under TERA
}; /* __init_value__ind_screen_degis_2 */

/* ROM configuration of indicator simple_text */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_simple_text = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_simple_text,
	/* width            */ 138,
	/* height           */ 23,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialRegular20,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_simple_text */

/* initialization of the runtime status of indicator simple_text */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_simple_text = {
	/* ROM parameters   */ &__ROM_value__ind_screen_simple_text,
	/* x                */ 6,
	/* y                */ 14,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_simple_text */

/* ROM configuration of indicator simple_text_2 */
static const vt3_indicator_ROM_SimpleText FAR __ROM_value__ind_screen_simple_text_2 = {
	/* virtual method table */ &vt3_indicator_VMT_SimpleText,
	/* event code       */ vt3_event_ind_screen_simple_text_2,
	/* width            */ 138,
	/* height           */ 23,
	/* layer            */ 0,
	/* halign           */ VT3_ALIGN_CENTRE,
	/* valign           */ VT3_ALIGN_TOP,
	/* font             */ vt3_font_ArialRegular20,
	/* timer            */ 200 / VT3_TASK_PERIOD_DISPLAY,
}; /* __ROM_value__ind_screen_simple_text_2 */

/* initialization of the runtime status of indicator simple_text_2 */
static const vt3_indicator_SimpleText FAR __init_value__ind_screen_simple_text_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_simple_text_2,
	/* x                */ 6,
	/* y                */ 61,
	/* color            */ { 255, 0, 0, 0 },
	/* color_old        */ { 255, 0, 0, 0 },
	/* background       */ VT3_COLOR_TRANSPARENT,
	/* bg_old           */ { 255, 255, 255, 255 },
	/* currentValue     */ (PSTRING) NULL,
	/* oldValue         */ (const char FARPTR) NULL,
	/* timeout          */ 0,
	/* invalid          */ 0,
	/* changed          */ 0,
}; /* __init_value__ind_screen_simple_text_2 */


/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen[] = {
	{ &vt3_screen_union.screen._background, &__init_value__ind_screen, sizeof(vt3_indicator_ScreenModel) },
	{ &vt3_screen_union.screen.multiscreen, &__init_value__ind_screen_multiscreen, sizeof(vt3_indicator_SubScreen) },
	{ &vt3_screen_union.screen.multiscreen_0, &__init_value__ind_screen_multiscreen_0, sizeof(vt3_indicator_SubScreenPage) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_fb, &__init_value__ind_screen_multiscreen_0_service_brake_tank_1_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_fb, &__init_value__ind_screen_multiscreen_0_service_brake_tank_2_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_park_brake_tank_fb, &__init_value__ind_screen_multiscreen_0_park_brake_tank_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_accessory_tank_fb, &__init_value__ind_screen_multiscreen_0_accessory_tank_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_fb, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_left_fb, &__init_value__ind_screen_multiscreen_0_fuel_level_left_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_right_fb, &__init_value__ind_screen_multiscreen_0_fuel_level_right_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_fb, &__init_value__ind_screen_multiscreen_0_fuel_temp_left_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_fb, &__init_value__ind_screen_multiscreen_0_fuel_temp_right_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_fb, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, &__init_value__ind_screen_multiscreen_0_service_brake_tank_1_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, &__init_value__ind_screen_multiscreen_0_service_brake_tank_2_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, &__init_value__ind_screen_multiscreen_0_park_brake_tank_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_accessory_tank_input, &__init_value__ind_screen_multiscreen_0_accessory_tank_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, &__init_value__ind_screen_multiscreen_0_fuel_level_left_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, &__init_value__ind_screen_multiscreen_0_fuel_level_right_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, &__init_value__ind_screen_multiscreen_0_fuel_temp_left_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, &__init_value__ind_screen_multiscreen_0_fuel_temp_right_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_input, sizeof(vt3_indicator_NumberEditable) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1, &__init_value__ind_screen_multiscreen_0_service_brake_tank_1, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2, &__init_value__ind_screen_multiscreen_0_service_brake_tank_2, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_park_brake_tank, &__init_value__ind_screen_multiscreen_0_park_brake_tank, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_accessory_tank, &__init_value__ind_screen_multiscreen_0_accessory_tank, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_left, &__init_value__ind_screen_multiscreen_0_fuel_level_left, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_right, &__init_value__ind_screen_multiscreen_0_fuel_level_right, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_left, &__init_value__ind_screen_multiscreen_0_fuel_temp_left, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_right, &__init_value__ind_screen_multiscreen_0_fuel_temp_right, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_temp, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_touch, &__init_value__ind_screen_multiscreen_0_service_brake_tank_1_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_touch, &__init_value__ind_screen_multiscreen_0_service_brake_tank_2_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_park_brake_tank_touch, &__init_value__ind_screen_multiscreen_0_park_brake_tank_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_accessory_tank_touch, &__init_value__ind_screen_multiscreen_0_accessory_tank_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_touch, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_left_touch, &__init_value__ind_screen_multiscreen_0_fuel_level_left_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_right_touch, &__init_value__ind_screen_multiscreen_0_fuel_level_right_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_touch, &__init_value__ind_screen_multiscreen_0_fuel_temp_left_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_touch, &__init_value__ind_screen_multiscreen_0_fuel_temp_right_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_touch, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send, &__init_value__ind_screen_multiscreen_0_service_brake_tank_1_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send, &__init_value__ind_screen_multiscreen_0_service_brake_tank_2_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_park_brake_tank_send, &__init_value__ind_screen_multiscreen_0_park_brake_tank_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_accessory_tank_send, &__init_value__ind_screen_multiscreen_0_accessory_tank_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_left_send, &__init_value__ind_screen_multiscreen_0_fuel_level_left_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_right_send, &__init_value__ind_screen_multiscreen_0_fuel_level_right_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send, &__init_value__ind_screen_multiscreen_0_fuel_temp_right_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send, &__init_value__ind_screen_multiscreen_0_fuel_temp_left_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_send, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_0_service_break_tank_1_raw_fb, &__init_value__ind_screen_multiscreen_0_service_break_tank_1_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_service_break_tank_2_raw_fb, &__init_value__ind_screen_multiscreen_0_service_break_tank_2_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_park_break_tank_raw_fb, &__init_value__ind_screen_multiscreen_0_park_break_tank_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_accessory_tank_raw_fb, &__init_value__ind_screen_multiscreen_0_accessory_tank_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_raw_fb, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_left_raw_fb, &__init_value__ind_screen_multiscreen_0_fuel_level_left_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_level_right_raw_fb, &__init_value__ind_screen_multiscreen_0_fuel_level_right_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_raw_fb, &__init_value__ind_screen_multiscreen_0_fuel_temp_left_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_raw_fb, &__init_value__ind_screen_multiscreen_0_fuel_temp_right_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_raw_fb, &__init_value__ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb, sizeof(vt3_indicator_Number) },
	{ &vt3_screen_union.screen.multiscreen_0_alarm_icon_service_tank_1, &__init_value__ind_screen_multiscreen_0_alarm_icon_service_tank_1, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_0_insufficient_pressure_service_tank_1, &__init_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_1, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen.multiscreen_0_alarm_icon_service_tank_2, &__init_value__ind_screen_multiscreen_0_alarm_icon_service_tank_2, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_0_insufficient_pressure_service_tank_2, &__init_value__ind_screen_multiscreen_0_insufficient_pressure_service_tank_2, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen.multiscreen_0_alarm_icon_park_tank, &__init_value__ind_screen_multiscreen_0_alarm_icon_park_tank, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_0_insufficient_pressure_park_tank, &__init_value__ind_screen_multiscreen_0_insufficient_pressure_park_tank, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen.multiscreen_0_alarm_icon_accessory_tank, &__init_value__ind_screen_multiscreen_0_alarm_icon_accessory_tank, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_0_insufficient_pressure_accessory_tank, &__init_value__ind_screen_multiscreen_0_insufficient_pressure_accessory_tank, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen.multiscreen_1, &__init_value__ind_screen_multiscreen_1, sizeof(vt3_indicator_SubScreenPage) },
	{ &vt3_screen_union.screen.multiscreen_3, &__init_value__ind_screen_multiscreen_3, sizeof(vt3_indicator_SubScreen) },
	{ &vt3_screen_union.screen.multiscreen_3_0, &__init_value__ind_screen_multiscreen_3_0, sizeof(vt3_indicator_SubScreenPage) },
	{ &vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch, &__init_value__ind_screen_multiscreen_3_0_dropbox_H_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch, &__init_value__ind_screen_multiscreen_3_0_dropbox_N_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch, &__init_value__ind_screen_multiscreen_3_0_dropbox_L_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch, &__init_value__ind_screen_multiscreen_3_0_dropbox_admin_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch, &__init_value__ind_screen_multiscreen_3_0_diff_admin_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch, &__init_value__ind_screen_multiscreen_3_0_difflock_mid_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch, &__init_value__ind_screen_multiscreen_3_0_difflock_rear_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch, &__init_value__ind_screen_multiscreen_3_0_difflock_front_touch, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_mid_fb, &__init_value__ind_screen_multiscreen_3_0_difflock_mid_fb, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_rear_fb, &__init_value__ind_screen_multiscreen_3_0_difflock_rear_fb, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_front_fb, &__init_value__ind_screen_multiscreen_3_0_difflock_front_fb, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_3_0_dropbox_H_fb, &__init_value__ind_screen_multiscreen_3_0_dropbox_H_fb, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_3_0_dropbox_N_fb, &__init_value__ind_screen_multiscreen_3_0_dropbox_N_fb, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_3_0_dropbox_L_fb, &__init_value__ind_screen_multiscreen_3_0_dropbox_L_fb, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_3_0_dropbox, &__init_value__ind_screen_multiscreen_3_0_dropbox, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_3_0_diff_lock, &__init_value__ind_screen_multiscreen_3_0_diff_lock, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_3_0_alarm_icon_accessory_tank, &__init_value__ind_screen_multiscreen_3_0_alarm_icon_accessory_tank, sizeof(vt3_indicator_MultiBitmap) },
	{ &vt3_screen_union.screen.multiscreen_3_0_insufficient_pressure_accessory_tank, &__init_value__ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank, sizeof(vt3_indicator_MultiText) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_mid_txt, &__init_value__ind_screen_multiscreen_3_0_difflock_mid_txt, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_rear_txt, &__init_value__ind_screen_multiscreen_3_0_difflock_rear_txt, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_3_0_difflock_front_txt, &__init_value__ind_screen_multiscreen_3_0_difflock_front_txt, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.multiscreen_3_1, &__init_value__ind_screen_multiscreen_3_1, sizeof(vt3_indicator_SubScreenPage) },
	{ &vt3_screen_union.screen.multiscreen_4, &__init_value__ind_screen_multiscreen_4, sizeof(vt3_indicator_SubScreen) },
	{ &vt3_screen_union.screen.multiscreen_4_0, &__init_value__ind_screen_multiscreen_4_0, sizeof(vt3_indicator_SubScreenPage) },
	{ &vt3_screen_union.screen.multiscreen_4_1, &__init_value__ind_screen_multiscreen_4_1, sizeof(vt3_indicator_SubScreenPage) },
	{ &vt3_screen_union.screen.multiscreen_2, &__init_value__ind_screen_multiscreen_2, sizeof(vt3_indicator_SubScreen) },
	{ &vt3_screen_union.screen.multiscreen_2_0, &__init_value__ind_screen_multiscreen_2_0, sizeof(vt3_indicator_SubScreenPage) },
	{ &vt3_screen_union.screen.multiscreen_2_1, &__init_value__ind_screen_multiscreen_2_1, sizeof(vt3_indicator_SubScreenPage) },
	{ &vt3_screen_union.screen.degis, &__init_value__ind_screen_degis, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.degis_3, &__init_value__ind_screen_degis_3, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.degis_2, &__init_value__ind_screen_degis_2, sizeof(vt3_indicator_Touch) },
	{ &vt3_screen_union.screen.simple_text, &__init_value__ind_screen_simple_text, sizeof(vt3_indicator_SimpleText) },
	{ &vt3_screen_union.screen.simple_text_2, &__init_value__ind_screen_simple_text_2, sizeof(vt3_indicator_SimpleText) },
	{ NULL, NULL, 0 } /* end-of-table sentinel */
};

/* the screen initialization function */
void vt3_init_ind_screen(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialization loop */
	for ( p = vt3_init_pointers_ind_screen; p->dst; p ++ )
		FarMemCopy(p->dst, p->src, p->len);
}

/* the screen drawing function */
void vt3_draw_ind_screen(BYTE event)
{
	/* event procedure for the screen */
	vt3_event_ind_screen(event);

	/* screen redraw */
	vt3_draw_indicator_Screen(event, &vt3_screen_union.screen._background);

	/* indicator "multiscreen" of type "SubScreen" */

	/* finite state machine: subscreen change */
	{
		/* local block of variables, relative to the subscreen */
		static UINT8 subscreen_event = VT3_DISP_EVENT_CLOSE;
		UINT8 save_event;

		switch ( event )
		{
		case VT3_DISP_EVENT_OPEN:

			/* initialize subscreen: initial page */
			subscreen_event = VT3_DISP_EVENT_OPEN;
			if ( vt3_screen_union.screen.multiscreen.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen);
			}
			vt3_screen_union.screen.multiscreen.prevValue = vt3_screen_union.screen.multiscreen.currentValue;
			break;

		case VT3_DISP_EVENT_REFRESH:

			/* finite state machine, control subscreen change */
			switch ( subscreen_event )
			{
			case VT3_DISP_EVENT_OPEN:
				/* complete subscreen change process: return to normal operation */
				subscreen_event = VT3_DISP_EVENT_REFRESH;
				break;

			case VT3_DISP_EVENT_REFRESH:
				if ( vt3_screen_union.screen.multiscreen.prevValue != vt3_screen_union.screen.multiscreen.currentValue )
				{

					/* NULL-terminated array of indicators belonging to the subscreen and capable of getting focus */
					static const vt3_indicator_abstract FAR FARPTR list_of_indicators_in_subscreen[] = {
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_accessory_tank_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_fuel_level_left_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_fuel_level_right_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_park_brake_tank_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input,
						(vt3_indicator_abstract FARPTR) &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input,
						(vt3_indicator_abstract FARPTR) NULL /* end-of-array sentinel */
					};
					const vt3_indicator_abstract FARPTR FARPTR p;
		
					/* force focus release (if focus is on an hidden indicator) */
					for ( p = list_of_indicators_in_subscreen; *p; p ++ )
					{
						if ( vt3_has_focus(*p) )
						{
							(void) vt3_set_focus_null();
							break;
						}
					}

					/* begin subscreen change process: tear down previous subscreen */
					subscreen_event = VT3_DISP_EVENT_CLOSE;
				}
				break;

			case VT3_DISP_EVENT_CLOSE:
				/* continue subscreen change process: bring up new subscreen */
				subscreen_event = VT3_DISP_EVENT_OPEN;
				vt3_screen_union.screen.multiscreen.prevValue = vt3_screen_union.screen.multiscreen.currentValue;
				break;
			}
			if ( vt3_screen_union.screen.multiscreen.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen);
			}
			break;

		case VT3_DISP_EVENT_CLOSE:
			/* tear down subscreen */
			subscreen_event = VT3_DISP_EVENT_CLOSE;
			if ( vt3_screen_union.screen.multiscreen.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen);
			}
			break;
		}

		/* shadow event */
		save_event = event;
		event = subscreen_event;

		/* draw subscreen background */
		vt3_draw_indicator_SubScreen(event, &vt3_screen_union.screen.multiscreen);

		/* subscreen selection */
		switch ( vt3_screen_union.screen.multiscreen.prevValue )
		{
		case 0:

			/* draw indicators in subscreen page "0" only when page is stable, not during change */
			if (( vt3_screen_union.screen.multiscreen.currentValue == 0 && event == VT3_DISP_EVENT_REFRESH ) || ( event != VT3_DISP_EVENT_REFRESH ))
			{
				/* indicator "0" of type "SubScreenPage" */

				/* indicator "service_brake_tank_1_fb" of type "Number" */

				/* draw the indicator: service_brake_tank_1_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_fb);


				/* indicator "service_brake_tank_2_fb" of type "Number" */

				/* draw the indicator: service_brake_tank_2_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_fb);


				/* indicator "park_brake_tank_fb" of type "Number" */

				/* draw the indicator: park_brake_tank_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_park_brake_tank_fb);


				/* indicator "accessory_tank_fb" of type "Number" */

				/* draw the indicator: accessory_tank_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_accessory_tank_fb);


				/* indicator "hydraulic_tank_pressure_fb" of type "Number" */

				/* draw the indicator: hydraulic_tank_pressure_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_fb);


				/* indicator "fuel_level_left_fb" of type "Number" */

				/* draw the indicator: fuel_level_left_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_left_fb);


				/* indicator "fuel_level_right_fb" of type "Number" */

				/* draw the indicator: fuel_level_right_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_right_fb);


				/* indicator "fuel_temp_left_fb" of type "Number" */

				/* draw the indicator: fuel_temp_left_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_fb);


				/* indicator "fuel_temp_right_fb" of type "Number" */

				/* draw the indicator: fuel_temp_right_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_fb);


				/* indicator "hydraulic_tank_temp_fb" of type "Number" */

				/* draw the indicator: hydraulic_tank_temp_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_fb);


				/* indicator "service_brake_tank_1_input" of type "NumberEditable" */

				/* draw the indicator: service_brake_tank_1_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input);


				/* indicator "service_brake_tank_2_input" of type "NumberEditable" */

				/* draw the indicator: service_brake_tank_2_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input);


				/* indicator "park_brake_tank_input" of type "NumberEditable" */

				/* draw the indicator: park_brake_tank_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_park_brake_tank_input);


				/* indicator "accessory_tank_input" of type "NumberEditable" */

				/* draw the indicator: accessory_tank_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_accessory_tank_input);


				/* indicator "hydraulic_tank_pressure_input" of type "NumberEditable" */

				/* draw the indicator: hydraulic_tank_pressure_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input);


				/* indicator "fuel_level_left_input" of type "NumberEditable" */

				/* draw the indicator: fuel_level_left_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_left_input);


				/* indicator "fuel_level_right_input" of type "NumberEditable" */

				/* draw the indicator: fuel_level_right_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_right_input);


				/* indicator "fuel_temp_left_input" of type "NumberEditable" */

				/* draw the indicator: fuel_temp_left_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input);


				/* indicator "fuel_temp_right_input" of type "NumberEditable" */

				/* draw the indicator: fuel_temp_right_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input);


				/* indicator "hydraulic_tank_temp_input" of type "NumberEditable" */

				/* draw the indicator: hydraulic_tank_temp_input */
				vt3_draw_indicator_NumberEditable(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input);


				/* indicator "service_brake_tank_1" of type "SimpleText" */

				/* draw the indicator: service_brake_tank_1 */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1);


				/* indicator "service_brake_tank_2" of type "SimpleText" */

				/* draw the indicator: service_brake_tank_2 */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2);


				/* indicator "park_brake_tank" of type "SimpleText" */

				/* draw the indicator: park_brake_tank */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_park_brake_tank);


				/* indicator "accessory_tank" of type "SimpleText" */

				/* draw the indicator: accessory_tank */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_accessory_tank);


				/* indicator "hydraulic_tank_pressure" of type "SimpleText" */

				/* draw the indicator: hydraulic_tank_pressure */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure);


				/* indicator "fuel_level_left" of type "SimpleText" */

				/* draw the indicator: fuel_level_left */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_left);


				/* indicator "fuel_level_right" of type "SimpleText" */

				/* draw the indicator: fuel_level_right */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_right);


				/* indicator "fuel_temp_left" of type "SimpleText" */

				/* draw the indicator: fuel_temp_left */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_left);


				/* indicator "fuel_temp_right" of type "SimpleText" */

				/* draw the indicator: fuel_temp_right */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_right);


				/* indicator "hydraulic_tank_temp" of type "SimpleText" */

				/* draw the indicator: hydraulic_tank_temp */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp);


				/* indicator "service_brake_tank_1_touch" of type "Touch" */

				/* draw the indicator: service_brake_tank_1_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_touch);


				/* indicator "service_brake_tank_2_touch" of type "Touch" */

				/* draw the indicator: service_brake_tank_2_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_touch);


				/* indicator "park_brake_tank_touch" of type "Touch" */

				/* draw the indicator: park_brake_tank_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_park_brake_tank_touch);


				/* indicator "accessory_tank_touch" of type "Touch" */

				/* draw the indicator: accessory_tank_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_accessory_tank_touch);


				/* indicator "hydraulic_tank_pressure_touch" of type "Touch" */

				/* draw the indicator: hydraulic_tank_pressure_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_touch);


				/* indicator "fuel_level_left_touch" of type "Touch" */

				/* draw the indicator: fuel_level_left_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_left_touch);


				/* indicator "fuel_level_right_touch" of type "Touch" */

				/* draw the indicator: fuel_level_right_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_right_touch);


				/* indicator "fuel_temp_left_touch" of type "Touch" */

				/* draw the indicator: fuel_temp_left_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_touch);


				/* indicator "fuel_temp_right_touch" of type "Touch" */

				/* draw the indicator: fuel_temp_right_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_touch);


				/* indicator "hydraulic_tank_temp_touch" of type "Touch" */

				/* draw the indicator: hydraulic_tank_temp_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_touch);


				/* indicator "service_brake_tank_1_send" of type "Touch" */

				/* draw the indicator: service_brake_tank_1_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send);


				/* indicator "service_brake_tank_2_send" of type "Touch" */

				/* draw the indicator: service_brake_tank_2_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send);


				/* indicator "park_brake_tank_send" of type "Touch" */

				/* draw the indicator: park_brake_tank_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_park_brake_tank_send);


				/* indicator "accessory_tank_send" of type "Touch" */

				/* draw the indicator: accessory_tank_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_accessory_tank_send);


				/* indicator "hydraulic_tank_pressure_send" of type "Touch" */

				/* draw the indicator: hydraulic_tank_pressure_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send);


				/* indicator "fuel_level_left_send" of type "Touch" */

				/* draw the indicator: fuel_level_left_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_left_send);


				/* indicator "fuel_level_right_send" of type "Touch" */

				/* draw the indicator: fuel_level_right_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_right_send);


				/* indicator "fuel_temp_right_send" of type "Touch" */

				/* draw the indicator: fuel_temp_right_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send);


				/* indicator "fuel_temp_left_send" of type "Touch" */

				/* draw the indicator: fuel_temp_left_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send);


				/* indicator "hydraulic_tank_temp_send" of type "Touch" */

				/* draw the indicator: hydraulic_tank_temp_send */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send);


				/* indicator "service_break_tank_1_raw_fb" of type "Number" */

				/* draw the indicator: service_break_tank_1_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_service_break_tank_1_raw_fb);


				/* indicator "service_break_tank_2_raw_fb" of type "Number" */

				/* draw the indicator: service_break_tank_2_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_service_break_tank_2_raw_fb);


				/* indicator "park_break_tank_raw_fb" of type "Number" */

				/* draw the indicator: park_break_tank_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_park_break_tank_raw_fb);


				/* indicator "accessory_tank_raw_fb" of type "Number" */

				/* draw the indicator: accessory_tank_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_accessory_tank_raw_fb);


				/* indicator "hydraulic_tank_pressure_raw_fb" of type "Number" */

				/* draw the indicator: hydraulic_tank_pressure_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_raw_fb);


				/* indicator "fuel_level_left_raw_fb" of type "Number" */

				/* draw the indicator: fuel_level_left_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_left_raw_fb);


				/* indicator "fuel_level_right_raw_fb" of type "Number" */

				/* draw the indicator: fuel_level_right_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_fuel_level_right_raw_fb);


				/* indicator "fuel_temp_left_raw_fb" of type "Number" */

				/* draw the indicator: fuel_temp_left_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_left_raw_fb);


				/* indicator "fuel_temp_right_raw_fb" of type "Number" */

				/* draw the indicator: fuel_temp_right_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_fuel_temp_right_raw_fb);


				/* indicator "hydraulic_tank_temp_raw_fb" of type "Number" */

				/* draw the indicator: hydraulic_tank_temp_raw_fb */
				vt3_draw_indicator_Number(event, &vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_raw_fb);


				/* indicator "alarm_icon_service_tank_1" of type "MultiBitmap" */

				/* draw the indicator: alarm_icon_service_tank_1 */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_0_alarm_icon_service_tank_1);


				/* indicator "insufficient_pressure_service_tank_1" of type "MultiText" */

				/* draw the indicator: insufficient_pressure_service_tank_1 */
				vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen.multiscreen_0_insufficient_pressure_service_tank_1);


				/* indicator "alarm_icon_service_tank_2" of type "MultiBitmap" */

				/* draw the indicator: alarm_icon_service_tank_2 */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_0_alarm_icon_service_tank_2);


				/* indicator "insufficient_pressure_service_tank_2" of type "MultiText" */

				/* draw the indicator: insufficient_pressure_service_tank_2 */
				vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen.multiscreen_0_insufficient_pressure_service_tank_2);


				/* indicator "alarm_icon_park_tank" of type "MultiBitmap" */

				/* draw the indicator: alarm_icon_park_tank */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_0_alarm_icon_park_tank);


				/* indicator "insufficient_pressure_park_tank" of type "MultiText" */

				/* draw the indicator: insufficient_pressure_park_tank */
				vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen.multiscreen_0_insufficient_pressure_park_tank);


				/* indicator "alarm_icon_accessory_tank" of type "MultiBitmap" */

				/* draw the indicator: alarm_icon_accessory_tank */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_0_alarm_icon_accessory_tank);


				/* indicator "insufficient_pressure_accessory_tank" of type "MultiText" */

				/* draw the indicator: insufficient_pressure_accessory_tank */
				vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen.multiscreen_0_insufficient_pressure_accessory_tank);


				/* end of subscreen page "0" */


			}
			break; /* case 0 */

		case 1:

			/* draw indicators in subscreen page "1" only when page is stable, not during change */
			if (( vt3_screen_union.screen.multiscreen.currentValue == 1 && event == VT3_DISP_EVENT_REFRESH ) || ( event != VT3_DISP_EVENT_REFRESH ))
			{
				/* indicator "1" of type "SubScreenPage" */

				/* end of subscreen page "1" */


			}
			break; /* case 1 */

		} /* switch ( vt3_screen_union.screen.multiscreen.value ) */
		event = save_event;
	}
	/* end of subscreen "multiscreen" */


	/* indicator "multiscreen_3" of type "SubScreen" */

	/* finite state machine: subscreen change */
	{
		/* local block of variables, relative to the subscreen */
		static UINT8 subscreen_event = VT3_DISP_EVENT_CLOSE;
		UINT8 save_event;

		switch ( event )
		{
		case VT3_DISP_EVENT_OPEN:

			/* initialize subscreen: initial page */
			subscreen_event = VT3_DISP_EVENT_OPEN;
			if ( vt3_screen_union.screen.multiscreen_3.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_3.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_3);
			}
			vt3_screen_union.screen.multiscreen_3.prevValue = vt3_screen_union.screen.multiscreen_3.currentValue;
			break;

		case VT3_DISP_EVENT_REFRESH:

			/* finite state machine, control subscreen change */
			switch ( subscreen_event )
			{
			case VT3_DISP_EVENT_OPEN:
				/* complete subscreen change process: return to normal operation */
				subscreen_event = VT3_DISP_EVENT_REFRESH;
				break;

			case VT3_DISP_EVENT_REFRESH:
				if ( vt3_screen_union.screen.multiscreen_3.prevValue != vt3_screen_union.screen.multiscreen_3.currentValue )
				{
					/* begin subscreen change process: tear down previous subscreen */
					subscreen_event = VT3_DISP_EVENT_CLOSE;
				}
				break;

			case VT3_DISP_EVENT_CLOSE:
				/* continue subscreen change process: bring up new subscreen */
				subscreen_event = VT3_DISP_EVENT_OPEN;
				vt3_screen_union.screen.multiscreen_3.prevValue = vt3_screen_union.screen.multiscreen_3.currentValue;
				break;
			}
			if ( vt3_screen_union.screen.multiscreen_3.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_3.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_3);
			}
			break;

		case VT3_DISP_EVENT_CLOSE:
			/* tear down subscreen */
			subscreen_event = VT3_DISP_EVENT_CLOSE;
			if ( vt3_screen_union.screen.multiscreen_3.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_3.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_3);
			}
			break;
		}

		/* shadow event */
		save_event = event;
		event = subscreen_event;

		/* draw subscreen background */
		vt3_draw_indicator_SubScreen(event, &vt3_screen_union.screen.multiscreen_3);

		/* subscreen selection */
		switch ( vt3_screen_union.screen.multiscreen_3.prevValue )
		{
		case 0:

			/* draw indicators in subscreen page "0" only when page is stable, not during change */
			if (( vt3_screen_union.screen.multiscreen_3.currentValue == 0 && event == VT3_DISP_EVENT_REFRESH ) || ( event != VT3_DISP_EVENT_REFRESH ))
			{
				/* indicator "0" of type "SubScreenPage" */

				/* indicator "dropbox_H_touch" of type "Touch" */

				/* draw the indicator: dropbox_H_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch);


				/* indicator "dropbox_N_touch" of type "Touch" */

				/* draw the indicator: dropbox_N_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch);


				/* indicator "dropbox_L_touch" of type "Touch" */

				/* draw the indicator: dropbox_L_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch);


				/* indicator "dropbox_admin_touch" of type "Touch" */

				/* draw the indicator: dropbox_admin_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch);


				/* indicator "diff_admin_touch" of type "Touch" */

				/* draw the indicator: diff_admin_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch);


				/* indicator "difflock_mid_touch" of type "Touch" */

				/* draw the indicator: difflock_mid_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch);


				/* indicator "difflock_rear_touch" of type "Touch" */

				/* draw the indicator: difflock_rear_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch);


				/* indicator "difflock_front_touch" of type "Touch" */

				/* draw the indicator: difflock_front_touch */
				vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch);


				/* indicator "difflock_mid_fb" of type "MultiBitmap" */

				/* draw the indicator: difflock_mid_fb */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_mid_fb);


				/* indicator "difflock_rear_fb" of type "MultiBitmap" */

				/* draw the indicator: difflock_rear_fb */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_rear_fb);


				/* indicator "difflock_front_fb" of type "MultiBitmap" */

				/* draw the indicator: difflock_front_fb */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_front_fb);


				/* indicator "dropbox_H_fb" of type "MultiBitmap" */

				/* draw the indicator: dropbox_H_fb */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_3_0_dropbox_H_fb);


				/* indicator "dropbox_N_fb" of type "MultiBitmap" */

				/* draw the indicator: dropbox_N_fb */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_3_0_dropbox_N_fb);


				/* indicator "dropbox_L_fb" of type "MultiBitmap" */

				/* draw the indicator: dropbox_L_fb */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_3_0_dropbox_L_fb);


				/* indicator "dropbox" of type "SimpleText" */

				/* draw the indicator: dropbox */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_3_0_dropbox);


				/* indicator "diff_lock" of type "SimpleText" */

				/* draw the indicator: diff_lock */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_3_0_diff_lock);


				/* indicator "alarm_icon_accessory_tank" of type "MultiBitmap" */

				/* draw the indicator: alarm_icon_accessory_tank */
				vt3_draw_indicator_MultiBitmap(event, &vt3_screen_union.screen.multiscreen_3_0_alarm_icon_accessory_tank);


				/* indicator "insufficient_pressure_accessory_tank" of type "MultiText" */

				/* draw the indicator: insufficient_pressure_accessory_tank */
				vt3_draw_indicator_MultiText(event, &vt3_screen_union.screen.multiscreen_3_0_insufficient_pressure_accessory_tank);


				/* indicator "difflock_mid_txt" of type "SimpleText" */

				/* draw the indicator: difflock_mid_txt */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_mid_txt);


				/* indicator "difflock_rear_txt" of type "SimpleText" */

				/* draw the indicator: difflock_rear_txt */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_rear_txt);


				/* indicator "difflock_front_txt" of type "SimpleText" */

				/* draw the indicator: difflock_front_txt */
				vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.multiscreen_3_0_difflock_front_txt);


				/* end of subscreen page "0" */


			}
			break; /* case 0 */

		case 1:

			/* draw indicators in subscreen page "1" only when page is stable, not during change */
			if (( vt3_screen_union.screen.multiscreen_3.currentValue == 1 && event == VT3_DISP_EVENT_REFRESH ) || ( event != VT3_DISP_EVENT_REFRESH ))
			{
				/* indicator "1" of type "SubScreenPage" */

				/* end of subscreen page "1" */


			}
			break; /* case 1 */

		} /* switch ( vt3_screen_union.screen.multiscreen_3.value ) */
		event = save_event;
	}
	/* end of subscreen "multiscreen_3" */


	/* indicator "multiscreen_4" of type "SubScreen" */

	/* finite state machine: subscreen change */
	{
		/* local block of variables, relative to the subscreen */
		static UINT8 subscreen_event = VT3_DISP_EVENT_CLOSE;
		UINT8 save_event;

		switch ( event )
		{
		case VT3_DISP_EVENT_OPEN:

			/* initialize subscreen: initial page */
			subscreen_event = VT3_DISP_EVENT_OPEN;
			if ( vt3_screen_union.screen.multiscreen_4.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_4.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_4);
			}
			vt3_screen_union.screen.multiscreen_4.prevValue = vt3_screen_union.screen.multiscreen_4.currentValue;
			break;

		case VT3_DISP_EVENT_REFRESH:

			/* finite state machine, control subscreen change */
			switch ( subscreen_event )
			{
			case VT3_DISP_EVENT_OPEN:
				/* complete subscreen change process: return to normal operation */
				subscreen_event = VT3_DISP_EVENT_REFRESH;
				break;

			case VT3_DISP_EVENT_REFRESH:
				if ( vt3_screen_union.screen.multiscreen_4.prevValue != vt3_screen_union.screen.multiscreen_4.currentValue )
				{
					/* begin subscreen change process: tear down previous subscreen */
					subscreen_event = VT3_DISP_EVENT_CLOSE;
				}
				break;

			case VT3_DISP_EVENT_CLOSE:
				/* continue subscreen change process: bring up new subscreen */
				subscreen_event = VT3_DISP_EVENT_OPEN;
				vt3_screen_union.screen.multiscreen_4.prevValue = vt3_screen_union.screen.multiscreen_4.currentValue;
				break;
			}
			if ( vt3_screen_union.screen.multiscreen_4.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_4.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_4);
			}
			break;

		case VT3_DISP_EVENT_CLOSE:
			/* tear down subscreen */
			subscreen_event = VT3_DISP_EVENT_CLOSE;
			if ( vt3_screen_union.screen.multiscreen_4.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_4.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_4);
			}
			break;
		}

		/* shadow event */
		save_event = event;
		event = subscreen_event;

		/* draw subscreen background */
		vt3_draw_indicator_SubScreen(event, &vt3_screen_union.screen.multiscreen_4);

		/* subscreen selection */
		switch ( vt3_screen_union.screen.multiscreen_4.prevValue )
		{
		case 0:

			/* draw indicators in subscreen page "0" only when page is stable, not during change */
			if (( vt3_screen_union.screen.multiscreen_4.currentValue == 0 && event == VT3_DISP_EVENT_REFRESH ) || ( event != VT3_DISP_EVENT_REFRESH ))
			{
				/* indicator "0" of type "SubScreenPage" */

				/* end of subscreen page "0" */


			}
			break; /* case 0 */

		case 1:

			/* draw indicators in subscreen page "1" only when page is stable, not during change */
			if (( vt3_screen_union.screen.multiscreen_4.currentValue == 1 && event == VT3_DISP_EVENT_REFRESH ) || ( event != VT3_DISP_EVENT_REFRESH ))
			{
				/* indicator "1" of type "SubScreenPage" */

				/* end of subscreen page "1" */


			}
			break; /* case 1 */

		} /* switch ( vt3_screen_union.screen.multiscreen_4.value ) */
		event = save_event;
	}
	/* end of subscreen "multiscreen_4" */


	/* indicator "multiscreen_2" of type "SubScreen" */

	/* finite state machine: subscreen change */
	{
		/* local block of variables, relative to the subscreen */
		static UINT8 subscreen_event = VT3_DISP_EVENT_CLOSE;
		UINT8 save_event;

		switch ( event )
		{
		case VT3_DISP_EVENT_OPEN:

			/* initialize subscreen: initial page */
			subscreen_event = VT3_DISP_EVENT_OPEN;
			if ( vt3_screen_union.screen.multiscreen_2.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_2.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_2);
			}
			vt3_screen_union.screen.multiscreen_2.prevValue = vt3_screen_union.screen.multiscreen_2.currentValue;
			break;

		case VT3_DISP_EVENT_REFRESH:

			/* finite state machine, control subscreen change */
			switch ( subscreen_event )
			{
			case VT3_DISP_EVENT_OPEN:
				/* complete subscreen change process: return to normal operation */
				subscreen_event = VT3_DISP_EVENT_REFRESH;
				break;

			case VT3_DISP_EVENT_REFRESH:
				if ( vt3_screen_union.screen.multiscreen_2.prevValue != vt3_screen_union.screen.multiscreen_2.currentValue )
				{
					/* begin subscreen change process: tear down previous subscreen */
					subscreen_event = VT3_DISP_EVENT_CLOSE;
				}
				break;

			case VT3_DISP_EVENT_CLOSE:
				/* continue subscreen change process: bring up new subscreen */
				subscreen_event = VT3_DISP_EVENT_OPEN;
				vt3_screen_union.screen.multiscreen_2.prevValue = vt3_screen_union.screen.multiscreen_2.currentValue;
				break;
			}
			if ( vt3_screen_union.screen.multiscreen_2.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_2.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_2);
			}
			break;

		case VT3_DISP_EVENT_CLOSE:
			/* tear down subscreen */
			subscreen_event = VT3_DISP_EVENT_CLOSE;
			if ( vt3_screen_union.screen.multiscreen_2.rom->pfn_event )
			{
				vt3_screen_union.screen.multiscreen_2.rom->pfn_event(subscreen_event, &vt3_screen_union.screen.multiscreen_2);
			}
			break;
		}

		/* shadow event */
		save_event = event;
		event = subscreen_event;

		/* draw subscreen background */
		vt3_draw_indicator_SubScreen(event, &vt3_screen_union.screen.multiscreen_2);

		/* subscreen selection */
		switch ( vt3_screen_union.screen.multiscreen_2.prevValue )
		{
		case 0:

			/* draw indicators in subscreen page "0" only when page is stable, not during change */
			if (( vt3_screen_union.screen.multiscreen_2.currentValue == 0 && event == VT3_DISP_EVENT_REFRESH ) || ( event != VT3_DISP_EVENT_REFRESH ))
			{
				/* indicator "0" of type "SubScreenPage" */

				/* end of subscreen page "0" */


			}
			break; /* case 0 */

		case 1:

			/* draw indicators in subscreen page "1" only when page is stable, not during change */
			if (( vt3_screen_union.screen.multiscreen_2.currentValue == 1 && event == VT3_DISP_EVENT_REFRESH ) || ( event != VT3_DISP_EVENT_REFRESH ))
			{
				/* indicator "1" of type "SubScreenPage" */

				/* end of subscreen page "1" */


			}
			break; /* case 1 */

		} /* switch ( vt3_screen_union.screen.multiscreen_2.value ) */
		event = save_event;
	}
	/* end of subscreen "multiscreen_2" */


	/* indicator "degis" of type "Touch" */

	/* draw the indicator: degis */
	vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.degis);


	/* indicator "degis_3" of type "Touch" */

	/* draw the indicator: degis_3 */
	vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.degis_3);


	/* indicator "degis_2" of type "Touch" */

	/* draw the indicator: degis_2 */
	vt3_draw_indicator_Touch(event, &vt3_screen_union.screen.degis_2);


	/* indicator "simple_text" of type "SimpleText" */

	/* draw the indicator: simple_text */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.simple_text);


	/* indicator "simple_text_2" of type "SimpleText" */

	/* draw the indicator: simple_text_2 */
	vt3_draw_indicator_SimpleText(event, &vt3_screen_union.screen.simple_text_2);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen() */

/* guard for focus of indicator */
static BOOL vt3_focus_guard_11FBC083B_0001(void)
{
	return (vt3_screen_union.screen.multiscreen.prevValue == 0);
}

/* focus navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_forward_ind_screen[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_forward_ind_screen[] */

/* focus navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_focus_sequence_backward_ind_screen[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, vt3_focus_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_focus_sequence_backward_ind_screen[] */

/* guard for knob_sel of indicator */
static BOOL vt3_knob_sel_guard_11FBC083B_0001(void)
{
	return (vt3_screen_union.screen.multiscreen.prevValue == 0);
}

/* guard for knob_sel of indicator */
static BOOL vt3_knob_sel_guard_11FBC083B_0002(void)
{
	return (vt3_screen_union.screen.multiscreen_3.prevValue == 0);
}

/* knob_sel navigation: navigation table for the screen, forward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_forward_ind_screen[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis_3, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis_3, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis_2, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis_2, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_forward_ind_screen[] */

/* knob_sel navigation: navigation table for the screen, backward direction */
static const vt3_focus_sequence_t vt3_knob_sel_sequence_backward_ind_screen[] = {

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis_2, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis_2, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis_3, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis_3, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch, vt3_knob_sel_guard_11FBC083B_0002 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_touch, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_touch, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_right_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_fuel_level_left_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_accessory_tank_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_park_brake_tank_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input, (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, vt3_knob_sel_guard_11FBC083B_0001 },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },
	{ (vt3_indicator_abstract FARPTR)&vt3_screen_union.screen.degis, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL },

	{ (vt3_indicator_abstract FARPTR)NULL, (vt3_indicator_abstract FARPTR)NULL, (vt3_focus_guard_t)NULL } /* end of table sentinel */

}; /* vt3_knob_sel_sequence_backward_ind_screen[] */


#endif /* INCLUDE__VT3_DISP__SCREEN_CPP */

/* end of file */
