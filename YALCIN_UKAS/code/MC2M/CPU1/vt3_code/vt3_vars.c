/* device:       /project/MC2M/CPU1 */
/* device model: MC2M_2CPU\CPU1 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_VARS_C
#define INCLUDE__VT3_VARS_C

#include "vt3_runtime.h"
#include "vt3_POU_common.h"
#include "vt3_IO.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/** project version */
const char FAR vt3_const_prj_version[21] = "a01";

/** project name */
const char FAR vt3_const_prj_name[] = "project";

/** device name in vt3 project */
const char FAR vt3_const_dev_name[] = "MC2M/CPU1";

/** vt3 version */
const char FAR vt3_version[17] = "7.6.3.2-stable";

/** device type - long name */
char const FAR vt3_device_properties_long_name[] = "MC2M_2CPU CPU1";

/** device type - short name */
char const FAR vt3_device_properties_short_name[] = "MC2M_2CPU\\CPU1";

/** device type - has touch screen */
BOOL const FAR vt3_device_properties_has_touch_screen = FALSE;

/** mds unit - might be used by the application to implement the winscope app protocol */
BYTE const FAR vt3_mdsunit = 0;

/**************************************************************************/

/* definition of constants */

/**************************************************************************/

/* definition of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_interface
 * definition:   /project/MC2M/CPU1/CAN_interface
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/MC2M/CPU1/CAN_interface
 */
BOOL FAR vt3_can_alarm_busoff_CAN_interface;

/* variable:     vt3_can_alarm_CAN_152
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 */
BOOL FAR vt3_can_alarm_CAN_152;

/* variable:     MC2M_TERA_InSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
SINT FAR MC2M_TERA_InSideTemperature;

/* variable:     vt3_can_alarm_CAN_162
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 */
BOOL FAR vt3_can_alarm_CAN_162;

/* variable:     MC2M_TERA_DIAG_OUT21AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UINT FAR MC2M_TERA_DIAG_OUT21AN;

/* variable:     vt3_can_alarm_CAN_Horn
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Horn
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/OMNIA_LEFT/CAN_Open/CAN_Horn
 */
BOOL FAR vt3_can_alarm_CAN_Horn;

/* variable:     Horn_Switch_On
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Horn
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
BYTE FAR Horn_Switch_On;

/* variable:     vt3_can_alarm_CAN_713
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/GIGA/CAN_Open/CAN_713
 */
BOOL FAR vt3_can_alarm_CAN_713;

/* variable:     GIGA_MC2M_ResetTrip
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
BOOL FAR GIGA_MC2M_ResetTrip;

/* variable:     GIGA_MC2M_GIGAOdometerBackup
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
UDINT FAR GIGA_MC2M_GIGAOdometerBackup;

/* variable:     vt3_alarm_disconnected_TERA12
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_TERA12;

/* variable:     vt3_alarm_disconnected_MC2M_CPU0
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_MC2M_CPU0;

/* variable:     vt3_alarm_disconnected_GIGA
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_GIGA;

/* variable:     vt3_alarm_disconnected_Debug_GUI
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_Debug_GUI;

/* variable:     vt3_alarm_disconnected_NMS_GUI
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
BOOL FAR vt3_alarm_disconnected_NMS_GUI;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/MC2M/CPU1
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
WORD FAR vt3_alarm_inhibition_bitmask;

/**************************************************************************/

/* definition of memory const size */
const unsigned int BYTEM_SIZE_EXTERN = BYTEM_SIZE;
const unsigned int BYTEP_SIZE_EXTERN = BYTEP_SIZE;
const unsigned int BYTER_SIZE_EXTERN = BYTER_SIZE;
const unsigned int BYTEI_SIZE_EXTERN = BYTEI_SIZE;
const unsigned int BYTEQ_SIZE_EXTERN = BYTEQ_SIZE;
const unsigned int BYTES_SIZE_EXTERN = BYTES_SIZE;
const unsigned int BYTEF_SIZE_EXTERN = BYTEF_SIZE;
const unsigned int BYTEE_SIZE_EXTERN = BYTEE_SIZE;
const unsigned int BYTEK_SIZE_EXTERN = BYTEK_SIZE;
const unsigned int VT3_IO_COUNT_EXTERN = VT3_IO_COUNT;


/* definition of memory arrays */
#pragma DATA_SEG DSEG DSEG_M
BYTE FAR BYTEM[BYTEM_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_P
BYTE FAR BYTEP[BYTEP_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_R
BYTE FAR BYTER[BYTER_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_I
BYTE FAR BYTEI[BYTEI_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_Q
BYTE FAR BYTEQ[BYTEQ_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_S
BYTE FAR BYTES[BYTES_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_F
BYTE FAR BYTEF[BYTEF_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_E
BYTE FAR BYTEE[BYTEE_SIZE] attribute_aligned_4;
#pragma DATA_SEG DSEG DSEG_K
BYTE FAR BYTEK[BYTEK_SIZE] attribute_aligned_4;

/**************************************************************************/

/* table of string size initializers */
const vt3_string_size_initializer_t vt3_string_sizes[] = {
	{ (UINT FARPTR) NULL, 0 } /* sentinel */
}; /* vt3_string_sizes */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_VARS_C */

/* end of file */
