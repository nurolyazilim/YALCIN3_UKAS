/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREEN2_C
#define INCLUDE__VT3_EVENT__SCREEN2_C

#include "vt3_base.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen2.h"
#include "vt3_Event__Screen2.h"
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

/* timer event handler for screen: /project/GIGA/Screens/screen_2 */
void vt3_event_ind_screen_2(BYTE event)
{
	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		MOVE_STRING((PSTRING)&DateStringUpdate, (vt3_screen_union.screen_2.Date_Text.currentValue));

		MOVE_STRING((PSTRING)&TimeStringUpdate, (vt3_screen_union.screen_2.Time_Text.currentValue));

		switch ( (SubMenuVar) )
		{
		case 0:
			vt3_screen_union.screen_2.Update_Hour_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Update_Time_SemiColon.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Update_Min_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Update_Day_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Update_Date_Slash1.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Update_Month_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Update_Date_Slash2.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Update_Year_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Time_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Date_Text.color = (INT)((SINT)4);
			break;
		case 1:
			vt3_screen_union.screen_2.Update_Hour_Text.color = (INT)((INT)250);
			vt3_screen_union.screen_2.Update_Time_SemiColon.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Min_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Day_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash1.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Month_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash2.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Year_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Time_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Date_Text.color = (INT)((SINT)0);
			break;
		case 2:
			vt3_screen_union.screen_2.Update_Hour_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Time_SemiColon.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Min_Text.color = (INT)((INT)250);
			vt3_screen_union.screen_2.Update_Day_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash1.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Month_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash2.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Year_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Time_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Date_Text.color = (INT)((SINT)0);
			break;
		case 3:
			vt3_screen_union.screen_2.Update_Hour_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Time_SemiColon.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Min_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Day_Text.color = (INT)((INT)250);
			vt3_screen_union.screen_2.Update_Date_Slash1.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Month_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash2.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Year_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Time_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Date_Text.color = (INT)((SINT)0);
			break;
		case 4:
			vt3_screen_union.screen_2.Update_Hour_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Time_SemiColon.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Min_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Day_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash1.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Month_Text.color = (INT)((INT)250);
			vt3_screen_union.screen_2.Update_Date_Slash2.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Year_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Time_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Date_Text.color = (INT)((SINT)0);
			break;
		case 5:
			vt3_screen_union.screen_2.Update_Hour_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Time_SemiColon.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Min_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Day_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash1.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Month_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash2.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Year_Text.color = (INT)((INT)250);
			vt3_screen_union.screen_2.Time_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Date_Text.color = (INT)((SINT)0);
			break;
		case 6:
			vt3_screen_union.screen_2.Update_Hour_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Time_SemiColon.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Min_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Day_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash1.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Month_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Date_Slash2.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Update_Year_Text.color = (INT)((SINT)4);
			vt3_screen_union.screen_2.Time_Text.color = (INT)((SINT)0);
			vt3_screen_union.screen_2.Date_Text.color = (INT)((SINT)0);
			GIGAMenuVar03 = (USINT)((SINT)1);
			break;
		default:
			;
		}
		

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return;

	}


} /* end of event code for indicator: screen_2 */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Date_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Date_Text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = (PSTRING)&(DateOnScreen);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Date_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Date_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Time_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Time_Text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = (PSTRING)&(TimeOnScreen);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Time_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Time_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Date_Time_Headline 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Date_Time_Headline(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT9, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Date_Time_Headline
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Date_Time_Headline */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Date_Time_Caption_Text 
 * runs every 0ms
 */
void vt3_event_ind_screen_2_Date_Time_Caption_Text(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((GIGAMenuVar01));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Date_Time_Caption_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Date_Time_Caption_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Return_Text 
 * runs every 0ms
 */
void vt3_event_ind_screen_2_Return_Text(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((GIGAMenuVar02));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Return_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Return_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Min_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Min_Text(
	BYTE event, 
	vt3_indicator_SimpleTextEditable FARPTR ind)
{
	ind->currentValue = (PSTRING)&(MinuteUptOnScreen);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Update_Min_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Update_Min_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Hour_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Hour_Text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = (PSTRING)&(HourUptOnScreen);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Update_Hour_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Update_Hour_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Time_SemiColon 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Time_SemiColon(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	static const STRING(1) FAR _str = { 1, 1, ":" };
	ind->currentValue = (PSTRING)&_str;

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Update_Time_SemiColon
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Update_Time_SemiColon */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Month_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Month_Text(
	BYTE event, 
	vt3_indicator_SimpleTextEditable FARPTR ind)
{
	ind->currentValue = (PSTRING)&(MonthUptOnScreen);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Update_Month_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Update_Month_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Day_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Day_Text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = (PSTRING)&(DayUptOnScreen);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Update_Day_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Update_Day_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Date_Slash1 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Date_Slash1(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	static const STRING(1) FAR _str = { 1, 1, "/" };
	ind->currentValue = (PSTRING)&_str;

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Update_Date_Slash1
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Update_Date_Slash1 */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Year_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Year_Text(
	BYTE event, 
	vt3_indicator_SimpleTextEditable FARPTR ind)
{
	ind->currentValue = (PSTRING)&(YearUptOnScreen);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Update_Year_Text
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Update_Year_Text */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Date_Slash2 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Date_Slash2(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	static const STRING(1) FAR _str = { 1, 1, "/" };
	ind->currentValue = (PSTRING)&_str;

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Update_Date_Slash2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Update_Date_Slash2 */


/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Return_Text_2 
 * runs every 0ms
 */
void vt3_event_ind_screen_2_Return_Text_2(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((GIGAMenuVar03));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_2/Return_Text_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Return_Text_2 */


#endif /* INCLUDE__VT3_EVENT__SCREEN2_C */

/* end of file */
