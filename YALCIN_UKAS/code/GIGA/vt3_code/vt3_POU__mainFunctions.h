/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINFUNCTIONS_H
#define INCLUDE__VT3_POU__MAINFUNCTIONS_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"
#include "vt3_POU__cycle.h"
#include "vt3_POU__Data_EngineTempGauge.h"
#include "vt3_POU__mainEngineTempGauge.h"
#include "vt3_POU__Data_SpeedometerGauge.h"
#include "vt3_POU__mainSpeedometer.h"
#include "vt3_POU__Data_EngineSpeed.h"
#include "vt3_POU__mainEngineSpeed.h"
#include "vt3_POU__Data_FuelLevel.h"
#include "vt3_POU__mainFuelLevel.h"
#include "vt3_POU__Data_EngineOilPressure.h"
#include "vt3_POU__mainEngineOilPressure.h"
#include "vt3_POU__Data_TransOilTemperature.h"
#include "vt3_POU__mainTransOilTemperature.h"
#include "vt3_POU__mainAnalogGauges.h"
#include "vt3_POU__Data_mainDigitalGauges.h"
#include "vt3_POU__mainDigitalGauges.h"
#include "vt3_POU__Data_DiffLock.h"
#include "vt3_POU__mainDiffLock.h"
#include "vt3_POU__mainIgnitionOff.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

	SINT             i2;                  /*                                          */
} mainFunctions_t;

/* prototype for the function that initializes the POU */
void mainFunctions__init(void);

/* prototype for the function that contains the POU body */
void mainFunctions__call(void);


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_POU__MAINFUNCTIONS_H */

/* end of file */
