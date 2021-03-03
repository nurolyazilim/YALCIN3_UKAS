/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREENFRAME_C
#define INCLUDE__VT3_DISP__SCREENFRAME_C

#include "vt3_runtime.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* invalid chain for the indicators in layer 0 */
static BOOL FAR FARPTR const vt3_screen_screen_frame_layer_0_invalid_chain[] =
{
	NULL /* sentinel */
};

/* invalid chain for the indicators in layer 1 */
static BOOL FAR FARPTR const vt3_screen_screen_frame_layer_1_invalid_chain[] =
{
	NULL /* sentinel */
};

/* ROM configuration of indicator screen_frame */
static const vt3_indicator_ROM_ScreenFrameModel FAR __ROM_value__ind_screen_frame = {
	/* virtual method table */ &vt3_indicator_VMT_ScreenFrameModel,
	/* event code       */ vt3_event_ind_screen_frame,
}; /* __ROM_value__ind_screen_frame */

/* initialization of the runtime status of indicator screen_frame */
static const vt3_indicator_ScreenFrameModel FAR __init_value__ind_screen_frame = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame,
}; /* __init_value__ind_screen_frame */

/* ROM configuration of indicator key_F1 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F1 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 0,
}; /* __ROM_value__ind_screen_frame_key_F1 */

/* initialization of the runtime status of indicator key_F1 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F1,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F1 */

/* ROM configuration of indicator key_F2 */
static const vt3_indicator_ROM_PhysicalKey FAR __ROM_value__ind_screen_frame_key_F2 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalKey,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalKey FARPTR)) NULL,
	/* hwNumber         */ 1,
}; /* __ROM_value__ind_screen_frame_key_F2 */

/* initialization of the runtime status of indicator key_F2 */
static const vt3_indicator_PhysicalKey FAR __init_value__ind_screen_frame_key_F2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_key_F2,
	/* eventDown        */ 0,
	/* eventUp          */ 0,
	/* pressedTime      */ 0,
}; /* __init_value__ind_screen_frame_key_F2 */

/* ROM configuration of indicator gauge_0 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_gauge_0 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_gauge_0,
	/* hwNumber         */ 1002,
}; /* __ROM_value__ind_screen_frame_gauge_0 */

/* initialization of the runtime status of indicator gauge_0 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_gauge_0 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_gauge_0,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_gauge_0 */

/* ROM configuration of indicator gauge_1 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_gauge_1 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_gauge_1,
	/* hwNumber         */ 1005,
}; /* __ROM_value__ind_screen_frame_gauge_1 */

/* initialization of the runtime status of indicator gauge_1 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_gauge_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_gauge_1,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_gauge_1 */

/* ROM configuration of indicator gauge_2 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_gauge_2 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_gauge_2,
	/* hwNumber         */ 1001,
}; /* __ROM_value__ind_screen_frame_gauge_2 */

/* initialization of the runtime status of indicator gauge_2 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_gauge_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_gauge_2,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_gauge_2 */

/* ROM configuration of indicator gauge_3 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_gauge_3 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_gauge_3,
	/* hwNumber         */ 1003,
}; /* __ROM_value__ind_screen_frame_gauge_3 */

/* initialization of the runtime status of indicator gauge_3 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_gauge_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_gauge_3,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_gauge_3 */

/* ROM configuration of indicator gauge_4 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_gauge_4 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_gauge_4,
	/* hwNumber         */ 1004,
}; /* __ROM_value__ind_screen_frame_gauge_4 */

/* initialization of the runtime status of indicator gauge_4 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_gauge_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_gauge_4,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_gauge_4 */

/* ROM configuration of indicator gauge_5 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_gauge_5 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_gauge_5,
	/* hwNumber         */ 1000,
}; /* __ROM_value__ind_screen_frame_gauge_5 */

/* initialization of the runtime status of indicator gauge_5 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_gauge_5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_gauge_5,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_gauge_5 */

/* ROM configuration of indicator led_1 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_1 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_1,
	/* hwNumber         */ 0,
}; /* __ROM_value__ind_screen_frame_led_1 */

/* initialization of the runtime status of indicator led_1 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_1 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_1,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_1 */

/* ROM configuration of indicator led_2 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_2 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_2,
	/* hwNumber         */ 1,
}; /* __ROM_value__ind_screen_frame_led_2 */

/* initialization of the runtime status of indicator led_2 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_2 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_2,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_2 */

