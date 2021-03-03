/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREENFRAME_C
#define INCLUDE__VT3_EVENT__SCREENFRAME_C

#include "vt3_base.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__ScreenFrame.h"
#include "vt3_Event__ScreenFrame.h"
#include "vt3_extra.h"

/* define the names of the indicators */

/* define the names of the indicators */

/* suppress HC12 specific warnings */
#pragma MESSAGE DISABLE C5909 // Assignment in condition
#pragma MESSAGE DISABLE C5918 // Removed dead goto
#pragma MESSAGE DISABLE C5917 // Removed dead assignment
#pragma MESSAGE DISABLE C5660 // Removed dead code
#pragma MESSAGE DISABLE C1420 // Result of function-call is ignored
#pragma MESSAGE DISABLE C4002 // Result not used

/* timer event handler for screen frame: /project/GIGA/screen_frame */
void vt3_event_ind_screen_frame(BYTE event)
{
	{
		/* literal constants used in ST */
		static const STRING(0) FAR _const_0 = { 0, 0, "" };
		static const STRING(0) FAR _const_1 = { 0, 0, "" };
		/* end of literals */

		/* statements */
		if ( GT_WORD_2((ind_screen_frame_key_F1.pressedTime),
			((INT)10000)) ) {
			giga_button_test_var = TRUE;
			ScreenBrightH = (UINT)((SINT)8);
			ScreenBrightL = (UINT)((SINT)5);
			PanelBrightH = (UINT)((SINT)8);
			PanelBrightL = (UINT)((SINT)2);
		} else if  ( TRUE ) {
			giga_button_test_var = FALSE;
		}

		if ( (ind_screen_frame_key_F1.eventDown) ) {
			Cmd_GIGAMenu_Active = TRUE;
			Stat_GIGAMenu_Ctr1 = (UDINT)((SINT)0);
			switch ( (ActiveScreen) )
			{
			case 0:
				ActiveScreen = (USINT)((SINT)5);
				MenuVar = (USINT)((SINT)0);
				break;
			case 1:
				if ( NOT_BOOL((DateTimeUpdating)) ) {
					MenuVar = (USINT)ADD_USINT((MenuVar),
						((SINT)1));
				} else if  ( TRUE ) {
					switch ( (SubMenuVar) )
					{
					case 1:
						HourUpdate = (INT)ADD_INT((HourUpdate),
							((SINT)1));
						if ( GT_INT_2((HourUpdate),
							((SINT)23)) ) {
							HourUpdate = (INT)((SINT)0);
						}
						break;
					case 2:
						MinuteUpdate = (INT)ADD_INT((MinuteUpdate),
							((SINT)1));
						if ( GT_INT_2((MinuteUpdate),
							((SINT)59)) ) {
							MinuteUpdate = (INT)((SINT)0);
						}
						break;
					case 3:
						DayUpdate = (INT)ADD_INT((DayUpdate),
							((SINT)1));
						if ( GT_INT_2((DayUpdate),
							((SINT)31)) ) {
							DayUpdate = (INT)((SINT)1);
						}
						break;
					case 4:
						MonthUpdate = (INT)ADD_INT((MonthUpdate),
							((SINT)1));
						if ( GT_INT_2((MonthUpdate),
							((SINT)12)) ) {
							MonthUpdate = (INT)((SINT)1);
						}
						break;
					case 5:
						YearUpdate = (INT)ADD_INT((YearUpdate),
							((SINT)1));
						if ( GT_INT_2((YearUpdate),
							((INT)2075)) ) {
							YearUpdate = (INT)((INT)2015);
						}
						break;
					default:
						;
					}
					
				}
				if ( GT_BYTE_2((MenuVar),
					((SINT)1)) ) {
					MenuVar = (USINT)((SINT)0);
				}
				break;
			case 3:
				if ( NOT_BOOL((BrightnessUpdating)) ) {
					MenuVar = (USINT)ADD_USINT((MenuVar),
						((SINT)1));
				} else if  ( TRUE ) {
					switch ( (SubMenuVar2) )
					{
					case 1:
						PanelBrightH = (UINT)ADD_UINT((PanelBrightH),
							((SINT)1));
						if ( GT_WORD_2((PanelBrightH),
							((SINT)10)) ) {
							PanelBrightH = (UINT)((SINT)1);
						}
						break;
					case 2:
						PanelBrightL = (UINT)ADD_UINT((PanelBrightL),
							((SINT)1));
						if ( GT_WORD_2((PanelBrightL),
							((SINT)10)) ) {
							PanelBrightL = (UINT)((SINT)1);
						}
						break;
					case 3:
						ScreenBrightH = (UINT)ADD_UINT((ScreenBrightH),
							((SINT)1));
						if ( GT_WORD_2((ScreenBrightH),
							((SINT)10)) ) {
							ScreenBrightH = (UINT)((SINT)1);
						}
						break;
					case 4:
						ScreenBrightL = (UINT)ADD_UINT((ScreenBrightL),
							((SINT)1));
						if ( GT_WORD_2((ScreenBrightL),
							((SINT)10)) ) {
							ScreenBrightL = (UINT)((SINT)1);
						}
						break;
					case 5:
						ScreenBrightH = (UINT)((SINT)8);
						ScreenBrightL = (UINT)((SINT)5);
						PanelBrightH = (UINT)((SINT)8);
						PanelBrightL = (UINT)((SINT)2);
						break;
					default:
						;
					}
					
				}
				if ( GT_BYTE_2((MenuVar),
					((SINT)1)) ) {
					MenuVar = (USINT)((SINT)0);
				}
				break;
			case 5:
				MenuVar = (USINT)ADD_USINT((MenuVar),
					((SINT)1));
				if ( GT_BYTE_2((MenuVar),
					((SINT)7)) ) {
					MenuVar = (USINT)((SINT)0);
				}
				break;
			default:
				;
			}
			
		}

		if ( (ind_screen_frame_key_F2.eventDown) ) {
			Cmd_GIGAMenu_Active = TRUE;
			Stat_GIGAMenu_Ctr1 = (UDINT)((SINT)0);
			switch ( (ActiveScreen) )
			{
			case 1:
				if ( EQ_BYTE_2((MenuVar),
					((SINT)0)) ) {
					if ( NOT_BOOL((DateTimeUpdating)) ) {
						if ( NE_STRING((PSTRING)&(DateStringUpdate),
							(PSTRING)&_const_0) ) {
							YearUpdate = (INT)DATE_TO_YEAR(VT3_ATOMIC_READ_DATE(DateNow));
							MonthUpdate = (INT)DATE_TO_MONTH(VT3_ATOMIC_READ_DATE(DateNow));
							DayUpdate = (INT)DATE_TO_DAY(VT3_ATOMIC_READ_DATE(DateNow));
						}
						if ( NE_STRING((PSTRING)&(TimeStringUpdate),
							(PSTRING)&_const_1) ) {
							MinuteUpdate = (INT)TOD_TO_MINUTE(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow));
							HourUpdate = (INT)TOD_TO_HOUR(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow));
						}
					}
					DateTimeUpdating = TRUE;
					SubMenuVar = (USINT)ADD_USINT((SubMenuVar),
						((SINT)1));
					if ( GT_BYTE_2((SubMenuVar),
						((SINT)7)) ) {
						SubMenuVar = (USINT)((SINT)0);
					}
					if ( EQ_BYTE_2((SubMenuVar),
						((SINT)7)) ) {
						DateTimeUpdate = CONCAT_DATE_TOD(YMD_TO_DATE((YearUpdate),
								(MonthUpdate),
								(DayUpdate)),
							HMS_TO_TOD((HourUpdate),
								(MinuteUpdate),
								((SINT)0),
								((SINT)0)));
						SetDateTime = TRUE;
						DateTimeUpdating = FALSE;
					}
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)1)) ) {
					ActiveScreen = (USINT)((SINT)0);
					MenuVar = (USINT)((SINT)0);
				}
				break;
			case 2:
				if ( EQ_BYTE_2((MenuVar),
					((SINT)0)) ) {
					ActiveScreen = (USINT)((SINT)0);
					MenuVar = (USINT)((SINT)0);
				}
				break;
			case 3:
				if ( EQ_BYTE_2((MenuVar),
					((SINT)0)) ) {
					BrightnessUpdating = TRUE;
					SubMenuVar2 = (USINT)ADD_USINT((SubMenuVar2),
						((SINT)1));
					if ( GT_BYTE_2((SubMenuVar2),
						((SINT)6)) ) {
						save_bytearray_P();
						SubMenuVar2 = (USINT)((SINT)0);
						BrightnessUpdating = FALSE;
					}
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)1)) ) {
					ActiveScreen = (USINT)((SINT)0);
					MenuVar = (USINT)((SINT)0);
				}
				break;
			case 4:
				if ( EQ_BYTE_2((MenuVar),
					((SINT)0)) ) {
					ActiveScreen = (USINT)((SINT)0);
					MenuVar = (USINT)((SINT)0);
				}
				break;
			case 5:
				if ( EQ_BYTE_2((MenuVar),
					((SINT)0)) ) {
					ActiveScreen = (USINT)((SINT)1);
					MenuVar = (USINT)((SINT)0);
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)1)) ) {
					ActiveScreen = (USINT)((SINT)3);
					MenuVar = (USINT)((SINT)0);
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)2)) ) {
					ActiveScreen = (USINT)((SINT)2);
					MenuVar = (USINT)((SINT)0);
					SubMenuVar2 = (USINT)((SINT)0);
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)3)) ) {
					ActiveScreen = (USINT)((SINT)4);
					MenuVar = (USINT)((SINT)0);
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)4)) ) {
					vt3_language = (UINT)((SINT)0);
					Vt3_languageSetVar = (UINT)(vt3_language);
					SaveParameter = TRUE;
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)5)) ) {
					vt3_language = (UINT)((SINT)1);
					Vt3_languageSetVar = (UINT)(vt3_language);
					SaveParameter = TRUE;
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)6)) ) {
					vt3_language = (UINT)((SINT)2);
					Vt3_languageSetVar = (UINT)(vt3_language);
					SaveParameter = TRUE;
				} else if  ( EQ_BYTE_2((MenuVar),
					((SINT)7)) ) {
					ActiveScreen = (USINT)((SINT)0);
					MenuVar = (USINT)((SINT)0);
				}
				break;
			default:
				;
			}
			
		}

		vt3_screen = (UINT)(ActiveScreen);

		MOVE_STRING((PSTRING)&MinuteUptOnScreen, INT_TO_STRING((MinuteUpdate)));

		MOVE_STRING((PSTRING)&HourUptOnScreen, INT_TO_STRING((HourUpdate)));

		MOVE_STRING((PSTRING)&DayUptOnScreen, INT_TO_STRING((DayUpdate)));

		MOVE_STRING((PSTRING)&MonthUptOnScreen, INT_TO_STRING((MonthUpdate)));

		MOVE_STRING((PSTRING)&YearUptOnScreen, INT_TO_STRING((YearUpdate)));

		MOVE_STRING((PSTRING)&ScreenBrightHUptOnScreen, UINT_TO_STRING((ScreenBrightH)));

		MOVE_STRING((PSTRING)&ScreenBrightLUptOnScreen, UINT_TO_STRING((ScreenBrightL)));

		MOVE_STRING((PSTRING)&PanelBrightHUptOnScreen, UINT_TO_STRING((PanelBrightH)));

		MOVE_STRING((PSTRING)&PanelBrightLUptOnScreen, UINT_TO_STRING((PanelBrightL)));

		if ( AND_BOOL((Cmd_GIGAMenu_Active),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Stat_GIGAMenu_Ctr1),
				((INT)10000))) ) {
			Stat_GIGAMenu_Ctr1 = (UDINT)((SINT)0);
			Cmd_GIGAMenu_Active = FALSE;
			ActiveScreen = (USINT)((SINT)0);
			MenuVar = (USINT)((SINT)0);
			Secret_Menu01 = (USINT)((SINT)0);
			SubMenuVar = (USINT)((SINT)0);
			SubMenuVar2 = (USINT)((SINT)0);
		}

		if ( (Cmd_GIGAMenu_Active) ) {
			Stat_GIGAMenu_Ctr1 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Stat_GIGAMenu_Ctr1),
				((SINT)100));
		} else if  ( TRUE ) {
			Stat_GIGAMenu_Ctr1 = (UDINT)((SINT)0);
		}

		if ( NOT_BOOL((vt3_can_alarm_CAN_168)) ) {
			TotalTripMeter = (REAL)UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(MC2M_TERA_TripCounter));
			TotalOdometer = (REAL)UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(MC2M_TERA_TotalOdometer));
			if ( GT_DWORD_2(VT3_ATOMIC_READ_UDINT(MC2M_TERA_TotalOdometer),
				VT3_ATOMIC_READ_UDINT(GIGAOdometerBackup)) ) {
				GIGAOdometerBackup = (UDINT)VT3_ATOMIC_READ_UDINT(MC2M_TERA_TotalOdometer);
			}
		}

		if ( (MC2M_TERA_Icon_Status_GIGA_Bsy) ) {
			if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
					((DINT)60000L)),
				((SINT)0)) ) {
				save_bytearray_R();
			}
		} else if  ( TRUE ) {
			if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
					((INT)600)),
				((SINT)0)) ) {
				save_bytearray_R();
			}
		}

		if ( OR_BOOL(AND_BOOL(GT_WORD_2((ind_screen_frame_key_F2.pressedTime),
					((INT)500)),
				EQ_BYTE_2((ActiveScreen),
					((SINT)0))),
			GE_REAL_2(VT3_ATOMIC_READ_REAL(TotalTripMeter),
				1000000.0)) ) {
			GIGA_MC2M_ResetTrip = TRUE;
		} else if  ( TRUE ) {
			GIGA_MC2M_ResetTrip = FALSE;
		}

		ScreenTripMeter = (UDINT)REAL_TO_UDINT(MUL_REAL(VT3_ATOMIC_READ_REAL(TotalTripMeter),
				0.01));

		ScreenOdometer = (UDINT)REAL_TO_UDINT(MUL_REAL(VT3_ATOMIC_READ_REAL(TotalOdometer),
				0.001));

		
		SetDateTime1__call();

		
		GIGAMenu1__call();

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return;

	}


} /* end of event code for indicator: screen_frame */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/gauge_0 */
void vt3_event_ind_screen_frame_gauge_0(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (ADD_DINT((GIGAEngineOilPressure),
		(GIGAGaugeOverride0)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/gauge_0
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: gauge_0 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/gauge_1 */
void vt3_event_ind_screen_frame_gauge_1(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (ADD_DINT((GIGAEngineTempValue),
		(GIGAGaugeOverride1)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/gauge_1
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: gauge_1 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/gauge_2 */
void vt3_event_ind_screen_frame_gauge_2(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (ADD_DINT((GIGAEngineSpeed),
		(GIGAGaugeOverride2)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/gauge_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: gauge_2 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/gauge_3 */
void vt3_event_ind_screen_frame_gauge_3(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (ADD_DINT((GIGATransOilTemperature),
		(GIGAGaugeOverride3)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/gauge_3
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: gauge_3 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/gauge_4 */
void vt3_event_ind_screen_frame_gauge_4(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (ADD_DINT((GIGAFuelLevel),
		(GIGAGaugeOverride4)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/gauge_4
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: gauge_4 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/gauge_5 */
void vt3_event_ind_screen_frame_gauge_5(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (ADD_DINT((GIGASpeed),
		(GIGAGaugeOverride5)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/gauge_5
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
		/* write the event code in language: "C" */
	
	}

} /* end of event code for indicator: gauge_5 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_1 */
void vt3_event_ind_screen_frame_led_1(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L22),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_1
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_1 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_2 */
void vt3_event_ind_screen_frame_led_2(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L23),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_2 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_3 */
void vt3_event_ind_screen_frame_led_3(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L24),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_3
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_3 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_4 */
void vt3_event_ind_screen_frame_led_4(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L41),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_4
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_4 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_5 */
void vt3_event_ind_screen_frame_led_5(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L42),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_5
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_5 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_6 */
void vt3_event_ind_screen_frame_led_6(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L18),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_6
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_6 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_7 */
void vt3_event_ind_screen_frame_led_7(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L40),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_7
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_7 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_8 */
void vt3_event_ind_screen_frame_led_8(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L39),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_8
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_8 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_9 */
void vt3_event_ind_screen_frame_led_9(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL((MC2M_TERA_Icon_Status_L06),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_9
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_9 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_10 */
void vt3_event_ind_screen_frame_led_10(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((L10_Difflock_Dropbox),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_10
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_10 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_11 */
void vt3_event_ind_screen_frame_led_11(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((L11_Difflock_Front),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_11
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_11 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_12 */
void vt3_event_ind_screen_frame_led_12(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((L12_Difflock_Rear),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_12
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_12 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_13 */
void vt3_event_ind_screen_frame_led_13(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L17),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_13
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_13 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_14 */
void vt3_event_ind_screen_frame_led_14(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L03),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_14
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_14 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_15 */
void vt3_event_ind_screen_frame_led_15(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L31),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_15
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_15 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_16 */
void vt3_event_ind_screen_frame_led_16(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L25),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_16
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_16 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_17 */
void vt3_event_ind_screen_frame_led_17(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L26),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_17
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_17 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_18 */
void vt3_event_ind_screen_frame_led_18(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L36),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_18
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_18 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_19 */
void vt3_event_ind_screen_frame_led_19(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL((MC2M_TERA_Icon_Status_L07),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_19
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_19 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_20 */
void vt3_event_ind_screen_frame_led_20(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L10),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_20
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_20 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_21 */
void vt3_event_ind_screen_frame_led_21(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L43),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_21
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_21 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_22 */
void vt3_event_ind_screen_frame_led_22(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL(OR_BOOL(OR_BOOL((MC2M_TERA_Icon_Status_L14_3),
					(MC2M_TERA_Icon_Status_L14_1)),
				(MC2M_TERA_Icon_Status_L14_5)),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_22
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_22 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_23 */
void vt3_event_ind_screen_frame_led_23(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L09),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_23
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_23 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_24 */
void vt3_event_ind_screen_frame_led_24(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L15),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_24
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_24 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_25 */
void vt3_event_ind_screen_frame_led_25(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L28),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_25
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_25 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_27 */
void vt3_event_ind_screen_frame_led_27(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L29),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_27
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_27 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_28 */
void vt3_event_ind_screen_frame_led_28(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L01),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_28
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_28 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_29 */
void vt3_event_ind_screen_frame_led_29(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L12),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_29
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_29 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_30 */
void vt3_event_ind_screen_frame_led_30(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L13),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_30
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_30 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_31 */
void vt3_event_ind_screen_frame_led_31(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L11),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_31
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_31 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_32 */
void vt3_event_ind_screen_frame_led_32(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L30),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_32
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_32 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/led_33 */
void vt3_event_ind_screen_frame_led_33(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (OR_BOOL(AND_BOOL((MC2M_TERA_Icon_Status_L27),
			(IgnitionOn)),
		(GIGALedOverride)));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/led_33
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: led_33 */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/lcd_hours */
void vt3_event_ind_screen_frame_lcd_hours(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (VT3_ATOMIC_READ_UDINT(ScreenOdometer));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/lcd_hours
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: lcd_hours */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/lcd_odometer */
void vt3_event_ind_screen_frame_lcd_odometer(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = (VT3_ATOMIC_READ_UDINT(ScreenTripMeter));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/lcd_odometer
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: lcd_odometer */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/lcd_backlight */
void vt3_event_ind_screen_frame_lcd_backlight(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = ((BacklightScreen));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/lcd_backlight
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: lcd_backlight */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/screen_backlight */
void vt3_event_ind_screen_frame_screen_backlight(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = ((BacklightScreen));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/screen_backlight
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: screen_backlight */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/instruments_backlight */
void vt3_event_ind_screen_frame_instruments_backlight(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = ((Backlight));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/instruments_backlight
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: instruments_backlight */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/buzzer_frequency */
void vt3_event_ind_screen_frame_buzzer_frequency(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = ((Buzzer_Frequency));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/buzzer_frequency
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: buzzer_frequency */


/* timer event handler for physical indicator: /project/GIGA/screen_frame/buzzer_level */
void vt3_event_ind_screen_frame_buzzer_level(
	BYTE event, 
	vt3_indicator_PhysicalIndicator FARPTR ind)
{
	ind->currentValue = ((Buzzer_Level));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/screen_frame/buzzer_level
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: buzzer_level */


#endif /* INCLUDE__VT3_EVENT__SCREENFRAME_C */

/* end of file */
