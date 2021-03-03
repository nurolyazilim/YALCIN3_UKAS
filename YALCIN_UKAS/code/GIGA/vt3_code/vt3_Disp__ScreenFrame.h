/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREENFRAME_H
#define INCLUDE__VT3_DISP__SCREENFRAME_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F1;
extern vt3_indicator_PhysicalKey                    FAR ind_screen_frame_key_F2;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_0;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_1;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_2;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_3;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_4;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_gauge_5;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_1;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_2;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_3;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_4;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_5;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_6;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_7;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_8;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_9;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_10;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_11;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_12;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_13;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_14;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_15;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_16;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_17;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_18;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_19;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_20;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_21;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_22;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_23;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_24;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_25;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_27;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_28;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_29;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_30;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_31;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_32;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_led_33;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_hours;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_odometer;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_is_mile;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_hourglass;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_lcd_backlight;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_screen_backlight;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_instruments_backlight;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer_frequency;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer_level;

/* the screen initialization function */
void vt3_init_ind_screen_frame(void);

/* the screen drawing function */
void vt3_draw_ind_screen_frame(BYTE event);

/* timer event handler for screen frame: /project/GIGA/screen_frame */
void vt3_event_ind_screen_frame(BYTE event)
;
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREENFRAME_H */

/* end of file */
