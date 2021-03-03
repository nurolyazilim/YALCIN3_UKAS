/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREEN_CPP
#define INCLUDE__VT3_EVENT__SCREEN_CPP

#include "vt3_base.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen.h"
#include "vt3_Event__Screen.h"
#include "vt3_extra.h"

/* define the names of the indicators */

/* define the names of the indicators */

/* timer event handler for screen: /project/NMS_GUI/screen */
void vt3_event_ind_screen(BYTE event)
{
	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		vt3_screen_union.screen.multiscreen.currentValue = (USINT)(page_currentValue);

		vt3_screen_union.screen.multiscreen_2.currentValue = (USINT)(page2_currentValue);

		vt3_screen_union.screen.multiscreen_3.currentValue = (USINT)(page3_currentValue);

		vt3_screen_union.screen.multiscreen_4.currentValue = (USINT)(page4_currentValue);

		if ( AND_BOOL((vt3_screen_union.screen.degis.pressed),
			NOT_BOOL((page1_selected))) ) {
			page_currentValue = (USINT)((SINT)0);
			page2_currentValue = (USINT)((SINT)1);
			page3_currentValue = (USINT)((SINT)1);
			page4_currentValue = (USINT)((SINT)1);
			page1_selected = TRUE;
			page2_selected = FALSE;
			page3_selected = FALSE;
			vt3_screen_union.screen.degis_2.pressed = FALSE;
			vt3_screen_union.screen.degis_3.pressed = FALSE;
		} else if  ( AND_BOOL((vt3_screen_union.screen.degis_2.pressed),
			NOT_BOOL((page2_selected))) ) {
			page1_selected = FALSE;
			page2_selected = TRUE;
			page3_selected = FALSE;
			page_currentValue = (USINT)((SINT)1);
			page2_currentValue = (USINT)((SINT)1);
			page3_currentValue = (USINT)((SINT)0);
			page4_currentValue = (USINT)((SINT)1);
			vt3_screen_union.screen.degis.pressed = FALSE;
			vt3_screen_union.screen.degis_3.pressed = FALSE;
		} else if  ( AND_BOOL((vt3_screen_union.screen.degis_3.pressed),
			NOT_BOOL((page3_selected))) ) {
			page1_selected = FALSE;
			page2_selected = FALSE;
			page3_selected = TRUE;
			page_currentValue = (USINT)((SINT)1);
			page2_currentValue = (USINT)((SINT)1);
			page3_currentValue = (USINT)((SINT)1);
			page4_currentValue = (USINT)((SINT)0);
			vt3_screen_union.screen.degis.pressed = FALSE;
			vt3_screen_union.screen.degis_2.pressed = FALSE;
		}

		if ( LT_DINT_2((service_brake_tank_1_val),
			((SINT)0)) ) {
			service_brake_tank_1_val = (DINT)((SINT)0);
		} else if  ( GT_DINT_2((service_brake_tank_1_val),
			((SINT)80)) ) {
			service_brake_tank_1_val = (DINT)((SINT)80);
		}

		if ( LT_WORD_2((MC2M_NMSGUI_service_brake_tank_1),
			((SINT)46)) ) {
			alarm_icon_service_tank_1 = (USINT)((SINT)1);
			insufficient_pressure_service_tank_1 = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			alarm_icon_service_tank_1 = (USINT)((SINT)0);
			insufficient_pressure_service_tank_1 = (USINT)((SINT)0);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_touch.pressed) ) {
			NMSGUI_MC2M_service_brake_tank_1_touch = TRUE;
			if ( LT_WORD_2((MC2M_NMSGUI_service_brake_tank_1),
				((SINT)46)) ) {
				vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input.enabled = FALSE;
				vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send.enabled = FALSE;
			} else if  ( TRUE ) {
				vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input.enabled = TRUE;
				vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send.enabled = TRUE;
			}
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send.pressed),
				NOT_BOOL((service_brake_tank_1_change))) ) {
				NMSGUI_MC2M_service_brake_tank_1 = (UINT)DINT_TO_UINT((service_brake_tank_1_val));
				service_brake_tank_1_change = TRUE;
			}
			if ( NE_DINT((NMSGUI_MC2M_service_brake_tank_1),
				(service_brake_tank_1_val)) ) {
				service_brake_tank_1_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_service_brake_tank_1_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_service_brake_tank_1_send.enabled = FALSE;
			NMSGUI_MC2M_service_brake_tank_1 = (UINT)(MC2M_NMSGUI_service_brake_tank_1);
		}

		if ( LT_DINT_2((service_brake_tank_2_val),
			((SINT)0)) ) {
			service_brake_tank_2_val = (DINT)((SINT)0);
		} else if  ( GT_DINT_2((service_brake_tank_2_val),
			((SINT)80)) ) {
			service_brake_tank_2_val = (DINT)((SINT)80);
		}

		if ( LT_WORD_2((MC2M_NMSGUI_service_brake_tank_2),
			((SINT)46)) ) {
			alarm_icon_service_tank_2 = (USINT)((SINT)1);
			insufficient_pressure_service_tank_2 = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			alarm_icon_service_tank_2 = (USINT)((SINT)0);
			insufficient_pressure_service_tank_2 = (USINT)((SINT)0);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_touch.pressed) ) {
			NMSGUI_MC2M_service_brake_tank_2_touch = TRUE;
			if ( LT_WORD_2((MC2M_NMSGUI_service_brake_tank_2),
				((SINT)46)) ) {
				vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input.enabled = FALSE;
				vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send.enabled = FALSE;
			} else if  ( TRUE ) {
				vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input.enabled = TRUE;
				vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send.enabled = TRUE;
			}
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send.pressed),
				NOT_BOOL((service_brake_tank_2_change))) ) {
				NMSGUI_MC2M_service_brake_tank_2 = (UINT)DINT_TO_UINT((service_brake_tank_2_val));
				service_brake_tank_2_change = TRUE;
			}
			if ( NE_DINT((NMSGUI_MC2M_service_brake_tank_2),
				(service_brake_tank_2_val)) ) {
				service_brake_tank_2_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_service_brake_tank_2_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_service_brake_tank_2_send.enabled = FALSE;
			NMSGUI_MC2M_service_brake_tank_2 = (UINT)(MC2M_NMSGUI_service_brake_tank_2);
		}

		if ( LT_DINT_2((park_brake_tank_val),
			((SINT)0)) ) {
			park_brake_tank_val = (DINT)((SINT)0);
		} else if  ( GT_DINT_2((park_brake_tank_val),
			((SINT)80)) ) {
			park_brake_tank_val = (DINT)((SINT)80);
		}

		if ( LT_WORD_2((MC2M_NMSGUI_park_brake_tank),
			((SINT)46)) ) {
			alarm_icon_park_tank = (USINT)((SINT)1);
			insufficient_pressure_park_tank = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			alarm_icon_park_tank = (USINT)((SINT)0);
			insufficient_pressure_park_tank = (USINT)((SINT)0);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_park_brake_tank_touch.pressed) ) {
			NMSGUI_MC2M_park_brake_tank_touch = TRUE;
			if ( LT_WORD_2((MC2M_NMSGUI_park_brake_tank),
				((SINT)46)) ) {
				vt3_screen_union.screen.multiscreen_0_park_brake_tank_input.enabled = FALSE;
				vt3_screen_union.screen.multiscreen_0_park_brake_tank_send.enabled = FALSE;
			} else if  ( TRUE ) {
				vt3_screen_union.screen.multiscreen_0_park_brake_tank_input.enabled = TRUE;
				vt3_screen_union.screen.multiscreen_0_park_brake_tank_send.enabled = TRUE;
			}
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_park_brake_tank_send.pressed),
				NOT_BOOL((park_brake_tank_change))) ) {
				NMSGUI_MC2M_park_brake_tank = (UINT)DINT_TO_UINT((park_brake_tank_val));
				park_brake_tank_change = TRUE;
			}
			if ( NE_DINT((NMSGUI_MC2M_park_brake_tank),
				(park_brake_tank_val)) ) {
				park_brake_tank_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_park_brake_tank_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_park_brake_tank_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_park_brake_tank_send.enabled = FALSE;
			NMSGUI_MC2M_park_brake_tank = (UINT)(MC2M_NMSGUI_park_brake_tank);
		}

		if ( LT_DINT_2((accessory_tank_val),
			((SINT)0)) ) {
			accessory_tank_val = (DINT)((SINT)0);
		} else if  ( GT_DINT_2((accessory_tank_val),
			((SINT)80)) ) {
			accessory_tank_val = (DINT)((SINT)80);
		}

		if ( LT_WORD_2((MC2M_NMSGUI_accessory_tank),
			((SINT)61)) ) {
			alarm_icon_accessory_tank = (USINT)((SINT)1);
			insufficient_pressure_accessory_tank = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			alarm_icon_accessory_tank = (USINT)((SINT)0);
			insufficient_pressure_accessory_tank = (USINT)((SINT)0);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_accessory_tank_touch.pressed) ) {
			NMSGUI_MC2M_accessory_tank_touch = TRUE;
			if ( LT_WORD_2((MC2M_NMSGUI_accessory_tank),
				((SINT)61)) ) {
				vt3_screen_union.screen.multiscreen_0_accessory_tank_input.enabled = FALSE;
				vt3_screen_union.screen.multiscreen_0_accessory_tank_send.enabled = FALSE;
			} else if  ( TRUE ) {
				vt3_screen_union.screen.multiscreen_0_accessory_tank_input.enabled = TRUE;
				vt3_screen_union.screen.multiscreen_0_accessory_tank_send.enabled = TRUE;
			}
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_accessory_tank_send.pressed),
				NOT_BOOL((accessory_tank_change))) ) {
				NMSGUI_MC2M_accessory_tank = (UINT)DINT_TO_UINT((accessory_tank_val));
				accessory_tank_change = TRUE;
			}
			if ( NE_DINT((NMSGUI_MC2M_accessory_tank),
				(accessory_tank_val)) ) {
				accessory_tank_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_accessory_tank_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_accessory_tank_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_accessory_tank_send.enabled = FALSE;
			NMSGUI_MC2M_accessory_tank = (UINT)(MC2M_NMSGUI_accessory_tank);
		}

		if ( LT_BYTE_2((hydraulic_tank_pressure_val),
			((SINT)0)) ) {
			hydraulic_tank_pressure_val = (USINT)((SINT)0);
		} else if  ( GT_BYTE_2((hydraulic_tank_pressure_val),
			((SINT)80)) ) {
			hydraulic_tank_pressure_val = (USINT)((SINT)80);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_touch.pressed) ) {
			NMSGUI_MC2M_hydraulic_tank_pressure_touch = TRUE;
			vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input.enabled = TRUE;
			vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send.enabled = TRUE;
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send.pressed),
				NOT_BOOL((hydraulic_tank_pressure_change))) ) {
				NMSGUI_MC2M_hydraulic_tank_pressure = (USINT)(hydraulic_tank_pressure_val);
				hydraulic_tank_pressure_change = TRUE;
			}
			if ( NE_BYTE((NMSGUI_MC2M_hydraulic_tank_pressure),
				(hydraulic_tank_pressure_val)) ) {
				hydraulic_tank_pressure_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_hydraulic_tank_pressure_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_hydraulic_tank_pressure_send.enabled = FALSE;
			NMSGUI_MC2M_hydraulic_tank_pressure = (USINT)(MC2M_NMSGUI_hydraulic_tank_pressure);
		}

		if ( LT_SINT_2((fuel_level_left_val),
			((SINT)0)) ) {
			fuel_level_left_val = (SINT)((SINT)0);
		} else if  ( GT_SINT_2((fuel_level_left_val),
			((SINT)100)) ) {
			fuel_level_left_val = (SINT)((SINT)100);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_fuel_level_left_touch.pressed) ) {
			NMSGUI_MC2M_fuel_level_left_touch = TRUE;
			vt3_screen_union.screen.multiscreen_0_fuel_level_left_input.enabled = TRUE;
			vt3_screen_union.screen.multiscreen_0_fuel_level_left_send.enabled = TRUE;
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_fuel_level_left_send.pressed),
				NOT_BOOL((fuel_level_left_change))) ) {
				NMSGUI_MC2M_fuel_level_left = (SINT)(fuel_level_left_val);
				fuel_level_left_change = TRUE;
			}
			if ( NE_SINT((NMSGUI_MC2M_fuel_level_left),
				(fuel_level_left_val)) ) {
				fuel_level_left_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_fuel_level_left_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_fuel_level_left_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_fuel_level_left_send.enabled = FALSE;
			NMSGUI_MC2M_fuel_level_left = (SINT)(MC2M_NMSGUI_fuel_level_left);
		}

		if ( LT_SINT_2((fuel_level_right_val),
			((SINT)0)) ) {
			fuel_level_right_val = (SINT)((SINT)0);
		} else if  ( GT_SINT_2((fuel_level_right_val),
			((SINT)100)) ) {
			fuel_level_right_val = (SINT)((SINT)100);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_fuel_level_right_touch.pressed) ) {
			NMSGUI_MC2M_fuel_level_right_touch = TRUE;
			vt3_screen_union.screen.multiscreen_0_fuel_level_right_input.enabled = TRUE;
			vt3_screen_union.screen.multiscreen_0_fuel_level_right_send.enabled = TRUE;
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_fuel_level_right_send.pressed),
				NOT_BOOL((fuel_level_right_change))) ) {
				NMSGUI_MC2M_fuel_level_right = (SINT)(fuel_level_right_val);
				fuel_level_right_change = TRUE;
			}
			if ( NE_SINT((NMSGUI_MC2M_fuel_level_right),
				(fuel_level_right_val)) ) {
				fuel_level_right_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_fuel_level_right_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_fuel_level_right_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_fuel_level_right_send.enabled = FALSE;
			NMSGUI_MC2M_fuel_level_right = (SINT)(MC2M_NMSGUI_fuel_level_right);
		}

		if ( LT_SINT_2((fuel_temp_left_val),
			((SINT)-40)) ) {
			fuel_temp_left_val = (SINT)((SINT)-40);
		} else if  ( GT_SINT_2((fuel_temp_left_val),
			((SINT)110)) ) {
			fuel_temp_left_val = (SINT)((SINT)110);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_fuel_temp_left_touch.pressed) ) {
			NMSGUI_MC2M_fuel_temp_left_touch = TRUE;
			vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input.enabled = TRUE;
			vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send.enabled = TRUE;
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send.pressed),
				NOT_BOOL((fuel_temp_left_change))) ) {
				NMSGUI_MC2M_fuel_temp_left = (SINT)(fuel_temp_left_val);
				fuel_temp_left_change = TRUE;
			}
			if ( NE_SINT((NMSGUI_MC2M_fuel_temp_left),
				(fuel_temp_left_val)) ) {
				fuel_temp_left_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_fuel_temp_left_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_fuel_temp_left_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_fuel_temp_left_send.enabled = FALSE;
			NMSGUI_MC2M_fuel_temp_left = (SINT)(MC2M_NMSGUI_fuel_temp_left);
		}

		if ( LT_SINT_2((fuel_temp_right_val),
			((SINT)-40)) ) {
			fuel_temp_right_val = (SINT)((SINT)-40);
		} else if  ( GT_SINT_2((fuel_temp_right_val),
			((SINT)110)) ) {
			fuel_temp_right_val = (SINT)((SINT)110);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_fuel_temp_right_touch.pressed) ) {
			NMSGUI_MC2M_fuel_temp_right_touch = TRUE;
			vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input.enabled = TRUE;
			vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send.enabled = TRUE;
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send.pressed),
				NOT_BOOL((fuel_temp_right_change))) ) {
				NMSGUI_MC2M_fuel_temp_right = (SINT)(fuel_temp_right_val);
				fuel_temp_right_change = TRUE;
			}
			if ( NE_SINT((NMSGUI_MC2M_fuel_temp_right),
				(fuel_temp_right_val)) ) {
				fuel_temp_right_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_fuel_temp_right_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_fuel_temp_right_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_fuel_temp_right_send.enabled = FALSE;
			NMSGUI_MC2M_fuel_temp_right = (SINT)(MC2M_NMSGUI_fuel_temp_right);
		}

		if ( LT_SINT_2((hydraulic_tank_temp_val),
			((SINT)-40)) ) {
			hydraulic_tank_temp_val = (SINT)((SINT)-40);
		} else if  ( GT_SINT_2((hydraulic_tank_temp_val),
			((SINT)110)) ) {
			hydraulic_tank_temp_val = (SINT)((SINT)110);
		}

		if ( (vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_touch.pressed) ) {
			NMSGUI_MC2M_hydraulic_tank_temp_touch = TRUE;
			vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input.enabled = TRUE;
			vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send.enabled = TRUE;
			if ( AND_BOOL((vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send.pressed),
				NOT_BOOL((hydraulic_tank_temp_change))) ) {
				NMSGUI_MC2M_hydraulic_tank_temp = (SINT)(hydraulic_tank_temp_val);
				hydraulic_tank_temp_change = TRUE;
			}
			if ( NE_SINT((NMSGUI_MC2M_hydraulic_tank_temp),
				(hydraulic_tank_temp_val)) ) {
				hydraulic_tank_temp_change = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_hydraulic_tank_temp_touch = FALSE;
			vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_input.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_0_hydraulic_tank_temp_send.enabled = FALSE;
			NMSGUI_MC2M_hydraulic_tank_temp = (SINT)(MC2M_NMSGUI_hydraulic_tank_temp);
		}

		vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch.enabled = (dropbox_high);

		vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch.enabled = (dropbox_neutral);

		vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch.enabled = (dropbox_low);

		dropbox_high = FALSE;

		dropbox_neutral = FALSE;

		dropbox_low = FALSE;

		if ( LT_WORD_2((MC2M_NMSGUI_accessory_tank),
			((SINT)61)) ) {
			NMSGUI_MC2M_dropbox_admin_touch = FALSE;
			vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch.enabled = FALSE;
			alarm_icon_accessory_tank = (USINT)((SINT)1);
			insufficient_pressure_accessory_tank = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch.enabled = TRUE;
			alarm_icon_accessory_tank = (USINT)((SINT)0);
			insufficient_pressure_accessory_tank = (USINT)((SINT)0);
			if ( (vt3_screen_union.screen.multiscreen_3_0_dropbox_admin_touch.pressed) ) {
				NMSGUI_MC2M_dropbox_admin_touch = TRUE;
				dropbox_high = TRUE;
				dropbox_neutral = TRUE;
				dropbox_low = TRUE;
				if ( AND_BOOL((vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch.pressed),
					NOT_BOOL((dropbox_high_selected))) ) {
					dropbox_high_selected = TRUE;
					dropbox_neutral_selected = FALSE;
					dropbox_low_selected = FALSE;
					vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch.pressed = FALSE;
					vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch.pressed = FALSE;
					NMSGUI_MC2M_dropbox_high_touch = TRUE;
					NMSGUI_MC2M_dropbox_neutral_touch = FALSE;
					NMSGUI_MC2M_dropbox_low_touch = FALSE;
				} else if  ( AND_BOOL((vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch.pressed),
					NOT_BOOL((dropbox_neutral_selected))) ) {
					dropbox_high_selected = FALSE;
					dropbox_neutral_selected = TRUE;
					dropbox_low_selected = FALSE;
					vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch.pressed = FALSE;
					vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch.pressed = FALSE;
					NMSGUI_MC2M_dropbox_high_touch = FALSE;
					NMSGUI_MC2M_dropbox_neutral_touch = TRUE;
					NMSGUI_MC2M_dropbox_low_touch = FALSE;
				} else if  ( AND_BOOL((vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch.pressed),
					NOT_BOOL((dropbox_low_selected))) ) {
					dropbox_high_selected = FALSE;
					dropbox_neutral_selected = FALSE;
					dropbox_low_selected = TRUE;
					vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch.pressed = FALSE;
					vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch.pressed = FALSE;
					NMSGUI_MC2M_dropbox_high_touch = FALSE;
					NMSGUI_MC2M_dropbox_neutral_touch = FALSE;
					NMSGUI_MC2M_dropbox_low_touch = TRUE;
				}
			} else if  ( TRUE ) {
				NMSGUI_MC2M_dropbox_admin_touch = FALSE;
				dropbox_high = FALSE;
				dropbox_neutral = FALSE;
				dropbox_low = FALSE;
				NMSGUI_MC2M_dropbox_high_touch = FALSE;
				NMSGUI_MC2M_dropbox_neutral_touch = FALSE;
				NMSGUI_MC2M_dropbox_low_touch = FALSE;
				vt3_screen_union.screen.multiscreen_3_0_dropbox_N_touch.pressed = FALSE;
				vt3_screen_union.screen.multiscreen_3_0_dropbox_L_touch.pressed = FALSE;
				vt3_screen_union.screen.multiscreen_3_0_dropbox_H_touch.pressed = FALSE;
			}
		}

		if ( (MC2M_NMSGUI_dropbox_h_fb) ) {
			dropbox_h_image = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			dropbox_h_image = (USINT)((SINT)0);
		}

		if ( (MC2M_NMSGUI_dropbox_n_fb) ) {
			dropbox_n_image = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			dropbox_n_image = (USINT)((SINT)0);
		}

		if ( (MC2M_NMSGUI_dropbox_l_fb) ) {
			dropbox_l_image = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			dropbox_l_image = (USINT)((SINT)0);
		}

		vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch.enabled = FALSE;

		vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch.enabled = FALSE;

		vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch.enabled = FALSE;

		if ( (vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch.pressed) ) {
			NMSGUI_MC2M_difflock_admin_touch = TRUE;
			vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch.enabled = TRUE;
			if ( (vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch.pressed) ) {
				NMSGUI_MC2M_difflock_mid_touch = TRUE;
				NMSGUI_MC2M_difflock_rear_touch = FALSE;
				NMSGUI_MC2M_difflock_front_touch = FALSE;
				vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch.enabled = TRUE;
			} else if  ( TRUE ) {
				NMSGUI_MC2M_difflock_mid_touch = FALSE;
				vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch.pressed = FALSE;
				vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch.pressed = FALSE;
			}
			if ( (vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch.pressed) ) {
				if ( (vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch.pressed) ) {
					NMSGUI_MC2M_difflock_mid_touch = TRUE;
					NMSGUI_MC2M_difflock_rear_touch = TRUE;
					NMSGUI_MC2M_difflock_front_touch = FALSE;
					vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch.enabled = TRUE;
				}
			} else if  ( TRUE ) {
				NMSGUI_MC2M_difflock_rear_touch = FALSE;
				vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch.pressed = FALSE;
			}
			if ( (vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch.pressed) ) {
				if ( AND_BOOL((vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch.pressed),
					(vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch.pressed)) ) {
					NMSGUI_MC2M_difflock_mid_touch = TRUE;
					NMSGUI_MC2M_difflock_rear_touch = TRUE;
					NMSGUI_MC2M_difflock_front_touch = TRUE;
				}
			} else if  ( TRUE ) {
				NMSGUI_MC2M_difflock_front_touch = FALSE;
			}
		} else if  ( TRUE ) {
			NMSGUI_MC2M_difflock_mid_touch = FALSE;
			NMSGUI_MC2M_difflock_rear_touch = FALSE;
			NMSGUI_MC2M_difflock_front_touch = FALSE;
			vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch.enabled = FALSE;
			vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch.pressed = FALSE;
			vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch.pressed = FALSE;
			vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch.pressed = FALSE;
			NMSGUI_MC2M_difflock_admin_touch = FALSE;
		}

		if ( (vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch.pressed) ) {
			if ( (vt3_screen_union.screen.multiscreen_3_0_difflock_mid_touch.pressed) ) {
				if ( (MC2M_NMSGUI_difflock_mid_fb) ) {
					difflock_mid_image = (USINT)((SINT)1);
				} else if  ( TRUE ) {
					if ( (blink05) ) {
						difflock_mid_image = (USINT)((SINT)1);
					} else if  ( TRUE ) {
						difflock_mid_image = (USINT)((SINT)0);
					}
				}
			} else if  ( TRUE ) {
				difflock_mid_image = (USINT)((SINT)0);
			}
		} else if  ( TRUE ) {
			difflock_mid_image = (USINT)((SINT)0);
		}

		if ( (vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch.pressed) ) {
			if ( (vt3_screen_union.screen.multiscreen_3_0_difflock_rear_touch.pressed) ) {
				if ( (MC2M_NMSGUI_difflock_rear_fb) ) {
					difflock_rear_image = (USINT)((SINT)1);
				} else if  ( TRUE ) {
					if ( (blink05) ) {
						difflock_rear_image = (USINT)((SINT)1);
					} else if  ( TRUE ) {
						difflock_rear_image = (USINT)((SINT)0);
					}
				}
			} else if  ( TRUE ) {
				difflock_rear_image = (USINT)((SINT)0);
			}
		} else if  ( TRUE ) {
			difflock_rear_image = (USINT)((SINT)0);
		}

		if ( (vt3_screen_union.screen.multiscreen_3_0_diff_admin_touch.pressed) ) {
			if ( (vt3_screen_union.screen.multiscreen_3_0_difflock_front_touch.pressed) ) {
				if ( (MC2M_NMSGUI_difflock_front_fb) ) {
					difflock_front_image = (USINT)((SINT)1);
				} else if  ( TRUE ) {
					if ( (blink05) ) {
						difflock_front_image = (USINT)((SINT)1);
					} else if  ( TRUE ) {
						difflock_front_image = (USINT)((SINT)0);
					}
				}
			} else if  ( TRUE ) {
				difflock_front_image = (USINT)((SINT)0);
			}
		} else if  ( TRUE ) {
			difflock_front_image = (USINT)((SINT)0);
		}

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return;

	}


} /* end of event code for indicator: screen */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen(
	BYTE event, 
	vt3_indicator_SubScreen FARPTR ind)
{
	ind->currentValue = (((SINT)0));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: multiscreen */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_1_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_service_brake_tank_1));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: service_brake_tank_1_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_2_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_service_brake_tank_2));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: service_brake_tank_2_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/park_brake_tank_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_park_brake_tank_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_park_brake_tank));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/park_brake_tank_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: park_brake_tank_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/accessory_tank_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_accessory_tank_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_accessory_tank));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/accessory_tank_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: accessory_tank_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_hydraulic_tank_pressure));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: hydraulic_tank_pressure_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_left_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_fuel_level_left));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_level_left_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_right_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_fuel_level_right));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_level_right_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_left_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_fuel_temp_left));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_temp_left_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_right_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_fuel_temp_right));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_temp_right_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_fb 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_hydraulic_tank_temp));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: hydraulic_tank_temp_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_1_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (service_brake_tank_1_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (service_brake_tank_1_val);
	}
	else
	{
		(service_brake_tank_1_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: service_brake_tank_1_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_2_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (service_brake_tank_2_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (service_brake_tank_2_val);
	}
	else
	{
		(service_brake_tank_2_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: service_brake_tank_2_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/park_brake_tank_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_park_brake_tank_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (park_brake_tank_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (park_brake_tank_val);
	}
	else
	{
		(park_brake_tank_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/park_brake_tank_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: park_brake_tank_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/accessory_tank_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_accessory_tank_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (accessory_tank_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (accessory_tank_val);
	}
	else
	{
		(accessory_tank_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/accessory_tank_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: accessory_tank_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (hydraulic_tank_pressure_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (hydraulic_tank_pressure_val);
	}
	else
	{
		(hydraulic_tank_pressure_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: hydraulic_tank_pressure_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_left_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (fuel_level_left_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (fuel_level_left_val);
	}
	else
	{
		(fuel_level_left_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_level_left_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_right_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (fuel_level_right_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (fuel_level_right_val);
	}
	else
	{
		(fuel_level_right_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_level_right_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_left_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (fuel_temp_left_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (fuel_temp_left_val);
	}
	else
	{
		(fuel_temp_left_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_temp_left_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_right_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (fuel_temp_right_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (fuel_temp_right_val);
	}
	else
	{
		(fuel_temp_right_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_temp_right_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_input 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_input(
	BYTE event, 
	vt3_indicator_NumberEditable FARPTR ind)
{
	if ( event == VT3_DISP_EVENT_OPEN )
	{
		ind->currentValue = (hydraulic_tank_temp_val);
	}
	else if( !vt3_has_focus((const vt3_indicator_abstract FARPTR) ind) )
	{
		ind->currentValue = (hydraulic_tank_temp_val);
	}
	else
	{
		(hydraulic_tank_temp_val) = ind->currentValue;
	}

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_input
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: hydraulic_tank_temp_input */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_1(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_0, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_1
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: service_brake_tank_1 */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_service_brake_tank_2(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_1, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/service_brake_tank_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: service_brake_tank_2 */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/park_brake_tank 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_park_brake_tank(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_2, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/park_brake_tank
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: park_brake_tank */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/accessory_tank 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_accessory_tank(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_3, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/accessory_tank
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: accessory_tank */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_4, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: hydraulic_tank_pressure */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_left 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_left(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_5, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_level_left
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_level_left */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_right 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_right(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_6, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_level_right
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_level_right */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_left(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_7, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_temp_left */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_right(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_8, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_temp_right */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_9, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: hydraulic_tank_temp */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_break_tank_1_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_service_break_tank_1_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_service_break_tank_1_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/service_break_tank_1_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: service_break_tank_1_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/service_break_tank_2_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_service_break_tank_2_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_service_break_tank_2_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/service_break_tank_2_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: service_break_tank_2_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/park_break_tank_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_park_break_tank_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_park_break_tank_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/park_break_tank_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: park_break_tank_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/accessory_tank_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_accessory_tank_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_accessory_tank_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/accessory_tank_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: accessory_tank_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_pressure_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_pressure_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: hydraulic_tank_pressure_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_left_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_fuel_level_left_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_level_left_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_level_left_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_level_right_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_fuel_level_right_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_level_right_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_level_right_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_left_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_fuel_temp_left_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_temp_left_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_temp_left_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_fuel_temp_right_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_fuel_temp_right_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/fuel_temp_right_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: fuel_temp_right_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_raw_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_hydraulic_tank_temp_raw_fb(
	BYTE event, 
	vt3_indicator_Number FARPTR ind)
{
	ind->currentValue = ((MC2M_NMSGUI_hydraulic_tank_temp_raw_fb));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/hydraulic_tank_temp_raw_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: hydraulic_tank_temp_raw_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/alarm_icon_service_tank_1 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_alarm_icon_service_tank_1(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((alarm_icon_service_tank_1));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/alarm_icon_service_tank_1
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: alarm_icon_service_tank_1 */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_service_tank_1 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_insufficient_pressure_service_tank_1(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((insufficient_pressure_service_tank_1));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_service_tank_1
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: insufficient_pressure_service_tank_1 */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/alarm_icon_service_tank_2 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_alarm_icon_service_tank_2(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((alarm_icon_service_tank_2));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/alarm_icon_service_tank_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: alarm_icon_service_tank_2 */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_service_tank_2 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_insufficient_pressure_service_tank_2(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((insufficient_pressure_service_tank_2));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_service_tank_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: insufficient_pressure_service_tank_2 */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/alarm_icon_park_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_alarm_icon_park_tank(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((alarm_icon_park_tank));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/alarm_icon_park_tank
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: alarm_icon_park_tank */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_park_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_insufficient_pressure_park_tank(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((insufficient_pressure_park_tank));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_park_tank
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: insufficient_pressure_park_tank */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/alarm_icon_accessory_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_alarm_icon_accessory_tank(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((alarm_icon_accessory_tank));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/alarm_icon_accessory_tank
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: alarm_icon_accessory_tank */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_accessory_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_0_insufficient_pressure_accessory_tank(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((insufficient_pressure_accessory_tank));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen/0/insufficient_pressure_accessory_tank
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: insufficient_pressure_accessory_tank */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3(
	BYTE event, 
	vt3_indicator_SubScreen FARPTR ind)
{
	ind->currentValue = (((SINT)0));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: multiscreen_3 */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_mid_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_mid_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((difflock_mid_image));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/difflock_mid_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: difflock_mid_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_rear_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_rear_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((difflock_rear_image));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/difflock_rear_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: difflock_rear_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_front_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_front_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((difflock_front_image));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/difflock_front_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: difflock_front_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/dropbox_H_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_dropbox_H_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((dropbox_h_image));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/dropbox_H_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: dropbox_H_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/dropbox_N_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_dropbox_N_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((dropbox_n_image));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/dropbox_N_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: dropbox_N_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/dropbox_L_fb 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_dropbox_L_fb(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((dropbox_l_image));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/dropbox_L_fb
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: dropbox_L_fb */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/dropbox 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_dropbox(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	static const STRING(7) FAR _str = { 7, 7, "DropBox" };
	ind->currentValue = (PSTRING)&_str;

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/dropbox
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: dropbox */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/diff_lock 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_diff_lock(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	static const STRING(9) FAR _str = { 9, 9, "Diff Lock" };
	ind->currentValue = (PSTRING)&_str;

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/diff_lock
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: diff_lock */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/alarm_icon_accessory_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_alarm_icon_accessory_tank(
	BYTE event, 
	vt3_indicator_MultiBitmap FARPTR ind)
{
	ind->currentValue = ((alarm_icon_accessory_tank));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/alarm_icon_accessory_tank
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: alarm_icon_accessory_tank */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/insufficient_pressure_accessory_tank 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_3_0_insufficient_pressure_accessory_tank(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((insufficient_pressure_accessory_tank));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/insufficient_pressure_accessory_tank
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: insufficient_pressure_accessory_tank */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_mid_txt 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_mid_txt(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_11, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/difflock_mid_txt
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: difflock_mid_txt */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_rear_txt 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_rear_txt(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_12, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/difflock_rear_txt
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: difflock_rear_txt */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_3/0/difflock_front_txt 
 * runs every 200ms
 */
void vt3_event_ind_screen_multiscreen_3_0_difflock_front_txt(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT_NMSGUI_13, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_3/0/difflock_front_txt
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: difflock_front_txt */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_4 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_4(
	BYTE event, 
	vt3_indicator_SubScreen FARPTR ind)
{
	ind->currentValue = (((SINT)0));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_4
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: multiscreen_4 */


/* timer event handler for indicator: /project/NMS_GUI/screen/multiscreen_2 
 * runs every 100ms
 */
void vt3_event_ind_screen_multiscreen_2(
	BYTE event, 
	vt3_indicator_SubScreen FARPTR ind)
{
	ind->currentValue = (((SINT)0));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/multiscreen_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: multiscreen_2 */


/* timer event handler for indicator: /project/NMS_GUI/screen/simple_text 
 * runs every 200ms
 */
void vt3_event_ind_screen_simple_text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	static const STRING(9) FAR _str = { 9, 9, "Analog In" };
	ind->currentValue = (PSTRING)&_str;

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/simple_text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: simple_text */


/* timer event handler for indicator: /project/NMS_GUI/screen/simple_text_2 
 * runs every 200ms
 */
void vt3_event_ind_screen_simple_text_2(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	static const STRING(19) FAR _str = { 19, 19, "DropBox / Diff Lock" };
	ind->currentValue = (PSTRING)&_str;

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/NMS_GUI/screen/simple_text_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: simple_text_2 */


#endif /* INCLUDE__VT3_EVENT__SCREEN_CPP */

/* end of file */
