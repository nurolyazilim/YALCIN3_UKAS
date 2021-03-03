/* device:       /project/MC2M/CPU1 */
/* device model: MC2M_2CPU\CPU1 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_VARS_H
#define INCLUDE__VT3_VARS_H

#include "vt3_base.h"
#include "vt3_extra.h"
#include "vt3_POU_string_typedef.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/**************************************************************************/

/* declaration of constants */

extern const char FAR vt3_const_prj_version[21];
extern const char FAR vt3_version[17];
extern const BYTE FAR vt3_mdsunit;

/**************************************************************************/

/* declaration of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_interface
 * definition:   /project/MC2M/CPU1/CAN_interface
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/MC2M/CPU1/CAN_interface
 */
extern BOOL FAR vt3_can_alarm_busoff_CAN_interface;

/* variable:     vt3_can_alarm_CAN_152
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 */
extern BOOL FAR vt3_can_alarm_CAN_152;

/* variable:     MC2M_TERA_InSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_InSideTemperature;

/* variable:     vt3_can_alarm_CAN_162
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 */
extern BOOL FAR vt3_can_alarm_CAN_162;

/* variable:     MC2M_TERA_DIAG_OUT21AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_OUT21AN;

/* variable:     vt3_can_alarm_CAN_Horn
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Horn
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/OMNIA_LEFT/CAN_Open/CAN_Horn
 */
extern BOOL FAR vt3_can_alarm_CAN_Horn;

/* variable:     Horn_Switch_On
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Horn
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR Horn_Switch_On;

/* variable:     vt3_can_alarm_CAN_713
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/GIGA/CAN_Open/CAN_713
 */
extern BOOL FAR vt3_can_alarm_CAN_713;

/* variable:     GIGA_MC2M_ResetTrip
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GIGA_MC2M_ResetTrip;

/* variable:     GIGA_MC2M_GIGAOdometerBackup
 * definition:   /project/GIGA/CAN_Open/CAN_713
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR GIGA_MC2M_GIGAOdometerBackup;

/* variable:     vt3_alarm_disconnected_TERA12
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_TERA12;

/* variable:     vt3_alarm_disconnected_MC2M_CPU0
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_MC2M_CPU0;

/* variable:     vt3_alarm_disconnected_GIGA
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_GIGA;

/* variable:     vt3_alarm_disconnected_Debug_GUI
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_Debug_GUI;

/* variable:     vt3_alarm_disconnected_NMS_GUI
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_NMS_GUI;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/MC2M/CPU1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/MC2M/CPU1
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
extern WORD FAR vt3_alarm_inhibition_bitmask;

/**************************************************************************/

/* declaration of variables with address in %M */

/* size of array BYTEM */
#define BYTEM_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %P */

/* size of array BYTEP */
#define BYTEP_SIZE (2000)

/**************************************************************************/

/* declaration of variables with address in %R */

/* size of array BYTER */
#define BYTER_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %I */


/**************************************************************************/

/* declaration of variables with address in %Q */


/**************************************************************************/

/* declaration of variables with address in %S */


/**************************************************************************/

/* declaration of variables with address in %F */

/* size of array BYTEF */
#define BYTEF_SIZE (1)

/**************************************************************************/

/* declaration of variables with address in %E */

/* size of array BYTEE */
#define BYTEE_SIZE (200)

/**************************************************************************/

/* declaration of variables with address in %K */

/* size of array BYTEK */
#define BYTEK_SIZE (200)

/**************************************************************************/

/* declaration of memory arrays */

#pragma DATA_SEG DSEG DSEG_M
extern BYTE FAR BYTEM[];
#pragma DATA_SEG DSEG DSEG_P
extern BYTE FAR BYTEP[];
#pragma DATA_SEG DSEG DSEG_R
extern BYTE FAR BYTER[];
#pragma DATA_SEG DSEG DSEG_I
extern BYTE FAR BYTEI[];
#pragma DATA_SEG DSEG DSEG_Q
extern BYTE FAR BYTEQ[];
#pragma DATA_SEG DSEG DSEG_S
extern BYTE FAR BYTES[];
#pragma DATA_SEG DSEG DSEG_F
extern BYTE FAR BYTEF[];
#pragma DATA_SEG DSEG DSEG_E
extern BYTE FAR BYTEE[];
#pragma DATA_SEG DSEG DSEG_K
extern BYTE FAR BYTEK[];

/**************************************************************************/
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_VARS_H */

/* end of file */
