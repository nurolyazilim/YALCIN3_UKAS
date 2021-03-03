/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREENFRAME_H
#define INCLUDE__VT3_DISP__SCREENFRAME_H

#include "vt3_base.h"


extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_screen_backlight;
extern vt3_indicator_PhysicalIndicator              FAR ind_screen_frame_buzzer;

/* the screen initialization function */
void vt3_init_ind_screen_frame(void);

/* the screen drawing function */
void vt3_draw_ind_screen_frame(BYTE event);

/* timer event handler for screen frame: /project/NMS_GUI/screen_frame */
void vt3_event_ind_screen_frame(BYTE event)
;

#endif /* INCLUDE__VT3_DISP__SCREENFRAME_H */

/* end of file */
