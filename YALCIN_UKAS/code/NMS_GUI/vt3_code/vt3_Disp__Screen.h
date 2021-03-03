/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN_H
#define INCLUDE__VT3_DISP__SCREEN_H

#include "vt3_base.h"


/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_screen_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_SubScreen                      multiscreen;
	vt3_indicator_SubScreenPage                  multiscreen_0;
	vt3_indicator_Number                         multiscreen_0_service_brake_tank_1_fb;
	vt3_indicator_Number                         multiscreen_0_service_brake_tank_2_fb;
	vt3_indicator_Number                         multiscreen_0_park_brake_tank_fb;
	vt3_indicator_Number                         multiscreen_0_accessory_tank_fb;
	vt3_indicator_Number                         multiscreen_0_hydraulic_tank_pressure_fb;
	vt3_indicator_Number                         multiscreen_0_fuel_level_left_fb;
	vt3_indicator_Number                         multiscreen_0_fuel_level_right_fb;
	vt3_indicator_Number                         multiscreen_0_fuel_temp_left_fb;
	vt3_indicator_Number                         multiscreen_0_fuel_temp_right_fb;
	vt3_indicator_Number                         multiscreen_0_hydraulic_tank_temp_fb;
	vt3_indicator_NumberEditable                 multiscreen_0_service_brake_tank_1_input;
	vt3_indicator_NumberEditable                 multiscreen_0_service_brake_tank_2_input;
	vt3_indicator_NumberEditable                 multiscreen_0_park_brake_tank_input;
	vt3_indicator_NumberEditable                 multiscreen_0_accessory_tank_input;
	vt3_indicator_NumberEditable                 multiscreen_0_hydraulic_tank_pressure_input;
	vt3_indicator_NumberEditable                 multiscreen_0_fuel_level_left_input;
	vt3_indicator_NumberEditable                 multiscreen_0_fuel_level_right_input;
	vt3_indicator_NumberEditable                 multiscreen_0_fuel_temp_left_input;
	vt3_indicator_NumberEditable                 multiscreen_0_fuel_temp_right_input;
	vt3_indicator_NumberEditable                 multiscreen_0_hydraulic_tank_temp_input;
	vt3_indicator_SimpleText                     multiscreen_0_service_brake_tank_1;
	vt3_indicator_SimpleText                     multiscreen_0_service_brake_tank_2;
	vt3_indicator_SimpleText                     multiscreen_0_park_brake_tank;
	vt3_indicator_SimpleText                     multiscreen_0_accessory_tank;
	vt3_indicator_SimpleText                     multiscreen_0_hydraulic_tank_pressure;
	vt3_indicator_SimpleText                     multiscreen_0_fuel_level_left;
	vt3_indicator_SimpleText                     multiscreen_0_fuel_level_right;
	vt3_indicator_SimpleText                     multiscreen_0_fuel_temp_left;
	vt3_indicator_SimpleText                     multiscreen_0_fuel_temp_right;
	vt3_indicator_SimpleText                     multiscreen_0_hydraulic_tank_temp;
	vt3_indicator_Touch                          multiscreen_0_service_brake_tank_1_touch;
	vt3_indicator_Touch                          multiscreen_0_service_brake_tank_2_touch;
	vt3_indicator_Touch                          multiscreen_0_park_brake_tank_touch;
	vt3_indicator_Touch                          multiscreen_0_accessory_tank_touch;
	vt3_indicator_Touch                          multiscreen_0_hydraulic_tank_pressure_touch;
	vt3_indicator_Touch                          multiscreen_0_fuel_level_left_touch;
	vt3_indicator_Touch                          multiscreen_0_fuel_level_right_touch;
	vt3_indicator_Touch                          multiscreen_0_fuel_temp_left_touch;
	vt3_indicator_Touch                          multiscreen_0_fuel_temp_right_touch;
	vt3_indicator_Touch                          multiscreen_0_hydraulic_tank_temp_touch;
	vt3_indicator_Touch                          multiscreen_0_service_brake_tank_1_send;
	vt3_indicator_Touch                          multiscreen_0_service_brake_tank_2_send;
	vt3_indicator_Touch                          multiscreen_0_park_brake_tank_send;
	vt3_indicator_Touch                          multiscreen_0_accessory_tank_send;
	vt3_indicator_Touch                          multiscreen_0_hydraulic_tank_pressure_send;
	vt3_indicator_Touch                          multiscreen_0_fuel_level_left_send;
	vt3_indicator_Touch                          multiscreen_0_fuel_level_right_send;
	vt3_indicator_Touch                          multiscreen_0_fuel_temp_right_send;
	vt3_indicator_Touch                          multiscreen_0_fuel_temp_left_send;
	vt3_indicator_Touch                          multiscreen_0_hydraulic_tank_temp_send;
	vt3_indicator_Number                         multiscreen_0_service_break_tank_1_raw_fb;
	vt3_indicator_Number                         multiscreen_0_service_break_tank_2_raw_fb;
	vt3_indicator_Number                         multiscreen_0_park_break_tank_raw_fb;
	vt3_indicator_Number                         multiscreen_0_accessory_tank_raw_fb;
	vt3_indicator_Number                         multiscreen_0_hydraulic_tank_pressure_raw_fb;
	vt3_indicator_Number                         multiscreen_0_fuel_level_left_raw_fb;
	vt3_indicator_Number                         multiscreen_0_fuel_level_right_raw_fb;
	vt3_indicator_Number                         multiscreen_0_fuel_temp_left_raw_fb;
	vt3_indicator_Number                         multiscreen_0_fuel_temp_right_raw_fb;
	vt3_indicator_Number                         multiscreen_0_hydraulic_tank_temp_raw_fb;
	vt3_indicator_MultiBitmap                    multiscreen_0_alarm_icon_service_tank_1;
	vt3_indicator_MultiText                      multiscreen_0_insufficient_pressure_service_tank_1;
	vt3_indicator_MultiBitmap                    multiscreen_0_alarm_icon_service_tank_2;
	vt3_indicator_MultiText                      multiscreen_0_insufficient_pressure_service_tank_2;
	vt3_indicator_MultiBitmap                    multiscreen_0_alarm_icon_park_tank;
	vt3_indicator_MultiText                      multiscreen_0_insufficient_pressure_park_tank;
	vt3_indicator_MultiBitmap                    multiscreen_0_alarm_icon_accessory_tank;
	vt3_indicator_MultiText                      multiscreen_0_insufficient_pressure_accessory_tank;
	vt3_indicator_SubScreenPage                  multiscreen_1;
	vt3_indicator_SubScreen                      multiscreen_3;
	vt3_indicator_SubScreenPage                  multiscreen_3_0;
	vt3_indicator_Touch                          multiscreen_3_0_dropbox_H_touch;
	vt3_indicator_Touch                          multiscreen_3_0_dropbox_N_touch;
	vt3_indicator_Touch                          multiscreen_3_0_dropbox_L_touch;
	vt3_indicator_Touch                          multiscreen_3_0_dropbox_admin_touch;
	vt3_indicator_Touch                          multiscreen_3_0_diff_admin_touch;
	vt3_indicator_Touch                          multiscreen_3_0_difflock_mid_touch;
	vt3_indicator_Touch                          multiscreen_3_0_difflock_rear_touch;
	vt3_indicator_Touch                          multiscreen_3_0_difflock_front_touch;
	vt3_indicator_MultiBitmap                    multiscreen_3_0_difflock_mid_fb;
	vt3_indicator_MultiBitmap                    multiscreen_3_0_difflock_rear_fb;
	vt3_indicator_MultiBitmap                    multiscreen_3_0_difflock_front_fb;
	vt3_indicator_MultiBitmap                    multiscreen_3_0_dropbox_H_fb;
	vt3_indicator_MultiBitmap                    multiscreen_3_0_dropbox_N_fb;
	vt3_indicator_MultiBitmap                    multiscreen_3_0_dropbox_L_fb;
	vt3_indicator_SimpleText                     multiscreen_3_0_dropbox;
	vt3_indicator_SimpleText                     multiscreen_3_0_diff_lock;
	vt3_indicator_MultiBitmap                    multiscreen_3_0_alarm_icon_accessory_tank;
	vt3_indicator_MultiText                      multiscreen_3_0_insufficient_pressure_accessory_tank;
	vt3_indicator_SimpleText                     multiscreen_3_0_difflock_mid_txt;
	vt3_indicator_SimpleText                     multiscreen_3_0_difflock_rear_txt;
	vt3_indicator_SimpleText                     multiscreen_3_0_difflock_front_txt;
	vt3_indicator_SubScreenPage                  multiscreen_3_1;
	vt3_indicator_SubScreen                      multiscreen_4;
	vt3_indicator_SubScreenPage                  multiscreen_4_0;
	vt3_indicator_SubScreenPage                  multiscreen_4_1;
	vt3_indicator_SubScreen                      multiscreen_2;
	vt3_indicator_SubScreenPage                  multiscreen_2_0;
	vt3_indicator_SubScreenPage                  multiscreen_2_1;
	vt3_indicator_Touch                          degis;
	vt3_indicator_Touch                          degis_3;
	vt3_indicator_Touch                          degis_2;
	vt3_indicator_SimpleText                     simple_text;
	vt3_indicator_SimpleText                     simple_text_2;
} vt3_screen_struct_screen_t;


/* the screen initialization function */
void vt3_init_ind_screen(void);

/* the screen drawing function */
void vt3_draw_ind_screen(BYTE event);

/* timer event handler for screen: /project/NMS_GUI/screen */
void vt3_event_ind_screen(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__SCREEN_H */

/* end of file */