/* ROM configuration of indicator led_3 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_3 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_3,
	/* hwNumber         */ 2,
}; /* __ROM_value__ind_screen_frame_led_3 */

/* initialization of the runtime status of indicator led_3 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_3 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_3,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_3 */

/* ROM configuration of indicator led_4 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_4 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_4,
	/* hwNumber         */ 3,
}; /* __ROM_value__ind_screen_frame_led_4 */

/* initialization of the runtime status of indicator led_4 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_4 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_4,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_4 */

/* ROM configuration of indicator led_5 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_5 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_5,
	/* hwNumber         */ 4,
}; /* __ROM_value__ind_screen_frame_led_5 */

/* initialization of the runtime status of indicator led_5 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_5 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_5,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_5 */

/* ROM configuration of indicator led_6 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_6 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_6,
	/* hwNumber         */ 5,
}; /* __ROM_value__ind_screen_frame_led_6 */

/* initialization of the runtime status of indicator led_6 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_6 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_6,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_6 */

/* ROM configuration of indicator led_7 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_7 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_7,
	/* hwNumber         */ 6,
}; /* __ROM_value__ind_screen_frame_led_7 */

/* initialization of the runtime status of indicator led_7 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_7 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_7,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_7 */

/* ROM configuration of indicator led_8 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_8 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_8,
	/* hwNumber         */ 7,
}; /* __ROM_value__ind_screen_frame_led_8 */

/* initialization of the runtime status of indicator led_8 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_8 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_8,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_8 */

/* ROM configuration of indicator led_9 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_9 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_9,
	/* hwNumber         */ 8,
}; /* __ROM_value__ind_screen_frame_led_9 */

/* initialization of the runtime status of indicator led_9 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_9 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_9,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_9 */

/* ROM configuration of indicator led_10 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_10 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_10,
	/* hwNumber         */ 9,
}; /* __ROM_value__ind_screen_frame_led_10 */

/* initialization of the runtime status of indicator led_10 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_10 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_10,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_10 */

/* ROM configuration of indicator led_11 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_11 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_11,
	/* hwNumber         */ 10,
}; /* __ROM_value__ind_screen_frame_led_11 */

/* initialization of the runtime status of indicator led_11 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_11 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_11,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_11 */

/* ROM configuration of indicator led_12 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_12 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_12,
	/* hwNumber         */ 11,
}; /* __ROM_value__ind_screen_frame_led_12 */

/* initialization of the runtime status of indicator led_12 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_12 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_12,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_12 */

/* ROM configuration of indicator led_13 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_13 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_13,
	/* hwNumber         */ 12,
}; /* __ROM_value__ind_screen_frame_led_13 */

/* initialization of the runtime status of indicator led_13 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_13 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_13,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_13 */

/* ROM configuration of indicator led_14 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_14 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_14,
	/* hwNumber         */ 13,
}; /* __ROM_value__ind_screen_frame_led_14 */

/* initialization of the runtime status of indicator led_14 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_14 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_14,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_14 */

/* ROM configuration of indicator led_15 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_15 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_15,
	/* hwNumber         */ 14,
}; /* __ROM_value__ind_screen_frame_led_15 */

/* initialization of the runtime status of indicator led_15 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_15 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_15,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_15 */

/* ROM configuration of indicator led_16 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_16 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_16,
	/* hwNumber         */ 15,
}; /* __ROM_value__ind_screen_frame_led_16 */

/* initialization of the runtime status of indicator led_16 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_16 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_16,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_16 */

/* ROM configuration of indicator led_17 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_17 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_17,
	/* hwNumber         */ 16,
}; /* __ROM_value__ind_screen_frame_led_17 */

/* initialization of the runtime status of indicator led_17 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_17 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_17,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_17 */

/* ROM configuration of indicator led_18 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_18 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_18,
	/* hwNumber         */ 17,
}; /* __ROM_value__ind_screen_frame_led_18 */

/* initialization of the runtime status of indicator led_18 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_18 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_18,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_18 */

/* ROM configuration of indicator led_19 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_19 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_19,
	/* hwNumber         */ 18,
}; /* __ROM_value__ind_screen_frame_led_19 */

/* initialization of the runtime status of indicator led_19 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_19 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_19,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_19 */

/* ROM configuration of indicator led_20 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_20 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_20,
	/* hwNumber         */ 19,
}; /* __ROM_value__ind_screen_frame_led_20 */

