/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DM01_ECM_DECODE_H
#define INCLUDE__VT3_POU__DM01_ECM_DECODE_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"
#include "vt3_POU__Enum13.h"
#include "vt3_POU__Enum14.h"
#include "vt3_POU__Enum15.h"
#include "vt3_POU__Enum16.h"
#include "vt3_POU__Enum17.h"
#include "vt3_POU__Enum255.h"
#include "vt3_POU__Enum256.h"
#include "vt3_POU__Enum257.h"
#include "vt3_POU__Enum258.h"
#include "vt3_POU__Enum259.h"
#include "vt3_POU__Enum260.h"
#include "vt3_POU__Enum261.h"
#include "vt3_POU__Enum262.h"
#include "vt3_POU__Enum334.h"
#include "vt3_POU__Enum342.h"
#include "vt3_POU__Enum346.h"
#include "vt3_POU__Enum347.h"
#include "vt3_POU__Enum348.h"
#include "vt3_POU__Enum349.h"
#include "vt3_POU__Enum350.h"
#include "vt3_POU__Enum351.h"
#include "vt3_POU__Enum352.h"
#include "vt3_POU__Enum353.h"
#include "vt3_POU__Enum354.h"
#include "vt3_POU__Enum355.h"
#include "vt3_POU__Enum356.h"
#include "vt3_POU__Enum357.h"
#include "vt3_POU__Enum358.h"
#include "vt3_POU__Enum359.h"
#include "vt3_POU__Enum360.h"
#include "vt3_POU__Enum361.h"
#include "vt3_POU__Enum362.h"
#include "vt3_POU__Enum363.h"
#include "vt3_POU__Enum364.h"
#include "vt3_POU__Enum365.h"
#include "vt3_POU__Enum366.h"
#include "vt3_POU__Enum367.h"
#include "vt3_POU__Enum368.h"
#include "vt3_POU__Enum369.h"
#include "vt3_POU__Enum370.h"
#include "vt3_POU__Enum375.h"
#include "vt3_POU__Enum45.h"
#include "vt3_POU__Enum46.h"
#include "vt3_POU__Enum47.h"
#include "vt3_POU__Enum48.h"
#include "vt3_POU__Enum49.h"
#include "vt3_POU__Enum50.h"
#include "vt3_POU__Enum51.h"
#include "vt3_POU__Enum52.h"
#include "vt3_POU__Enum53.h"
#include "vt3_POU__Enum54.h"
#include "vt3_POU__Enum55.h"
#include "vt3_POU__Enum63.h"
#include "vt3_POU__Enum64.h"
#include "vt3_POU__Enum65.h"
#include "vt3_POU__Enum66.h"
#include "vt3_POU__Enum67.h"
#include "vt3_POU__Enum68.h"
#include "vt3_POU__Enum69.h"
#include "vt3_POU__Enum70.h"
#include "vt3_POU__Enum71.h"
#include "vt3_POU__Enum72.h"
#include "vt3_POU__Enum73.h"
#include "vt3_POU__Enum74.h"
#include "vt3_POU__Enum75.h"
#include "vt3_POU__Enum76.h"
#include "vt3_POU__Enum77.h"
#include "vt3_POU__Enum78.h"
#include "vt3_POU__Enum79.h"
#include "vt3_POU__Enum80.h"
#include "vt3_POU__Enum81.h"
#include "vt3_POU__Enum82.h"
#include "vt3_POU__Enum83.h"
#include "vt3_POU__Enum84.h"
#include "vt3_POU__Enum85.h"
#include "vt3_POU__Enum86.h"
#include "vt3_POU__array_2_of_byte.h"
#include "vt3_POU__Enum_TransOilFilterRestriction.h"
#include "vt3_POU__Enum_TransOilLevel.h"
#include "vt3_POU__Enum_SelectedTank.h"
#include "vt3_POU__Enum_ParkerCommands.h"
#include "vt3_POU__Enum87.h"
#include "vt3_POU__Enum88.h"
#include "vt3_POU__ARRAY100UDINT.h"
#include "vt3_POU__ARRAY100USINT.h"
#include "vt3_POU__dataArray.h"
#include "vt3_POU__global_data.h"
#include "vt3_POU__cycle.h"
#include "vt3_POU__Data_WarningLights.h"
#include "vt3_POU__mainWarningLights.h"
#include "vt3_POU__Data_EngineTempGauge.h"
#include "vt3_POU__mainEngineTempGauge.h"
#include "vt3_POU__Data_Speed.h"
#include "vt3_POU__Data_SpeedometerGauge.h"
#include "vt3_POU__mainSpeedometer.h"
#include "vt3_POU__mainAnalogGauges.h"
#include "vt3_POU__mainTeraScreen.h"
#include "vt3_POU__main_Lxicon.h"
#include "vt3_POU__ECM_DM_data.h"
#include "vt3_POU__ECM_global_data_program.h"
#include "vt3_POU__can_callback_DM01_ECM.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	UINT             dlc;                 /* data length (6...1782)                   */
	BYTE FARPTR      data;                /*                                          */
	UINT             DTC_COUNT;           /*                                          */
	UDINT            SPN;                 /*                                          */
	USINT            FMI;                 /*                                          */
	Enum17           CM;                  /*                                          */
	USINT            OC;                  /*                                          */
	Enum13           ProtectLamp;         /*                                          */
	Enum13           AmberWarningLamp;    /*                                          */
	Enum13           RedStopLamp;         /*                                          */
	Enum14           MalfunctionIndicatorLamp; /*                                          */
	Enum15           FlashProtectLamp;    /*                                          */
	Enum15           FlashAmberWarningLamp; /*                                          */
	Enum15           FlashRedStopLamp;    /*                                          */
	Enum16           FlashMalfunctionIndicatorLamp; /*                                          */
	BYTE             MultiFaultCounter;   /*                                          */
} DM01_ECM_decode_t;

/* prototype for the function that initializes the POU */
void DM01_ECM_decode__init(void);

/* prototype for the function that contains the POU body */
void DM01_ECM_decode__call(void);


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_POU__DM01_ECM_DECODE_H */

/* end of file */
