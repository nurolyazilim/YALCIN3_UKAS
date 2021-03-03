/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREEN_H
#define INCLUDE__VT3_EVENT__SCREEN_H

#include "vt3_base.h"

/* timer event handler for screen: /project/NMS_GUI/screen */
void vt3_event_ind_screen(BYTE event)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen(
	BYTE event, 
	vt3_indicator_SubScreen FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_1_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_2_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/park_brake_tank_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_park_brake_tank_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/accessory_tank_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_accessory_tank_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_left_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_right_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_left_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_right_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_1_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_2_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/park_brake_tank_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_park_brake_tank_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/accessory_tank_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_accessory_tank_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_left_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_right_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_left_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_right_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_1(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_2(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/park_brake_tank 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_park_brake_tank(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/accessory_tank 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_accessory_tank(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_left 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_left(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_right 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_right(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_left(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_right(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_break_tank_1_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_service_break_tank_1_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_break_tank_2_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_service_break_tank_2_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/park_break_tank_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_park_break_tank_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/accessory_tank_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_accessory_tank_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_left_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_right_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_left_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_right_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/alarm_icon_service_tank_1 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_alarm_icon_service_tank_1(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_service_tank_1 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_insufficient_pressure_service_tank_1(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/alarm_icon_service_tank_2 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_alarm_icon_service_tank_2(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_service_tank_2 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_insufficient_pressure_service_tank_2(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/alarm_icon_park_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_alarm_icon_park_tank(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_park_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_insufficient_pressure_park_tank(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/alarm_icon_accessory_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_alarm_icon_accessory_tank(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_accessory_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_insufficient_pressure_accessory_tank(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3(
	BYTE event, 
	vt3_indicator_SubScreen FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_mid_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_mid_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_rear_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_rear_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_front_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_front_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/dropbox_H_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_dropbox_H_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/dropbox_N_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_dropbox_N_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/dropbox_L_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_dropbox_L_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/dropbox 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_dropbox(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/diff_lock 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_diff_lock(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/alarm_icon_accessory_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_alarm_icon_accessory_tank(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/insufficient_pressure_accessory_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_mid_txt 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_mid_txt(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_rear_txt 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_rear_txt(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_front_txt 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_front_txt(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_4 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_4(
	BYTE event, 
	vt3_indicator_SubScreen FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_2 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_2(
	BYTE event, 
	vt3_indicator_SubScreen FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/simple_text 
 * runs every 200ms
 */
void vt3_event_ind_screen_simple_text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/NMS_GUI/screen/simple_text_2 
 * runs every 200ms
 */
void vt3_event_ind_screen_simple_text_2(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__SCREEN_H */

/* end of file */