/* initialization of the runtime status of indicator led_20 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_20 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_20,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_20 */

/* ROM configuration of indicator led_21 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_21 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_21,
	/* hwNumber         */ 20,
}; /* __ROM_value__ind_screen_frame_led_21 */

/* initialization of the runtime status of indicator led_21 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_21 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_21,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_21 */

/* ROM configuration of indicator led_22 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_22 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_22,
	/* hwNumber         */ 21,
}; /* __ROM_value__ind_screen_frame_led_22 */

/* initialization of the runtime status of indicator led_22 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_22 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_22,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_22 */

/* ROM configuration of indicator led_23 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_23 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_23,
	/* hwNumber         */ 22,
}; /* __ROM_value__ind_screen_frame_led_23 */

/* initialization of the runtime status of indicator led_23 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_23 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_23,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_23 */

/* ROM configuration of indicator led_24 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_24 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_24,
	/* hwNumber         */ 23,
}; /* __ROM_value__ind_screen_frame_led_24 */

/* initialization of the runtime status of indicator led_24 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_24 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_24,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_24 */

/* ROM configuration of indicator led_25 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_25 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_25,
	/* hwNumber         */ 24,
}; /* __ROM_value__ind_screen_frame_led_25 */

/* initialization of the runtime status of indicator led_25 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_25 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_25,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_25 */

/* ROM configuration of indicator led_27 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_27 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_27,
	/* hwNumber         */ 34,
}; /* __ROM_value__ind_screen_frame_led_27 */

/* initialization of the runtime status of indicator led_27 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_27 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_27,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_27 */

/* ROM configuration of indicator led_28 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_28 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_28,
	/* hwNumber         */ 27,
}; /* __ROM_value__ind_screen_frame_led_28 */

/* initialization of the runtime status of indicator led_28 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_28 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_28,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_28 */

/* ROM configuration of indicator led_29 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_29 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_29,
	/* hwNumber         */ 28,
}; /* __ROM_value__ind_screen_frame_led_29 */

/* initialization of the runtime status of indicator led_29 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_29 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_29,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_29 */

/* ROM configuration of indicator led_30 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_30 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_30,
	/* hwNumber         */ 29,
}; /* __ROM_value__ind_screen_frame_led_30 */

/* initialization of the runtime status of indicator led_30 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_30 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_30,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_30 */

/* ROM configuration of indicator led_31 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_31 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_31,
	/* hwNumber         */ 30,
}; /* __ROM_value__ind_screen_frame_led_31 */

/* initialization of the runtime status of indicator led_31 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_31 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_31,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_31 */

/* ROM configuration of indicator led_32 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_32 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_32,
	/* hwNumber         */ 31,
}; /* __ROM_value__ind_screen_frame_led_32 */

/* initialization of the runtime status of indicator led_32 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_32 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_32,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_32 */

/* ROM configuration of indicator led_33 */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_led_33 = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_led_33,
	/* hwNumber         */ 32,
}; /* __ROM_value__ind_screen_frame_led_33 */

/* initialization of the runtime status of indicator led_33 */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_led_33 = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_led_33,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_led_33 */

/* ROM configuration of indicator lcd_hours */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_lcd_hours = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_lcd_hours,
	/* hwNumber         */ 1100,
}; /* __ROM_value__ind_screen_frame_lcd_hours */

/* initialization of the runtime status of indicator lcd_hours */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_lcd_hours = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_lcd_hours,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_lcd_hours */

/* ROM configuration of indicator lcd_odometer */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_lcd_odometer = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_lcd_odometer,
	/* hwNumber         */ 1101,
}; /* __ROM_value__ind_screen_frame_lcd_odometer */

/* initialization of the runtime status of indicator lcd_odometer */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_lcd_odometer = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_lcd_odometer,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_lcd_odometer */

/* ROM configuration of indicator lcd_is_mile */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_lcd_is_mile = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalIndicator FARPTR)) NULL,
	/* hwNumber         */ 1102,
}; /* __ROM_value__ind_screen_frame_lcd_is_mile */

/* initialization of the runtime status of indicator lcd_is_mile */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_lcd_is_mile = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_lcd_is_mile,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_lcd_is_mile */

/* ROM configuration of indicator lcd_hourglass */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_lcd_hourglass = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* no event code    */ (void (*)(UINT8, vt3_indicator_PhysicalIndicator FARPTR)) NULL,
	/* hwNumber         */ 1103,
}; /* __ROM_value__ind_screen_frame_lcd_hourglass */

/* initialization of the runtime status of indicator lcd_hourglass */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_lcd_hourglass = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_lcd_hourglass,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_lcd_hourglass */

/* ROM configuration of indicator lcd_backlight */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_lcd_backlight = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_lcd_backlight,
	/* hwNumber         */ 1104,
}; /* __ROM_value__ind_screen_frame_lcd_backlight */

/* initialization of the runtime status of indicator lcd_backlight */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_lcd_backlight = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_lcd_backlight,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_lcd_backlight */

/* ROM configuration of indicator screen_backlight */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_screen_backlight = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_screen_backlight,
	/* hwNumber         */ 1200,
}; /* __ROM_value__ind_screen_frame_screen_backlight */

/* initialization of the runtime status of indicator screen_backlight */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_screen_backlight = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_screen_backlight,
	/* currentValue     */ 1000,
}; /* __init_value__ind_screen_frame_screen_backlight */

/* ROM configuration of indicator instruments_backlight */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_instruments_backlight = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_instruments_backlight,
	/* hwNumber         */ 1201,
}; /* __ROM_value__ind_screen_frame_instruments_backlight */

/* initialization of the runtime status of indicator instruments_backlight */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_instruments_backlight = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_instruments_backlight,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_instruments_backlight */

/* ROM configuration of indicator buzzer_frequency */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_buzzer_frequency = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_buzzer_frequency,
	/* hwNumber         */ 1202,
}; /* __ROM_value__ind_screen_frame_buzzer_frequency */

/* initialization of the runtime status of indicator buzzer_frequency */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_buzzer_frequency = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_buzzer_frequency,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_buzzer_frequency */

/* ROM configuration of indicator buzzer_level */
static const vt3_indicator_ROM_PhysicalIndicator FAR __ROM_value__ind_screen_frame_buzzer_level = {
	/* virtual method table */ &vt3_indicator_VMT_PhysicalIndicator,
	/* event code       */ vt3_event_ind_screen_frame_buzzer_level,
	/* hwNumber         */ 1203,
}; /* __ROM_value__ind_screen_frame_buzzer_level */

/* initialization of the runtime status of indicator buzzer_level */
static const vt3_indicator_PhysicalIndicator FAR __init_value__ind_screen_frame_buzzer_level = {
	/* ROM parameters   */ &__ROM_value__ind_screen_frame_buzzer_level,
	/* currentValue     */ 0,
}; /* __init_value__ind_screen_frame_buzzer_level */


/* runtime status of physical indicators */
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F1;
vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F2;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_0;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_1;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_2;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_3;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_4;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_5;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_1;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_2;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_3;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_4;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_5;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_6;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_7;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_8;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_9;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_10;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_11;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_12;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_13;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_14;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_15;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_16;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_17;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_18;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_19;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_20;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_21;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_22;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_23;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_24;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_25;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_27;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_28;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_29;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_30;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_31;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_32;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_33;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_hours;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_odometer;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_is_mile;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_hourglass;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_backlight;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_screen_backlight;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_instruments_backlight;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer_frequency;
vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer_level;

/* initialization data for screen (pointers to all indicators) */
static const vt3_screen_initializer FAR vt3_init_pointers_ind_screen_frame[] = {
	{ &ind_screen_frame_key_F1, &__init_value__ind_screen_frame_key_F1, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_key_F2, &__init_value__ind_screen_frame_key_F2, sizeof(vt3_indicator_PhysicalKey) },
	{ &ind_screen_frame_gauge_0, &__init_value__ind_screen_frame_gauge_0, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_gauge_1, &__init_value__ind_screen_frame_gauge_1, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_gauge_2, &__init_value__ind_screen_frame_gauge_2, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_gauge_3, &__init_value__ind_screen_frame_gauge_3, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_gauge_4, &__init_value__ind_screen_frame_gauge_4, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_gauge_5, &__init_value__ind_screen_frame_gauge_5, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_1, &__init_value__ind_screen_frame_led_1, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_2, &__init_value__ind_screen_frame_led_2, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_3, &__init_value__ind_screen_frame_led_3, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_4, &__init_value__ind_screen_frame_led_4, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_5, &__init_value__ind_screen_frame_led_5, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_6, &__init_value__ind_screen_frame_led_6, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_7, &__init_value__ind_screen_frame_led_7, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_8, &__init_value__ind_screen_frame_led_8, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_9, &__init_value__ind_screen_frame_led_9, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_10, &__init_value__ind_screen_frame_led_10, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_11, &__init_value__ind_screen_frame_led_11, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_12, &__init_value__ind_screen_frame_led_12, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_13, &__init_value__ind_screen_frame_led_13, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_14, &__init_value__ind_screen_frame_led_14, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_15, &__init_value__ind_screen_frame_led_15, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_16, &__init_value__ind_screen_frame_led_16, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_17, &__init_value__ind_screen_frame_led_17, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_18, &__init_value__ind_screen_frame_led_18, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_19, &__init_value__ind_screen_frame_led_19, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_20, &__init_value__ind_screen_frame_led_20, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_21, &__init_value__ind_screen_frame_led_21, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_22, &__init_value__ind_screen_frame_led_22, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_23, &__init_value__ind_screen_frame_led_23, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_24, &__init_value__ind_screen_frame_led_24, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_25, &__init_value__ind_screen_frame_led_25, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_27, &__init_value__ind_screen_frame_led_27, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_28, &__init_value__ind_screen_frame_led_28, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_29, &__init_value__ind_screen_frame_led_29, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_30, &__init_value__ind_screen_frame_led_30, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_31, &__init_value__ind_screen_frame_led_31, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_32, &__init_value__ind_screen_frame_led_32, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_led_33, &__init_value__ind_screen_frame_led_33, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_lcd_hours, &__init_value__ind_screen_frame_lcd_hours, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_lcd_odometer, &__init_value__ind_screen_frame_lcd_odometer, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_lcd_is_mile, &__init_value__ind_screen_frame_lcd_is_mile, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_lcd_hourglass, &__init_value__ind_screen_frame_lcd_hourglass, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_lcd_backlight, &__init_value__ind_screen_frame_lcd_backlight, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_screen_backlight, &__init_value__ind_screen_frame_screen_backlight, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_instruments_backlight, &__init_value__ind_screen_frame_instruments_backlight, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_buzzer_frequency, &__init_value__ind_screen_frame_buzzer_frequency, sizeof(vt3_indicator_PhysicalIndicator) },
	{ &ind_screen_frame_buzzer_level, &__init_value__ind_screen_frame_buzzer_level, sizeof(vt3_indicator_PhysicalIndicator) },
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

	/* indicator "key_F1" of type "PhysicalKey" */

	/* draw the indicator: key_F1 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F1);


	/* indicator "key_F2" of type "PhysicalKey" */

	/* draw the indicator: key_F2 */
	vt3_draw_indicator_PhysicalKey(event, &ind_screen_frame_key_F2);


	/* indicator "gauge_0" of type "PhysicalIndicator" */

	/* draw the indicator: gauge_0 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_gauge_0);


	/* indicator "gauge_1" of type "PhysicalIndicator" */

	/* draw the indicator: gauge_1 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_gauge_1);


	/* indicator "gauge_2" of type "PhysicalIndicator" */

	/* draw the indicator: gauge_2 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_gauge_2);


	/* indicator "gauge_3" of type "PhysicalIndicator" */

	/* draw the indicator: gauge_3 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_gauge_3);


	/* indicator "gauge_4" of type "PhysicalIndicator" */

	/* draw the indicator: gauge_4 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_gauge_4);


	/* indicator "gauge_5" of type "PhysicalIndicator" */

	/* draw the indicator: gauge_5 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_gauge_5);


	/* indicator "led_1" of type "PhysicalIndicator" */

	/* draw the indicator: led_1 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_1);


	/* indicator "led_2" of type "PhysicalIndicator" */

	/* draw the indicator: led_2 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_2);


	/* indicator "led_3" of type "PhysicalIndicator" */

	/* draw the indicator: led_3 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_3);


	/* indicator "led_4" of type "PhysicalIndicator" */

	/* draw the indicator: led_4 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_4);


	/* indicator "led_5" of type "PhysicalIndicator" */

	/* draw the indicator: led_5 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_5);


	/* indicator "led_6" of type "PhysicalIndicator" */

	/* draw the indicator: led_6 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_6);


	/* indicator "led_7" of type "PhysicalIndicator" */

	/* draw the indicator: led_7 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_7);


	/* indicator "led_8" of type "PhysicalIndicator" */

	/* draw the indicator: led_8 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_8);


	/* indicator "led_9" of type "PhysicalIndicator" */

	/* draw the indicator: led_9 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_9);


	/* indicator "led_10" of type "PhysicalIndicator" */

	/* draw the indicator: led_10 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_10);


	/* indicator "led_11" of type "PhysicalIndicator" */

	/* draw the indicator: led_11 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_11);


	/* indicator "led_12" of type "PhysicalIndicator" */

	/* draw the indicator: led_12 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_12);


	/* indicator "led_13" of type "PhysicalIndicator" */

	/* draw the indicator: led_13 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_13);


	/* indicator "led_14" of type "PhysicalIndicator" */

	/* draw the indicator: led_14 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_14);


	/* indicator "led_15" of type "PhysicalIndicator" */

	/* draw the indicator: led_15 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_15);


	/* indicator "led_16" of type "PhysicalIndicator" */

	/* draw the indicator: led_16 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_16);


	/* indicator "led_17" of type "PhysicalIndicator" */

	/* draw the indicator: led_17 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_17);


	/* indicator "led_18" of type "PhysicalIndicator" */

	/* draw the indicator: led_18 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_18);


	/* indicator "led_19" of type "PhysicalIndicator" */

	/* draw the indicator: led_19 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_19);


	/* indicator "led_20" of type "PhysicalIndicator" */

	/* draw the indicator: led_20 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_20);


	/* indicator "led_21" of type "PhysicalIndicator" */

	/* draw the indicator: led_21 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_21);


	/* indicator "led_22" of type "PhysicalIndicator" */

	/* draw the indicator: led_22 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_22);


	/* indicator "led_23" of type "PhysicalIndicator" */

	/* draw the indicator: led_23 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_23);


	/* indicator "led_24" of type "PhysicalIndicator" */

	/* draw the indicator: led_24 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_24);


	/* indicator "led_25" of type "PhysicalIndicator" */

	/* draw the indicator: led_25 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_25);


	/* indicator "led_27" of type "PhysicalIndicator" */

	/* draw the indicator: led_27 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_27);


	/* indicator "led_28" of type "PhysicalIndicator" */

	/* draw the indicator: led_28 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_28);


	/* indicator "led_29" of type "PhysicalIndicator" */

	/* draw the indicator: led_29 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_29);


	/* indicator "led_30" of type "PhysicalIndicator" */

	/* draw the indicator: led_30 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_30);


	/* indicator "led_31" of type "PhysicalIndicator" */

	/* draw the indicator: led_31 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_31);


	/* indicator "led_32" of type "PhysicalIndicator" */

	/* draw the indicator: led_32 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_32);


	/* indicator "led_33" of type "PhysicalIndicator" */

	/* draw the indicator: led_33 */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_led_33);


	/* indicator "lcd_hours" of type "PhysicalIndicator" */

	/* draw the indicator: lcd_hours */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_lcd_hours);


	/* indicator "lcd_odometer" of type "PhysicalIndicator" */

	/* draw the indicator: lcd_odometer */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_lcd_odometer);


	/* indicator "lcd_is_mile" of type "PhysicalIndicator" */

	/* draw the indicator: lcd_is_mile */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_lcd_is_mile);


	/* indicator "lcd_hourglass" of type "PhysicalIndicator" */

	/* draw the indicator: lcd_hourglass */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_lcd_hourglass);


	/* indicator "lcd_backlight" of type "PhysicalIndicator" */

	/* draw the indicator: lcd_backlight */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_lcd_backlight);


	/* indicator "screen_backlight" of type "PhysicalIndicator" */

	/* draw the indicator: screen_backlight */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_screen_backlight);


	/* indicator "instruments_backlight" of type "PhysicalIndicator" */

	/* draw the indicator: instruments_backlight */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_instruments_backlight);


	/* indicator "buzzer_frequency" of type "PhysicalIndicator" */

	/* draw the indicator: buzzer_frequency */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_buzzer_frequency);


	/* indicator "buzzer_level" of type "PhysicalIndicator" */

	/* draw the indicator: buzzer_level */
	vt3_draw_indicator_PhysicalIndicator(event, &ind_screen_frame_buzzer_level);


	/* draw on screen keyboard if necessary */
	vt3_draw_on_screen_keyboard();

} /* draw_ind_screen_frame() */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREENFRAME_C */

/* end of file */
