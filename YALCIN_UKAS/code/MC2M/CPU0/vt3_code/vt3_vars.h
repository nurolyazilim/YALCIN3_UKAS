/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
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

/* variable:     Enum13_LAMP_OFF
 * definition:   /project/MC2M/CPU0/Data/types/Enum13
 * type:         (Enum13_LAMP_OFF:=0,Enum13_LAMP_ON:=1,Enum13_RESERVED:=2,Enum13_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum13_LAMP_OFF;

/* variable:     Enum13_LAMP_ON
 * definition:   /project/MC2M/CPU0/Data/types/Enum13
 * type:         (Enum13_LAMP_OFF:=0,Enum13_LAMP_ON:=1,Enum13_RESERVED:=2,Enum13_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum13_LAMP_ON;

/* variable:     Enum13_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum13
 * type:         (Enum13_LAMP_OFF:=0,Enum13_LAMP_ON:=1,Enum13_RESERVED:=2,Enum13_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum13_RESERVED;

/* variable:     Enum13_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum13
 * type:         (Enum13_LAMP_OFF:=0,Enum13_LAMP_ON:=1,Enum13_RESERVED:=2,Enum13_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum13_NOT_AVAILABLE;

/* variable:     Enum14_LAMP_OFF
 * definition:   /project/MC2M/CPU0/Data/types/Enum14
 * type:         (Enum14_LAMP_OFF:=0,Enum14_LAMP_ON:=1,Enum14_SHORT_MIL_FOR_WWH_OBD:=2,Enum14_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum14_LAMP_OFF;

/* variable:     Enum14_LAMP_ON
 * definition:   /project/MC2M/CPU0/Data/types/Enum14
 * type:         (Enum14_LAMP_OFF:=0,Enum14_LAMP_ON:=1,Enum14_SHORT_MIL_FOR_WWH_OBD:=2,Enum14_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum14_LAMP_ON;

/* variable:     Enum14_SHORT_MIL_FOR_WWH_OBD
 * definition:   /project/MC2M/CPU0/Data/types/Enum14
 * type:         (Enum14_LAMP_OFF:=0,Enum14_LAMP_ON:=1,Enum14_SHORT_MIL_FOR_WWH_OBD:=2,Enum14_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum14_SHORT_MIL_FOR_WWH_OBD;

/* variable:     Enum14_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum14
 * type:         (Enum14_LAMP_OFF:=0,Enum14_LAMP_ON:=1,Enum14_SHORT_MIL_FOR_WWH_OBD:=2,Enum14_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum14_NOT_AVAILABLE;

/* variable:     Enum15_SLOW_FLASH_1_HZ_50_DUTY_CYCLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum15
 * type:         (Enum15_SLOW_FLASH_1_HZ_50_DUTY_CYCLE:=0,Enum15_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE:=1,Enum15_RESERVED:=2,Enum15_UNAVAILABLE_DO_NOT_FLASH:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum15_SLOW_FLASH_1_HZ_50_DUTY_CYCLE;

/* variable:     Enum15_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum15
 * type:         (Enum15_SLOW_FLASH_1_HZ_50_DUTY_CYCLE:=0,Enum15_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE:=1,Enum15_RESERVED:=2,Enum15_UNAVAILABLE_DO_NOT_FLASH:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum15_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE;

/* variable:     Enum15_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum15
 * type:         (Enum15_SLOW_FLASH_1_HZ_50_DUTY_CYCLE:=0,Enum15_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE:=1,Enum15_RESERVED:=2,Enum15_UNAVAILABLE_DO_NOT_FLASH:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum15_RESERVED;

/* variable:     Enum15_UNAVAILABLE_DO_NOT_FLASH
 * definition:   /project/MC2M/CPU0/Data/types/Enum15
 * type:         (Enum15_SLOW_FLASH_1_HZ_50_DUTY_CYCLE:=0,Enum15_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE:=1,Enum15_RESERVED:=2,Enum15_UNAVAILABLE_DO_NOT_FLASH:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum15_UNAVAILABLE_DO_NOT_FLASH;

/* variable:     Enum16_SLOW_FLASH_1_HZ_50_DUTY_CYCLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum16
 * type:         (Enum16_SLOW_FLASH_1_HZ_50_DUTY_CYCLE:=0,Enum16_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE:=1,Enum16_CLASS_C_DTC:=2,Enum16_UNAVAILABLE_DO_NOT_FLASH:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum16_SLOW_FLASH_1_HZ_50_DUTY_CYCLE;

/* variable:     Enum16_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum16
 * type:         (Enum16_SLOW_FLASH_1_HZ_50_DUTY_CYCLE:=0,Enum16_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE:=1,Enum16_CLASS_C_DTC:=2,Enum16_UNAVAILABLE_DO_NOT_FLASH:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum16_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE;

/* variable:     Enum16_CLASS_C_DTC
 * definition:   /project/MC2M/CPU0/Data/types/Enum16
 * type:         (Enum16_SLOW_FLASH_1_HZ_50_DUTY_CYCLE:=0,Enum16_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE:=1,Enum16_CLASS_C_DTC:=2,Enum16_UNAVAILABLE_DO_NOT_FLASH:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum16_CLASS_C_DTC;

/* variable:     Enum16_UNAVAILABLE_DO_NOT_FLASH
 * definition:   /project/MC2M/CPU0/Data/types/Enum16
 * type:         (Enum16_SLOW_FLASH_1_HZ_50_DUTY_CYCLE:=0,Enum16_FAST_FLASH_2_HZ_OR_FASTER_50_DUTY_CYCLE:=1,Enum16_CLASS_C_DTC:=2,Enum16_UNAVAILABLE_DO_NOT_FLASH:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum16_UNAVAILABLE_DO_NOT_FLASH;

/* variable:     Enum17_CONVERT_SPN_PER_VERSION_4
 * definition:   /project/MC2M/CPU0/Data/types/Enum17
 * type:         (Enum17_CONVERT_SPN_PER_VERSION_4:=0,Enum17_CONVERT_SPN_PER_VERSION_1_2_OR_3:=1)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum17_CONVERT_SPN_PER_VERSION_4;

/* variable:     Enum17_CONVERT_SPN_PER_VERSION_1_2_OR_3
 * definition:   /project/MC2M/CPU0/Data/types/Enum17
 * type:         (Enum17_CONVERT_SPN_PER_VERSION_4:=0,Enum17_CONVERT_SPN_PER_VERSION_1_2_OR_3:=1)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum17_CONVERT_SPN_PER_VERSION_1_2_OR_3;

/* variable:     Enum255_INACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum255
 * type:         (Enum255_INACTIVE:=0,Enum255_ACTIVE:=1,Enum255_RESERVED:=2,Enum255_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum255_INACTIVE;

/* variable:     Enum255_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum255
 * type:         (Enum255_INACTIVE:=0,Enum255_ACTIVE:=1,Enum255_RESERVED:=2,Enum255_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum255_ACTIVE;

/* variable:     Enum255_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum255
 * type:         (Enum255_INACTIVE:=0,Enum255_ACTIVE:=1,Enum255_RESERVED:=2,Enum255_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum255_RESERVED;

/* variable:     Enum255_TAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum255
 * type:         (Enum255_INACTIVE:=0,Enum255_ACTIVE:=1,Enum255_RESERVED:=2,Enum255_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum255_TAKE_NO_ACTION;

/* variable:     Enum256_TRANSMISSION_NOT_READY_FOR_BRAKE_RELEASE
 * definition:   /project/MC2M/CPU0/Data/types/Enum256
 * type:         (Enum256_TRANSMISSION_NOT_READY_FOR_BRAKE_RELEASE:=0,Enum256_TRANSMISSION_READY_FOR_BRAKE_RELEASE:=1,Enum256_RESERVED:=2,Enum256_DONT_CARE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum256_TRANSMISSION_NOT_READY_FOR_BRAKE_RELEASE;

/* variable:     Enum256_TRANSMISSION_READY_FOR_BRAKE_RELEASE
 * definition:   /project/MC2M/CPU0/Data/types/Enum256
 * type:         (Enum256_TRANSMISSION_NOT_READY_FOR_BRAKE_RELEASE:=0,Enum256_TRANSMISSION_READY_FOR_BRAKE_RELEASE:=1,Enum256_RESERVED:=2,Enum256_DONT_CARE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum256_TRANSMISSION_READY_FOR_BRAKE_RELEASE;

/* variable:     Enum256_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum256
 * type:         (Enum256_TRANSMISSION_NOT_READY_FOR_BRAKE_RELEASE:=0,Enum256_TRANSMISSION_READY_FOR_BRAKE_RELEASE:=1,Enum256_RESERVED:=2,Enum256_DONT_CARE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum256_RESERVED;

/* variable:     Enum256_DONT_CARE
 * definition:   /project/MC2M/CPU0/Data/types/Enum256
 * type:         (Enum256_TRANSMISSION_NOT_READY_FOR_BRAKE_RELEASE:=0,Enum256_TRANSMISSION_READY_FOR_BRAKE_RELEASE:=1,Enum256_RESERVED:=2,Enum256_DONT_CARE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum256_DONT_CARE;

/* variable:     Enum257_PRIMARY_SHIFT_CONSOLE_IS_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum257
 * type:         (Enum257_PRIMARY_SHIFT_CONSOLE_IS_ACTIVE:=0,Enum257_SECONDARY_SHIFT_CONSOLE_IS_ACTIVE:=1,Enum257_RESERVED:=2,Enum257_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum257_PRIMARY_SHIFT_CONSOLE_IS_ACTIVE;

/* variable:     Enum257_SECONDARY_SHIFT_CONSOLE_IS_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum257
 * type:         (Enum257_PRIMARY_SHIFT_CONSOLE_IS_ACTIVE:=0,Enum257_SECONDARY_SHIFT_CONSOLE_IS_ACTIVE:=1,Enum257_RESERVED:=2,Enum257_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum257_SECONDARY_SHIFT_CONSOLE_IS_ACTIVE;

/* variable:     Enum257_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum257
 * type:         (Enum257_PRIMARY_SHIFT_CONSOLE_IS_ACTIVE:=0,Enum257_SECONDARY_SHIFT_CONSOLE_IS_ACTIVE:=1,Enum257_RESERVED:=2,Enum257_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum257_RESERVED;

/* variable:     Enum257_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum257
 * type:         (Enum257_PRIMARY_SHIFT_CONSOLE_IS_ACTIVE:=0,Enum257_SECONDARY_SHIFT_CONSOLE_IS_ACTIVE:=1,Enum257_RESERVED:=2,Enum257_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum257_NOT_AVAILABLE;

/* variable:     Enum258_CRANKING_DISABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum258
 * type:         (Enum258_CRANKING_DISABLED:=0,Enum258_CRANKING_ENABLED:=1,Enum258_ERROR:=2,Enum258_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum258_CRANKING_DISABLED;

/* variable:     Enum258_CRANKING_ENABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum258
 * type:         (Enum258_CRANKING_DISABLED:=0,Enum258_CRANKING_ENABLED:=1,Enum258_ERROR:=2,Enum258_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum258_CRANKING_ENABLED;

/* variable:     Enum258_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum258
 * type:         (Enum258_CRANKING_DISABLED:=0,Enum258_CRANKING_ENABLED:=1,Enum258_ERROR:=2,Enum258_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum258_ERROR;

/* variable:     Enum258_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum258
 * type:         (Enum258_CRANKING_DISABLED:=0,Enum258_CRANKING_ENABLED:=1,Enum258_ERROR:=2,Enum258_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum258_NOT_AVAILABLE;

/* variable:     Enum259_TRANSMISSION_MODE_4_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum259
 * type:         (Enum259_TRANSMISSION_MODE_4_NOT_ACTIVE:=0,Enum259_TRANSMISSION_MODE_4_ACTIVE:=1,Enum259_ERROR:=2,Enum259_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum259_TRANSMISSION_MODE_4_NOT_ACTIVE;

/* variable:     Enum259_TRANSMISSION_MODE_4_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum259
 * type:         (Enum259_TRANSMISSION_MODE_4_NOT_ACTIVE:=0,Enum259_TRANSMISSION_MODE_4_ACTIVE:=1,Enum259_ERROR:=2,Enum259_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum259_TRANSMISSION_MODE_4_ACTIVE;

/* variable:     Enum259_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum259
 * type:         (Enum259_TRANSMISSION_MODE_4_NOT_ACTIVE:=0,Enum259_TRANSMISSION_MODE_4_ACTIVE:=1,Enum259_ERROR:=2,Enum259_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum259_ERROR;

/* variable:     Enum259_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum259
 * type:         (Enum259_TRANSMISSION_MODE_4_NOT_ACTIVE:=0,Enum259_TRANSMISSION_MODE_4_ACTIVE:=1,Enum259_ERROR:=2,Enum259_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum259_NOT_AVAILABLE;

/* variable:     Enum260_TRANSMISSION_MODE_3_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum260
 * type:         (Enum260_TRANSMISSION_MODE_3_NOT_ACTIVE:=0,Enum260_TRANSMISSION_MODE_3_ACTIVE:=1,Enum260_ERROR:=2,Enum260_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum260_TRANSMISSION_MODE_3_NOT_ACTIVE;

/* variable:     Enum260_TRANSMISSION_MODE_3_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum260
 * type:         (Enum260_TRANSMISSION_MODE_3_NOT_ACTIVE:=0,Enum260_TRANSMISSION_MODE_3_ACTIVE:=1,Enum260_ERROR:=2,Enum260_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum260_TRANSMISSION_MODE_3_ACTIVE;

/* variable:     Enum260_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum260
 * type:         (Enum260_TRANSMISSION_MODE_3_NOT_ACTIVE:=0,Enum260_TRANSMISSION_MODE_3_ACTIVE:=1,Enum260_ERROR:=2,Enum260_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum260_ERROR;

/* variable:     Enum260_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum260
 * type:         (Enum260_TRANSMISSION_MODE_3_NOT_ACTIVE:=0,Enum260_TRANSMISSION_MODE_3_ACTIVE:=1,Enum260_ERROR:=2,Enum260_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum260_NOT_AVAILABLE;

/* variable:     Enum261_TRANSMISSION_MODE_2_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum261
 * type:         (Enum261_TRANSMISSION_MODE_2_NOT_ACTIVE:=0,Enum261_TRANSMISSION_MODE_2_ACTIVE:=1,Enum261_ERROR:=2,Enum261_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum261_TRANSMISSION_MODE_2_NOT_ACTIVE;

/* variable:     Enum261_TRANSMISSION_MODE_2_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum261
 * type:         (Enum261_TRANSMISSION_MODE_2_NOT_ACTIVE:=0,Enum261_TRANSMISSION_MODE_2_ACTIVE:=1,Enum261_ERROR:=2,Enum261_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum261_TRANSMISSION_MODE_2_ACTIVE;

/* variable:     Enum261_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum261
 * type:         (Enum261_TRANSMISSION_MODE_2_NOT_ACTIVE:=0,Enum261_TRANSMISSION_MODE_2_ACTIVE:=1,Enum261_ERROR:=2,Enum261_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum261_ERROR;

/* variable:     Enum261_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum261
 * type:         (Enum261_TRANSMISSION_MODE_2_NOT_ACTIVE:=0,Enum261_TRANSMISSION_MODE_2_ACTIVE:=1,Enum261_ERROR:=2,Enum261_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum261_NOT_AVAILABLE;

/* variable:     Enum262_TRANSMISSION_MODE_1_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum262
 * type:         (Enum262_TRANSMISSION_MODE_1_NOT_ACTIVE:=0,Enum262_TRANSMISSION_MODE_1_ACTIVE:=1,Enum262_ERROR:=2,Enum262_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum262_TRANSMISSION_MODE_1_NOT_ACTIVE;

/* variable:     Enum262_TRANSMISSION_MODE_1_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum262
 * type:         (Enum262_TRANSMISSION_MODE_1_NOT_ACTIVE:=0,Enum262_TRANSMISSION_MODE_1_ACTIVE:=1,Enum262_ERROR:=2,Enum262_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum262_TRANSMISSION_MODE_1_ACTIVE;

/* variable:     Enum262_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum262
 * type:         (Enum262_TRANSMISSION_MODE_1_NOT_ACTIVE:=0,Enum262_TRANSMISSION_MODE_1_ACTIVE:=1,Enum262_ERROR:=2,Enum262_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum262_ERROR;

/* variable:     Enum262_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum262
 * type:         (Enum262_TRANSMISSION_MODE_1_NOT_ACTIVE:=0,Enum262_TRANSMISSION_MODE_1_ACTIVE:=1,Enum262_ERROR:=2,Enum262_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum262_NOT_AVAILABLE;

/* variable:     Enum334_FAN_OFF
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_FAN_OFF;

/* variable:     Enum334_ENGINE_SYSTEMGENERAL
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_ENGINE_SYSTEMGENERAL;

/* variable:     Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE;

/* variable:     Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE;

/* variable:     Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE;

/* variable:     Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE;

/* variable:     Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE;

/* variable:     Enum334_DEFAULT_OPERATION
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_DEFAULT_OPERATION;

/* variable:     Enum334_NOT_DEFINED
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_NOT_DEFINED;

/* variable:     Enum334_MANUAL_CONTROL
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_MANUAL_CONTROL;

/* variable:     Enum334_TRANSMISSION_RETARDER
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_TRANSMISSION_RETARDER;

/* variable:     Enum334_AC_SYSTEM
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_AC_SYSTEM;

/* variable:     Enum334_TIMER
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_TIMER;

/* variable:     Enum334_ENGINE_BRAKE
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_ENGINE_BRAKE;

/* variable:     Enum334_OTHER
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_OTHER;

/* variable:     Enum334_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum334
 * type:         (Enum334_FAN_OFF:=0,Enum334_ENGINE_SYSTEMGENERAL:=1,Enum334_EXCESSIVE_ENGINE_AIR_TEMPERATURE:=2,Enum334_EXCESSIVE_ENGINE_OIL_TEMPERATURE:=3,Enum334_EXCESSIVE_ENGINE_COOLANT_TEMPERATURE:=4,Enum334_EXCESSIVE_TRANSMISSION_OIL_TEMPERATURE:=5,Enum334_EXCESSIVE_HYDRAULIC_OIL_TEMPERATURE:=6,Enum334_DEFAULT_OPERATION:=7,Enum334_NOT_DEFINED:=8,Enum334_MANUAL_CONTROL:=9,Enum334_TRANSMISSION_RETARDER:=10,Enum334_AC_SYSTEM:=11,Enum334_TIMER:=12,Enum334_ENGINE_BRAKE:=13,Enum334_OTHER:=14,Enum334_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum334_NOT_AVAILABLE;

/* variable:     Enum342_NOT_EXCEEDED_THE_DEW_POINT
 * definition:   /project/MC2M/CPU0/Data/types/Enum342
 * type:         (Enum342_NOT_EXCEEDED_THE_DEW_POINT:=0,Enum342_EXCEEDED_THE_DEW_POINT:=1,Enum342_ERROR:=2,Enum342_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum342_NOT_EXCEEDED_THE_DEW_POINT;

/* variable:     Enum342_EXCEEDED_THE_DEW_POINT
 * definition:   /project/MC2M/CPU0/Data/types/Enum342
 * type:         (Enum342_NOT_EXCEEDED_THE_DEW_POINT:=0,Enum342_EXCEEDED_THE_DEW_POINT:=1,Enum342_ERROR:=2,Enum342_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum342_EXCEEDED_THE_DEW_POINT;

/* variable:     Enum342_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum342
 * type:         (Enum342_NOT_EXCEEDED_THE_DEW_POINT:=0,Enum342_EXCEEDED_THE_DEW_POINT:=1,Enum342_ERROR:=2,Enum342_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum342_ERROR;

/* variable:     Enum342_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum342
 * type:         (Enum342_NOT_EXCEEDED_THE_DEW_POINT:=0,Enum342_EXCEEDED_THE_DEW_POINT:=1,Enum342_ERROR:=2,Enum342_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum342_NOT_AVAILABLE;

/* variable:     Enum346_NO
 * definition:   /project/MC2M/CPU0/Data/types/Enum346
 * type:         (Enum346_NO:=0,Enum346_YES:=1,Enum346_ERROR:=2,Enum346_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum346_NO;

/* variable:     Enum346_YES
 * definition:   /project/MC2M/CPU0/Data/types/Enum346
 * type:         (Enum346_NO:=0,Enum346_YES:=1,Enum346_ERROR:=2,Enum346_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum346_YES;

/* variable:     Enum346_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum346
 * type:         (Enum346_NO:=0,Enum346_YES:=1,Enum346_ERROR:=2,Enum346_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum346_ERROR;

/* variable:     Enum346_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum346
 * type:         (Enum346_NO:=0,Enum346_YES:=1,Enum346_ERROR:=2,Enum346_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum346_NOT_AVAILABLE;

/* variable:     Enum347_INACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum347
 * type:         (Enum347_INACTIVE:=0,Enum347_ACTIVE:=1,Enum347_ERROR:=2,Enum347_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum347_INACTIVE;

/* variable:     Enum347_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum347
 * type:         (Enum347_INACTIVE:=0,Enum347_ACTIVE:=1,Enum347_ERROR:=2,Enum347_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum347_ACTIVE;

/* variable:     Enum347_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum347
 * type:         (Enum347_INACTIVE:=0,Enum347_ACTIVE:=1,Enum347_ERROR:=2,Enum347_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum347_ERROR;

/* variable:     Enum347_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum347
 * type:         (Enum347_INACTIVE:=0,Enum347_ACTIVE:=1,Enum347_ERROR:=2,Enum347_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum347_NOT_AVAILABLE;

/* variable:     Enum348_DISABLED_IN_CALIBRATION
 * definition:   /project/MC2M/CPU0/Data/types/Enum348
 * type:         (Enum348_DISABLED_IN_CALIBRATION:=0,Enum348_ENABLED_IN_CALIBRATION:=1,Enum348_ERROR:=2,Enum348_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum348_DISABLED_IN_CALIBRATION;

/* variable:     Enum348_ENABLED_IN_CALIBRATION
 * definition:   /project/MC2M/CPU0/Data/types/Enum348
 * type:         (Enum348_DISABLED_IN_CALIBRATION:=0,Enum348_ENABLED_IN_CALIBRATION:=1,Enum348_ERROR:=2,Enum348_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum348_ENABLED_IN_CALIBRATION;

/* variable:     Enum348_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum348
 * type:         (Enum348_DISABLED_IN_CALIBRATION:=0,Enum348_ENABLED_IN_CALIBRATION:=1,Enum348_ERROR:=2,Enum348_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum348_ERROR;

/* variable:     Enum348_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum348
 * type:         (Enum348_DISABLED_IN_CALIBRATION:=0,Enum348_ENABLED_IN_CALIBRATION:=1,Enum348_ERROR:=2,Enum348_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum348_NOT_AVAILABLE;

/* variable:     Enum349_PRESSURE_NORMAL
 * definition:   /project/MC2M/CPU0/Data/types/Enum349
 * type:         (Enum349_PRESSURE_NORMAL:=0,Enum349_PRESSURE_HIGH_FAN_MAY_BE_ENGAGED:=1,Enum349_ERROR:=2,Enum349_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum349_PRESSURE_NORMAL;

/* variable:     Enum349_PRESSURE_HIGH_FAN_MAY_BE_ENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum349
 * type:         (Enum349_PRESSURE_NORMAL:=0,Enum349_PRESSURE_HIGH_FAN_MAY_BE_ENGAGED:=1,Enum349_ERROR:=2,Enum349_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum349_PRESSURE_HIGH_FAN_MAY_BE_ENGAGED;

/* variable:     Enum349_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum349
 * type:         (Enum349_PRESSURE_NORMAL:=0,Enum349_PRESSURE_HIGH_FAN_MAY_BE_ENGAGED:=1,Enum349_ERROR:=2,Enum349_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum349_ERROR;

/* variable:     Enum349_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum349
 * type:         (Enum349_PRESSURE_NORMAL:=0,Enum349_PRESSURE_HIGH_FAN_MAY_BE_ENGAGED:=1,Enum349_ERROR:=2,Enum349_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum349_NOT_AVAILABLE;

/* variable:     Enum350_PRESSURE_NORMAL
 * definition:   /project/MC2M/CPU0/Data/types/Enum350
 * type:         (Enum350_PRESSURE_NORMAL:=0,Enum350_PRESSURE_TOO_LOW_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED:=1,Enum350_ERROR:=2,Enum350_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum350_PRESSURE_NORMAL;

/* variable:     Enum350_PRESSURE_TOO_LOW_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum350
 * type:         (Enum350_PRESSURE_NORMAL:=0,Enum350_PRESSURE_TOO_LOW_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED:=1,Enum350_ERROR:=2,Enum350_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum350_PRESSURE_TOO_LOW_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED;

/* variable:     Enum350_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum350
 * type:         (Enum350_PRESSURE_NORMAL:=0,Enum350_PRESSURE_TOO_LOW_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED:=1,Enum350_ERROR:=2,Enum350_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum350_ERROR;

/* variable:     Enum350_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum350
 * type:         (Enum350_PRESSURE_NORMAL:=0,Enum350_PRESSURE_TOO_LOW_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED:=1,Enum350_ERROR:=2,Enum350_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum350_NOT_AVAILABLE;

/* variable:     Enum351_PRESSURE_NORMAL
 * definition:   /project/MC2M/CPU0/Data/types/Enum351
 * type:         (Enum351_PRESSURE_NORMAL:=0,Enum351_PRESSURE_TOO_HIGH_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED:=1,Enum351_ERROR:=2,Enum351_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum351_PRESSURE_NORMAL;

/* variable:     Enum351_PRESSURE_TOO_HIGH_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum351
 * type:         (Enum351_PRESSURE_NORMAL:=0,Enum351_PRESSURE_TOO_HIGH_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED:=1,Enum351_ERROR:=2,Enum351_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum351_PRESSURE_TOO_HIGH_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED;

/* variable:     Enum351_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum351
 * type:         (Enum351_PRESSURE_NORMAL:=0,Enum351_PRESSURE_TOO_HIGH_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED:=1,Enum351_ERROR:=2,Enum351_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum351_ERROR;

/* variable:     Enum351_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum351
 * type:         (Enum351_PRESSURE_NORMAL:=0,Enum351_PRESSURE_TOO_HIGH_COMPRESSOR_CLUTCH_MAY_BE_DISENGAGED:=1,Enum351_ERROR:=2,Enum351_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum351_NOT_AVAILABLE;

/* variable:     Enum352_NOT_APPROACHING
 * definition:   /project/MC2M/CPU0/Data/types/Enum352
 * type:         (Enum352_NOT_APPROACHING:=0,Enum352_APPROACHING:=1,Enum352_ERROR:=2,Enum352_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum352_NOT_APPROACHING;

/* variable:     Enum352_APPROACHING
 * definition:   /project/MC2M/CPU0/Data/types/Enum352
 * type:         (Enum352_NOT_APPROACHING:=0,Enum352_APPROACHING:=1,Enum352_ERROR:=2,Enum352_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum352_APPROACHING;

/* variable:     Enum352_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum352
 * type:         (Enum352_NOT_APPROACHING:=0,Enum352_APPROACHING:=1,Enum352_ERROR:=2,Enum352_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum352_ERROR;

/* variable:     Enum352_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum352
 * type:         (Enum352_NOT_APPROACHING:=0,Enum352_APPROACHING:=1,Enum352_ERROR:=2,Enum352_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum352_NOT_AVAILABLE;

/* variable:     Enum353_ENGINE_ALARM_ACKNOWLEDGE_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum353
 * type:         (Enum353_ENGINE_ALARM_ACKNOWLEDGE_NOT_ACTIVE:=0,Enum353_ENGINE_ALARM_ACKNOWLEDGE_ACTIVE:=1,Enum353_ERROR:=2,Enum353_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum353_ENGINE_ALARM_ACKNOWLEDGE_NOT_ACTIVE;

/* variable:     Enum353_ENGINE_ALARM_ACKNOWLEDGE_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum353
 * type:         (Enum353_ENGINE_ALARM_ACKNOWLEDGE_NOT_ACTIVE:=0,Enum353_ENGINE_ALARM_ACKNOWLEDGE_ACTIVE:=1,Enum353_ERROR:=2,Enum353_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum353_ENGINE_ALARM_ACKNOWLEDGE_ACTIVE;

/* variable:     Enum353_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum353
 * type:         (Enum353_ENGINE_ALARM_ACKNOWLEDGE_NOT_ACTIVE:=0,Enum353_ENGINE_ALARM_ACKNOWLEDGE_ACTIVE:=1,Enum353_ERROR:=2,Enum353_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum353_ERROR;

/* variable:     Enum353_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum353
 * type:         (Enum353_ENGINE_ALARM_ACKNOWLEDGE_NOT_ACTIVE:=0,Enum353_ENGINE_ALARM_ACKNOWLEDGE_ACTIVE:=1,Enum353_ERROR:=2,Enum353_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum353_NOT_AVAILABLE;

/* variable:     Enum354_ENGINE_ALARM_OUTPUT_COMMAND_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum354
 * type:         (Enum354_ENGINE_ALARM_OUTPUT_COMMAND_NOT_ACTIVE:=0,Enum354_ENGINE_ALARM_OUTPUT_COMMAND_ACTIVE:=1,Enum354_RESERVED:=2,Enum354_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum354_ENGINE_ALARM_OUTPUT_COMMAND_NOT_ACTIVE;

/* variable:     Enum354_ENGINE_ALARM_OUTPUT_COMMAND_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum354
 * type:         (Enum354_ENGINE_ALARM_OUTPUT_COMMAND_NOT_ACTIVE:=0,Enum354_ENGINE_ALARM_OUTPUT_COMMAND_ACTIVE:=1,Enum354_RESERVED:=2,Enum354_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum354_ENGINE_ALARM_OUTPUT_COMMAND_ACTIVE;

/* variable:     Enum354_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum354
 * type:         (Enum354_ENGINE_ALARM_OUTPUT_COMMAND_NOT_ACTIVE:=0,Enum354_ENGINE_ALARM_OUTPUT_COMMAND_ACTIVE:=1,Enum354_RESERVED:=2,Enum354_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum354_RESERVED;

/* variable:     Enum354_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum354
 * type:         (Enum354_ENGINE_ALARM_OUTPUT_COMMAND_NOT_ACTIVE:=0,Enum354_ENGINE_ALARM_OUTPUT_COMMAND_ACTIVE:=1,Enum354_RESERVED:=2,Enum354_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum354_NOT_AVAILABLE;

/* variable:     Enum355_AIR_SHUTOFF_DISABLED_NOT_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY
 * definition:   /project/MC2M/CPU0/Data/types/Enum355
 * type:         (Enum355_AIR_SHUTOFF_DISABLED_NOT_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY:=0,Enum355_AIR_SHUTOFF_ENABLED_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY:=1,Enum355_RESERVED:=2,Enum355_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum355_AIR_SHUTOFF_DISABLED_NOT_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY;

/* variable:     Enum355_AIR_SHUTOFF_ENABLED_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY
 * definition:   /project/MC2M/CPU0/Data/types/Enum355
 * type:         (Enum355_AIR_SHUTOFF_DISABLED_NOT_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY:=0,Enum355_AIR_SHUTOFF_ENABLED_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY:=1,Enum355_RESERVED:=2,Enum355_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum355_AIR_SHUTOFF_ENABLED_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY;

/* variable:     Enum355_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum355
 * type:         (Enum355_AIR_SHUTOFF_DISABLED_NOT_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY:=0,Enum355_AIR_SHUTOFF_ENABLED_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY:=1,Enum355_RESERVED:=2,Enum355_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum355_RESERVED;

/* variable:     Enum355_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum355
 * type:         (Enum355_AIR_SHUTOFF_DISABLED_NOT_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY:=0,Enum355_AIR_SHUTOFF_ENABLED_ATTEMPTING_TO_SHUTOFF_ENGINE_AIR_SUPPLY:=1,Enum355_RESERVED:=2,Enum355_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum355_NOT_AVAILABLE;

/* variable:     Enum356_ENGINE_OVERSPEED_TEST_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum356
 * type:         (Enum356_ENGINE_OVERSPEED_TEST_NOT_ACTIVE:=0,Enum356_ENGINE_OVERSPEED_TEST_ACTIVE:=1,Enum356_RESERVED:=2,Enum356_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum356_ENGINE_OVERSPEED_TEST_NOT_ACTIVE;

/* variable:     Enum356_ENGINE_OVERSPEED_TEST_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum356
 * type:         (Enum356_ENGINE_OVERSPEED_TEST_NOT_ACTIVE:=0,Enum356_ENGINE_OVERSPEED_TEST_ACTIVE:=1,Enum356_RESERVED:=2,Enum356_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum356_ENGINE_OVERSPEED_TEST_ACTIVE;

/* variable:     Enum356_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum356
 * type:         (Enum356_ENGINE_OVERSPEED_TEST_NOT_ACTIVE:=0,Enum356_ENGINE_OVERSPEED_TEST_ACTIVE:=1,Enum356_RESERVED:=2,Enum356_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum356_RESERVED;

/* variable:     Enum356_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum356
 * type:         (Enum356_ENGINE_OVERSPEED_TEST_NOT_ACTIVE:=0,Enum356_ENGINE_OVERSPEED_TEST_ACTIVE:=1,Enum356_RESERVED:=2,Enum356_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum356_NOT_AVAILABLE;

/* variable:     Enum357_AIR_FLOW_ALLOWED_TO_ENGINE
 * definition:   /project/MC2M/CPU0/Data/types/Enum357
 * type:         (Enum357_AIR_FLOW_ALLOWED_TO_ENGINE:=0,Enum357_AIR_FLOW_RESTRICTED:=1,Enum357_ERROR:=2,Enum357_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum357_AIR_FLOW_ALLOWED_TO_ENGINE;

/* variable:     Enum357_AIR_FLOW_RESTRICTED
 * definition:   /project/MC2M/CPU0/Data/types/Enum357
 * type:         (Enum357_AIR_FLOW_ALLOWED_TO_ENGINE:=0,Enum357_AIR_FLOW_RESTRICTED:=1,Enum357_ERROR:=2,Enum357_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum357_AIR_FLOW_RESTRICTED;

/* variable:     Enum357_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum357
 * type:         (Enum357_AIR_FLOW_ALLOWED_TO_ENGINE:=0,Enum357_AIR_FLOW_RESTRICTED:=1,Enum357_ERROR:=2,Enum357_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum357_ERROR;

/* variable:     Enum357_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum357
 * type:         (Enum357_AIR_FLOW_ALLOWED_TO_ENGINE:=0,Enum357_AIR_FLOW_RESTRICTED:=1,Enum357_ERROR:=2,Enum357_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum357_NOT_AVAILABLE;

/* variable:     Enum358_LOW_SPEED_RANGE
 * definition:   /project/MC2M/CPU0/Data/types/Enum358
 * type:         (Enum358_LOW_SPEED_RANGE:=0,Enum358_HIGH_SPEED_RANGE:=1,Enum358_ERROR:=2,Enum358_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum358_LOW_SPEED_RANGE;

/* variable:     Enum358_HIGH_SPEED_RANGE
 * definition:   /project/MC2M/CPU0/Data/types/Enum358
 * type:         (Enum358_LOW_SPEED_RANGE:=0,Enum358_HIGH_SPEED_RANGE:=1,Enum358_ERROR:=2,Enum358_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum358_HIGH_SPEED_RANGE;

/* variable:     Enum358_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum358
 * type:         (Enum358_LOW_SPEED_RANGE:=0,Enum358_HIGH_SPEED_RANGE:=1,Enum358_ERROR:=2,Enum358_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum358_ERROR;

/* variable:     Enum358_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum358
 * type:         (Enum358_LOW_SPEED_RANGE:=0,Enum358_HIGH_SPEED_RANGE:=1,Enum358_ERROR:=2,Enum358_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum358_NOT_AVAILABLE;

/* variable:     Enum359_PARKING_BRAKE_NOT_SET
 * definition:   /project/MC2M/CPU0/Data/types/Enum359
 * type:         (Enum359_PARKING_BRAKE_NOT_SET:=0,Enum359_PARKING_BRAKE_SET:=1,Enum359_ERROR:=2,Enum359_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum359_PARKING_BRAKE_NOT_SET;

/* variable:     Enum359_PARKING_BRAKE_SET
 * definition:   /project/MC2M/CPU0/Data/types/Enum359
 * type:         (Enum359_PARKING_BRAKE_NOT_SET:=0,Enum359_PARKING_BRAKE_SET:=1,Enum359_ERROR:=2,Enum359_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum359_PARKING_BRAKE_SET;

/* variable:     Enum359_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum359
 * type:         (Enum359_PARKING_BRAKE_NOT_SET:=0,Enum359_PARKING_BRAKE_SET:=1,Enum359_ERROR:=2,Enum359_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum359_ERROR;

/* variable:     Enum359_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum359
 * type:         (Enum359_PARKING_BRAKE_NOT_SET:=0,Enum359_PARKING_BRAKE_SET:=1,Enum359_ERROR:=2,Enum359_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum359_NOT_AVAILABLE;

/* variable:     Enum360_OFF
 * definition:   /project/MC2M/CPU0/Data/types/Enum360
 * type:         (Enum360_OFF:=0,Enum360_ON:=1,Enum360_ERROR_INDICATOR:=2,Enum360_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum360_OFF;

/* variable:     Enum360_ON
 * definition:   /project/MC2M/CPU0/Data/types/Enum360
 * type:         (Enum360_OFF:=0,Enum360_ON:=1,Enum360_ERROR_INDICATOR:=2,Enum360_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum360_ON;

/* variable:     Enum360_ERROR_INDICATOR
 * definition:   /project/MC2M/CPU0/Data/types/Enum360
 * type:         (Enum360_OFF:=0,Enum360_ON:=1,Enum360_ERROR_INDICATOR:=2,Enum360_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum360_ERROR_INDICATOR;

/* variable:     Enum360_TAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum360
 * type:         (Enum360_OFF:=0,Enum360_ON:=1,Enum360_ERROR_INDICATOR:=2,Enum360_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum360_TAKE_NO_ACTION;

/* variable:     Enum361_PARK_BRAKE_RELEASE_INHIBIT_NOT_REQUESTED
 * definition:   /project/MC2M/CPU0/Data/types/Enum361
 * type:         (Enum361_PARK_BRAKE_RELEASE_INHIBIT_NOT_REQUESTED:=0,Enum361_PARK_BRAKE_RELEASE_INHIBIT_REQUESTED:=1,Enum361_SAE_RESERVED:=2,Enum361_UNAVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum361_PARK_BRAKE_RELEASE_INHIBIT_NOT_REQUESTED;

/* variable:     Enum361_PARK_BRAKE_RELEASE_INHIBIT_REQUESTED
 * definition:   /project/MC2M/CPU0/Data/types/Enum361
 * type:         (Enum361_PARK_BRAKE_RELEASE_INHIBIT_NOT_REQUESTED:=0,Enum361_PARK_BRAKE_RELEASE_INHIBIT_REQUESTED:=1,Enum361_SAE_RESERVED:=2,Enum361_UNAVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum361_PARK_BRAKE_RELEASE_INHIBIT_REQUESTED;

/* variable:     Enum361_SAE_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum361
 * type:         (Enum361_PARK_BRAKE_RELEASE_INHIBIT_NOT_REQUESTED:=0,Enum361_PARK_BRAKE_RELEASE_INHIBIT_REQUESTED:=1,Enum361_SAE_RESERVED:=2,Enum361_UNAVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum361_SAE_RESERVED;

/* variable:     Enum361_UNAVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum361
 * type:         (Enum361_PARK_BRAKE_RELEASE_INHIBIT_NOT_REQUESTED:=0,Enum361_PARK_BRAKE_RELEASE_INHIBIT_REQUESTED:=1,Enum361_SAE_RESERVED:=2,Enum361_UNAVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum361_UNAVAILABLE;

/* variable:     Enum362_CRUISE_CONTROL_SWITCHED_OFF
 * definition:   /project/MC2M/CPU0/Data/types/Enum362
 * type:         (Enum362_CRUISE_CONTROL_SWITCHED_OFF:=0,Enum362_CRUISE_CONTROL_SWITCHED_ON:=1,Enum362_ERROR:=2,Enum362_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum362_CRUISE_CONTROL_SWITCHED_OFF;

/* variable:     Enum362_CRUISE_CONTROL_SWITCHED_ON
 * definition:   /project/MC2M/CPU0/Data/types/Enum362
 * type:         (Enum362_CRUISE_CONTROL_SWITCHED_OFF:=0,Enum362_CRUISE_CONTROL_SWITCHED_ON:=1,Enum362_ERROR:=2,Enum362_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum362_CRUISE_CONTROL_SWITCHED_ON;

/* variable:     Enum362_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum362
 * type:         (Enum362_CRUISE_CONTROL_SWITCHED_OFF:=0,Enum362_CRUISE_CONTROL_SWITCHED_ON:=1,Enum362_ERROR:=2,Enum362_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum362_ERROR;

/* variable:     Enum362_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum362
 * type:         (Enum362_CRUISE_CONTROL_SWITCHED_OFF:=0,Enum362_CRUISE_CONTROL_SWITCHED_ON:=1,Enum362_ERROR:=2,Enum362_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum362_NOT_AVAILABLE;

/* variable:     Enum363_CRUISE_CONTROL_DISABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum363
 * type:         (Enum363_CRUISE_CONTROL_DISABLED:=0,Enum363_CRUISE_CONTROL_ENABLED:=1,Enum363_ERROR:=2,Enum363_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum363_CRUISE_CONTROL_DISABLED;

/* variable:     Enum363_CRUISE_CONTROL_ENABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum363
 * type:         (Enum363_CRUISE_CONTROL_DISABLED:=0,Enum363_CRUISE_CONTROL_ENABLED:=1,Enum363_ERROR:=2,Enum363_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum363_CRUISE_CONTROL_ENABLED;

/* variable:     Enum363_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum363
 * type:         (Enum363_CRUISE_CONTROL_DISABLED:=0,Enum363_CRUISE_CONTROL_ENABLED:=1,Enum363_ERROR:=2,Enum363_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum363_ERROR;

/* variable:     Enum363_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum363
 * type:         (Enum363_CRUISE_CONTROL_DISABLED:=0,Enum363_CRUISE_CONTROL_ENABLED:=1,Enum363_ERROR:=2,Enum363_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum363_NOT_AVAILABLE;

/* variable:     Enum364_BRAKE_PEDAL_RELEASED
 * definition:   /project/MC2M/CPU0/Data/types/Enum364
 * type:         (Enum364_BRAKE_PEDAL_RELEASED:=0,Enum364_BRAKE_PEDAL_DEPRESSED:=1,Enum364_ERROR:=2,Enum364_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum364_BRAKE_PEDAL_RELEASED;

/* variable:     Enum364_BRAKE_PEDAL_DEPRESSED
 * definition:   /project/MC2M/CPU0/Data/types/Enum364
 * type:         (Enum364_BRAKE_PEDAL_RELEASED:=0,Enum364_BRAKE_PEDAL_DEPRESSED:=1,Enum364_ERROR:=2,Enum364_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum364_BRAKE_PEDAL_DEPRESSED;

/* variable:     Enum364_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum364
 * type:         (Enum364_BRAKE_PEDAL_RELEASED:=0,Enum364_BRAKE_PEDAL_DEPRESSED:=1,Enum364_ERROR:=2,Enum364_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum364_ERROR;

/* variable:     Enum364_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum364
 * type:         (Enum364_BRAKE_PEDAL_RELEASED:=0,Enum364_BRAKE_PEDAL_DEPRESSED:=1,Enum364_ERROR:=2,Enum364_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum364_NOT_AVAILABLE;

/* variable:     Enum365_CLUTCH_PEDAL_RELEASED
 * definition:   /project/MC2M/CPU0/Data/types/Enum365
 * type:         (Enum365_CLUTCH_PEDAL_RELEASED:=0,Enum365_CLUTCH_PEDAL_DEPRESSED:=1,Enum365_ERROR:=2,Enum365_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum365_CLUTCH_PEDAL_RELEASED;

/* variable:     Enum365_CLUTCH_PEDAL_DEPRESSED
 * definition:   /project/MC2M/CPU0/Data/types/Enum365
 * type:         (Enum365_CLUTCH_PEDAL_RELEASED:=0,Enum365_CLUTCH_PEDAL_DEPRESSED:=1,Enum365_ERROR:=2,Enum365_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum365_CLUTCH_PEDAL_DEPRESSED;

/* variable:     Enum365_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum365
 * type:         (Enum365_CLUTCH_PEDAL_RELEASED:=0,Enum365_CLUTCH_PEDAL_DEPRESSED:=1,Enum365_ERROR:=2,Enum365_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum365_ERROR;

/* variable:     Enum365_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum365
 * type:         (Enum365_CLUTCH_PEDAL_RELEASED:=0,Enum365_CLUTCH_PEDAL_DEPRESSED:=1,Enum365_ERROR:=2,Enum365_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum365_NOT_AVAILABLE;

/* variable:     Enum366_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_SET
 * definition:   /project/MC2M/CPU0/Data/types/Enum366
 * type:         (Enum366_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_SET:=0,Enum366_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_SET:=1,Enum366_ERROR:=2,Enum366_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum366_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_SET;

/* variable:     Enum366_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_SET
 * definition:   /project/MC2M/CPU0/Data/types/Enum366
 * type:         (Enum366_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_SET:=0,Enum366_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_SET:=1,Enum366_ERROR:=2,Enum366_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum366_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_SET;

/* variable:     Enum366_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum366
 * type:         (Enum366_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_SET:=0,Enum366_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_SET:=1,Enum366_ERROR:=2,Enum366_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum366_ERROR;

/* variable:     Enum366_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum366
 * type:         (Enum366_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_SET:=0,Enum366_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_SET:=1,Enum366_ERROR:=2,Enum366_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum366_NOT_AVAILABLE;

/* variable:     Enum367_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_COAST
 * definition:   /project/MC2M/CPU0/Data/types/Enum367
 * type:         (Enum367_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_COAST:=0,Enum367_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_COAST:=1,Enum367_ERROR:=2,Enum367_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum367_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_COAST;

/* variable:     Enum367_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_COAST
 * definition:   /project/MC2M/CPU0/Data/types/Enum367
 * type:         (Enum367_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_COAST:=0,Enum367_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_COAST:=1,Enum367_ERROR:=2,Enum367_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum367_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_COAST;

/* variable:     Enum367_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum367
 * type:         (Enum367_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_COAST:=0,Enum367_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_COAST:=1,Enum367_ERROR:=2,Enum367_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum367_ERROR;

/* variable:     Enum367_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum367
 * type:         (Enum367_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_COAST:=0,Enum367_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_COAST:=1,Enum367_ERROR:=2,Enum367_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum367_NOT_AVAILABLE;

/* variable:     Enum368_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_RESUME
 * definition:   /project/MC2M/CPU0/Data/types/Enum368
 * type:         (Enum368_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_RESUME:=0,Enum368_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_RESUME:=1,Enum368_ERROR:=2,Enum368_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum368_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_RESUME;

/* variable:     Enum368_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_RESUME
 * definition:   /project/MC2M/CPU0/Data/types/Enum368
 * type:         (Enum368_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_RESUME:=0,Enum368_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_RESUME:=1,Enum368_ERROR:=2,Enum368_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum368_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_RESUME;

/* variable:     Enum368_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum368
 * type:         (Enum368_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_RESUME:=0,Enum368_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_RESUME:=1,Enum368_ERROR:=2,Enum368_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum368_ERROR;

/* variable:     Enum368_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum368
 * type:         (Enum368_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_RESUME:=0,Enum368_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_RESUME:=1,Enum368_ERROR:=2,Enum368_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum368_NOT_AVAILABLE;

/* variable:     Enum369_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_ACCELERATE
 * definition:   /project/MC2M/CPU0/Data/types/Enum369
 * type:         (Enum369_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_ACCELERATE:=0,Enum369_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_ACCELERATE:=1,Enum369_ERROR:=2,Enum369_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum369_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_ACCELERATE;

/* variable:     Enum369_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_ACCELERATE
 * definition:   /project/MC2M/CPU0/Data/types/Enum369
 * type:         (Enum369_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_ACCELERATE:=0,Enum369_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_ACCELERATE:=1,Enum369_ERROR:=2,Enum369_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum369_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_ACCELERATE;

/* variable:     Enum369_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum369
 * type:         (Enum369_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_ACCELERATE:=0,Enum369_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_ACCELERATE:=1,Enum369_ERROR:=2,Enum369_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum369_ERROR;

/* variable:     Enum369_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum369
 * type:         (Enum369_CRUISE_CONTROL_ACTIVATOR_NOT_IN_THE_POSITION_ACCELERATE:=0,Enum369_CRUISE_CONTROL_ACTIVATOR_IN_POSITION_ACCELERATE:=1,Enum369_ERROR:=2,Enum369_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum369_NOT_AVAILABLE;

/* variable:     Enum370_OFFDISABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum370
 * type:         (Enum370_OFFDISABLED:=0,Enum370_HOLD:=1,Enum370_ACCELERATE:=2,Enum370_DECELERATE:=3,Enum370_RESUME:=4,Enum370_SET:=5,Enum370_ACCELERATOR_OVERRIDE:=6,Enum370_NOT_AVAILABLE:=7)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum370_OFFDISABLED;

/* variable:     Enum370_HOLD
 * definition:   /project/MC2M/CPU0/Data/types/Enum370
 * type:         (Enum370_OFFDISABLED:=0,Enum370_HOLD:=1,Enum370_ACCELERATE:=2,Enum370_DECELERATE:=3,Enum370_RESUME:=4,Enum370_SET:=5,Enum370_ACCELERATOR_OVERRIDE:=6,Enum370_NOT_AVAILABLE:=7)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum370_HOLD;

/* variable:     Enum370_ACCELERATE
 * definition:   /project/MC2M/CPU0/Data/types/Enum370
 * type:         (Enum370_OFFDISABLED:=0,Enum370_HOLD:=1,Enum370_ACCELERATE:=2,Enum370_DECELERATE:=3,Enum370_RESUME:=4,Enum370_SET:=5,Enum370_ACCELERATOR_OVERRIDE:=6,Enum370_NOT_AVAILABLE:=7)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum370_ACCELERATE;

/* variable:     Enum370_DECELERATE
 * definition:   /project/MC2M/CPU0/Data/types/Enum370
 * type:         (Enum370_OFFDISABLED:=0,Enum370_HOLD:=1,Enum370_ACCELERATE:=2,Enum370_DECELERATE:=3,Enum370_RESUME:=4,Enum370_SET:=5,Enum370_ACCELERATOR_OVERRIDE:=6,Enum370_NOT_AVAILABLE:=7)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum370_DECELERATE;

/* variable:     Enum370_RESUME
 * definition:   /project/MC2M/CPU0/Data/types/Enum370
 * type:         (Enum370_OFFDISABLED:=0,Enum370_HOLD:=1,Enum370_ACCELERATE:=2,Enum370_DECELERATE:=3,Enum370_RESUME:=4,Enum370_SET:=5,Enum370_ACCELERATOR_OVERRIDE:=6,Enum370_NOT_AVAILABLE:=7)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum370_RESUME;

/* variable:     Enum370_SET
 * definition:   /project/MC2M/CPU0/Data/types/Enum370
 * type:         (Enum370_OFFDISABLED:=0,Enum370_HOLD:=1,Enum370_ACCELERATE:=2,Enum370_DECELERATE:=3,Enum370_RESUME:=4,Enum370_SET:=5,Enum370_ACCELERATOR_OVERRIDE:=6,Enum370_NOT_AVAILABLE:=7)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum370_SET;

/* variable:     Enum370_ACCELERATOR_OVERRIDE
 * definition:   /project/MC2M/CPU0/Data/types/Enum370
 * type:         (Enum370_OFFDISABLED:=0,Enum370_HOLD:=1,Enum370_ACCELERATE:=2,Enum370_DECELERATE:=3,Enum370_RESUME:=4,Enum370_SET:=5,Enum370_ACCELERATOR_OVERRIDE:=6,Enum370_NOT_AVAILABLE:=7)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum370_ACCELERATOR_OVERRIDE;

/* variable:     Enum370_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum370
 * type:         (Enum370_OFFDISABLED:=0,Enum370_HOLD:=1,Enum370_ACCELERATE:=2,Enum370_DECELERATE:=3,Enum370_RESUME:=4,Enum370_SET:=5,Enum370_ACCELERATOR_OVERRIDE:=6,Enum370_NOT_AVAILABLE:=7)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum370_NOT_AVAILABLE;

/* variable:     Enum375_LESS_THAN_1_MINUTE
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_LESS_THAN_1_MINUTE;

/* variable:     Enum375_ONE_MINUTE
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_ONE_MINUTE;

/* variable:     Enum375_TWO_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_TWO_MINUTES;

/* variable:     Enum375_THREE_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_THREE_MINUTES;

/* variable:     Enum375_FOUR_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_FOUR_MINUTES;

/* variable:     Enum375_FIVE_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_FIVE_MINUTES;

/* variable:     Enum375_SIX_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_SIX_MINUTES;

/* variable:     Enum375_SEVEN_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_SEVEN_MINUTES;

/* variable:     Enum375_EIGHT_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_EIGHT_MINUTES;

/* variable:     Enum375_NINE_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_NINE_MINUTES;

/* variable:     Enum375_TEN_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_TEN_MINUTES;

/* variable:     Enum375_ELEVEN_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_ELEVEN_MINUTES;

/* variable:     Enum375_TWELVE_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_TWELVE_MINUTES;

/* variable:     Enum375_THIRTEEN_MINUTES
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_THIRTEEN_MINUTES;

/* variable:     Enum375_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_ERROR;

/* variable:     Enum375_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum375
 * type:         (Enum375_LESS_THAN_1_MINUTE:=0,Enum375_ONE_MINUTE:=1,Enum375_TWO_MINUTES:=2,Enum375_THREE_MINUTES:=3,Enum375_FOUR_MINUTES:=4,Enum375_FIVE_MINUTES:=5,Enum375_SIX_MINUTES:=6,Enum375_SEVEN_MINUTES:=7,Enum375_EIGHT_MINUTES:=8,Enum375_NINE_MINUTES:=9,Enum375_TEN_MINUTES:=10,Enum375_ELEVEN_MINUTES:=11,Enum375_TWELVE_MINUTES:=12,Enum375_THIRTEEN_MINUTES:=13,Enum375_ERROR:=14,Enum375_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum375_NOT_AVAILABLE;

/* variable:     Enum45_DEACTIVATE_WATER_PUMP
 * definition:   /project/MC2M/CPU0/Data/types/Enum45
 * type:         (Enum45_DEACTIVATE_WATER_PUMP:=0,Enum45_ACTIVATE_WATER_PUMP:=1,Enum45_RESERVED:=2,Enum45_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum45_DEACTIVATE_WATER_PUMP;

/* variable:     Enum45_ACTIVATE_WATER_PUMP
 * definition:   /project/MC2M/CPU0/Data/types/Enum45
 * type:         (Enum45_DEACTIVATE_WATER_PUMP:=0,Enum45_ACTIVATE_WATER_PUMP:=1,Enum45_RESERVED:=2,Enum45_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum45_ACTIVATE_WATER_PUMP;

/* variable:     Enum45_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum45
 * type:         (Enum45_DEACTIVATE_WATER_PUMP:=0,Enum45_ACTIVATE_WATER_PUMP:=1,Enum45_RESERVED:=2,Enum45_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum45_RESERVED;

/* variable:     Enum45_DONT_CARETAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum45
 * type:         (Enum45_DEACTIVATE_WATER_PUMP:=0,Enum45_ACTIVATE_WATER_PUMP:=1,Enum45_RESERVED:=2,Enum45_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum45_DONT_CARETAKE_NO_ACTION;

/* variable:     Enum46_RELEASE_BATTERY_MAIN_SWITCH
 * definition:   /project/MC2M/CPU0/Data/types/Enum46
 * type:         (Enum46_RELEASE_BATTERY_MAIN_SWITCH:=0,Enum46_HOLD_BATTERY_MAIN_SWITCH:=1,Enum46_UNDEFINED:=2,Enum46_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum46_RELEASE_BATTERY_MAIN_SWITCH;

/* variable:     Enum46_HOLD_BATTERY_MAIN_SWITCH
 * definition:   /project/MC2M/CPU0/Data/types/Enum46
 * type:         (Enum46_RELEASE_BATTERY_MAIN_SWITCH:=0,Enum46_HOLD_BATTERY_MAIN_SWITCH:=1,Enum46_UNDEFINED:=2,Enum46_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum46_HOLD_BATTERY_MAIN_SWITCH;

/* variable:     Enum46_UNDEFINED
 * definition:   /project/MC2M/CPU0/Data/types/Enum46
 * type:         (Enum46_RELEASE_BATTERY_MAIN_SWITCH:=0,Enum46_HOLD_BATTERY_MAIN_SWITCH:=1,Enum46_UNDEFINED:=2,Enum46_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum46_UNDEFINED;

/* variable:     Enum46_DONT_CARETAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum46
 * type:         (Enum46_RELEASE_BATTERY_MAIN_SWITCH:=0,Enum46_HOLD_BATTERY_MAIN_SWITCH:=1,Enum46_UNDEFINED:=2,Enum46_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum46_DONT_CARETAKE_NO_ACTION;

/* variable:     Enum47_OPERATOR_SEAT_NOT_FACING_FORWARD
 * definition:   /project/MC2M/CPU0/Data/types/Enum47
 * type:         (Enum47_OPERATOR_SEAT_NOT_FACING_FORWARD:=0,Enum47_OPERATOR_SEAT_IS_FACING_FORWARD:=1,Enum47_ERROR:=2,Enum47_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum47_OPERATOR_SEAT_NOT_FACING_FORWARD;

/* variable:     Enum47_OPERATOR_SEAT_IS_FACING_FORWARD
 * definition:   /project/MC2M/CPU0/Data/types/Enum47
 * type:         (Enum47_OPERATOR_SEAT_NOT_FACING_FORWARD:=0,Enum47_OPERATOR_SEAT_IS_FACING_FORWARD:=1,Enum47_ERROR:=2,Enum47_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum47_OPERATOR_SEAT_IS_FACING_FORWARD;

/* variable:     Enum47_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum47
 * type:         (Enum47_OPERATOR_SEAT_NOT_FACING_FORWARD:=0,Enum47_OPERATOR_SEAT_IS_FACING_FORWARD:=1,Enum47_ERROR:=2,Enum47_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum47_ERROR;

/* variable:     Enum47_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum47
 * type:         (Enum47_OPERATOR_SEAT_NOT_FACING_FORWARD:=0,Enum47_OPERATOR_SEAT_IS_FACING_FORWARD:=1,Enum47_ERROR:=2,Enum47_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum47_NOT_AVAILABLE;

/* variable:     Enum48_NOT_BUCKLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum48
 * type:         (Enum48_NOT_BUCKLED:=0,Enum48_OK_SEAT_BELT_IS_BUCKLED:=1,Enum48_ERROR_SWITCH_STATE_CANNOT_BE_DETERMINED:=2,Enum48_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum48_NOT_BUCKLED;

/* variable:     Enum48_OK_SEAT_BELT_IS_BUCKLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum48
 * type:         (Enum48_NOT_BUCKLED:=0,Enum48_OK_SEAT_BELT_IS_BUCKLED:=1,Enum48_ERROR_SWITCH_STATE_CANNOT_BE_DETERMINED:=2,Enum48_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum48_OK_SEAT_BELT_IS_BUCKLED;

/* variable:     Enum48_ERROR_SWITCH_STATE_CANNOT_BE_DETERMINED
 * definition:   /project/MC2M/CPU0/Data/types/Enum48
 * type:         (Enum48_NOT_BUCKLED:=0,Enum48_OK_SEAT_BELT_IS_BUCKLED:=1,Enum48_ERROR_SWITCH_STATE_CANNOT_BE_DETERMINED:=2,Enum48_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum48_ERROR_SWITCH_STATE_CANNOT_BE_DETERMINED;

/* variable:     Enum48_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum48
 * type:         (Enum48_NOT_BUCKLED:=0,Enum48_OK_SEAT_BELT_IS_BUCKLED:=1,Enum48_ERROR_SWITCH_STATE_CANNOT_BE_DETERMINED:=2,Enum48_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum48_NOT_AVAILABLE;

/* variable:     Enum49_SWITCH_IN_THE_OFF_STATE
 * definition:   /project/MC2M/CPU0/Data/types/Enum49
 * type:         (Enum49_SWITCH_IN_THE_OFF_STATE:=0,Enum49_SWITCH_IN_THE_ON_STATE_DECREASE:=1,Enum49_ERROR:=2,Enum49_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum49_SWITCH_IN_THE_OFF_STATE;

/* variable:     Enum49_SWITCH_IN_THE_ON_STATE_DECREASE
 * definition:   /project/MC2M/CPU0/Data/types/Enum49
 * type:         (Enum49_SWITCH_IN_THE_OFF_STATE:=0,Enum49_SWITCH_IN_THE_ON_STATE_DECREASE:=1,Enum49_ERROR:=2,Enum49_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum49_SWITCH_IN_THE_ON_STATE_DECREASE;

/* variable:     Enum49_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum49
 * type:         (Enum49_SWITCH_IN_THE_OFF_STATE:=0,Enum49_SWITCH_IN_THE_ON_STATE_DECREASE:=1,Enum49_ERROR:=2,Enum49_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum49_ERROR;

/* variable:     Enum49_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum49
 * type:         (Enum49_SWITCH_IN_THE_OFF_STATE:=0,Enum49_SWITCH_IN_THE_ON_STATE_DECREASE:=1,Enum49_ERROR:=2,Enum49_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum49_NOT_AVAILABLE;

/* variable:     Enum50_SWITCH_IN_THE_OFF_STATE
 * definition:   /project/MC2M/CPU0/Data/types/Enum50
 * type:         (Enum50_SWITCH_IN_THE_OFF_STATE:=0,Enum50_SWITCH_IN_THE_ON_STATE_INCREASE:=1,Enum50_ERROR:=2,Enum50_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum50_SWITCH_IN_THE_OFF_STATE;

/* variable:     Enum50_SWITCH_IN_THE_ON_STATE_INCREASE
 * definition:   /project/MC2M/CPU0/Data/types/Enum50
 * type:         (Enum50_SWITCH_IN_THE_OFF_STATE:=0,Enum50_SWITCH_IN_THE_ON_STATE_INCREASE:=1,Enum50_ERROR:=2,Enum50_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum50_SWITCH_IN_THE_ON_STATE_INCREASE;

/* variable:     Enum50_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum50
 * type:         (Enum50_SWITCH_IN_THE_OFF_STATE:=0,Enum50_SWITCH_IN_THE_ON_STATE_INCREASE:=1,Enum50_ERROR:=2,Enum50_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum50_ERROR;

/* variable:     Enum50_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum50
 * type:         (Enum50_SWITCH_IN_THE_OFF_STATE:=0,Enum50_SWITCH_IN_THE_ON_STATE_INCREASE:=1,Enum50_ERROR:=2,Enum50_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum50_NOT_AVAILABLE;

/* variable:     Enum51_SWITCH_DISABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum51
 * type:         (Enum51_SWITCH_DISABLED:=0,Enum51_SWITCHED_ENABLED:=1,Enum51_ERROR:=2,Enum51_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum51_SWITCH_DISABLED;

/* variable:     Enum51_SWITCHED_ENABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum51
 * type:         (Enum51_SWITCH_DISABLED:=0,Enum51_SWITCHED_ENABLED:=1,Enum51_ERROR:=2,Enum51_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum51_SWITCHED_ENABLED;

/* variable:     Enum51_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum51
 * type:         (Enum51_SWITCH_DISABLED:=0,Enum51_SWITCHED_ENABLED:=1,Enum51_ERROR:=2,Enum51_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum51_ERROR;

/* variable:     Enum51_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum51
 * type:         (Enum51_SWITCH_DISABLED:=0,Enum51_SWITCHED_ENABLED:=1,Enum51_ERROR:=2,Enum51_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum51_NOT_AVAILABLE;

/* variable:     Enum52_SWITCH_IN_THE_OFF_STATE
 * definition:   /project/MC2M/CPU0/Data/types/Enum52
 * type:         (Enum52_SWITCH_IN_THE_OFF_STATE:=0,Enum52_SWITCH_IN_THE_ON_STATE:=1,Enum52_ERROR:=2,Enum52_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum52_SWITCH_IN_THE_OFF_STATE;

/* variable:     Enum52_SWITCH_IN_THE_ON_STATE
 * definition:   /project/MC2M/CPU0/Data/types/Enum52
 * type:         (Enum52_SWITCH_IN_THE_OFF_STATE:=0,Enum52_SWITCH_IN_THE_ON_STATE:=1,Enum52_ERROR:=2,Enum52_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum52_SWITCH_IN_THE_ON_STATE;

/* variable:     Enum52_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum52
 * type:         (Enum52_SWITCH_IN_THE_OFF_STATE:=0,Enum52_SWITCH_IN_THE_ON_STATE:=1,Enum52_ERROR:=2,Enum52_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum52_ERROR;

/* variable:     Enum52_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum52
 * type:         (Enum52_SWITCH_IN_THE_OFF_STATE:=0,Enum52_SWITCH_IN_THE_ON_STATE:=1,Enum52_ERROR:=2,Enum52_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum52_NOT_AVAILABLE;

/* variable:     Enum53_DEACTIVATE_AUXILIARY_HEATER
 * definition:   /project/MC2M/CPU0/Data/types/Enum53
 * type:         (Enum53_DEACTIVATE_AUXILIARY_HEATER:=0,Enum53_OFF_DUE_TO_ADR_PER_EUROPEAN_REGULATIONS_FOR_TRANSPORT_OF_HAZARDOUS_MATERIALS:=1,Enum53_ECONOMY_MODE:=2,Enum53_NORMAL_MODE:=3,Enum53_RESERVED:=14,Enum53_DONT_CARETAKE_NO_ACTION:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum53_DEACTIVATE_AUXILIARY_HEATER;

/* variable:     Enum53_OFF_DUE_TO_ADR_PER_EUROPEAN_REGULATIONS_FOR_TRANSPORT_OF_HAZARDOUS_MATERIALS
 * definition:   /project/MC2M/CPU0/Data/types/Enum53
 * type:         (Enum53_DEACTIVATE_AUXILIARY_HEATER:=0,Enum53_OFF_DUE_TO_ADR_PER_EUROPEAN_REGULATIONS_FOR_TRANSPORT_OF_HAZARDOUS_MATERIALS:=1,Enum53_ECONOMY_MODE:=2,Enum53_NORMAL_MODE:=3,Enum53_RESERVED:=14,Enum53_DONT_CARETAKE_NO_ACTION:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum53_OFF_DUE_TO_ADR_PER_EUROPEAN_REGULATIONS_FOR_TRANSPORT_OF_HAZARDOUS_MATERIALS;

/* variable:     Enum53_ECONOMY_MODE
 * definition:   /project/MC2M/CPU0/Data/types/Enum53
 * type:         (Enum53_DEACTIVATE_AUXILIARY_HEATER:=0,Enum53_OFF_DUE_TO_ADR_PER_EUROPEAN_REGULATIONS_FOR_TRANSPORT_OF_HAZARDOUS_MATERIALS:=1,Enum53_ECONOMY_MODE:=2,Enum53_NORMAL_MODE:=3,Enum53_RESERVED:=14,Enum53_DONT_CARETAKE_NO_ACTION:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum53_ECONOMY_MODE;

/* variable:     Enum53_NORMAL_MODE
 * definition:   /project/MC2M/CPU0/Data/types/Enum53
 * type:         (Enum53_DEACTIVATE_AUXILIARY_HEATER:=0,Enum53_OFF_DUE_TO_ADR_PER_EUROPEAN_REGULATIONS_FOR_TRANSPORT_OF_HAZARDOUS_MATERIALS:=1,Enum53_ECONOMY_MODE:=2,Enum53_NORMAL_MODE:=3,Enum53_RESERVED:=14,Enum53_DONT_CARETAKE_NO_ACTION:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum53_NORMAL_MODE;

/* variable:     Enum53_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum53
 * type:         (Enum53_DEACTIVATE_AUXILIARY_HEATER:=0,Enum53_OFF_DUE_TO_ADR_PER_EUROPEAN_REGULATIONS_FOR_TRANSPORT_OF_HAZARDOUS_MATERIALS:=1,Enum53_ECONOMY_MODE:=2,Enum53_NORMAL_MODE:=3,Enum53_RESERVED:=14,Enum53_DONT_CARETAKE_NO_ACTION:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum53_RESERVED;

/* variable:     Enum53_DONT_CARETAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum53
 * type:         (Enum53_DEACTIVATE_AUXILIARY_HEATER:=0,Enum53_OFF_DUE_TO_ADR_PER_EUROPEAN_REGULATIONS_FOR_TRANSPORT_OF_HAZARDOUS_MATERIALS:=1,Enum53_ECONOMY_MODE:=2,Enum53_NORMAL_MODE:=3,Enum53_RESERVED:=14,Enum53_DONT_CARETAKE_NO_ACTION:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum53_DONT_CARETAKE_NO_ACTION;

/* variable:     Enum54_DO_NOT_HEAT_ENGINE_ZONE
 * definition:   /project/MC2M/CPU0/Data/types/Enum54
 * type:         (Enum54_DO_NOT_HEAT_ENGINE_ZONE:=0,Enum54_HEAT_ENGINE_ZONE:=1,Enum54_RESERVED:=2,Enum54_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum54_DO_NOT_HEAT_ENGINE_ZONE;

/* variable:     Enum54_HEAT_ENGINE_ZONE
 * definition:   /project/MC2M/CPU0/Data/types/Enum54
 * type:         (Enum54_DO_NOT_HEAT_ENGINE_ZONE:=0,Enum54_HEAT_ENGINE_ZONE:=1,Enum54_RESERVED:=2,Enum54_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum54_HEAT_ENGINE_ZONE;

/* variable:     Enum54_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum54
 * type:         (Enum54_DO_NOT_HEAT_ENGINE_ZONE:=0,Enum54_HEAT_ENGINE_ZONE:=1,Enum54_RESERVED:=2,Enum54_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum54_RESERVED;

/* variable:     Enum54_DONT_CARETAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum54
 * type:         (Enum54_DO_NOT_HEAT_ENGINE_ZONE:=0,Enum54_HEAT_ENGINE_ZONE:=1,Enum54_RESERVED:=2,Enum54_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum54_DONT_CARETAKE_NO_ACTION;

/* variable:     Enum55_DO_NOT_CAB_ENGINE_ZONE
 * definition:   /project/MC2M/CPU0/Data/types/Enum55
 * type:         (Enum55_DO_NOT_CAB_ENGINE_ZONE:=0,Enum55_HEAT_CAB_ZONE:=1,Enum55_RESERVED:=2,Enum55_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum55_DO_NOT_CAB_ENGINE_ZONE;

/* variable:     Enum55_HEAT_CAB_ZONE
 * definition:   /project/MC2M/CPU0/Data/types/Enum55
 * type:         (Enum55_DO_NOT_CAB_ENGINE_ZONE:=0,Enum55_HEAT_CAB_ZONE:=1,Enum55_RESERVED:=2,Enum55_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum55_HEAT_CAB_ZONE;

/* variable:     Enum55_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum55
 * type:         (Enum55_DO_NOT_CAB_ENGINE_ZONE:=0,Enum55_HEAT_CAB_ZONE:=1,Enum55_RESERVED:=2,Enum55_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum55_RESERVED;

/* variable:     Enum55_DONT_CARETAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum55
 * type:         (Enum55_DO_NOT_CAB_ENGINE_ZONE:=0,Enum55_HEAT_CAB_ZONE:=1,Enum55_RESERVED:=2,Enum55_DONT_CARETAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum55_DONT_CARETAKE_NO_ACTION;

/* variable:     Enum63_ASR_ENGINE_CONTROL_PASSIVE_BUT_INSTALLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum63
 * type:         (Enum63_ASR_ENGINE_CONTROL_PASSIVE_BUT_INSTALLED:=0,Enum63_ASR_ENGINE_CONTROL_ACTIVE:=1,Enum63_RESERVED:=2,Enum63_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum63_ASR_ENGINE_CONTROL_PASSIVE_BUT_INSTALLED;

/* variable:     Enum63_ASR_ENGINE_CONTROL_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum63
 * type:         (Enum63_ASR_ENGINE_CONTROL_PASSIVE_BUT_INSTALLED:=0,Enum63_ASR_ENGINE_CONTROL_ACTIVE:=1,Enum63_RESERVED:=2,Enum63_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum63_ASR_ENGINE_CONTROL_ACTIVE;

/* variable:     Enum63_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum63
 * type:         (Enum63_ASR_ENGINE_CONTROL_PASSIVE_BUT_INSTALLED:=0,Enum63_ASR_ENGINE_CONTROL_ACTIVE:=1,Enum63_RESERVED:=2,Enum63_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum63_RESERVED;

/* variable:     Enum63_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum63
 * type:         (Enum63_ASR_ENGINE_CONTROL_PASSIVE_BUT_INSTALLED:=0,Enum63_ASR_ENGINE_CONTROL_ACTIVE:=1,Enum63_RESERVED:=2,Enum63_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum63_NOT_AVAILABLE;

/* variable:     Enum64_ASR_BRAKE_CONTROL_PASSIVE_BUT_INSTALLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum64
 * type:         (Enum64_ASR_BRAKE_CONTROL_PASSIVE_BUT_INSTALLED:=0,Enum64_ASR_BRAKE_CONTROL_ACTIVE:=1,Enum64_RESERVED:=2,Enum64_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum64_ASR_BRAKE_CONTROL_PASSIVE_BUT_INSTALLED;

/* variable:     Enum64_ASR_BRAKE_CONTROL_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum64
 * type:         (Enum64_ASR_BRAKE_CONTROL_PASSIVE_BUT_INSTALLED:=0,Enum64_ASR_BRAKE_CONTROL_ACTIVE:=1,Enum64_RESERVED:=2,Enum64_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum64_ASR_BRAKE_CONTROL_ACTIVE;

/* variable:     Enum64_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum64
 * type:         (Enum64_ASR_BRAKE_CONTROL_PASSIVE_BUT_INSTALLED:=0,Enum64_ASR_BRAKE_CONTROL_ACTIVE:=1,Enum64_RESERVED:=2,Enum64_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum64_RESERVED;

/* variable:     Enum64_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum64
 * type:         (Enum64_ASR_BRAKE_CONTROL_PASSIVE_BUT_INSTALLED:=0,Enum64_ASR_BRAKE_CONTROL_ACTIVE:=1,Enum64_RESERVED:=2,Enum64_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum64_NOT_AVAILABLE;

/* variable:     Enum65_ABS_PASSIVE_BUT_INSTALLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum65
 * type:         (Enum65_ABS_PASSIVE_BUT_INSTALLED:=0,Enum65_ABS_ACTIVE:=1,Enum65_RESERVED:=2,Enum65_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum65_ABS_PASSIVE_BUT_INSTALLED;

/* variable:     Enum65_ABS_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum65
 * type:         (Enum65_ABS_PASSIVE_BUT_INSTALLED:=0,Enum65_ABS_ACTIVE:=1,Enum65_RESERVED:=2,Enum65_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum65_ABS_ACTIVE;

/* variable:     Enum65_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum65
 * type:         (Enum65_ABS_PASSIVE_BUT_INSTALLED:=0,Enum65_ABS_ACTIVE:=1,Enum65_RESERVED:=2,Enum65_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum65_RESERVED;

/* variable:     Enum65_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum65
 * type:         (Enum65_ABS_PASSIVE_BUT_INSTALLED:=0,Enum65_ABS_ACTIVE:=1,Enum65_RESERVED:=2,Enum65_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum65_NOT_AVAILABLE;

/* variable:     Enum66_BRAKE_PEDAL_IS_NOT_BEING_PRESSED
 * definition:   /project/MC2M/CPU0/Data/types/Enum66
 * type:         (Enum66_BRAKE_PEDAL_IS_NOT_BEING_PRESSED:=0,Enum66_BRAKE_PEDAL_IS_BEING_PRESSED:=1,Enum66_ERROR:=2,Enum66_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum66_BRAKE_PEDAL_IS_NOT_BEING_PRESSED;

/* variable:     Enum66_BRAKE_PEDAL_IS_BEING_PRESSED
 * definition:   /project/MC2M/CPU0/Data/types/Enum66
 * type:         (Enum66_BRAKE_PEDAL_IS_NOT_BEING_PRESSED:=0,Enum66_BRAKE_PEDAL_IS_BEING_PRESSED:=1,Enum66_ERROR:=2,Enum66_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum66_BRAKE_PEDAL_IS_BEING_PRESSED;

/* variable:     Enum66_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum66
 * type:         (Enum66_BRAKE_PEDAL_IS_NOT_BEING_PRESSED:=0,Enum66_BRAKE_PEDAL_IS_BEING_PRESSED:=1,Enum66_ERROR:=2,Enum66_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum66_ERROR;

/* variable:     Enum66_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum66
 * type:         (Enum66_BRAKE_PEDAL_IS_NOT_BEING_PRESSED:=0,Enum66_BRAKE_PEDAL_IS_BEING_PRESSED:=1,Enum66_ERROR:=2,Enum66_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum66_NOT_AVAILABLE;

/* variable:     Enum67_ABS_OFFROAD_SWITCH_PASSIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum67
 * type:         (Enum67_ABS_OFFROAD_SWITCH_PASSIVE:=0,Enum67_ABS_OFFROAD_SWITCH_ACTIVE:=1,Enum67_ERROR:=2,Enum67_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum67_ABS_OFFROAD_SWITCH_PASSIVE;

/* variable:     Enum67_ABS_OFFROAD_SWITCH_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum67
 * type:         (Enum67_ABS_OFFROAD_SWITCH_PASSIVE:=0,Enum67_ABS_OFFROAD_SWITCH_ACTIVE:=1,Enum67_ERROR:=2,Enum67_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum67_ABS_OFFROAD_SWITCH_ACTIVE;

/* variable:     Enum67_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum67
 * type:         (Enum67_ABS_OFFROAD_SWITCH_PASSIVE:=0,Enum67_ABS_OFFROAD_SWITCH_ACTIVE:=1,Enum67_ERROR:=2,Enum67_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum67_ERROR;

/* variable:     Enum67_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum67
 * type:         (Enum67_ABS_OFFROAD_SWITCH_PASSIVE:=0,Enum67_ABS_OFFROAD_SWITCH_ACTIVE:=1,Enum67_ERROR:=2,Enum67_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum67_NOT_AVAILABLE;

/* variable:     Enum68_ASR_OFFROAD_SWITCH_PASSIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum68
 * type:         (Enum68_ASR_OFFROAD_SWITCH_PASSIVE:=0,Enum68_ASR_OFFROAD_SWITCH_ACTIVE:=1,Enum68_ERROR:=2,Enum68_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum68_ASR_OFFROAD_SWITCH_PASSIVE;

/* variable:     Enum68_ASR_OFFROAD_SWITCH_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum68
 * type:         (Enum68_ASR_OFFROAD_SWITCH_PASSIVE:=0,Enum68_ASR_OFFROAD_SWITCH_ACTIVE:=1,Enum68_ERROR:=2,Enum68_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum68_ASR_OFFROAD_SWITCH_ACTIVE;

/* variable:     Enum68_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum68
 * type:         (Enum68_ASR_OFFROAD_SWITCH_PASSIVE:=0,Enum68_ASR_OFFROAD_SWITCH_ACTIVE:=1,Enum68_ERROR:=2,Enum68_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum68_ERROR;

/* variable:     Enum68_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum68
 * type:         (Enum68_ASR_OFFROAD_SWITCH_PASSIVE:=0,Enum68_ASR_OFFROAD_SWITCH_ACTIVE:=1,Enum68_ERROR:=2,Enum68_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum68_NOT_AVAILABLE;

/* variable:     Enum69_ASR_HILL_HOLDER_SWITCH_PASSIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum69
 * type:         (Enum69_ASR_HILL_HOLDER_SWITCH_PASSIVE:=0,Enum69_ASR_HILL_HOLDER_SWITCH_ACTIVE:=1,Enum69_ERROR:=2,Enum69_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum69_ASR_HILL_HOLDER_SWITCH_PASSIVE;

/* variable:     Enum69_ASR_HILL_HOLDER_SWITCH_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum69
 * type:         (Enum69_ASR_HILL_HOLDER_SWITCH_PASSIVE:=0,Enum69_ASR_HILL_HOLDER_SWITCH_ACTIVE:=1,Enum69_ERROR:=2,Enum69_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum69_ASR_HILL_HOLDER_SWITCH_ACTIVE;

/* variable:     Enum69_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum69
 * type:         (Enum69_ASR_HILL_HOLDER_SWITCH_PASSIVE:=0,Enum69_ASR_HILL_HOLDER_SWITCH_ACTIVE:=1,Enum69_ERROR:=2,Enum69_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum69_ERROR;

/* variable:     Enum69_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum69
 * type:         (Enum69_ASR_HILL_HOLDER_SWITCH_PASSIVE:=0,Enum69_ASR_HILL_HOLDER_SWITCH_ACTIVE:=1,Enum69_ERROR:=2,Enum69_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum69_NOT_AVAILABLE;

/* variable:     Enum70_OFF
 * definition:   /project/MC2M/CPU0/Data/types/Enum70
 * type:         (Enum70_OFF:=0,Enum70_ON:=1,Enum70_ERROR:=2,Enum70_NOT_AVAILABLE_OR_NOT_INSTALLED:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum70_OFF;

/* variable:     Enum70_ON
 * definition:   /project/MC2M/CPU0/Data/types/Enum70
 * type:         (Enum70_OFF:=0,Enum70_ON:=1,Enum70_ERROR:=2,Enum70_NOT_AVAILABLE_OR_NOT_INSTALLED:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum70_ON;

/* variable:     Enum70_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum70
 * type:         (Enum70_OFF:=0,Enum70_ON:=1,Enum70_ERROR:=2,Enum70_NOT_AVAILABLE_OR_NOT_INSTALLED:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum70_ERROR;

/* variable:     Enum70_NOT_AVAILABLE_OR_NOT_INSTALLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum70
 * type:         (Enum70_OFF:=0,Enum70_ON:=1,Enum70_ERROR:=2,Enum70_NOT_AVAILABLE_OR_NOT_INSTALLED:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum70_NOT_AVAILABLE_OR_NOT_INSTALLED;

/* variable:     Enum71_OFF
 * definition:   /project/MC2M/CPU0/Data/types/Enum71
 * type:         (Enum71_OFF:=0,Enum71_ON:=1,Enum71_ERROR:=2,Enum71_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum71_OFF;

/* variable:     Enum71_ON
 * definition:   /project/MC2M/CPU0/Data/types/Enum71
 * type:         (Enum71_OFF:=0,Enum71_ON:=1,Enum71_ERROR:=2,Enum71_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum71_ON;

/* variable:     Enum71_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum71
 * type:         (Enum71_OFF:=0,Enum71_ON:=1,Enum71_ERROR:=2,Enum71_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum71_ERROR;

/* variable:     Enum71_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum71
 * type:         (Enum71_OFF:=0,Enum71_ON:=1,Enum71_ERROR:=2,Enum71_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum71_NOT_AVAILABLE;

/* variable:     Enum72_NOT_FULLY_OPERATIONAL
 * definition:   /project/MC2M/CPU0/Data/types/Enum72
 * type:         (Enum72_NOT_FULLY_OPERATIONAL:=0,Enum72_FULLY_OPERATIONAL:=1,Enum72_RESERVED:=2,Enum72_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum72_NOT_FULLY_OPERATIONAL;

/* variable:     Enum72_FULLY_OPERATIONAL
 * definition:   /project/MC2M/CPU0/Data/types/Enum72
 * type:         (Enum72_NOT_FULLY_OPERATIONAL:=0,Enum72_FULLY_OPERATIONAL:=1,Enum72_RESERVED:=2,Enum72_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum72_FULLY_OPERATIONAL;

/* variable:     Enum72_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum72
 * type:         (Enum72_NOT_FULLY_OPERATIONAL:=0,Enum72_FULLY_OPERATIONAL:=1,Enum72_RESERVED:=2,Enum72_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum72_RESERVED;

/* variable:     Enum72_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum72
 * type:         (Enum72_NOT_FULLY_OPERATIONAL:=0,Enum72_FULLY_OPERATIONAL:=1,Enum72_RESERVED:=2,Enum72_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum72_NOT_AVAILABLE;

/* variable:     Enum73_OFF
 * definition:   /project/MC2M/CPU0/Data/types/Enum73
 * type:         (Enum73_OFF:=0,Enum73_ON:=1,Enum73_RESERVED:=2,Enum73_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum73_OFF;

/* variable:     Enum73_ON
 * definition:   /project/MC2M/CPU0/Data/types/Enum73
 * type:         (Enum73_OFF:=0,Enum73_ON:=1,Enum73_RESERVED:=2,Enum73_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum73_ON;

/* variable:     Enum73_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum73
 * type:         (Enum73_OFF:=0,Enum73_ON:=1,Enum73_RESERVED:=2,Enum73_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum73_RESERVED;

/* variable:     Enum73_TAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum73
 * type:         (Enum73_OFF:=0,Enum73_ON:=1,Enum73_RESERVED:=2,Enum73_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum73_TAKE_NO_ACTION;

/* variable:     Enum74_HALT_BRAKE_SWITCH_PASSIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum74
 * type:         (Enum74_HALT_BRAKE_SWITCH_PASSIVE:=0,Enum74_HALT_BRAKE_SWITCH_ACTIVE:=1,Enum74_ERROR:=2,Enum74_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum74_HALT_BRAKE_SWITCH_PASSIVE;

/* variable:     Enum74_HALT_BRAKE_SWITCH_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum74
 * type:         (Enum74_HALT_BRAKE_SWITCH_PASSIVE:=0,Enum74_HALT_BRAKE_SWITCH_ACTIVE:=1,Enum74_ERROR:=2,Enum74_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum74_HALT_BRAKE_SWITCH_ACTIVE;

/* variable:     Enum74_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum74
 * type:         (Enum74_HALT_BRAKE_SWITCH_PASSIVE:=0,Enum74_HALT_BRAKE_SWITCH_ACTIVE:=1,Enum74_ERROR:=2,Enum74_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum74_ERROR;

/* variable:     Enum74_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum74
 * type:         (Enum74_HALT_BRAKE_SWITCH_PASSIVE:=0,Enum74_HALT_BRAKE_SWITCH_ACTIVE:=1,Enum74_ERROR:=2,Enum74_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum74_NOT_AVAILABLE;

/* variable:     Enum75_TRAILER_ABS_STATUS_INFORMATION_AVAILABLE_BUT_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum75
 * type:         (Enum75_TRAILER_ABS_STATUS_INFORMATION_AVAILABLE_BUT_NOT_ACTIVE:=0,Enum75_TRAILER_ABS_ACTIVE:=1,Enum75_RESERVED:=2,Enum75_TRAILER_ABS_STATUS_INFORMATION_NOT_AVAILABLE_OR_PARAMETER_NOT_SUPPORTED:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum75_TRAILER_ABS_STATUS_INFORMATION_AVAILABLE_BUT_NOT_ACTIVE;

/* variable:     Enum75_TRAILER_ABS_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum75
 * type:         (Enum75_TRAILER_ABS_STATUS_INFORMATION_AVAILABLE_BUT_NOT_ACTIVE:=0,Enum75_TRAILER_ABS_ACTIVE:=1,Enum75_RESERVED:=2,Enum75_TRAILER_ABS_STATUS_INFORMATION_NOT_AVAILABLE_OR_PARAMETER_NOT_SUPPORTED:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum75_TRAILER_ABS_ACTIVE;

/* variable:     Enum75_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum75
 * type:         (Enum75_TRAILER_ABS_STATUS_INFORMATION_AVAILABLE_BUT_NOT_ACTIVE:=0,Enum75_TRAILER_ABS_ACTIVE:=1,Enum75_RESERVED:=2,Enum75_TRAILER_ABS_STATUS_INFORMATION_NOT_AVAILABLE_OR_PARAMETER_NOT_SUPPORTED:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum75_RESERVED;

/* variable:     Enum75_TRAILER_ABS_STATUS_INFORMATION_NOT_AVAILABLE_OR_PARAMETER_NOT_SUPPORTED
 * definition:   /project/MC2M/CPU0/Data/types/Enum75
 * type:         (Enum75_TRAILER_ABS_STATUS_INFORMATION_AVAILABLE_BUT_NOT_ACTIVE:=0,Enum75_TRAILER_ABS_ACTIVE:=1,Enum75_RESERVED:=2,Enum75_TRAILER_ABS_STATUS_INFORMATION_NOT_AVAILABLE_OR_PARAMETER_NOT_SUPPORTED:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum75_TRAILER_ABS_STATUS_INFORMATION_NOT_AVAILABLE_OR_PARAMETER_NOT_SUPPORTED;

/* variable:     Enum76_DRIVELINE_DISENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum76
 * type:         (Enum76_DRIVELINE_DISENGAGED:=0,Enum76_DRIVELINE_ENGAGED:=1,Enum76_ERROR:=2,Enum76_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum76_DRIVELINE_DISENGAGED;

/* variable:     Enum76_DRIVELINE_ENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum76
 * type:         (Enum76_DRIVELINE_DISENGAGED:=0,Enum76_DRIVELINE_ENGAGED:=1,Enum76_ERROR:=2,Enum76_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum76_DRIVELINE_ENGAGED;

/* variable:     Enum76_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum76
 * type:         (Enum76_DRIVELINE_DISENGAGED:=0,Enum76_DRIVELINE_ENGAGED:=1,Enum76_ERROR:=2,Enum76_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum76_ERROR;

/* variable:     Enum76_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum76
 * type:         (Enum76_DRIVELINE_DISENGAGED:=0,Enum76_DRIVELINE_ENGAGED:=1,Enum76_ERROR:=2,Enum76_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum76_NOT_AVAILABLE;

/* variable:     Enum77_TORQUE_CONVERTER_LOCKUP_DISENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum77
 * type:         (Enum77_TORQUE_CONVERTER_LOCKUP_DISENGAGED:=0,Enum77_TORQUE_CONVERTER_LOCKUP_ENGAGED:=1,Enum77_ERROR:=2,Enum77_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum77_TORQUE_CONVERTER_LOCKUP_DISENGAGED;

/* variable:     Enum77_TORQUE_CONVERTER_LOCKUP_ENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum77
 * type:         (Enum77_TORQUE_CONVERTER_LOCKUP_DISENGAGED:=0,Enum77_TORQUE_CONVERTER_LOCKUP_ENGAGED:=1,Enum77_ERROR:=2,Enum77_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum77_TORQUE_CONVERTER_LOCKUP_ENGAGED;

/* variable:     Enum77_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum77
 * type:         (Enum77_TORQUE_CONVERTER_LOCKUP_DISENGAGED:=0,Enum77_TORQUE_CONVERTER_LOCKUP_ENGAGED:=1,Enum77_ERROR:=2,Enum77_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum77_ERROR;

/* variable:     Enum77_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum77
 * type:         (Enum77_TORQUE_CONVERTER_LOCKUP_DISENGAGED:=0,Enum77_TORQUE_CONVERTER_LOCKUP_ENGAGED:=1,Enum77_ERROR:=2,Enum77_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum77_NOT_AVAILABLE;

/* variable:     Enum78_SHIFT_IS_NOT_IN_PROCESS
 * definition:   /project/MC2M/CPU0/Data/types/Enum78
 * type:         (Enum78_SHIFT_IS_NOT_IN_PROCESS:=0,Enum78_SHIFT_IN_PROCESS:=1,Enum78_ERROR:=2,Enum78_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum78_SHIFT_IS_NOT_IN_PROCESS;

/* variable:     Enum78_SHIFT_IN_PROCESS
 * definition:   /project/MC2M/CPU0/Data/types/Enum78
 * type:         (Enum78_SHIFT_IS_NOT_IN_PROCESS:=0,Enum78_SHIFT_IN_PROCESS:=1,Enum78_ERROR:=2,Enum78_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum78_SHIFT_IN_PROCESS;

/* variable:     Enum78_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum78
 * type:         (Enum78_SHIFT_IS_NOT_IN_PROCESS:=0,Enum78_SHIFT_IN_PROCESS:=1,Enum78_ERROR:=2,Enum78_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum78_ERROR;

/* variable:     Enum78_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum78
 * type:         (Enum78_SHIFT_IS_NOT_IN_PROCESS:=0,Enum78_SHIFT_IN_PROCESS:=1,Enum78_ERROR:=2,Enum78_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum78_NOT_AVAILABLE;

/* variable:     Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_DISABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum79
 * type:         (Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_DISABLED:=0,Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_ENABLED:=1,Enum79_RESERVED:=2,Enum79_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_DISABLED;

/* variable:     Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_ENABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum79
 * type:         (Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_DISABLED:=0,Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_ENABLED:=1,Enum79_RESERVED:=2,Enum79_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_ENABLED;

/* variable:     Enum79_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum79
 * type:         (Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_DISABLED:=0,Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_ENABLED:=1,Enum79_RESERVED:=2,Enum79_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum79_RESERVED;

/* variable:     Enum79_TAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum79
 * type:         (Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_DISABLED:=0,Enum79_MOMENTARY_ENGINE_OVERSPEED_IS_ENABLED:=1,Enum79_RESERVED:=2,Enum79_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum79_TAKE_NO_ACTION;

/* variable:     Enum80_PROGRESSIVE_SHIFT_IS_NOT_DISABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum80
 * type:         (Enum80_PROGRESSIVE_SHIFT_IS_NOT_DISABLED:=0,Enum80_PROGRESSIVE_SHIFT_IS_DISABLED:=1,Enum80_RESERVED:=2,Enum80_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum80_PROGRESSIVE_SHIFT_IS_NOT_DISABLED;

/* variable:     Enum80_PROGRESSIVE_SHIFT_IS_DISABLED
 * definition:   /project/MC2M/CPU0/Data/types/Enum80
 * type:         (Enum80_PROGRESSIVE_SHIFT_IS_NOT_DISABLED:=0,Enum80_PROGRESSIVE_SHIFT_IS_DISABLED:=1,Enum80_RESERVED:=2,Enum80_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum80_PROGRESSIVE_SHIFT_IS_DISABLED;

/* variable:     Enum80_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum80
 * type:         (Enum80_PROGRESSIVE_SHIFT_IS_NOT_DISABLED:=0,Enum80_PROGRESSIVE_SHIFT_IS_DISABLED:=1,Enum80_RESERVED:=2,Enum80_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum80_RESERVED;

/* variable:     Enum80_TAKE_NO_ACTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum80
 * type:         (Enum80_PROGRESSIVE_SHIFT_IS_NOT_DISABLED:=0,Enum80_PROGRESSIVE_SHIFT_IS_DISABLED:=1,Enum80_RESERVED:=2,Enum80_TAKE_NO_ACTION:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum80_TAKE_NO_ACTION;

/* variable:     Enum81_ACCELERATOR_PEDAL_1_NOT_IN_LOW_IDLE_CONDITION
 * definition:   /project/MC2M/CPU0/Data/types/Enum81
 * type:         (Enum81_ACCELERATOR_PEDAL_1_NOT_IN_LOW_IDLE_CONDITION:=0,Enum81_ACCELERATOR_PEDAL_1_IN_LOW_IDLE_CONDITION:=1,Enum81_ERROR:=2,Enum81_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum81_ACCELERATOR_PEDAL_1_NOT_IN_LOW_IDLE_CONDITION;

/* variable:     Enum81_ACCELERATOR_PEDAL_1_IN_LOW_IDLE_CONDITION
 * definition:   /project/MC2M/CPU0/Data/types/Enum81
 * type:         (Enum81_ACCELERATOR_PEDAL_1_NOT_IN_LOW_IDLE_CONDITION:=0,Enum81_ACCELERATOR_PEDAL_1_IN_LOW_IDLE_CONDITION:=1,Enum81_ERROR:=2,Enum81_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum81_ACCELERATOR_PEDAL_1_IN_LOW_IDLE_CONDITION;

/* variable:     Enum81_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum81
 * type:         (Enum81_ACCELERATOR_PEDAL_1_NOT_IN_LOW_IDLE_CONDITION:=0,Enum81_ACCELERATOR_PEDAL_1_IN_LOW_IDLE_CONDITION:=1,Enum81_ERROR:=2,Enum81_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum81_ERROR;

/* variable:     Enum81_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum81
 * type:         (Enum81_ACCELERATOR_PEDAL_1_NOT_IN_LOW_IDLE_CONDITION:=0,Enum81_ACCELERATOR_PEDAL_1_IN_LOW_IDLE_CONDITION:=1,Enum81_ERROR:=2,Enum81_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum81_NOT_AVAILABLE;

/* variable:     Enum82_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum82
 * type:         (Enum82_ACTIVE:=0,Enum82_NOT_ACTIVE:=1,Enum82_ERROR:=2,Enum82_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum82_ACTIVE;

/* variable:     Enum82_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum82
 * type:         (Enum82_ACTIVE:=0,Enum82_NOT_ACTIVE:=1,Enum82_ERROR:=2,Enum82_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum82_NOT_ACTIVE;

/* variable:     Enum82_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum82
 * type:         (Enum82_ACTIVE:=0,Enum82_NOT_ACTIVE:=1,Enum82_ERROR:=2,Enum82_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum82_ERROR;

/* variable:     Enum82_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum82
 * type:         (Enum82_ACTIVE:=0,Enum82_NOT_ACTIVE:=1,Enum82_ERROR:=2,Enum82_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum82_NOT_AVAILABLE;

/* variable:     Enum83_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum83
 * type:         (Enum83_ACTIVE:=0,Enum83_NOT_ACTIVE:=1,Enum83_ERROR:=2,Enum83_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum83_ACTIVE;

/* variable:     Enum83_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum83
 * type:         (Enum83_ACTIVE:=0,Enum83_NOT_ACTIVE:=1,Enum83_ERROR:=2,Enum83_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum83_NOT_ACTIVE;

/* variable:     Enum83_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum83
 * type:         (Enum83_ACTIVE:=0,Enum83_NOT_ACTIVE:=1,Enum83_ERROR:=2,Enum83_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum83_ERROR;

/* variable:     Enum83_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum83
 * type:         (Enum83_ACTIVE:=0,Enum83_NOT_ACTIVE:=1,Enum83_ERROR:=2,Enum83_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum83_NOT_AVAILABLE;

/* variable:     Enum84_ACCELERATOR_PEDAL_2_NOT_IN_LOW_IDLE_CONDITION
 * definition:   /project/MC2M/CPU0/Data/types/Enum84
 * type:         (Enum84_ACCELERATOR_PEDAL_2_NOT_IN_LOW_IDLE_CONDITION:=0,Enum84_ACCELERATOR_PEDAL_2_IN_LOW_IDLE_CONDITION:=1,Enum84_ERROR:=2,Enum84_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum84_ACCELERATOR_PEDAL_2_NOT_IN_LOW_IDLE_CONDITION;

/* variable:     Enum84_ACCELERATOR_PEDAL_2_IN_LOW_IDLE_CONDITION
 * definition:   /project/MC2M/CPU0/Data/types/Enum84
 * type:         (Enum84_ACCELERATOR_PEDAL_2_NOT_IN_LOW_IDLE_CONDITION:=0,Enum84_ACCELERATOR_PEDAL_2_IN_LOW_IDLE_CONDITION:=1,Enum84_ERROR:=2,Enum84_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum84_ACCELERATOR_PEDAL_2_IN_LOW_IDLE_CONDITION;

/* variable:     Enum84_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum84
 * type:         (Enum84_ACCELERATOR_PEDAL_2_NOT_IN_LOW_IDLE_CONDITION:=0,Enum84_ACCELERATOR_PEDAL_2_IN_LOW_IDLE_CONDITION:=1,Enum84_ERROR:=2,Enum84_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum84_ERROR;

/* variable:     Enum84_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum84
 * type:         (Enum84_ACCELERATOR_PEDAL_2_NOT_IN_LOW_IDLE_CONDITION:=0,Enum84_ACCELERATOR_PEDAL_2_IN_LOW_IDLE_CONDITION:=1,Enum84_ERROR:=2,Enum84_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum84_NOT_AVAILABLE;

/* variable:     Enum85_LIMIT_NOT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum85
 * type:         (Enum85_LIMIT_NOT_ACTIVE:=0,Enum85_LIMIT_ACTIVE:=1,Enum85_RESERVED:=2,Enum85_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum85_LIMIT_NOT_ACTIVE;

/* variable:     Enum85_LIMIT_ACTIVE
 * definition:   /project/MC2M/CPU0/Data/types/Enum85
 * type:         (Enum85_LIMIT_NOT_ACTIVE:=0,Enum85_LIMIT_ACTIVE:=1,Enum85_RESERVED:=2,Enum85_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum85_LIMIT_ACTIVE;

/* variable:     Enum85_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum85
 * type:         (Enum85_LIMIT_NOT_ACTIVE:=0,Enum85_LIMIT_ACTIVE:=1,Enum85_RESERVED:=2,Enum85_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum85_RESERVED;

/* variable:     Enum85_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum85
 * type:         (Enum85_LIMIT_NOT_ACTIVE:=0,Enum85_LIMIT_ACTIVE:=1,Enum85_RESERVED:=2,Enum85_NOT_AVAILABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum85_NOT_AVAILABLE;

/* variable:     Enum86_START_NOT_REQUESTED
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_START_NOT_REQUESTED;

/* variable:     Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED;

/* variable:     Enum86_STARTER_ACTIVE_GEAR_ENGAGED
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_STARTER_ACTIVE_GEAR_ENGAGED;

/* variable:     Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000;

/* variable:     Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING;

/* variable:     Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING;

/* variable:     Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT;

/* variable:     Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER;

/* variable:     Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP;

/* variable:     Enum86_RESERVED
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_RESERVED;

/* variable:     Enum86_STARTER_INHIBITED_REASON_UNKNOWN
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_STARTER_INHIBITED_REASON_UNKNOWN;

/* variable:     Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110;

/* variable:     Enum86_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_ERROR;

/* variable:     Enum86_NOT_AVAILABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum86
 * type:         (Enum86_START_NOT_REQUESTED:=0,Enum86_STARTER_ACTIVE_GEAR_NOT_ENGAGED:=1,Enum86_STARTER_ACTIVE_GEAR_ENGAGED:=2,Enum86_START_FINISHED_STARTER_NOT_ACTIVE_AFTER_HAVING_BEEN_ACTIVELY_ENGAGED_AFTER_50MS_MODE_GOES_TO_0000:=3,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_ALREADY_RUNNING:=4,Enum86_STARTER_INHIBITED_DUE_TO_ENGINE_NOT_READY_FOR_START_PREHEATING:=5,Enum86_STARTER_INHIBITED_DUE_TO_DRIVELINE_ENGAGED_OR_OTHER_TRANSMISSION_INHIBIT:=6,Enum86_STARTER_INHIBITED_DUE_TO_ACTIVE_IMMOBILIZER:=7,Enum86_STARTER_INHIBITED_DUE_TO_STARTER_OVERTEMP:=8,Enum86_RESERVED:=9,Enum86_STARTER_INHIBITED_REASON_UNKNOWN:=12,Enum86_ERROR_LEGACY_IMPLEMENTATION_ONLY_USE_1110:=13,Enum86_ERROR:=14,Enum86_NOT_AVAILABLE:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum86_NOT_AVAILABLE;

/* variable:     Enum_TransOilFilter_NO_RESTRICTION
 * definition:   /project/MC2M/CPU0/Data/types/Enum_TransOilFilterRestriction
 * type:         (Enum_TransOilFilter_NO_RESTRICTION:=0,Enum_TransOilFilter_RESTRICTION_EXISTS_ON_OIL_FILTER:=1,Enum_TransOilFilter_ERROR:=2,Enum_TransOilFilter_NOT_AVAIABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_TransOilFilter_NO_RESTRICTION;

/* variable:     Enum_TransOilFilter_RESTRICTION_EXISTS_ON_OIL_FILTER
 * definition:   /project/MC2M/CPU0/Data/types/Enum_TransOilFilterRestriction
 * type:         (Enum_TransOilFilter_NO_RESTRICTION:=0,Enum_TransOilFilter_RESTRICTION_EXISTS_ON_OIL_FILTER:=1,Enum_TransOilFilter_ERROR:=2,Enum_TransOilFilter_NOT_AVAIABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_TransOilFilter_RESTRICTION_EXISTS_ON_OIL_FILTER;

/* variable:     Enum_TransOilFilter_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum_TransOilFilterRestriction
 * type:         (Enum_TransOilFilter_NO_RESTRICTION:=0,Enum_TransOilFilter_RESTRICTION_EXISTS_ON_OIL_FILTER:=1,Enum_TransOilFilter_ERROR:=2,Enum_TransOilFilter_NOT_AVAIABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_TransOilFilter_ERROR;

/* variable:     Enum_TransOilFilter_NOT_AVAIABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum_TransOilFilterRestriction
 * type:         (Enum_TransOilFilter_NO_RESTRICTION:=0,Enum_TransOilFilter_RESTRICTION_EXISTS_ON_OIL_FILTER:=1,Enum_TransOilFilter_ERROR:=2,Enum_TransOilFilter_NOT_AVAIABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_TransOilFilter_NOT_AVAIABLE;

/* variable:     Enum_TransOilSwitch_EMPTY
 * definition:   /project/MC2M/CPU0/Data/types/Enum_TransOilLevel
 * type:         (Enum_TransOilSwitch_EMPTY:=0,Enum_TransOilSwitch_FULL_OR_NOT_EMPTY:=1,Enum_TransOilSwitch_ERROR:=2,Enum_TransOilSwitch_NOT_AVAIABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_TransOilSwitch_EMPTY;

/* variable:     Enum_TransOilSwitch_FULL_OR_NOT_EMPTY
 * definition:   /project/MC2M/CPU0/Data/types/Enum_TransOilLevel
 * type:         (Enum_TransOilSwitch_EMPTY:=0,Enum_TransOilSwitch_FULL_OR_NOT_EMPTY:=1,Enum_TransOilSwitch_ERROR:=2,Enum_TransOilSwitch_NOT_AVAIABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_TransOilSwitch_FULL_OR_NOT_EMPTY;

/* variable:     Enum_TransOilSwitch_ERROR
 * definition:   /project/MC2M/CPU0/Data/types/Enum_TransOilLevel
 * type:         (Enum_TransOilSwitch_EMPTY:=0,Enum_TransOilSwitch_FULL_OR_NOT_EMPTY:=1,Enum_TransOilSwitch_ERROR:=2,Enum_TransOilSwitch_NOT_AVAIABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_TransOilSwitch_ERROR;

/* variable:     Enum_TransOilSwitch_NOT_AVAIABLE
 * definition:   /project/MC2M/CPU0/Data/types/Enum_TransOilLevel
 * type:         (Enum_TransOilSwitch_EMPTY:=0,Enum_TransOilSwitch_FULL_OR_NOT_EMPTY:=1,Enum_TransOilSwitch_ERROR:=2,Enum_TransOilSwitch_NOT_AVAIABLE:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_TransOilSwitch_NOT_AVAIABLE;

/* variable:     Enum_SelectedTank_T1
 * definition:   /project/MC2M/CPU0/Data/types/Enum_SelectedTank
 * type:         (Enum_SelectedTank_T1:=0,Enum_SelectedTank_T2:=1,Enum_SelectedTank_ALL:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_SelectedTank_T1;

/* variable:     Enum_SelectedTank_T2
 * definition:   /project/MC2M/CPU0/Data/types/Enum_SelectedTank
 * type:         (Enum_SelectedTank_T1:=0,Enum_SelectedTank_T2:=1,Enum_SelectedTank_ALL:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_SelectedTank_T2;

/* variable:     Enum_SelectedTank_ALL
 * definition:   /project/MC2M/CPU0/Data/types/Enum_SelectedTank
 * type:         (Enum_SelectedTank_T1:=0,Enum_SelectedTank_T2:=1,Enum_SelectedTank_ALL:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_SelectedTank_ALL;

/* variable:     Enum_ParkerCommands_NoVer_Stop
 * definition:   /project/MC2M/CPU0/Data/types/Enum_ParkerCommands
 * type:         (Enum_ParkerCommands_NoVer_Stop:=0,Enum_ParkerCommands_NoVer_Run:=1,Enum_ParkerCommands_VerReq_Stop:=4,Enum_ParkerCommands_VerReq_Run:=5)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_ParkerCommands_NoVer_Stop;

/* variable:     Enum_ParkerCommands_NoVer_Run
 * definition:   /project/MC2M/CPU0/Data/types/Enum_ParkerCommands
 * type:         (Enum_ParkerCommands_NoVer_Stop:=0,Enum_ParkerCommands_NoVer_Run:=1,Enum_ParkerCommands_VerReq_Stop:=4,Enum_ParkerCommands_VerReq_Run:=5)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_ParkerCommands_NoVer_Run;

/* variable:     Enum_ParkerCommands_VerReq_Stop
 * definition:   /project/MC2M/CPU0/Data/types/Enum_ParkerCommands
 * type:         (Enum_ParkerCommands_NoVer_Stop:=0,Enum_ParkerCommands_NoVer_Run:=1,Enum_ParkerCommands_VerReq_Stop:=4,Enum_ParkerCommands_VerReq_Run:=5)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_ParkerCommands_VerReq_Stop;

/* variable:     Enum_ParkerCommands_VerReq_Run
 * definition:   /project/MC2M/CPU0/Data/types/Enum_ParkerCommands
 * type:         (Enum_ParkerCommands_NoVer_Stop:=0,Enum_ParkerCommands_NoVer_Run:=1,Enum_ParkerCommands_VerReq_Stop:=4,Enum_ParkerCommands_VerReq_Run:=5)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum_ParkerCommands_VerReq_Run;

/* variable:     Enum87_0
 * definition:   /project/MC2M/CPU0/Data/types/Enum87
 * type:         (Enum87_0:=0,Enum87_1:=1,Enum87_2:=2,Enum87_3:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum87_0;

/* variable:     Enum87_1
 * definition:   /project/MC2M/CPU0/Data/types/Enum87
 * type:         (Enum87_0:=0,Enum87_1:=1,Enum87_2:=2,Enum87_3:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum87_1;

/* variable:     Enum87_2
 * definition:   /project/MC2M/CPU0/Data/types/Enum87
 * type:         (Enum87_0:=0,Enum87_1:=1,Enum87_2:=2,Enum87_3:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum87_2;

/* variable:     Enum87_3
 * definition:   /project/MC2M/CPU0/Data/types/Enum87
 * type:         (Enum87_0:=0,Enum87_1:=1,Enum87_2:=2,Enum87_3:=3)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum87_3;

/* variable:     Enum88_0
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_0;

/* variable:     Enum88_1
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_1;

/* variable:     Enum88_2
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_2;

/* variable:     Enum88_3
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_3;

/* variable:     Enum88_4
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_4;

/* variable:     Enum88_5
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_5;

/* variable:     Enum88_6
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_6;

/* variable:     Enum88_7
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_7;

/* variable:     Enum88_8
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_8;

/* variable:     Enum88_9
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_9;

/* variable:     Enum88_10
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_10;

/* variable:     Enum88_11
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_11;

/* variable:     Enum88_12
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_12;

/* variable:     Enum88_13
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_13;

/* variable:     Enum88_14
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_14;

/* variable:     Enum88_15
 * definition:   /project/MC2M/CPU0/Data/types/Enum88
 * type:         (Enum88_0:=0,Enum88_1:=1,Enum88_2:=2,Enum88_3:=3,Enum88_4:=4,Enum88_5:=5,Enum88_6:=6,Enum88_7:=7,Enum88_8:=8,Enum88_9:=9,Enum88_10:=10,Enum88_11:=11,Enum88_12:=12,Enum88_13:=13,Enum88_14:=14,Enum88_15:=15)
 * address:      not specified
 * constant:     True
 * comment:      item of enum
 */
extern const INT FAR Enum88_15;

/* variable:     EngineTempGaugeValue_Min
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Minimum Voltage for 40 - 220
 */
extern const INT FAR EngineTempGaugeValue_Min;

/* variable:     EngineTempGaugeValue_Mid
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum Voltage for 80 - 770
 */
extern const INT FAR EngineTempGaugeValue_Mid;

/* variable:     EngineTempGaugeValue_Max
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum Voltage for 120 - 989
 */
extern const INT FAR EngineTempGaugeValue_Max;

/* variable:     WheelCircle
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      ET3460 or EY3263mm EY2_3263mm EY3_3263mm
 */
extern const UINT FAR WheelCircle;

/* variable:     UnderCarriageGearRatio
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      ET631mm EY538mm EY2_450mm EY3_538mm
 */
extern const UINT FAR UnderCarriageGearRatio;

/* variable:     DropboxGearRatio_High
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      ET_EY_109 EY2_130 EY3_109
 */
extern const UINT FAR DropboxGearRatio_High;

/* variable:     DropboxGearRatio_Low
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      ET_EY_247 EY2_227 EY3_247
 */
extern const UINT FAR DropboxGearRatio_Low;

/* variable:     SpeedometerGaugeValue_0
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 0 - 0 PV 0
 */
extern const INT FAR SpeedometerGaugeValue_0;

/* variable:     SpeedometerGaugeValue_1
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 10 - 35 PV78
 */
extern const INT FAR SpeedometerGaugeValue_1;

/* variable:     SpeedometerGaugeValue_2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 20 - 60 PV133
 */
extern const INT FAR SpeedometerGaugeValue_2;

/* variable:     SpeedometerGaugeValue_3
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 30 - 85 PV189
 */
extern const INT FAR SpeedometerGaugeValue_3;

/* variable:     SpeedometerGaugeValue_4
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 40
 */
extern const INT FAR SpeedometerGaugeValue_4;

/* variable:     SpeedometerGaugeValue_5
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 50
 */
extern const INT FAR SpeedometerGaugeValue_5;

/* variable:     SpeedometerGaugeValue_6
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 60
 */
extern const INT FAR SpeedometerGaugeValue_6;

/* variable:     SpeedometerGaugeValue_7
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 70
 */
extern const INT FAR SpeedometerGaugeValue_7;

/* variable:     SpeedometerGaugeValue_8
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 80
 */
extern const INT FAR SpeedometerGaugeValue_8;

/* variable:     SpeedometerGaugeValue_9
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 90
 */
extern const INT FAR SpeedometerGaugeValue_9;

/* variable:     SpeedometerGaugeValue_10
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 100
 */
extern const INT FAR SpeedometerGaugeValue_10;

/* variable:     SpeedometerGaugeValue_11
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 110
 */
extern const INT FAR SpeedometerGaugeValue_11;

/* variable:     SpeedometerGaugeValue_12
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_SpeedometerGauge
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Hz Signal for 120
 */
extern const INT FAR SpeedometerGaugeValue_12;

/* variable:     LampAlarmDelay
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Lamba Diagnostigi icin gecikme (ms)
 */
extern const INT FAR LampAlarmDelay;

/* variable:     Limit_EngineOilLevel
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      Percent %5
 */
extern const USINT FAR Limit_EngineOilLevel;

/* variable:     Limit_EngineOilPressure
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const SINT FAR Limit_EngineOilPressure;

/* variable:     Limit_EngineOilTemperature
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      95new102
 */
extern const SINT FAR Limit_EngineOilTemperature;

/* variable:     Limit_TransmissionOilTemperature
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const USINT FAR Limit_TransmissionOilTemperature;

/* variable:     Limit_FuelLevelLow
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const SINT FAR Limit_FuelLevelLow;

/* variable:     Limit_AccessoryPressureLevel
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const USINT FAR Limit_AccessoryPressureLevel;

/* variable:     Limit_ParkBrakePressureLevel
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const USINT FAR Limit_ParkBrakePressureLevel;

/* variable:     Limit_ServiceBrake1PressureLevel
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const USINT FAR Limit_ServiceBrake1PressureLevel;

/* variable:     Limit_ServiceBrake2PressureLevel
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const USINT FAR Limit_ServiceBrake2PressureLevel;

/* variable:     Limit_HydrolicTankPressure
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const USINT FAR Limit_HydrolicTankPressure;

/* variable:     Limit_HydrolicTankTemp
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const USINT FAR Limit_HydrolicTankTemp;

/* variable:     Limit_WeaterColdTemp
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const SINT FAR Limit_WeaterColdTemp;

/* variable:     Limit_AccessoryPressureLevelDropBox
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const USINT FAR Limit_AccessoryPressureLevelDropBox;

/* variable:     WasherDelay
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         TIME
 * address:      not specified
 * constant:     True
 * comment:      4s
 */
extern const TIME FAR WasherDelay;

/* variable:     WiperMotorHighSpeed
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      Silecek hızlı konum voltaj giriş değeri
 */
extern const UINT FAR WiperMotorHighSpeed;

/* variable:     WiperMotorLowSpeed
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      Silecek yavaş konum voltaj giriş değeri
 */
extern const UINT FAR WiperMotorLowSpeed;

/* variable:     Resistance_Limit
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const SINT FAR Resistance_Limit;

/* variable:     SWConfig0
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      Yazılım Versiyonu
 */
extern const USINT FAR SWConfig0;

/* variable:     SWConfig1
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      Yazılım Versiyonu
 */
extern const USINT FAR SWConfig1;

/* variable:     SWVersions0
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      Yazılım Versiyonu
 */
extern const USINT FAR SWVersions0;

/* variable:     SWVersions1
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      Yazılım Versiyonu
 */
extern const USINT FAR SWVersions1;

/* variable:     SWVersions2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         USINT
 * address:      not specified
 * constant:     True
 * comment:      Yazılım Versiyonu
 */
extern const USINT FAR SWVersions2;

/* variable:     T50TankTempDownLimit
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      -15->0->-10->+10->-15->-5 20160116-> 5
 */
extern const SINT FAR T50TankTempDownLimit;

/* variable:     T50TankTempUpLimit
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      -10->5->40->-10->20  20160116-> 20
 */
extern const SINT FAR T50TankTempUpLimit;

/* variable:     FuelTempDownLimit
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      -15->  20160116-> 0
 */
extern const SINT FAR FuelTempDownLimit;

/* variable:     FuelTempUpLimit
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      -10->0  20160116-> 15
 */
extern const SINT FAR FuelTempUpLimit;

/* variable:     Limit_WebastoTankMinTemperature
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      -15  20160116-> 0
 */
extern const SINT FAR Limit_WebastoTankMinTemperature;

/* variable:     AverageQuantityTem
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      araydeki değişken sayısı max 120
 */
extern const SINT FAR AverageQuantityTem;

/* variable:     AverageQuantityTem_23
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      araydeki değişken sayısı max 120
 */
extern const SINT FAR AverageQuantityTem_23;

/* variable:     TemLevel0_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      minimum of anaolog
 */
extern const INT FAR TemLevel0_ANALOG;

/* variable:     TemLevel0
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      maximum of display digit
 */
extern const INT FAR TemLevel0;

/* variable:     TemLevel1_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel1_ANALOG;

/* variable:     TemLevel1
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel1;

/* variable:     TemLevel2_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel2_ANALOG;

/* variable:     TemLevel2
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel2;

/* variable:     TemLevel3_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel3_ANALOG;

/* variable:     TemLevel3
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel3;

/* variable:     TemLevel4_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel4_ANALOG;

/* variable:     TemLevel4
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel4;

/* variable:     TemLevel5_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel5_ANALOG;

/* variable:     TemLevel5
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel5;

/* variable:     TemLevel6_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel6_ANALOG;

/* variable:     TemLevel6
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel6;

/* variable:     TemLevel7_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel7_ANALOG;

/* variable:     TemLevel7
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel7;

/* variable:     TemLevel8_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel8_ANALOG;

/* variable:     TemLevel8
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel8;

/* variable:     TemLevel9_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel9_ANALOG;

/* variable:     TemLevel9
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel9;

/* variable:     TemLevel10_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel10_ANALOG;

/* variable:     TemLevel10
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel10;

/* variable:     TemLevel11_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel11_ANALOG;

/* variable:     TemLevel11
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel11;

/* variable:     TemLevel12_ANALOG
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel12_ANALOG;

/* variable:     TemLevel12
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel12;

/* variable:     temValueMax
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_MinMax
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      max göstergeye giden değer
 */
extern const INT FAR temValueMax;

/* variable:     temValueMin
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_MinMax
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      min göstergeye giden değer
 */
extern const INT FAR temValueMin;

/* variable:     AverageQuantityTem_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      araydeki değişken sayısı max 120
 */
extern const SINT FAR AverageQuantityTem_2;

/* variable:     AverageQuantityTem_22
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      araydeki değişken sayısı max 120
 */
extern const SINT FAR AverageQuantityTem_22;

/* variable:     TemLevel0_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      minimum of anaolog
 */
extern const INT FAR TemLevel0_ANALOG_2;

/* variable:     TemLevel0_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      maximum of display digit
 */
extern const INT FAR TemLevel0_2;

/* variable:     TemLevel1_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel1_ANALOG_2;

/* variable:     TemLevel1_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel1_2;

/* variable:     TemLevel2_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel2_ANALOG_2;

/* variable:     TemLevel2_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel2_2;

/* variable:     TemLevel3_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel3_ANALOG_2;

/* variable:     TemLevel3_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel3_2;

/* variable:     TemLevel4_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel4_ANALOG_2;

/* variable:     TemLevel4_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel4_2;

/* variable:     TemLevel5_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel5_ANALOG_2;

/* variable:     TemLevel5_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel5_2;

/* variable:     TemLevel6_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel6_ANALOG_2;

/* variable:     TemLevel6_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel6_2;

/* variable:     TemLevel7_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel7_ANALOG_2;

/* variable:     TemLevel7_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel7_2;

/* variable:     TemLevel8_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel8_ANALOG_2;

/* variable:     TemLevel8_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel8_2;

/* variable:     TemLevel9_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel9_ANALOG_2;

/* variable:     TemLevel9_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel9_2;

/* variable:     TemLevel10_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel10_ANALOG_2;

/* variable:     TemLevel10_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel10_2;

/* variable:     TemLevel11_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel11_ANALOG_2;

/* variable:     TemLevel11_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel11_2;

/* variable:     TemLevel12_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel12_ANALOG_2;

/* variable:     TemLevel12_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TemLevel12_2;

/* variable:     temValueMax_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_MinMax
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      max göstergeye giden değer
 */
extern const INT FAR temValueMax_2;

/* variable:     temValueMin_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_MinMax
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      min göstergeye giden değer
 */
extern const INT FAR temValueMin_2;

/* variable:     ButtonDebounceVal
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      Silah Kulesi kapı 2 switch
 */
extern const UINT FAR ButtonDebounceVal;

/* variable:     HydraulicDoorClosedDebounceVal
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     True
 * comment:      Silah Kulesi kapı 2 switch
 */
extern const UINT FAR HydraulicDoorClosedDebounceVal;

/* variable:     AngX_MinADC
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      X Min açı için ADC
 */
extern const INT FAR AngX_MinADC;

/* variable:     AngX_MinACT
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      X Min açı için gerçek değer
 */
extern const INT FAR AngX_MinACT;

/* variable:     AngX_MaxADC
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      X Max açı için ADC
 */
extern const INT FAR AngX_MaxADC;

/* variable:     AngX_MaxACT
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      X Max açı için gerçek değer
 */
extern const INT FAR AngX_MaxACT;

/* variable:     AngY_MinADC
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Y Min açı için ADC
 */
extern const INT FAR AngY_MinADC;

/* variable:     AngY_MinACT
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Y Min açı için gerçek değer
 */
extern const INT FAR AngY_MinACT;

/* variable:     AngY_MaxADC
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Y Max açı için ADC
 */
extern const INT FAR AngY_MaxADC;

/* variable:     AngY_MaxACT
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Y Max açı için gerçek değer
 */
extern const INT FAR AngY_MaxACT;

/* variable:     FUELLEVEL0_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum of Gauge
 */
extern const INT FAR FUELLEVEL0_R;

/* variable:     FUELLEVEL1_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR FUELLEVEL1_R;

/* variable:     FUELLEVEL2_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR FUELLEVEL2_R;

/* variable:     FUELLEVEL3_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR FUELLEVEL3_R;

/* variable:     FUELLEVEL4_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR FUELLEVEL4_R;

/* variable:     FUELLEVEL0_ANALOG_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Mininum of ANALOG
 */
extern const INT FAR FUELLEVEL0_ANALOG_R;

/* variable:     FUELLEVEL1_ANALOG_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR FUELLEVEL1_ANALOG_R;

/* variable:     FUELLEVEL2_ANALOG_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR FUELLEVEL2_ANALOG_R;

/* variable:     FUELLEVEL3_ANALOG_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR FUELLEVEL3_ANALOG_R;

/* variable:     FUELLEVEL4_ANALOG_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR FUELLEVEL4_ANALOG_R;

/* variable:     AVGQUANTITYFUEL_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AVGQUANTITYFUEL_R;

/* variable:     AVGQUANTITYFUEL2_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const SINT FAR AVGQUANTITYFUEL2_R;

/* variable:     FUELLEVEL0_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum of Gauge/ Şamandıra için değer: 0
 */
extern const INT FAR FUELLEVEL0_L;

/* variable:     FUELLEVEL1_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandıra için değer:  25
 */
extern const INT FAR FUELLEVEL1_L;

/* variable:     FUELLEVEL2_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandıra için değer:  50
 */
extern const INT FAR FUELLEVEL2_L;

/* variable:     FUELLEVEL3_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandıra için değer: 75
 */
extern const INT FAR FUELLEVEL3_L;

/* variable:     FUELLEVEL4_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandıra için değer: 100
 */
extern const INT FAR FUELLEVEL4_L;

/* variable:     FUELLEVEL5_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandırada yok
 */
extern const INT FAR FUELLEVEL5_L;

/* variable:     FUELLEVEL0_ANALOG_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Mininum of ANALOG/ Şamandıra için Değerler : 3
 */
extern const INT FAR FUELLEVEL0_ANALOG_L;

/* variable:     FUELLEVEL1_ANALOG_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandıra için değer: 36
 */
extern const INT FAR FUELLEVEL1_ANALOG_L;

/* variable:     FUELLEVEL2_ANALOG_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandıra için değer: 60
 */
extern const INT FAR FUELLEVEL2_ANALOG_L;

/* variable:     FUELLEVEL3_ANALOG_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandıra için değer: 101
 */
extern const INT FAR FUELLEVEL3_ANALOG_L;

/* variable:     FUELLEVEL4_ANALOG_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandıra için değer: 176
 */
extern const INT FAR FUELLEVEL4_ANALOG_L;

/* variable:     FUELLEVEL5_ANALOG_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Şamandırada yok
 */
extern const INT FAR FUELLEVEL5_ANALOG_L;

/* variable:     AVGQUANTITYFUEL_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AVGQUANTITYFUEL_L;

/* variable:     AVGQUANTITYFUEL2_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const SINT FAR AVGQUANTITYFUEL2_L;

/* variable:     TimerDeltaExBrake
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         TIME
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const TIME FAR TimerDeltaExBrake;

/* variable:     EngineBrakeSpeedLimit
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR EngineBrakeSpeedLimit;

/* variable:     MinSensorValue_1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/Data_SensorCalibration1
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Sensor Value
 */
extern const INT FAR MinSensorValue_1;

/* variable:     MinScreenValue_1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/Data_SensorCalibration1
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1 bar = 10
 */
extern const INT FAR MinScreenValue_1;

/* variable:     MaxSensorValue_1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/Data_SensorCalibration1
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Sensor Value
 */
extern const INT FAR MaxSensorValue_1;

/* variable:     MaxScreenValue_1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/Data_SensorCalibration1
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1 bar = 10
 */
extern const INT FAR MaxScreenValue_1;

/* variable:     AverageQuantity_Sensor1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/Data_SensorFilter1
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantity_Sensor1;

/* variable:     MinSensorValue_2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/Data_SensorCalibration2
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Sensor Value
 */
extern const INT FAR MinSensorValue_2;

/* variable:     MinScreenValue_2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/Data_SensorCalibration2
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1 bar = 10
 */
extern const INT FAR MinScreenValue_2;

/* variable:     MaxSensorValue_2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/Data_SensorCalibration2
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Sensor Value
 */
extern const INT FAR MaxSensorValue_2;

/* variable:     MaxScreenValue_2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/Data_SensorCalibration2
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1 bar = 10
 */
extern const INT FAR MaxScreenValue_2;

/* variable:     AverageQuantity_Sensor2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/Data_SensorFilter2
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantity_Sensor2;

/* variable:     MinSensorValue_3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/Data_SensorCalibration3
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Sensor Value
 */
extern const INT FAR MinSensorValue_3;

/* variable:     MinScreenValue_3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/Data_SensorCalibration3
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1 bar = 10
 */
extern const INT FAR MinScreenValue_3;

/* variable:     MaxSensorValue_3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/Data_SensorCalibration3
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Sensor Value
 */
extern const INT FAR MaxSensorValue_3;

/* variable:     MaxScreenValue_3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/Data_SensorCalibration3
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1 bar = 10
 */
extern const INT FAR MaxScreenValue_3;

/* variable:     AverageQuantity_Sensor3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/Data_SensorFilter3
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantity_Sensor3;

/* variable:     MinSensorValue_4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/Data_SensorCalibration4
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Sensor Value
 */
extern const INT FAR MinSensorValue_4;

/* variable:     MinScreenValue_4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/Data_SensorCalibration4
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1 bar = 10
 */
extern const INT FAR MinScreenValue_4;

/* variable:     MaxSensorValue_4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/Data_SensorCalibration4
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Sensor Value
 */
extern const INT FAR MaxSensorValue_4;

/* variable:     MaxScreenValue_4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/Data_SensorCalibration4
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      1 bar = 10
 */
extern const INT FAR MaxScreenValue_4;

/* variable:     AverageQuantity_Sensor4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/Data_SensorFilter4
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AverageQuantity_Sensor4;

/* variable:     PresLevel0_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Mininum of ANALOG
 */
extern const INT FAR PresLevel0_ANALOG;

/* variable:     PresLevel0
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum of Gauge
 */
extern const INT FAR PresLevel0;

/* variable:     PresLevel1_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR PresLevel1_ANALOG;

/* variable:     PresLevel1
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR PresLevel1;

/* variable:     PresLevel2_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR PresLevel2_ANALOG;

/* variable:     PresLevel2
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR PresLevel2;

/* variable:     HTempAverageQuantity
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Sensor_HydrolicTemp_Filter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR HTempAverageQuantity;

/* variable:     HTempLevel0_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Mininum of ANALOG
 */
extern const INT FAR HTempLevel0_ANALOG;

/* variable:     HTempLevel0
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum of Gauge
 */
extern const INT FAR HTempLevel0;

/* variable:     HTempLevel1_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel1_ANALOG;

/* variable:     HTempLevel1
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel1;

/* variable:     HTempLevel2_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel2_ANALOG;

/* variable:     HTempLevel2
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel2;

/* variable:     HTempLevel3_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel3_ANALOG;

/* variable:     HTempLevel3
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel3;

/* variable:     HTempLevel4_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel4_ANALOG;

/* variable:     HTempLevel4
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel4;

/* variable:     HTempLevel5_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel5_ANALOG;

/* variable:     HTempLevel5
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel5;

/* variable:     HTempLevel6_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel6_ANALOG;

/* variable:     HTempLevel6
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel6;

/* variable:     HTempLevel7_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel7_ANALOG;

/* variable:     HTempLevel7
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel7;

/* variable:     HTempLevel8_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel8_ANALOG;

/* variable:     HTempLevel8
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel8;

/* variable:     HTempLevel9_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel9_ANALOG;

/* variable:     HTempLevel9
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel9;

/* variable:     HTempLevel10_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel10_ANALOG;

/* variable:     HTempLevel10
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel10;

/* variable:     HTempLevel0_ANALOG_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel0_ANALOG_2;

/* variable:     HTempLevel0_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel0_2;

/* variable:     HTempLevel1_ANALOG_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel1_ANALOG_2;

/* variable:     HTempLevel1_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel1_2;

/* variable:     HTempLevel2_ANALOG_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Mininum of ANALOG
 */
extern const INT FAR HTempLevel2_ANALOG_2;

/* variable:     HTempLevel2_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      Maximum of Gauge
 */
extern const INT FAR HTempLevel2_2;

/* variable:     HTempLevel3_ANALOG_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel3_ANALOG_2;

/* variable:     HTempLevel3_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel3_2;

/* variable:     HTempLevel4_ANALOG_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel4_ANALOG_2;

/* variable:     HTempLevel4_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel4_2;

/* variable:     HTempLevel5_ANALOG_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel5_ANALOG_2;

/* variable:     HTempLevel5_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel5_2;

/* variable:     HTempLevel6_ANALOG_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel6_ANALOG_2;

/* variable:     HTempLevel6_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel6_2;

/* variable:     HTempLevel7_ANALOG_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel7_ANALOG_2;

/* variable:     HTempLevel7_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_Webasto_Calibration
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR HTempLevel7_2;

/* variable:     HTempAverageQuantity_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Sensor_WebastoTemp_Filter_data
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR HTempAverageQuantity_2;

/* variable:     AVGUANTITYTEMP_FUELT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AVGUANTITYTEMP_FUELT_L;

/* variable:     TEMPLEVEL0_FUELT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TEMPLEVEL0_FUELT_L;

/* variable:     TEMPLEVEL1_FUELT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TEMPLEVEL1_FUELT_L;

/* variable:     TEMPLEVEL0_ANALOG_FUELT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TEMPLEVEL0_ANALOG_FUELT_L;

/* variable:     TEMPLEVEL1_ANALOG_FUELT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TEMPLEVEL1_ANALOG_FUELT_L;

/* variable:     AVGUANTITYTEMP_FUELT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         SINT
 * address:      not specified
 * constant:     True
 * comment:      How many value of the array (max=30)
 */
extern const SINT FAR AVGUANTITYTEMP_FUELT_R;

/* variable:     TEMPLEVEL0_ANALOG_FUELT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TEMPLEVEL0_ANALOG_FUELT_R;

/* variable:     TEMPLEVEL0_FUELT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TEMPLEVEL0_FUELT_R;

/* variable:     TEMPLEVEL1_ANALOG_FUELT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TEMPLEVEL1_ANALOG_FUELT_R;

/* variable:     TEMPLEVEL1_FUELT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     True
 * comment:      
 */
extern const INT FAR TEMPLEVEL1_FUELT_R;

/**************************************************************************/

/* declaration of ordinary variables */

/* variable:     vt3_can_alarm_busoff_CAN_Open
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/MC2M/CPU0/CAN_Bus/CAN_Open
 */
extern BOOL FAR vt3_can_alarm_busoff_CAN_Open;

/* variable:     MC2M_MUX_DIGOUT01_LowBeam_R
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_6 / 5A LowBeam_Right
 */
extern BOOL FAR MC2M_MUX_DIGOUT01_LowBeam_R;

/* variable:     MC2M_MUX_DIGOUT02_LowBeam_L
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_4 / 5A LowBeam_Left
 */
extern BOOL FAR MC2M_MUX_DIGOUT02_LowBeam_L;

/* variable:     MC2M_MUX_DIGOUT03_InteriorVantilator_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_3 / 5A İç havalandırma fan 1 
 */
extern BOOL FAR MC2M_MUX_DIGOUT03_InteriorVantilator_1;

/* variable:     MC2M_MUX_DIGOUT04_InteriorVantilator_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_1 / 5A İç havalandırma fan 2
 */
extern BOOL FAR MC2M_MUX_DIGOUT04_InteriorVantilator_2;

/* variable:     MC2M_MUX_DIGOUT05_FollowLight
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_2 / 5A Takip Lambası
 */
extern BOOL FAR MC2M_MUX_DIGOUT05_FollowLight;

/* variable:     MC2M_MUX_DIGOUT06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_35 /5A 
 */
extern BOOL FAR MC2M_MUX_DIGOUT06;

/* variable:     MC2M_MUX_DIGOUT07_FrontAxleDiffLock
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_5 / 5A Ön aks kilidi
 */
extern BOOL FAR MC2M_MUX_DIGOUT07_FrontAxleDiffLock;

/* variable:     MC2M_MUX_DIGOUT08_ResistancesFront
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_13 / 8A Mirror & Window Resistance
 */
extern BOOL FAR MC2M_MUX_DIGOUT08_ResistancesFront;

/* variable:     MC2M_MUX_DIGOUT09_StopLamps
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_1 / 5A -StopLamp_Right & Left
 */
extern BOOL FAR MC2M_MUX_DIGOUT09_StopLamps;

/* variable:     MC2M_MUX_DIGOUT10_Buzzer
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_12 / 3A - DOUT_Buzzer
 */
extern BOOL FAR MC2M_MUX_DIGOUT10_Buzzer;

/* variable:     MC2M_MUX_DIGOUT11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_5 / 3A 
 */
extern BOOL FAR MC2M_MUX_DIGOUT11;

/* variable:     MC2M_MUX_DIGOUT12_Park_Sensor_Control
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_7 / 8A - Park_Sensor_Control
 */
extern BOOL FAR MC2M_MUX_DIGOUT12_Park_Sensor_Control;

/* variable:     MC2M_MUX_DIGOUT13_HighBeam_Left
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_8 / 8A - HighBeam_Left
 */
extern BOOL FAR MC2M_MUX_DIGOUT13_HighBeam_Left;

/* variable:     MC2M_MUX_DIGOUT14_RearFogLamp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_5 / 8A - RearFogLamp
 */
extern BOOL FAR MC2M_MUX_DIGOUT14_RearFogLamp;

/* variable:     MC2M_MUX_DIGOUT15_ReverseGearLamp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_3 / 8A - ReverseGearLamp
 */
extern BOOL FAR MC2M_MUX_DIGOUT15_ReverseGearLamp;

/* variable:     MC2M_MUX_DIGOUT16_Tank_1_SupplyValf
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_24 / 8A -(Yakıt tankı 1 besleme)
 */
extern BOOL FAR MC2M_MUX_DIGOUT16_Tank_1_SupplyValf;

/* variable:     MC2M_MUX_DIGOUT17_Tank_1_ReturnValf
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_25 / 8A  - (Yakıt tankı 1 dönüş valfi)
 */
extern BOOL FAR MC2M_MUX_DIGOUT17_Tank_1_ReturnValf;

/* variable:     MC2M_MUX_DIGOUT18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_8 / 3.5A Low side - Front Wiper Brake ---
 */
extern BOOL FAR MC2M_MUX_DIGOUT18;

/* variable:     MC2M_MUX_DIGOUT19_Tank_2_SupplyValf
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_26 / 8A   (Yakıt tankı 2 besleme valfi)
 */
extern BOOL FAR MC2M_MUX_DIGOUT19_Tank_2_SupplyValf;

/* variable:     MC2M_MUX_DIGOUT20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_7 / 3.5A Low side -
 */
extern BOOL FAR MC2M_MUX_DIGOUT20;

/* variable:     MC2M_MUX_DIGOUT21_Backup_Alarm
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_1 / 5A Backup Alarm
 */
extern BOOL FAR MC2M_MUX_DIGOUT21_Backup_Alarm;

/* variable:     MC2M_MUX_DIGOUT22_Tank_2_ReturnValf
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_2 / 8A   (Yakıt tankı 2 dönüş valfi)
 */
extern BOOL FAR MC2M_MUX_DIGOUT22_Tank_2_ReturnValf;

/* variable:     MC2M_MUX_DIGOUT23_Winch_Up
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_3 / 5A  (Vinç kontrol valfi 1)
 */
extern BOOL FAR MC2M_MUX_DIGOUT23_Winch_Up;

/* variable:     MC2M_MUX_DIGOUT24_Winch_Down
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_4 / 5A (vinç kontrol valfi 2)
 */
extern BOOL FAR MC2M_MUX_DIGOUT24_Winch_Down;

/* variable:     MC2M_MUX_DIGOUT25_Winch_Clutch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_9 / 5A (VİNÇ CLUTCH VALFİ)
 */
extern BOOL FAR MC2M_MUX_DIGOUT25_Winch_Clutch;

/* variable:     MC2M_MUX_DIGOUT26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_8 / 5A WorkLamp_RL    (BOSSSSSS)
 */
extern BOOL FAR MC2M_MUX_DIGOUT26;

/* variable:     MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J4_6 / 5A (Yangın söndürme blackout)
 */
extern BOOL FAR MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter;

/* variable:     MC2M_MUX_LED1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_LED1;

/* variable:     MC2M_MUX_LED2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_LED2;

/* variable:     MC2M_MUX_LED3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_LED3;

/* variable:     MC2M_MUX_LED4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_LED4;

/* variable:     MC2M_MUX_FrontWiperSLOW
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_FrontWiperSLOW;

/* variable:     MC2M_MUX_FrontWiperFAST
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_FrontWiperFAST;

/* variable:     MC2M_MUX_FrontWiperINT1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_FrontWiperINT1;

/* variable:     MC2M_MUX_FrontWiperINT2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_FrontWiperINT2;

/* variable:     MC2M_MUX_RearWiperSLOW
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_RearWiperSLOW;

/* variable:     MC2M_MUX_RearWiperINT
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MUX_RearWiperINT;

/* variable:     MC2M_MUX_Delay_INT1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Intermitter Delay 1 : 250 for 3000ms
 */
extern USINT FAR MC2M_MUX_Delay_INT1;

/* variable:     MC2M_MUX_Delay_INT2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Intermitter Delay 2 : 250 for 7000ms
 */
extern USINT FAR MC2M_MUX_Delay_INT2;

/* variable:     MC2M_IOMODE_2_DOUT00
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_6 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT00;

/* variable:     MC2M_IOMODE_2_DOUT01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_15
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT01;

/* variable:     MC2M_IOMODE_2_DOUT02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_7 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT02;

/* variable:     MC2M_IOMODE_2_DOUT03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_16 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT03;

/* variable:     MC2M_IOMODE_2_DOUT04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_8 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT04;

/* variable:     MC2M_IOMODE_2_DOUT05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_17 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT05;

/* variable:     MC2M_IOMODE_2_DOUT06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_9 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT06;

/* variable:     MC2M_IOMODE_2_DOUT07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_18
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT07;

/* variable:     MC2M_IOMODE_2_DOUT08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_14 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT08;

/* variable:     MC2M_IOMODE_2_DOUT09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_13 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT09;

/* variable:     MC2M_IOMODE_2_DOUT10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_5 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT10;

/* variable:     MC2M_IOMODE_2_DOUT11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_4 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT11;

/* variable:     MC2M_IOMODE_2_DOUT12_BrakeAirTanksWarningLamps
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_12 Fren Hava Tankı Basıncı 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT12_BrakeAirTanksWarningLamps;

/* variable:     MC2M_IOMODE_2_DOUT13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_2 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT13;

/* variable:     MC2M_IOMODE_2_DOUT14
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_11
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT14;

/* variable:     MC2M_IOMODE_2_DOUT15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_1 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT15;

/* variable:     MC2M_IOMODE_2_DOUT16_Tank_1_ActivatedLamp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_20 tank 1 aktif lambası
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT16_Tank_1_ActivatedLamp;

/* variable:     MC2M_IOMODE_2_DOUT17_Tank_2_ActivatedLamp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_10 tank 2 aktif lambası
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT17_Tank_2_ActivatedLamp;

/* variable:     MC2M_IOMODE_2_DOUT18_KeyLedOnOff
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_19 Anahtar ledi on off
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT18_KeyLedOnOff;

/* variable:     MC2M_IOMODE_2_DOUT19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_9  
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT19;

/* variable:     MC2M_IOMODE_2_DOUT20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_14 DIGIN merkezi kilit sistemi 
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT20;

/* variable:     MC2M_IOMODE_2_DOUT21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_4
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT21;

/* variable:     MC2M_IOMODE_2_DOUT22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_13
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT22;

/* variable:     MC2M_IOMODE_2_DOUT23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_3
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT23;

/* variable:     MC2M_IOMODE_2_DOUT24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_7
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT24;

/* variable:     MC2M_IOMODE_2_DOUT25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_17
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT25;

/* variable:     MC2M_IOMODE_2_DOUT26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_8
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT26;

/* variable:     MC2M_IOMODE_2_DOUT27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_18
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT27;

/* variable:     MC2M_IOMODE_2_DOUT28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_5
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT28;

/* variable:     MC2M_IOMODE_2_DOUT29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_15
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT29;

/* variable:     MC2M_IOMODE_2_DOUT30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_6
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT30;

/* variable:     MC2M_IOMODE_2_DOUT31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_16
 */
extern BOOL FAR MC2M_IOMODE_2_DOUT31;

/* variable:     MC2M_IOMODE_2_PWM00_Tanks_Gauge
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:       j2-08
 */
extern UINT FAR MC2M_IOMODE_2_PWM00_Tanks_Gauge;

/* variable:     MC2M_IOMODE_2_PWM01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      j2-17
 */
extern UINT FAR MC2M_IOMODE_2_PWM01;

/* variable:     MC2M_IOMODE_DOUT00_ABS_IndicatorLamp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_6 - Stat_ABS_IndicatorLamp
 */
extern BOOL FAR MC2M_IOMODE_DOUT00_ABS_IndicatorLamp;

/* variable:     MC2M_IOMODE_DOUT01_EngineProtection
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_15 Engine Protection Override Out
 */
extern BOOL FAR MC2M_IOMODE_DOUT01_EngineProtection;

/* variable:     MC2M_IOMODE_DOUT02_ParkSensorControl
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_7 - ParkSensorControl
 */
extern BOOL FAR MC2M_IOMODE_DOUT02_ParkSensorControl;

/* variable:     MC2M_IOMODE_DOUT03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_16 - ABS Off-Road Switch
 */
extern BOOL FAR MC2M_IOMODE_DOUT03;

/* variable:     MC2M_IOMODE_DOUT04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_8 - Speed Gauge Signal - Hz
 */
extern BOOL FAR MC2M_IOMODE_DOUT04;

/* variable:     MC2M_IOMODE_DOUT05_BrakeAirTanksWarningLamps
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_17 - O/L Fren Hava Tankı 
 */
extern BOOL FAR MC2M_IOMODE_DOUT05_BrakeAirTanksWarningLamps;

/* variable:     MC2M_IOMODE_DOUT06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_9 - BrakeIndicatorLamp
 */
extern BOOL FAR MC2M_IOMODE_DOUT06;

/* variable:     MC2M_IOMODE_DOUT07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_18
 */
extern BOOL FAR MC2M_IOMODE_DOUT07;

/* variable:     MC2M_IOMODE_DOUT08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_14
 */
extern BOOL FAR MC2M_IOMODE_DOUT08;

/* variable:     MC2M_IOMODE_DOUT09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_13 - TransOilTempLamp
 */
extern BOOL FAR MC2M_IOMODE_DOUT09;

/* variable:     MC2M_IOMODE_DOUT10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_5 
 */
extern BOOL FAR MC2M_IOMODE_DOUT10;

/* variable:     MC2M_IOMODE_DOUT11_EngineBrakeActivation
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_4 - EngineBrakeActivation
 */
extern BOOL FAR MC2M_IOMODE_DOUT11_EngineBrakeActivation;

/* variable:     MC2M_IOMODE_DOUT12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_12
 */
extern BOOL FAR MC2M_IOMODE_DOUT12;

/* variable:     MC2M_IOMODE_DOUT13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_2 
 */
extern BOOL FAR MC2M_IOMODE_DOUT13;

/* variable:     MC2M_IOMODE_DOUT14
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_11
 */
extern BOOL FAR MC2M_IOMODE_DOUT14;

/* variable:     MC2M_IOMODE_DOUT15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_1 
 */
extern BOOL FAR MC2M_IOMODE_DOUT15;

/* variable:     MC2M_IOMODE_DOUT16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_20 
 */
extern BOOL FAR MC2M_IOMODE_DOUT16;

/* variable:     MC2M_IOMODE_DOUT17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_10
 */
extern BOOL FAR MC2M_IOMODE_DOUT17;

/* variable:     MC2M_IOMODE_DOUT18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_19
 */
extern BOOL FAR MC2M_IOMODE_DOUT18;

/* variable:     MC2M_IOMODE_DOUT19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_9  
 */
extern BOOL FAR MC2M_IOMODE_DOUT19;

/* variable:     MC2M_IOMODE_DOUT20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_14
 */
extern BOOL FAR MC2M_IOMODE_DOUT20;

/* variable:     MC2M_IOMODE_DOUT21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_4
 */
extern BOOL FAR MC2M_IOMODE_DOUT21;

/* variable:     MC2M_IOMODE_DOUT22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_13
 */
extern BOOL FAR MC2M_IOMODE_DOUT22;

/* variable:     MC2M_IOMODE_DOUT23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_3
 */
extern BOOL FAR MC2M_IOMODE_DOUT23;

/* variable:     MC2M_IOMODE_DOUT24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_7
 */
extern BOOL FAR MC2M_IOMODE_DOUT24;

/* variable:     MC2M_IOMODE_DOUT25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_17 ABS Off-Road Switch Output
 */
extern BOOL FAR MC2M_IOMODE_DOUT25;

/* variable:     MC2M_IOMODE_DOUT26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_8
 */
extern BOOL FAR MC2M_IOMODE_DOUT26;

/* variable:     MC2M_IOMODE_DOUT27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_18
 */
extern BOOL FAR MC2M_IOMODE_DOUT27;

/* variable:     MC2M_IOMODE_DOUT28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_5
 */
extern BOOL FAR MC2M_IOMODE_DOUT28;

/* variable:     MC2M_IOMODE_DOUT29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_15 
 */
extern BOOL FAR MC2M_IOMODE_DOUT29;

/* variable:     MC2M_IOMODE_DOUT30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_6
 */
extern BOOL FAR MC2M_IOMODE_DOUT30;

/* variable:     MC2M_IOMODE_DOUT31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_16
 */
extern BOOL FAR MC2M_IOMODE_DOUT31;

/* variable:     MC2M_IOMODE_PWM00_SpeedGauge
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Speed Gauge Signal - Hz
 */
extern UINT FAR MC2M_IOMODE_PWM00_SpeedGauge;

/* variable:     MC2M_IOMODE_PWM01_TempGauge
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Temp Gauge - Low Side PWM
 */
extern UINT FAR MC2M_IOMODE_PWM01_TempGauge;

/* variable:     MC2M_TERA_EngineSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_EngineSpeed;

/* variable:     MC2M_TERA_VehicleSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_VehicleSpeed;

/* variable:     MC2M_TERA_FuelLevel_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_FuelLevel_1;

/* variable:     MC2M_TERA_EngineTempValue
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_EngineTempValue;

/* variable:     MC2M_TERA_BatteryLevel
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_BatteryLevel;

/* variable:     MC2M_TERA_EngineOilPressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_EngineOilPressure;

/* variable:     MC2M_TERA_ParkingBrakePressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ParkingBrakePressure;

/* variable:     MC2M_TERA_ServiceBrake1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ServiceBrake1;

/* variable:     MC2M_TERA_ServiceBrake2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ServiceBrake2;

/* variable:     MC2M_TERA_AccessoryPressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_AccessoryPressure;

/* variable:     MC2M_TERA_TransOilTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_TransOilTemperature;

/* variable:     MC2M_TERA_CurrentGear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_CurrentGear;

/* variable:     MC2M_TERA_OutSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_OutSideTemperature;

/* variable:     MC2M_TERA_InSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_InSideTemperature;

/* variable:     MC2M_TERA_Icon_Status_L01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L01;

/* variable:     MC2M_TERA_Icon_Status_L02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L02;

/* variable:     MC2M_TERA_Icon_Status_L03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L03;

/* variable:     MC2M_TERA_Icon_Status_L04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L04;

/* variable:     MC2M_TERA_Icon_Status_L05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L05;

/* variable:     MC2M_TERA_Icon_Status_L06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L06;

/* variable:     MC2M_TERA_Icon_Status_L07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L07;

/* variable:     MC2M_TERA_Icon_Status_L08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L08;

/* variable:     MC2M_TERA_Icon_Status_L09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L09;

/* variable:     MC2M_TERA_Icon_Status_L10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L10;

/* variable:     MC2M_TERA_Icon_Status_L11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L11;

/* variable:     MC2M_TERA_Icon_Status_L12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L12;

/* variable:     MC2M_TERA_Icon_Status_L13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L13;

/* variable:     MC2M_TERA_Icon_Status_L14_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_1;

/* variable:     MC2M_TERA_Icon_Status_L15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L15;

/* variable:     MC2M_TERA_Icon_Status_L16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L16;

/* variable:     MC2M_TERA_Icon_Status_L17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L17;

/* variable:     MC2M_TERA_Icon_Status_L18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L18;

/* variable:     MC2M_TERA_Icon_Status_L19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L19;

/* variable:     MC2M_TERA_Icon_Status_L20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L20;

/* variable:     MC2M_TERA_Icon_Status_L21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L21;

/* variable:     MC2M_TERA_Icon_Status_L22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L22;

/* variable:     MC2M_TERA_Icon_Status_L23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L23;

/* variable:     MC2M_TERA_Icon_Status_L24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L24;

/* variable:     MC2M_TERA_Icon_Status_L25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L25;

/* variable:     MC2M_TERA_Icon_Status_L26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L26;

/* variable:     MC2M_TERA_Icon_Status_L27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L27;

/* variable:     MC2M_TERA_Icon_Status_L28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L28;

/* variable:     MC2M_TERA_Icon_Status_L29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L29;

/* variable:     MC2M_TERA_Icon_Status_L30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L30;

/* variable:     MC2M_TERA_Icon_Status_L31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L31;

/* variable:     MC2M_TERA_Icon_Status_L32
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L32;

/* variable:     MC2M_TERA_Icon_Status_L33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L33;

/* variable:     MC2M_TERA_Icon_Status_L34
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L34;

/* variable:     MC2M_TERA_Icon_Status_L35
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L35;

/* variable:     MC2M_TERA_Icon_Status_L36
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L36;

/* variable:     MC2M_TERA_Icon_Status_L37
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L37;

/* variable:     MC2M_TERA_Icon_Status_L38
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L38;

/* variable:     MC2M_TERA_Icon_Status_L39
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L39;

/* variable:     MC2M_TERA_Icon_Status_L40
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L40;

/* variable:     MC2M_TERA_Icon_Status_L41
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L41;

/* variable:     MC2M_TERA_Icon_Status_L42
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L42;

/* variable:     MC2M_TERA_Icon_Status_L43
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L43;

/* variable:     MC2M_TERA_Icon_Status_BO_S1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_S1;

/* variable:     MC2M_TERA_Icon_Status_BO_S2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_S2;

/* variable:     MC2M_TERA_Icon_Status_BO_S3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_S3;

/* variable:     MC2M_TERA_Icon_Status_GIGA_Bsy
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_GIGA_Bsy;

/* variable:     MC2M_TERA_Icon_Status_BO_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_1;

/* variable:     MC2M_TERA_Icon_Status_BO_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_2;

/* variable:     MC2M_TERA_Icon_Status_L14_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_2;

/* variable:     MC2M_TERA_Icon_Status_L14_3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_3;

/* variable:     MC2M_TERA_Icon_Status_L14_4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_4;

/* variable:     MC2M_TERA_Icon_Status_L14_5
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_L14_5;

/* variable:     MC2M_TERA_Icon_Status_TankType
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_Icon_Status_TankType;

/* variable:     MC2M_TERA_Icon_Status_BO_0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Icon_Status_BO_0;

/* variable:     MC2M_TERA_LampAlarm_L01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L01;

/* variable:     MC2M_TERA_LampAlarm_L02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L02;

/* variable:     MC2M_TERA_LampAlarm_L03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L03;

/* variable:     MC2M_TERA_LampAlarm_L04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L04;

/* variable:     MC2M_TERA_LampAlarm_L05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L05;

/* variable:     MC2M_TERA_LampAlarm_L06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L06;

/* variable:     MC2M_TERA_LampAlarm_L07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L07;

/* variable:     MC2M_TERA_LampAlarm_L08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L08;

/* variable:     MC2M_TERA_LampAlarm_L09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L09;

/* variable:     MC2M_TERA_LampAlarm_L10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L10;

/* variable:     MC2M_TERA_LampAlarm_L11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L11;

/* variable:     MC2M_TERA_LampAlarm_L12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L12;

/* variable:     MC2M_TERA_LampAlarm_L13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L13;

/* variable:     MC2M_TERA_LampAlarm_L14
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L14;

/* variable:     MC2M_TERA_LampAlarm_L15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L15;

/* variable:     MC2M_TERA_LampAlarm_L16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L16;

/* variable:     MC2M_TERA_LampAlarm_L17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L17;

/* variable:     MC2M_TERA_LampAlarm_L18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L18;

/* variable:     MC2M_TERA_LampAlarm_L19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L19;

/* variable:     MC2M_TERA_LampAlarm_L20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L20;

/* variable:     MC2M_TERA_LampAlarm_L21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L21;

/* variable:     MC2M_TERA_LampAlarm_L22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L22;

/* variable:     MC2M_TERA_LampAlarm_L23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L23;

/* variable:     MC2M_TERA_LampAlarm_L24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L24;

/* variable:     MC2M_TERA_LampAlarm_L25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L25;

/* variable:     MC2M_TERA_LampAlarm_L26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L26;

/* variable:     MC2M_TERA_LampAlarm_L27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L27;

/* variable:     MC2M_TERA_LampAlarm_L28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L28;

/* variable:     MC2M_TERA_LampAlarm_L29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L29;

/* variable:     MC2M_TERA_LampAlarm_L30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L30;

/* variable:     MC2M_TERA_LampAlarm_L31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L31;

/* variable:     MC2M_TERA_LampAlarm_L32
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L32;

/* variable:     MC2M_TERA_LampAlarm_L33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L33;

/* variable:     MC2M_TERA_LampAlarm_L34
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L34;

/* variable:     MC2M_TERA_LampAlarm_L35
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L35;

/* variable:     MC2M_TERA_LampAlarm_L36
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_LampAlarm_L36;

/* variable:     MC2M_TERA_AngleX
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_AngleX;

/* variable:     MC2M_TERA_AngleY
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_AngleY;

/* variable:     MC2M_TERA_FuelLevel_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_FuelLevel_2;

/* variable:     MC2M_TERA_FuelTankSel1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_FuelTankSel1;

/* variable:     MC2M_TERA_FuelTankSel2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_FuelTankSel2;

/* variable:     MC2M_TERA_BackDoorTest_Buzzer
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_BackDoorTest_Buzzer;

/* variable:     MC2M_TERA_SWConfig0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWConfig0;

/* variable:     MC2M_TERA_SWConfig1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWConfig1;

/* variable:     MC2M_TERA_SWVersions0
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWVersions0;

/* variable:     MC2M_TERA_SWVersions1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWVersions1;

/* variable:     MC2M_TERA_SWVersions2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_SWVersions2;

/* variable:     MC2M_TERA_AuxPressureLow_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_AuxPressureLow_Stat;

/* variable:     MC2M_TERA_Engine_Brake_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_Engine_Brake_Stat;

/* variable:     MC2M_TERA_WaterInFuel_Stat
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_WaterInFuel_Stat;

/* variable:     MC2M_TERA_BackDoorTest_Prd
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_BackDoorTest_Prd;

/* variable:     MC2M_IOMODE_PWM03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_207
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Low Side PWM 
 */
extern UINT FAR MC2M_IOMODE_PWM03;

/* variable:     CCVS_2_TwoSpeedAxleSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum358
 * address:      not specified
 * constant:     False
 * comment:      Two Speed Axle Switch J1939 SPN 69
 */
extern Enum358 FAR CCVS_2_TwoSpeedAxleSwitch;

/* variable:     CCVS_2_ParkingBrakeSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum359
 * address:      not specified
 * constant:     False
 * comment:      Parking Brake Switch J1939 SPN 70
 */
extern Enum359 FAR CCVS_2_ParkingBrakeSwitch;

/* variable:     CCVS_2_CruiseControlPauseSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum360
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Pause Switch J1939 SPN 1633
 */
extern Enum360 FAR CCVS_2_CruiseControlPauseSwitch;

/* variable:     CCVS_2_ParkBrakeReleaseInhibitRequest
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum361
 * address:      not specified
 * constant:     False
 * comment:      Park Brake Release Inhibit Request J1939 SPN 3807
 */
extern Enum361 FAR CCVS_2_ParkBrakeReleaseInhibitRequest;

/* variable:     CCVS_2_CruiseControlActive
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum362
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Active J1939 SPN 595
 */
extern Enum362 FAR CCVS_2_CruiseControlActive;

/* variable:     CCVS_2_CruiseControlEnableSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum363
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Enable Switch J1939 SPN 596
 */
extern Enum363 FAR CCVS_2_CruiseControlEnableSwitch;

/* variable:     CCVS_2_BrakeSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum364
 * address:      not specified
 * constant:     False
 * comment:      Brake Switch J1939 SPN 597
 */
extern Enum364 FAR CCVS_2_BrakeSwitch;

/* variable:     CCVS_2_ClutchSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum365
 * address:      not specified
 * constant:     False
 * comment:      Clutch Switch J1939 SPN 598
 */
extern Enum365 FAR CCVS_2_ClutchSwitch;

/* variable:     CCVS_2_CruiseControlSetSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum366
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Set Switch J1939 SPN 599
 */
extern Enum366 FAR CCVS_2_CruiseControlSetSwitch;

/* variable:     CCVS_2_CruiseControlCoastSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum367
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Coast (Decelerate) Switch J1939 SPN 600
 */
extern Enum367 FAR CCVS_2_CruiseControlCoastSwitch;

/* variable:     CCVS_2_CruiseControlResumeSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum368
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Resume Switch J1939 SPN 601
 */
extern Enum368 FAR CCVS_2_CruiseControlResumeSwitch;

/* variable:     CCVS_2_CruiseControlAccelerateSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum369
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Accelerate Switch J1939 SPN 602
 */
extern Enum369 FAR CCVS_2_CruiseControlAccelerateSwitch;

/* variable:     CCVS_2_CruiseControlSetSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Set Speed J1939 SPN 86 [km/h]
 */
extern USINT FAR CCVS_2_CruiseControlSetSpeed;

/* variable:     CCVS_2_CruiseControlStates
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum370
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control States J1939 SPN 527
 */
extern Enum370 FAR CCVS_2_CruiseControlStates;

/* variable:     CCVS_2_EngineIdleIncrementSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Increment Switch J1939 SPN 968
 */
extern Enum71 FAR CCVS_2_EngineIdleIncrementSwitch;

/* variable:     CCVS_2_EngineIdleDecrementSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Decrement Switch J1939 SPN 967
 */
extern Enum71 FAR CCVS_2_EngineIdleDecrementSwitch;

/* variable:     CCVS_2_EngineTestModeSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Test Mode Switch J1939 SPN 966
 */
extern Enum71 FAR CCVS_2_EngineTestModeSwitch;

/* variable:     CCVS_2_EngineShutdownOverrideSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Shutdown Override Switch J1939 SPN 1237
 */
extern Enum71 FAR CCVS_2_EngineShutdownOverrideSwitch;

/* variable:     CCVS_2_WheelBasedVehicleSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Wheel-Based Vehicle Speed J1939 SPN 84 [km/h]
 */
extern UINT FAR CCVS_2_WheelBasedVehicleSpeed;

/* variable:     MC2M_TERA_DIAG_INP00
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP00;

/* variable:     MC2M_TERA_DIAG_INP01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP01;

/* variable:     MC2M_TERA_DIAG_INP02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP02;

/* variable:     MC2M_TERA_DIAG_INP03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP03;

/* variable:     MC2M_TERA_DIAG_INP04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP04;

/* variable:     MC2M_TERA_DIAG_INP05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP05;

/* variable:     MC2M_TERA_DIAG_INP06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP06;

/* variable:     MC2M_TERA_DIAG_INP07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP07;

/* variable:     MC2M_TERA_DIAG_INP08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP08;

/* variable:     MC2M_TERA_DIAG_INP09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP09;

/* variable:     MC2M_TERA_DIAG_INP10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP10;

/* variable:     MC2M_TERA_DIAG_INP11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP11;

/* variable:     MC2M_TERA_DIAG_INP12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP12;

/* variable:     MC2M_TERA_DIAG_INP13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP13;

/* variable:     MC2M_TERA_DIAG_INP14
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP14;

/* variable:     MC2M_TERA_DIAG_INP15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP15;

/* variable:     MC2M_TERA_DIAG_INP16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP16;

/* variable:     MC2M_TERA_DIAG_INP17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP17;

/* variable:     MC2M_TERA_DIAG_INP18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP18;

/* variable:     MC2M_TERA_DIAG_INP19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP19;

/* variable:     MC2M_TERA_DIAG_INP20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP20;

/* variable:     MC2M_TERA_DIAG_INP21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP21;

/* variable:     MC2M_TERA_DIAG_INP22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP22;

/* variable:     MC2M_TERA_DIAG_INP23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP23;

/* variable:     MC2M_TERA_DIAG_INP24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP24;

/* variable:     MC2M_TERA_DIAG_INP25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP25;

/* variable:     MC2M_TERA_DIAG_INP26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP26;

/* variable:     MC2M_TERA_DIAG_INP27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP27;

/* variable:     MC2M_TERA_DIAG_INP28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP28;

/* variable:     MC2M_TERA_DIAG_INP29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP29;

/* variable:     MC2M_TERA_DIAG_INP30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP30;

/* variable:     MC2M_TERA_DIAG_INP31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP31;

/* variable:     MC2M_TERA_DIAG_INP32
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP32;

/* variable:     MC2M_TERA_DIAG_INP33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP33;

/* variable:     MC2M_TERA_DIAG_INP34
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP34;

/* variable:     MC2M_TERA_DIAG_INP35
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP35;

/* variable:     MC2M_TERA_DIAG_INP36
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP36;

/* variable:     MC2M_TERA_DIAG_INP37
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP37;

/* variable:     MC2M_TERA_DIAG_INP38
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP38;

/* variable:     MC2M_TERA_DIAG_INP39
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP39;

/* variable:     MC2M_TERA_DIAG_INP40
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP40;

/* variable:     MC2M_TERA_DIAG_INP41
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP41;

/* variable:     MC2M_TERA_DIAG_INP42
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP42;

/* variable:     MC2M_TERA_DIAG_INP43
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP43;

/* variable:     MC2M_TERA_DIAG_INP44
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP44;

/* variable:     MC2M_TERA_DIAG_INP45
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP45;

/* variable:     MC2M_TERA_DIAG_INP46
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP46;

/* variable:     MC2M_TERA_DIAG_INP47
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP47;

/* variable:     MC2M_TERA_DIAG_INP48
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP48;

/* variable:     MC2M_TERA_DIAG_INP49
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP49;

/* variable:     MC2M_TERA_DIAG_INP50
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP50;

/* variable:     MC2M_TERA_DIAG_INP51
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP51;

/* variable:     MC2M_TERA_DIAG_OUT00
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT00;

/* variable:     MC2M_TERA_DIAG_OUT01
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT01;

/* variable:     MC2M_TERA_DIAG_OUT02
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT02;

/* variable:     MC2M_TERA_DIAG_OUT03
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT03;

/* variable:     MC2M_TERA_DIAG_OUT04
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT04;

/* variable:     MC2M_TERA_DIAG_OUT05
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT05;

/* variable:     MC2M_TERA_DIAG_OUT06
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT06;

/* variable:     MC2M_TERA_DIAG_OUT07
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT07;

/* variable:     MC2M_TERA_DIAG_OUT08
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT08;

/* variable:     MC2M_TERA_DIAG_OUT09
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT09;

/* variable:     MC2M_TERA_DIAG_OUT10
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT10;

/* variable:     MC2M_TERA_DIAG_OUT11
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT11;

/* variable:     MC2M_TERA_DIAG_OUT12
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT12;

/* variable:     MC2M_TERA_DIAG_OUT13
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT13;

/* variable:     MC2M_TERA_DIAG_OUT14
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT14;

/* variable:     MC2M_TERA_DIAG_OUT15
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT15;

/* variable:     MC2M_TERA_DIAG_OUT16
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT16;

/* variable:     MC2M_TERA_DIAG_OUT17
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT17;

/* variable:     MC2M_TERA_DIAG_OUT18
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT18;

/* variable:     MC2M_TERA_DIAG_OUT19
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT19;

/* variable:     MC2M_TERA_DIAG_OUT20
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT20;

/* variable:     MC2M_TERA_DIAG_OUT21
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT21;

/* variable:     MC2M_TERA_DIAG_OUT22
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT22;

/* variable:     MC2M_TERA_DIAG_OUT23
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT23;

/* variable:     MC2M_TERA_DIAG_OUT24
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT24;

/* variable:     MC2M_TERA_DIAG_OUT25
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT25;

/* variable:     MC2M_TERA_DIAG_OUT26
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT26;

/* variable:     MC2M_TERA_DIAG_OUT27
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT27;

/* variable:     MC2M_TERA_DIAG_OUT28
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT28;

/* variable:     MC2M_TERA_DIAG_OUT29
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT29;

/* variable:     MC2M_TERA_DIAG_OUT30
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT30;

/* variable:     MC2M_TERA_DIAG_OUT31
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT31;

/* variable:     MC2M_TERA_DIAG_OUT32
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT32;

/* variable:     MC2M_TERA_DIAG_OUT33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT33;

/* variable:     MC2M_TERA_DIAG_OUT34
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT34;

/* variable:     MC2M_TERA_DIAG_OUT35
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT35;

/* variable:     MC2M_TERA_DIAG_OUT36
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT36;

/* variable:     MC2M_TERA_DIAG_INP10AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP10AN;

/* variable:     MC2M_TERA_DIAG_INP12AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP12AN;

/* variable:     MC2M_TERA_DIAG_INP13AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_159
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP13AN;

/* variable:     MC2M_TERA_DIAG_INP14AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_159
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP14AN;

/* variable:     MC2M_TERA_DIAG_INP22AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_159
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP22AN;

/* variable:     MC2M_TERA_DIAG_INP25AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_159
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP25AN;

/* variable:     MC2M_TERA_DIAG_INP30AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_160
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP30AN;

/* variable:     MC2M_TERA_DIAG_INP31AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_160
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP31AN;

/* variable:     MC2M_TERA_DIAG_INP32AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_160
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP32AN;

/* variable:     MC2M_TERA_DIAG_INP33AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_160
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP33AN;

/* variable:     MC2M_TERA_DIAG_INP35AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_161
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_INP35AN;

/* variable:     MC2M_TERA_DIAG_OUT05AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_161
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_OUT05AN;

/* variable:     MC2M_TERA_DIAG_OUT10AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_161
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_OUT10AN;

/* variable:     MC2M_TERA_DIAG_OUT14AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_161
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_OUT14AN;

/* variable:     MC2M_TERA_DIAG_OUT21AN
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_DIAG_OUT21AN;

/* variable:     MC2M_TERA_DIAG_fuelTank_1_Temperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_fuelTank_1_Temperature;

/* variable:     MC2M_TERA_DIAG_PresLevel_Normalized
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_PresLevel_Normalized;

/* variable:     MC2M_TERA_DIAG_HTempLevel_Normalized_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_HTempLevel_Normalized_2;

/* variable:     MC2M_TERA_DIAG_HTempLevel_Normalized
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_HTempLevel_Normalized;

/* variable:     MC2M_TERA_DIAG_TotalEngineHours
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_DIAG_TotalEngineHours;

/* variable:     MC2M_TERA_DIAG_Stat_4x4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_DIAG_Stat_4x4;

/* variable:     MC2M_TERA_DIAG_INP52
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP52;

/* variable:     MC2M_TERA_DIAG_INP53
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP53;

/* variable:     MC2M_TERA_DIAG_INP54
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP54;

/* variable:     MC2M_TERA_DIAG_INP55
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_INP55;

/* variable:     MC2M_TERA_DIAG_OUT37
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT37;

/* variable:     MC2M_TERA_DIAG_OUT38
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT38;

/* variable:     MC2M_TERA_DIAG_OUT39
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_TERA_DIAG_OUT39;

/* variable:     MC2M_TERA_TCM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_TCM_SuspectParameterNumber;

/* variable:     MC2M_TERA_ECM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_ECM_SuspectParameterNumber;

/* variable:     MC2M_TERA_EBS_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_EBS_SuspectParameterNumber;

/* variable:     MC2M_TERA_TCM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_TCM_FailureModeIdentifier;

/* variable:     MC2M_TERA_ECM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ECM_FailureModeIdentifier;

/* variable:     MC2M_TERA_EBS_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_EBS_FailureModeIdentifier;

/* variable:     MC2M_TERA_TCM_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_TCM_OccurrenceCount;

/* variable:     MC2M_TERA_ECM_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_ECM_OccurrenceCount;

/* variable:     MC2M_TERA_EBS_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_EBS_OccurrenceCount;

/* variable:     MC2M_TERA_RadiatorTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_RadiatorTemp;

/* variable:     MC2M_TERA_HTempInputFiltered
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_TERA_HTempInputFiltered;

/* variable:     MC2M_TERA_TripCounter
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_TripCounter;

/* variable:     MC2M_TERA_TotalOdometer
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_TotalOdometer;

/* variable:     MC2M_TERA_DIAG_TotalEngineHours_Old
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_TERA_DIAG_TotalEngineHours_Old;

/* variable:     MC2M_TERA_DIAG_EngineCoolantLevel
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_TERA_DIAG_EngineCoolantLevel;

/* variable:     MC2M_TERA_DIAG_VvrPump
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_VvrPump;

/* variable:     MC2M_TERA_DIAG_VVRPumpTrigger
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_TERA_DIAG_VVRPumpTrigger;

/* variable:     MC2M_TERA_DIAG_CACTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_CACTemp;

/* variable:     MC2M_TERA_DIAG_RadiatorTemp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_TERA_DIAG_RadiatorTemp;

/* variable:     MC2M_GUI_DebugActive_Fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_GUI_DebugActive_Fb;

/* variable:     MC2M_GUI_Selenoid1_Draw_Fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_GUI_Selenoid1_Draw_Fb;

/* variable:     MC2M_GUI_Selenoid1_Return_Fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_GUI_Selenoid1_Return_Fb;

/* variable:     MC2M_GUI_Selenoid2_Draw_Fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_GUI_Selenoid2_Draw_Fb;

/* variable:     MC2M_GUI_Selenoid2_Return_Fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_GUI_Selenoid2_Return_Fb;

/* variable:     MC2M_GUI_EvacuationValveActive_Fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_GUI_EvacuationValveActive_Fb;

/* variable:     MC2M_GUI_ParkerPumpStatus
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_GUI_ParkerPumpStatus;

/* variable:     MC2M_GUI_FuelWaterDetect
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_GUI_FuelWaterDetect;

/* variable:     MC2M_GUI_FuelTankLevel1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_GUI_FuelTankLevel1;

/* variable:     MC2M_GUI_FuelTankLevel2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_GUI_FuelTankLevel2;

/* variable:     MC2M_GUI_FuelLevelSensorVal_L
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_GUI_FuelLevelSensorVal_L;

/* variable:     MC2M_GUI_FuelLevelSensorVal_R
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_GUI_FuelLevelSensorVal_R;

/* variable:     MC2M_GUI_EvacuationValveState_Fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR MC2M_GUI_EvacuationValveState_Fb;

/* variable:     MC2M_PARKERPUMP_Proprieatary_Byte
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Dont Care
 */
extern USINT FAR MC2M_PARKERPUMP_Proprieatary_Byte;

/* variable:     MC2M_PARKERPUMP_Proprieatary_Byte2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Dont Care
 */
extern USINT FAR MC2M_PARKERPUMP_Proprieatary_Byte2;

/* variable:     MC2M_PARKERPUMP_Speed_Command
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Maximum Speed is 250 
 */
extern USINT FAR MC2M_PARKERPUMP_Speed_Command;

/* variable:     MC2M_PARKERPUMP_Command
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 * type:         Enum_ParkerCommands
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern Enum_ParkerCommands FAR MC2M_PARKERPUMP_Command;

/* variable:     MC2M_PARKERPUMP_Spare_Bits
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Start Stop Commands,
 */
extern USINT FAR MC2M_PARKERPUMP_Spare_Bits;

/* variable:     MC2M_MOBILEYE2_RightSignal
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Turn right signal
 */
extern BOOL FAR MC2M_MOBILEYE2_RightSignal;

/* variable:     MC2M_MOBILEYE2_LeftSignal
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Turn left signal
 */
extern BOOL FAR MC2M_MOBILEYE2_LeftSignal;

/* variable:     MC2M_MOBILEYE2_HighBeam
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MOBILEYE2_HighBeam;

/* variable:     MC2M_MOBILEYE2_LowBeam
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MOBILEYE2_LowBeam;

/* variable:     MC2M_MOBILEYE2_BrakePedal
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MOBILEYE2_BrakePedal;

/* variable:     MC2M_MOBILEYE2_VehicleSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MOBILEYE2_VehicleSpeed;

/* variable:     MC2M_NMSGUI_service_brake_tank_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_780
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_service_brake_tank_1;

/* variable:     MC2M_NMSGUI_service_brake_tank_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_780
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_service_brake_tank_2;

/* variable:     MC2M_NMSGUI_park_brake_tank
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_780
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_park_brake_tank;

/* variable:     MC2M_NMSGUI_accessory_tank
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_780
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_accessory_tank;

/* variable:     MC2M_NMSGUI_fuel_level_left
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_781
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_NMSGUI_fuel_level_left;

/* variable:     MC2M_NMSGUI_fuel_level_right
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_781
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_NMSGUI_fuel_level_right;

/* variable:     MC2M_NMSGUI_fuel_temp_left
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_781
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_NMSGUI_fuel_temp_left;

/* variable:     MC2M_NMSGUI_fuel_temp_right
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_781
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_NMSGUI_fuel_temp_right;

/* variable:     MC2M_NMSGUI_hydraulic_tank_pressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_782
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_NMSGUI_hydraulic_tank_pressure;

/* variable:     MC2M_NMSGUI_hydraulic_tank_temp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_782
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_NMSGUI_hydraulic_tank_temp;

/* variable:     MC2M_NMSGUI_difflock_mid_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_NMSGUI_difflock_mid_fb;

/* variable:     MC2M_NMSGUI_difflock_rear_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_NMSGUI_difflock_rear_fb;

/* variable:     MC2M_NMSGUI_difflock_front_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_NMSGUI_difflock_front_fb;

/* variable:     MC2M_NMSGUI_dropbox_h_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_NMSGUI_dropbox_h_fb;

/* variable:     MC2M_NMSGUI_dropbox_n_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_NMSGUI_dropbox_n_fb;

/* variable:     MC2M_NMSGUI_dropbox_l_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_NMSGUI_dropbox_l_fb;

/* variable:     MC2M_NMSGUI_service_break_tank_1_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_784
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_service_break_tank_1_raw_fb;

/* variable:     MC2M_NMSGUI_service_break_tank_2_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_784
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_service_break_tank_2_raw_fb;

/* variable:     MC2M_NMSGUI_accessory_tank_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_784
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_accessory_tank_raw_fb;

/* variable:     MC2M_NMSGUI_park_break_tank_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_784
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_park_break_tank_raw_fb;

/* variable:     MC2M_NMSGUI_fuel_level_left_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_785
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_fuel_level_left_raw_fb;

/* variable:     MC2M_NMSGUI_fuel_level_right_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_785
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_fuel_level_right_raw_fb;

/* variable:     MC2M_NMSGUI_fuel_temp_left_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_785
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_fuel_temp_left_raw_fb;

/* variable:     MC2M_NMSGUI_fuel_temp_right_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_785
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_fuel_temp_right_raw_fb;

/* variable:     MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_786
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb;

/* variable:     MC2M_NMSGUI_hydraulic_tank_temp_raw_fb
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_786
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_NMSGUI_hydraulic_tank_temp_raw_fb;

/* variable:     vt3_can_period_CAN_101
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 */
extern UINT FAR vt3_can_period_CAN_101;

/* variable:     vt3_can_trigger_CAN_101
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_101
 */
extern BOOL FAR vt3_can_trigger_CAN_101;

/* variable:     vt3_can_period_CAN_106
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 */
extern UINT FAR vt3_can_period_CAN_106;

/* variable:     vt3_can_trigger_CAN_106
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_106
 */
extern BOOL FAR vt3_can_trigger_CAN_106;

/* variable:     vt3_can_period_CAN_107
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 */
extern UINT FAR vt3_can_period_CAN_107;

/* variable:     vt3_can_trigger_CAN_107
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_107
 */
extern BOOL FAR vt3_can_trigger_CAN_107;

/* variable:     vt3_can_period_CAN_151
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 */
extern UINT FAR vt3_can_period_CAN_151;

/* variable:     vt3_can_trigger_CAN_151
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_151
 */
extern BOOL FAR vt3_can_trigger_CAN_151;

/* variable:     vt3_can_period_CAN_152
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 */
extern UINT FAR vt3_can_period_CAN_152;

/* variable:     vt3_can_trigger_CAN_152
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_152
 */
extern BOOL FAR vt3_can_trigger_CAN_152;

/* variable:     vt3_can_period_CAN_153
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 */
extern UINT FAR vt3_can_period_CAN_153;

/* variable:     vt3_can_trigger_CAN_153
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_153
 */
extern BOOL FAR vt3_can_trigger_CAN_153;

/* variable:     vt3_can_period_CAN_154
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 */
extern UINT FAR vt3_can_period_CAN_154;

/* variable:     vt3_can_trigger_CAN_154
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_154
 */
extern BOOL FAR vt3_can_trigger_CAN_154;

/* variable:     vt3_can_period_CAN_155
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 */
extern UINT FAR vt3_can_period_CAN_155;

/* variable:     vt3_can_trigger_CAN_155
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_155
 */
extern BOOL FAR vt3_can_trigger_CAN_155;

/* variable:     vt3_can_period_CAN_156
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 */
extern UINT FAR vt3_can_period_CAN_156;

/* variable:     vt3_can_trigger_CAN_156
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_156
 */
extern BOOL FAR vt3_can_trigger_CAN_156;

/* variable:     vt3_can_period_CAN_207
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_207
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_207
 */
extern UINT FAR vt3_can_period_CAN_207;

/* variable:     vt3_can_trigger_CAN_207
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_207
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_207
 */
extern BOOL FAR vt3_can_trigger_CAN_207;

/* variable:     vt3_can_period_CCVS_Cruise_ControlVehicle_Speed_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 */
extern UINT FAR vt3_can_period_CCVS_Cruise_ControlVehicle_Speed_2;

/* variable:     vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed_2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CCVS_Cruise_ControlVehicle_Speed_2
 */
extern BOOL FAR vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed_2;

/* variable:     vt3_can_period_CAN_157
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 */
extern UINT FAR vt3_can_period_CAN_157;

/* variable:     vt3_can_trigger_CAN_157
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_157
 */
extern BOOL FAR vt3_can_trigger_CAN_157;

/* variable:     vt3_can_period_CAN_158
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 */
extern UINT FAR vt3_can_period_CAN_158;

/* variable:     vt3_can_trigger_CAN_158
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_158
 */
extern BOOL FAR vt3_can_trigger_CAN_158;

/* variable:     vt3_can_period_CAN_159
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_159
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_159
 */
extern UINT FAR vt3_can_period_CAN_159;

/* variable:     vt3_can_trigger_CAN_159
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_159
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_159
 */
extern BOOL FAR vt3_can_trigger_CAN_159;

/* variable:     vt3_can_period_CAN_160
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_160
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_160
 */
extern UINT FAR vt3_can_period_CAN_160;

/* variable:     vt3_can_trigger_CAN_160
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_160
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_160
 */
extern BOOL FAR vt3_can_trigger_CAN_160;

/* variable:     vt3_can_period_CAN_161
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_161
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_161
 */
extern UINT FAR vt3_can_period_CAN_161;

/* variable:     vt3_can_trigger_CAN_161
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_161
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_161
 */
extern BOOL FAR vt3_can_trigger_CAN_161;

/* variable:     vt3_can_period_CAN_162
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 */
extern UINT FAR vt3_can_period_CAN_162;

/* variable:     vt3_can_trigger_CAN_162
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_162
 */
extern BOOL FAR vt3_can_trigger_CAN_162;

/* variable:     vt3_can_period_CAN_163
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 */
extern UINT FAR vt3_can_period_CAN_163;

/* variable:     vt3_can_trigger_CAN_163
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_163
 */
extern BOOL FAR vt3_can_trigger_CAN_163;

/* variable:     vt3_can_period_CAN_164
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 */
extern UINT FAR vt3_can_period_CAN_164;

/* variable:     vt3_can_trigger_CAN_164
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_164
 */
extern BOOL FAR vt3_can_trigger_CAN_164;

/* variable:     vt3_can_period_CAN_165
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 */
extern UINT FAR vt3_can_period_CAN_165;

/* variable:     vt3_can_trigger_CAN_165
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_165
 */
extern BOOL FAR vt3_can_trigger_CAN_165;

/* variable:     vt3_can_period_CAN_166
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 */
extern UINT FAR vt3_can_period_CAN_166;

/* variable:     vt3_can_trigger_CAN_166
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_166
 */
extern BOOL FAR vt3_can_trigger_CAN_166;

/* variable:     vt3_can_period_CAN_168
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 */
extern UINT FAR vt3_can_period_CAN_168;

/* variable:     vt3_can_trigger_CAN_168
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_168
 */
extern BOOL FAR vt3_can_trigger_CAN_168;

/* variable:     vt3_can_period_CAN_169
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 */
extern UINT FAR vt3_can_period_CAN_169;

/* variable:     vt3_can_trigger_CAN_169
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_169
 */
extern BOOL FAR vt3_can_trigger_CAN_169;

/* variable:     vt3_can_period_CAN_230
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 */
extern UINT FAR vt3_can_period_CAN_230;

/* variable:     vt3_can_trigger_CAN_230
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_230
 */
extern BOOL FAR vt3_can_trigger_CAN_230;

/* variable:     vt3_can_period_PRK_Parker_Transfer_Pump
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 */
extern UINT FAR vt3_can_period_PRK_Parker_Transfer_Pump;

/* variable:     vt3_can_trigger_PRK_Parker_Transfer_Pump
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/PRK_Parker_Transfer_Pump
 */
extern BOOL FAR vt3_can_trigger_PRK_Parker_Transfer_Pump;

/* variable:     vt3_can_period_CAN_171_MobileyeA
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 */
extern UINT FAR vt3_can_period_CAN_171_MobileyeA;

/* variable:     vt3_can_trigger_CAN_171_MobileyeA
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_171_MobileyeA
 */
extern BOOL FAR vt3_can_trigger_CAN_171_MobileyeA;

/* variable:     vt3_can_period_CAN_780
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_780
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_780
 */
extern UINT FAR vt3_can_period_CAN_780;

/* variable:     vt3_can_trigger_CAN_780
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_780
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_780
 */
extern BOOL FAR vt3_can_trigger_CAN_780;

/* variable:     vt3_can_period_CAN_781
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_781
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_781
 */
extern UINT FAR vt3_can_period_CAN_781;

/* variable:     vt3_can_trigger_CAN_781
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_781
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_781
 */
extern BOOL FAR vt3_can_trigger_CAN_781;

/* variable:     vt3_can_period_CAN_782
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_782
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_782
 */
extern UINT FAR vt3_can_period_CAN_782;

/* variable:     vt3_can_trigger_CAN_782
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_782
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_782
 */
extern BOOL FAR vt3_can_trigger_CAN_782;

/* variable:     vt3_can_period_CAN_783
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 */
extern UINT FAR vt3_can_period_CAN_783;

/* variable:     vt3_can_trigger_CAN_783
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_783
 */
extern BOOL FAR vt3_can_trigger_CAN_783;

/* variable:     vt3_can_period_CAN_784
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_784
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_784
 */
extern UINT FAR vt3_can_period_CAN_784;

/* variable:     vt3_can_trigger_CAN_784
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_784
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_784
 */
extern BOOL FAR vt3_can_trigger_CAN_784;

/* variable:     vt3_can_period_CAN_785
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_785
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_785
 */
extern UINT FAR vt3_can_period_CAN_785;

/* variable:     vt3_can_trigger_CAN_785
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_785
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_785
 */
extern BOOL FAR vt3_can_trigger_CAN_785;

/* variable:     vt3_can_period_CAN_786
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_786
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_786
 */
extern UINT FAR vt3_can_period_CAN_786;

/* variable:     vt3_can_trigger_CAN_786
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_786
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open/CAN_786
 */
extern BOOL FAR vt3_can_trigger_CAN_786;

/* variable:     vt3_can_alarm_CAN_181
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_181
 */
extern BOOL FAR vt3_can_alarm_CAN_181;

/* variable:     MUX_KL15_Ignition
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_KL15_Ignition;

/* variable:     MUX_RearWiperPark_HiSide
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_RearWiperPark_HiSide;

/* variable:     MUX_FrontWiperPark_HiSide
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_FrontWiperPark_HiSide;

/* variable:     MUX_RearWiperPark_LowSide
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_RearWiperPark_LowSide;

/* variable:     MUX_FrontWiperPark_LowSide
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_FrontWiperPark_LowSide;

/* variable:     MUX_HazardButton
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_HazardButton;

/* variable:     MUX_OpenLoad01
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad01;

/* variable:     MUX_OpenLoad02
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad02;

/* variable:     MUX_OpenLoad03
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad03;

/* variable:     MUX_OpenLoad04
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad04;

/* variable:     MUX_OpenLoad05
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad05;

/* variable:     MUX_OpenLoad06
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad06;

/* variable:     MUX_OpenLoad07
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad07;

/* variable:     MUX_OpenLoad08
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad08;

/* variable:     MUX_OpenLoad09
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad09;

/* variable:     MUX_OpenLoad10
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad10;

/* variable:     MUX_OpenLoad11
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad11;

/* variable:     MUX_OpenLoad12
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad12;

/* variable:     MUX_OpenLoad13
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad13;

/* variable:     MUX_OpenLoad14
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad14;

/* variable:     MUX_OpenLoad15
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad15;

/* variable:     MUX_OpenLoad16
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad16;

/* variable:     MUX_OpenLoad17
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad17;

/* variable:     MUX_OpenLoad18
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad18;

/* variable:     MUX_OpenLoad19
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad19;

/* variable:     MUX_OpenLoad20
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad20;

/* variable:     MUX_OpenLoad21
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad21;

/* variable:     MUX_OpenLoad22
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad22;

/* variable:     MUX_OpenLoad23
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad23;

/* variable:     MUX_OpenLoad24
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad24;

/* variable:     MUX_OpenLoad25
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_OpenLoad25;

/* variable:     MUX_LastFaultOutputNo
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_LastFaultOutputNo;

/* variable:     MUX_EmergencyState
 * definition:   /project/MUX_NODE/CAN_Open/CAN_181
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_EmergencyState;

/* variable:     vt3_can_alarm_CAN_182
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_182
 */
extern BOOL FAR vt3_can_alarm_CAN_182;

/* variable:     MUX_DIGIN01
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_18
 */
extern SINT FAR MUX_DIGIN01;

/* variable:     MUX_DIGIN02
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_20
 */
extern SINT FAR MUX_DIGIN02;

/* variable:     MUX_DIGIN03
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_29
 */
extern SINT FAR MUX_DIGIN03;

/* variable:     MUX_DIGIN04
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_28
 */
extern SINT FAR MUX_DIGIN04;

/* variable:     MUX_DIGIN05
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_16
 */
extern SINT FAR MUX_DIGIN05;

/* variable:     MUX_DIGIN06
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_27
 */
extern SINT FAR MUX_DIGIN06;

/* variable:     MUX_DIGIN07
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_19
 */
extern SINT FAR MUX_DIGIN07;

/* variable:     MUX_DIGIN08
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_30
 */
extern SINT FAR MUX_DIGIN08;

/* variable:     MUX_DIGIN09
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_18
 */
extern SINT FAR MUX_DIGIN09;

/* variable:     MUX_DIGIN10
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_29
 */
extern SINT FAR MUX_DIGIN10;

/* variable:     MUX_DIGIN11
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_17
 */
extern SINT FAR MUX_DIGIN11;

/* variable:     MUX_DIGIN12
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_33
 */
extern SINT FAR MUX_DIGIN12;

/* variable:     MUX_DIGIN13
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_22
 */
extern SINT FAR MUX_DIGIN13;

/* variable:     MUX_DIGIN14
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_35
 */
extern SINT FAR MUX_DIGIN14;

/* variable:     MUX_DIGIN15
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J4_34
 */
extern SINT FAR MUX_DIGIN15;

/* variable:     MUX_DIGIN16
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_30
 */
extern SINT FAR MUX_DIGIN16;

/* variable:     MUX_DIGIN17
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_28
 */
extern SINT FAR MUX_DIGIN17;

/* variable:     MUX_DIGIN18
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_17
 */
extern SINT FAR MUX_DIGIN18;

/* variable:     MUX_DIGIN19
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_27
 */
extern SINT FAR MUX_DIGIN19;

/* variable:     MUX_DIGIN20
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_16
 */
extern SINT FAR MUX_DIGIN20;

/* variable:     MUX_DIGIN21
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_14
 */
extern SINT FAR MUX_DIGIN21;

/* variable:     MUX_DIGIN22
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_15
 */
extern SINT FAR MUX_DIGIN22;

/* variable:     MUX_DIGIN23
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_31
 */
extern SINT FAR MUX_DIGIN23;

/* variable:     MUX_DIGIN24
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_19
 */
extern SINT FAR MUX_DIGIN24;

/* variable:     MUX_DIGIN25
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J3_18
 */
extern SINT FAR MUX_DIGIN25;

/* variable:     MUX_DIGIN26
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J2_19
 */
extern SINT FAR MUX_DIGIN26;

/* variable:     MUX_DIGIN27
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J2_20
 */
extern SINT FAR MUX_DIGIN27;

/* variable:     MUX_DIGIN28
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J2_21
 */
extern SINT FAR MUX_DIGIN28;

/* variable:     MUX_DIGIN29
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J2_22
 */
extern SINT FAR MUX_DIGIN29;

/* variable:     MUX_DIGIN30
 * definition:   /project/MUX_NODE/CAN_Open/CAN_182
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      J2_23
 */
extern SINT FAR MUX_DIGIN30;

/* variable:     vt3_can_alarm_CAN_281
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_281
 */
extern BOOL FAR vt3_can_alarm_CAN_281;

/* variable:     MUX_ISenseOut01
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut01;

/* variable:     MUX_ISenseOut02
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut02;

/* variable:     MUX_ISenseOut03
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut03;

/* variable:     MUX_ISenseOut04
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut04;

/* variable:     MUX_ISenseOut05
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut05;

/* variable:     MUX_ISenseOut06
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut06;

/* variable:     MUX_ISenseOut07
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut07;

/* variable:     MUX_ISenseOut08
 * definition:   /project/MUX_NODE/CAN_Open/CAN_281
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut08;

/* variable:     vt3_can_alarm_CAN_282
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_282
 */
extern BOOL FAR vt3_can_alarm_CAN_282;

/* variable:     MUX_ISenseOut09
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut09;

/* variable:     MUX_ISenseOut10
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut10;

/* variable:     MUX_ISenseOut11
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut11;

/* variable:     MUX_ISenseOut12
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut12;

/* variable:     MUX_ISenseOut13
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut13;

/* variable:     MUX_ISenseOut14
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut14;

/* variable:     MUX_ISenseOut15
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut15;

/* variable:     MUX_ISenseOut16
 * definition:   /project/MUX_NODE/CAN_Open/CAN_282
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut16;

/* variable:     vt3_can_alarm_CAN_381
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_381
 */
extern BOOL FAR vt3_can_alarm_CAN_381;

/* variable:     MUX_ISenseOut17
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut17;

/* variable:     MUX_ISenseOut19
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut19;

/* variable:     MUX_ISenseOut21
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut21;

/* variable:     MUX_ISenseOut22
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut22;

/* variable:     MUX_ISenseOut23
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut23;

/* variable:     MUX_ISenseOut24
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut24;

/* variable:     MUX_ISenseOut25
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut25;

/* variable:     MUX_ISenseOut26
 * definition:   /project/MUX_NODE/CAN_Open/CAN_381
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut26;

/* variable:     vt3_can_alarm_CAN_382
 * definition:   /project/MUX_NODE/CAN_Open/CAN_382
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_382
 */
extern BOOL FAR vt3_can_alarm_CAN_382;

/* variable:     MUX_ISenseOut27
 * definition:   /project/MUX_NODE/CAN_Open/CAN_382
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MUX_ISenseOut27;

/* variable:     MUX_AnalogVoltBattery
 * definition:   /project/MUX_NODE/CAN_Open/CAN_382
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MUX_AnalogVoltBattery;

/* variable:     MUX_AnalogVoltBatteryDiv2
 * definition:   /project/MUX_NODE/CAN_Open/CAN_382
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MUX_AnalogVoltBatteryDiv2;

/* variable:     vt3_can_alarm_CAN_81
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MUX_NODE/CAN_Open/CAN_81
 */
extern BOOL FAR vt3_can_alarm_CAN_81;

/* variable:     MUX_AlarmStatusOutput01
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput01;

/* variable:     MUX_AlarmStatusOutput02
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput02;

/* variable:     MUX_AlarmStatusOutput03
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput03;

/* variable:     MUX_AlarmStatusOutput04
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput04;

/* variable:     MUX_AlarmStatusOutput05
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput05;

/* variable:     MUX_AlarmStatusOutput06
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput06;

/* variable:     MUX_AlarmStatusOutput07
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput07;

/* variable:     MUX_AlarmStatusOutput08
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput08;

/* variable:     MUX_AlarmStatusOutput09
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput09;

/* variable:     MUX_AlarmStatusOutput10
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput10;

/* variable:     MUX_AlarmStatusOutput11
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput11;

/* variable:     MUX_AlarmStatusOutput12
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput12;

/* variable:     MUX_AlarmStatusOutput13
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput13;

/* variable:     MUX_AlarmStatusOutput14
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput14;

/* variable:     MUX_AlarmStatusOutput15
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput15;

/* variable:     MUX_AlarmStatusOutput16
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput16;

/* variable:     MUX_AlarmStatusOutput17
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput17;

/* variable:     MUX_AlarmStatusOutput19
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput19;

/* variable:     MUX_AlarmStatusOutput21
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput21;

/* variable:     MUX_AlarmStatusOutput22
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput22;

/* variable:     MUX_AlarmStatusOutput23
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput23;

/* variable:     MUX_AlarmStatusOutput24
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput24;

/* variable:     MUX_AlarmStatusOutput25
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput25;

/* variable:     MUX_AlarmStatusOutput26
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput26;

/* variable:     MUX_AlarmStatusOutput27
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MUX_AlarmStatusOutput27;

/* variable:     MUX_AlarmStatusOutput18
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmStatusOutput18;

/* variable:     MUX_AlarmStatusOutput20
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmStatusOutput20;

/* variable:     MUX_Alarm_CAN_LowSpeed
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_Alarm_CAN_LowSpeed;

/* variable:     MUX_Alarm_EEPROM
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_Alarm_EEPROM;

/* variable:     MUX_Alarm_FrontWiper
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_Alarm_FrontWiper;

/* variable:     MUX_Alarm_ReasWiper
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_Alarm_ReasWiper;

/* variable:     MUX_AlarmSectionA
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmSectionA;

/* variable:     MUX_AlarmSectionB
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmSectionB;

/* variable:     MUX_AlarmSectionC
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmSectionC;

/* variable:     MUX_AlarmSectionD
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmSectionD;

/* variable:     MUX_AlarmSectionE
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmSectionE;

/* variable:     MUX_AlarmSectionF
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmSectionF;

/* variable:     MUX_AlarmSectionG
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmSectionG;

/* variable:     MUX_AlarmSectionH
 * definition:   /project/MUX_NODE/CAN_Open/CAN_81
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MUX_AlarmSectionH;

/* variable:     vt3_can_alarm_CAN_187
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_MODE/CAN_Open/CAN_187
 */
extern BOOL FAR vt3_can_alarm_CAN_187;

/* variable:     IOMODE_DIGIN00_CentralLockSystemDisable
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_6 - DIGIN_CentralLockSystemDisable
 */
extern BOOL FAR IOMODE_DIGIN00_CentralLockSystemDisable;

/* variable:     IOMODE_DIGIN01
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_15 - O/L Engine Protection Override
 */
extern BOOL FAR IOMODE_DIGIN01;

/* variable:     IOMODE_DIGIN02
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_7
 */
extern BOOL FAR IOMODE_DIGIN02;

/* variable:     IOMODE_DIGIN03
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_16
 */
extern BOOL FAR IOMODE_DIGIN03;

/* variable:     IOMODE_DIGIN04
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_8
 */
extern BOOL FAR IOMODE_DIGIN04;

/* variable:     IOMODE_DIGIN05
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_17 - O/L Fren Hava Tankı
 */
extern BOOL FAR IOMODE_DIGIN05;

/* variable:     IOMODE_DIGIN06
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_9
 */
extern BOOL FAR IOMODE_DIGIN06;

/* variable:     IOMODE_DIGIN07_EngineProtection
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_18 - I/H Engine Protection Override
 */
extern BOOL FAR IOMODE_DIGIN07_EngineProtection;

/* variable:     IOMODE_DIGIN08_TankSelect_Right
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_14 - Right Fuel Tank Selection
 */
extern BOOL FAR IOMODE_DIGIN08_TankSelect_Right;

/* variable:     IOMODE_DIGIN09_FireFighter
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_5 - I/L Yangın Söndürücü
 */
extern BOOL FAR IOMODE_DIGIN09_FireFighter;

/* variable:     IOMODE_DIGIN10_TankSelect_Left
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_13 - Left Fuel Tank Selection
 */
extern BOOL FAR IOMODE_DIGIN10_TankSelect_Left;

/* variable:     IOMODE_DIGIN11
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_4 - O/L Sübap Freni Aktive (IOM ta Tanımlanacak 1)
 */
extern BOOL FAR IOMODE_DIGIN11;

/* variable:     IOMODE_DIGIN12_DropBoxHigh
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_12 - I/H TAKVİYE VİTESİ H_RS Dropbox High Mode
 */
extern BOOL FAR IOMODE_DIGIN12_DropBoxHigh;

/* variable:     IOMODE_DIGIN13
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_2
 */
extern BOOL FAR IOMODE_DIGIN13;

/* variable:     IOMODE_DIGIN14_DropBoxLow
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_11 - I/H TAKVİYE VİTESİ L_RS Dropbox Low Mode
 */
extern BOOL FAR IOMODE_DIGIN14_DropBoxLow;

/* variable:     IOMODE_DIGIN15_Park_Sensor_En
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_1
 */
extern BOOL FAR IOMODE_DIGIN15_Park_Sensor_En;

/* variable:     IOMODE_DIGIN16_FeedBack_FrontAxle
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_20 - I/L FEEDBACK FRONT AXLE
 */
extern BOOL FAR IOMODE_DIGIN16_FeedBack_FrontAxle;

/* variable:     IOMODE_DIGIN17_InteriorVentilation
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_10 - I/H İÇ FAN 1
 */
extern BOOL FAR IOMODE_DIGIN17_InteriorVentilation;

/* variable:     IOMODE_DIGIN18_MirrorWindowResistance
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_19 - I/H AYNA&CAM REZİSTANSI_RS Mirror_Window Resistances
 */
extern BOOL FAR IOMODE_DIGIN18_MirrorWindowResistance;

/* variable:     IOMODE_DIGIN19
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_9 
 */
extern BOOL FAR IOMODE_DIGIN19;

/* variable:     IOMODE_DIGIN20
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_14
 */
extern BOOL FAR IOMODE_DIGIN20;

/* variable:     IOMODE_DIGIN21
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_4
 */
extern BOOL FAR IOMODE_DIGIN21;

/* variable:     IOMODE_DIGIN22_DopBoxNeutral
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_13 - I/H TAKVİYE VİTESİ N_RS Dropbox Neutral Mode 
 */
extern BOOL FAR IOMODE_DIGIN22_DopBoxNeutral;

/* variable:     IOMODE_DIGIN23_SumpTempAlarm
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_3
 */
extern BOOL FAR IOMODE_DIGIN23_SumpTempAlarm;

/* variable:     IOMODE_DIGIN24
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_7
 */
extern BOOL FAR IOMODE_DIGIN24;

/* variable:     IOMODE_DIGIN25_ABSoffRoad
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_17 - I/H ABS Off-Road Switch
 */
extern BOOL FAR IOMODE_DIGIN25_ABSoffRoad;

/* variable:     IOMODE_DIGIN26_RearFog
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_8 - I/H ARKA SİS Rear Fog
 */
extern BOOL FAR IOMODE_DIGIN26_RearFog;

/* variable:     IOMODE_DIGIN27_DiffLock
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_18 - I/H  DIFF LOCK  SWITCH (ORTA) Differential Lock
 */
extern BOOL FAR IOMODE_DIGIN27_DiffLock;

/* variable:     IOMODE_DIGIN28
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_5 
 */
extern BOOL FAR IOMODE_DIGIN28;

/* variable:     IOMODE_DIGIN29
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_15  
 */
extern BOOL FAR IOMODE_DIGIN29;

/* variable:     IOMODE_DIGIN30_FrontFog
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_6 - I/H Ön sis lambalası switch 
 */
extern BOOL FAR IOMODE_DIGIN30_FrontFog;

/* variable:     IOMODE_DIGIN31
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_16 
 */
extern BOOL FAR IOMODE_DIGIN31;

/* variable:     IOMODE_LastFaultOutputNo
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR IOMODE_LastFaultOutputNo;

/* variable:     IOMODE_AlarmCode
 * definition:   /project/IO_MODE/CAN_Open/CAN_187
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR IOMODE_AlarmCode;

/* variable:     vt3_can_alarm_CAN_87
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_MODE/CAN_Open/CAN_87
 */
extern BOOL FAR vt3_can_alarm_CAN_87;

/* variable:     IOMODE_AlarmStatusDOUT00
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT00;

/* variable:     IOMODE_AlarmStatusDOUT01
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT01;

/* variable:     IOMODE_AlarmStatusDOUT02
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT02;

/* variable:     IOMODE_AlarmStatusDOUT03
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT03;

/* variable:     IOMODE_AlarmStatusDOUT04
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT04;

/* variable:     IOMODE_AlarmStatusDOUT05
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT05;

/* variable:     IOMODE_AlarmStatusDOUT06
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT06;

/* variable:     IOMODE_AlarmStatusDOUT07
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT07;

/* variable:     IOMODE_AlarmStatusDOUT08
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT08;

/* variable:     IOMODE_AlarmStatusDOUT09
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT09;

/* variable:     IOMODE_AlarmStatusDOUT10
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT10;

/* variable:     IOMODE_AlarmStatusDOUT11
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT11;

/* variable:     IOMODE_AlarmStatusDOUT12
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT12;

/* variable:     IOMODE_AlarmStatusDOUT13
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT13;

/* variable:     IOMODE_AlarmStatusDOUT14
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT14;

/* variable:     IOMODE_AlarmStatusDOUT15
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT15;

/* variable:     IOMODE_AlarmStatusDOUT16
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT16;

/* variable:     IOMODE_AlarmStatusDOUT17
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT17;

/* variable:     IOMODE_AlarmStatusDOUT18
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT18;

/* variable:     IOMODE_AlarmStatusDOUT19
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT19;

/* variable:     IOMODE_AlarmStatusDOUT20
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT20;

/* variable:     IOMODE_AlarmStatusDOUT21
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT21;

/* variable:     IOMODE_AlarmStatusDOUT22
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT22;

/* variable:     IOMODE_AlarmStatusDOUT23
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT23;

/* variable:     IOMODE_AlarmStatusDOUT24
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT24;

/* variable:     IOMODE_AlarmStatusDOUT25
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT25;

/* variable:     IOMODE_AlarmStatusDOUT26
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT26;

/* variable:     IOMODE_AlarmStatusDOUT27
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT27;

/* variable:     IOMODE_AlarmStatusDOUT28
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT28;

/* variable:     IOMODE_AlarmStatusDOUT29
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT29;

/* variable:     IOMODE_AlarmStatusDOUT30
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT30;

/* variable:     IOMODE_AlarmStatusDOUT31
 * definition:   /project/IO_MODE/CAN_Open/CAN_87
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_AlarmStatusDOUT31;

/* variable:     vt3_can_alarm_CAN_186
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_MODE_2/CAN_Open/CAN_186
 */
extern BOOL FAR vt3_can_alarm_CAN_186;

/* variable:     IOMODE_2_DIGIN00_Winch_RC_Up
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_6 - Vinç Kontrol Switch (MOM)-Uzaktan Kmnda UP
 */
extern BOOL FAR IOMODE_2_DIGIN00_Winch_RC_Up;

/* variable:     IOMODE_2_DIGIN01
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_15 - (Direksiyon hidroliği için  reserve)
 */
extern BOOL FAR IOMODE_2_DIGIN01;

/* variable:     IOMODE_2_DIGIN02_Winch_RC_Down
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_7 - Vinç Kontrol Switch (MOM)-Uzaktan Kmnda DOWN
 */
extern BOOL FAR IOMODE_2_DIGIN02_Winch_RC_Down;

/* variable:     IOMODE_2_DIGIN03_FrontAxleDiffLock
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_16 - FrontAxleDiffLock
 */
extern BOOL FAR IOMODE_2_DIGIN03_FrontAxleDiffLock;

/* variable:     IOMODE_2_DIGIN04
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_8 -DOUT  Depo I ve II  indikatör 
 */
extern BOOL FAR IOMODE_2_DIGIN04;

/* variable:     IOMODE_2_DIGIN05
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_17 - 
 */
extern BOOL FAR IOMODE_2_DIGIN05;

/* variable:     IOMODE_2_DIGIN06_EndOfRope
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_9 - Halat sonu switch'i 
 */
extern BOOL FAR IOMODE_2_DIGIN06_EndOfRope;

/* variable:     IOMODE_2_DIGIN07
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_18 - 
 */
extern BOOL FAR IOMODE_2_DIGIN07;

/* variable:     IOMODE_2_DIGIN08_Winch_RS_Clutch
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_14 - Vinç Clutch Switch (MOM)-RS
 */
extern BOOL FAR IOMODE_2_DIGIN08_Winch_RS_Clutch;

/* variable:     IOMODE_2_DIGIN09_Winch_RS_Down
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_5 - Vinç Kontrol Switch (MOM)-RS DOWN
 */
extern BOOL FAR IOMODE_2_DIGIN09_Winch_RS_Down;

/* variable:     IOMODE_2_DIGIN10_Winch_RC_Clutch
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_13 - Vinç Clutch Switch (MOM)-Uzaktan Kmnda
 */
extern BOOL FAR IOMODE_2_DIGIN10_Winch_RC_Clutch;

/* variable:     IOMODE_2_DIGIN11_Winch_RS_Up
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_4 - Vinç Kontrol Switch (MOM)-RS   UP
 */
extern BOOL FAR IOMODE_2_DIGIN11_Winch_RS_Up;

/* variable:     IOMODE_2_DIGOUT12
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_12 - Fren Hava Tankları Uyarı Lambası (DOUT_BrakeAirTanksWarningLamps)
 */
extern BOOL FAR IOMODE_2_DIGOUT12;

/* variable:     IOMODE_2_DIGOUT13_RearAxleDiffLock
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_2 - RearAxleDiffLock
 */
extern BOOL FAR IOMODE_2_DIGOUT13_RearAxleDiffLock;

/* variable:     IOMODE_2_DIGOUT14
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_11
 */
extern BOOL FAR IOMODE_2_DIGOUT14;

/* variable:     IOMODE_2_DIGIN15_FeedBack_FrontAxle
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_1 - DIGIN_Feedback_FrontAxle
 */
extern BOOL FAR IOMODE_2_DIGIN15_FeedBack_FrontAxle;

/* variable:     IOMODE_2_DIGIN16
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_20 -  DOUT tank 1 lambası aktif 
 */
extern BOOL FAR IOMODE_2_DIGIN16;

/* variable:     IOMODE_2_DIGIN17
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_10 - DOUT tank 2 lambası aktif
 */
extern BOOL FAR IOMODE_2_DIGIN17;

/* variable:     IOMODE_2_DIGIN18
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_19 - DOUT anahtar ledi on off 
 */
extern BOOL FAR IOMODE_2_DIGIN18;

/* variable:     IOMODE_2_DIGIN19_InteriorLamps
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_9  - InteriorLamps
 */
extern BOOL FAR IOMODE_2_DIGIN19_InteriorLamps;

/* variable:     IOMODE_2_DIGIN20_centralLockSystem
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_14  - Merkezi kilit sistemi
 */
extern BOOL FAR IOMODE_2_DIGIN20_centralLockSystem;

/* variable:     IOMODE_2_DIGIN21
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_4 - 
 */
extern BOOL FAR IOMODE_2_DIGIN21;

/* variable:     IOMODE_2_DIGIN22
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_13 -
 */
extern BOOL FAR IOMODE_2_DIGIN22;

/* variable:     IOMODE_2_DIGIN23_DIGIN_FireFighter
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_3 YSS giriş 
 */
extern BOOL FAR IOMODE_2_DIGIN23_DIGIN_FireFighter;

/* variable:     IOMODE_2_DIGIN24_Back_HydDoorOpened
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_7 - Arka hidrolik kapı açık 
 */
extern BOOL FAR IOMODE_2_DIGIN24_Back_HydDoorOpened;

/* variable:     IOMODE_2_DIGIN25_InteriorVentilation_1
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_17 - iç fan 1
 */
extern BOOL FAR IOMODE_2_DIGIN25_InteriorVentilation_1;

/* variable:     IOMODE_2_DIGIN26_InteriorVentilation_2
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_8 -  iç fan 2
 */
extern BOOL FAR IOMODE_2_DIGIN26_InteriorVentilation_2;

/* variable:     IOMODE_2_DIGIN27_FootBrakeMicro
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_18 - Ayak Fren Müşürü
 */
extern BOOL FAR IOMODE_2_DIGIN27_FootBrakeMicro;

/* variable:     IOMODE_2_DIGIN28
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_5 
 */
extern BOOL FAR IOMODE_2_DIGIN28;

/* variable:     IOMODE_2_DIGIN29
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_15 -
 */
extern BOOL FAR IOMODE_2_DIGIN29;

/* variable:     IOMODE_2_DIGIN30
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_06 
 */
extern BOOL FAR IOMODE_2_DIGIN30;

/* variable:     IOMODE_2_DIGIN31
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_16 -
 */
extern BOOL FAR IOMODE_2_DIGIN31;

/* variable:     IOMODE_2_LastFaultOutputNo
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR IOMODE_2_LastFaultOutputNo;

/* variable:     IOMODE_2_AlarmCode
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_186
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR IOMODE_2_AlarmCode;

/* variable:     vt3_can_alarm_CAN_86
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/IO_MODE_2/CAN_Open/CAN_86
 */
extern BOOL FAR vt3_can_alarm_CAN_86;

/* variable:     IOMODE_2_AlarmStatusDOUT00
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT00;

/* variable:     IOMODE_2_AlarmStatusDOUT01
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT01;

/* variable:     IOMODE_2_AlarmStatusDOUT02
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT02;

/* variable:     IOMODE_2_AlarmStatusDOUT03
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT03;

/* variable:     IOMODE_2_AlarmStatusDOUT04
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT04;

/* variable:     IOMODE_2_AlarmStatusDOUT05
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT05;

/* variable:     IOMODE_2_AlarmStatusDOUT06
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT06;

/* variable:     IOMODE_2_AlarmStatusDOUT07
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT07;

/* variable:     IOMODE_2_AlarmStatusDOUT08
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT08;

/* variable:     IOMODE_2_AlarmStatusDOUT09
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT09;

/* variable:     IOMODE_2_AlarmStatusDOUT10
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT10;

/* variable:     IOMODE_2_AlarmStatusDOUT11
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT11;

/* variable:     IOMODE_2_AlarmStatusDOUT12
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT12;

/* variable:     IOMODE_2_AlarmStatusDOUT13
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT13;

/* variable:     IOMODE_2_AlarmStatusDOUT14
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT14;

/* variable:     IOMODE_2_AlarmStatusDOUT15
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT15;

/* variable:     IOMODE_2_AlarmStatusDOUT16
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT16;

/* variable:     IOMODE_2_AlarmStatusDOUT17
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT17;

/* variable:     IOMODE_2_AlarmStatusDOUT18
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT18;

/* variable:     IOMODE_2_AlarmStatusDOUT19
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT19;

/* variable:     IOMODE_2_AlarmStatusDOUT20
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT20;

/* variable:     IOMODE_2_AlarmStatusDOUT21
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT21;

/* variable:     IOMODE_2_AlarmStatusDOUT22
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT22;

/* variable:     IOMODE_2_AlarmStatusDOUT23
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT23;

/* variable:     IOMODE_2_AlarmStatusDOUT24
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT24;

/* variable:     IOMODE_2_AlarmStatusDOUT25
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT25;

/* variable:     IOMODE_2_AlarmStatusDOUT26
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT26;

/* variable:     IOMODE_2_AlarmStatusDOUT27
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT27;

/* variable:     IOMODE_2_AlarmStatusDOUT28
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT28;

/* variable:     IOMODE_2_AlarmStatusDOUT29
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT29;

/* variable:     IOMODE_2_AlarmStatusDOUT30
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT30;

/* variable:     IOMODE_2_AlarmStatusDOUT31
 * definition:   /project/IO_MODE_2/CAN_Open/CAN_86
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR IOMODE_2_AlarmStatusDOUT31;

/* variable:     vt3_can_alarm_CAN_Light_4E
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 */
extern BOOL FAR vt3_can_alarm_CAN_Light_4E;

/* variable:     OMNIA_LEFT_Light_P1_Park
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_LEFT_Light_P1_Park;

/* variable:     OMNIA_LEFT_LowBeamStatus
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_LEFT_LowBeamStatus;

/* variable:     OMNIA_LEFT_LowBeam2Status
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_LEFT_LowBeam2Status;

/* variable:     OMNIA_LEFT_TurnLeftSignal
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_LEFT_TurnLeftSignal;

/* variable:     OMNIA_LEFT_TurnRightSignal
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_LEFT_TurnRightSignal;

/* variable:     OMNIA_LEFT_HighBeamStatus
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_LEFT_HighBeamStatus;

/* variable:     OMNIA_LEFT_HighBeamFlashStatus
 * definition:   /project/OMNIA_LEFT/CAN_Open/CAN_Light_4E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_LEFT_HighBeamFlashStatus;

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

/* variable:     vt3_can_alarm_CAN_Wiper_4F
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 */
extern BOOL FAR vt3_can_alarm_CAN_Wiper_4F;

/* variable:     OMNIA_RIGHT_WiperLOW
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_RIGHT_WiperLOW;

/* variable:     OMNIA_RIGHT_WiperHIGH
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_RIGHT_WiperHIGH;

/* variable:     OMNIA_RIGHT_WiperSelection
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_RIGHT_WiperSelection;

/* variable:     OMNIA_RIGHT_Washer
 * definition:   /project/OMNIA_RIGHT/CAN_Open/CAN_Wiper_4F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR OMNIA_RIGHT_Washer;

/* variable:     vt3_can_alarm_CAN_18D
 * definition:   /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 */
extern BOOL FAR vt3_can_alarm_CAN_18D;

/* variable:     AMUCBO_AngleX
 * definition:   /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR AMUCBO_AngleX;

/* variable:     AMUCBO_AngleY
 * definition:   /project/AMU_CBO/CAN_ASA_CBO/CAN_18D
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR AMUCBO_AngleY;

/* variable:     vt3_can_alarm_CAN_18E
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18E
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ASELSAN_SURVEIL/CAN_interface/CAN_18E
 */
extern BOOL FAR vt3_can_alarm_CAN_18E;

/* variable:     ASLSN_SURVEILReservedINT01
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18E
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR ASLSN_SURVEILReservedINT01;

/* variable:     ASLSN_SURVEILReservedINT02
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18E
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR ASLSN_SURVEILReservedINT02;

/* variable:     ASLSN_SURVEILReservedINT03
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18E
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR ASLSN_SURVEILReservedINT03;

/* variable:     ASLSN_SURVEILReservedINT04
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18E
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR ASLSN_SURVEILReservedINT04;

/* variable:     vt3_can_alarm_CAN_18F
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 */
extern BOOL FAR vt3_can_alarm_CAN_18F;

/* variable:     ASEL_SURVEILReservedSINT01
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR ASEL_SURVEILReservedSINT01;

/* variable:     ASEL_SURVEILReservedSINT02
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR ASEL_SURVEILReservedSINT02;

/* variable:     ASEL_SURVEILReservedSINT03
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR ASEL_SURVEILReservedSINT03;

/* variable:     ASEL_SURVEILReservedSINT04
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR ASEL_SURVEILReservedSINT04;

/* variable:     ASEL_SURVEILReservedSINT05
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR ASEL_SURVEILReservedSINT05;

/* variable:     ASEL_SURVEILReservedSINT06
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR ASEL_SURVEILReservedSINT06;

/* variable:     ASEL_SURVEILReservedSINT07
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR ASEL_SURVEILReservedSINT07;

/* variable:     ASEL_SURVEILReservedSINT08
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_18F
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR ASEL_SURVEILReservedSINT08;

/* variable:     vt3_can_alarm_CAN_190
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_190
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ASELSAN_SURVEIL/CAN_interface/CAN_190
 */
extern BOOL FAR vt3_can_alarm_CAN_190;

/* variable:     ASEL_SURVEILReservedDINT01
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_190
 * type:         DINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern DINT FAR ASEL_SURVEILReservedDINT01;

/* variable:     ASEL_SURVEILReservedDINT02
 * definition:   /project/ASELSAN_SURVEIL/CAN_interface/CAN_190
 * type:         DINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern DINT FAR ASEL_SURVEILReservedDINT02;

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

/* variable:     vt3_can_alarm_CAN_200
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/Debug_GUI/CAN_interface/CAN_200
 */
extern BOOL FAR vt3_can_alarm_CAN_200;

/* variable:     GUI_MC2M_DebugActive
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_DebugActive;

/* variable:     GUI_MC2M_Selenoid1_Draw
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_Selenoid1_Draw;

/* variable:     GUI_MC2M_Selenoid1_Return
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_Selenoid1_Return;

/* variable:     GUI_MC2M_Selenoid2_Draw
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_Selenoid2_Draw;

/* variable:     GUI_MC2M_Selenoid2_Return
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_Selenoid2_Return;

/* variable:     GUI_MC2M_ParkerPumpActive
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_ParkerPumpActive;

/* variable:     GUI_MC2M_EvacuationValveActive
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_EvacuationValveActive;

/* variable:     GUI_MC2M_ParkerPumpRPM_Manuel
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_ParkerPumpRPM_Manuel;

/* variable:     GUI_MC2M_ParkerPumpRPM_Sel
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR GUI_MC2M_ParkerPumpRPM_Sel;

/* variable:     GUI_MC2M_ParkerPumpRPM_Min
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR GUI_MC2M_ParkerPumpRPM_Min;

/* variable:     GUI_MC2M_ParkerPumpRPM_Max
 * definition:   /project/Debug_GUI/CAN_interface/CAN_200
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR GUI_MC2M_ParkerPumpRPM_Max;

/* variable:     vt3_can_alarm_CAN_790
 * definition:   /project/NMS_GUI/CAN_interface/CAN_790
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_790
 */
extern BOOL FAR vt3_can_alarm_CAN_790;

/* variable:     NMSGUI_MC2M_service_brake_tank_1
 * definition:   /project/NMS_GUI/CAN_interface/CAN_790
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR NMSGUI_MC2M_service_brake_tank_1;

/* variable:     NMSGUI_MC2M_service_brake_tank_2
 * definition:   /project/NMS_GUI/CAN_interface/CAN_790
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR NMSGUI_MC2M_service_brake_tank_2;

/* variable:     NMSGUI_MC2M_park_brake_tank
 * definition:   /project/NMS_GUI/CAN_interface/CAN_790
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR NMSGUI_MC2M_park_brake_tank;

/* variable:     NMSGUI_MC2M_accessory_tank
 * definition:   /project/NMS_GUI/CAN_interface/CAN_790
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR NMSGUI_MC2M_accessory_tank;

/* variable:     vt3_can_alarm_CAN_791
 * definition:   /project/NMS_GUI/CAN_interface/CAN_791
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_791
 */
extern BOOL FAR vt3_can_alarm_CAN_791;

/* variable:     NMSGUI_MC2M_fuel_level_left
 * definition:   /project/NMS_GUI/CAN_interface/CAN_791
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR NMSGUI_MC2M_fuel_level_left;

/* variable:     NMSGUI_MC2M_fuel_level_right
 * definition:   /project/NMS_GUI/CAN_interface/CAN_791
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR NMSGUI_MC2M_fuel_level_right;

/* variable:     NMSGUI_MC2M_fuel_temp_left
 * definition:   /project/NMS_GUI/CAN_interface/CAN_791
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR NMSGUI_MC2M_fuel_temp_left;

/* variable:     NMSGUI_MC2M_fuel_temp_right
 * definition:   /project/NMS_GUI/CAN_interface/CAN_791
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR NMSGUI_MC2M_fuel_temp_right;

/* variable:     vt3_can_alarm_CAN_792
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_792
 */
extern BOOL FAR vt3_can_alarm_CAN_792;

/* variable:     NMSGUI_MC2M_hydraulic_tank_pressure
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR NMSGUI_MC2M_hydraulic_tank_pressure;

/* variable:     NMSGUI_MC2M_hydraulic_tank_temp
 * definition:   /project/NMS_GUI/CAN_interface/CAN_792
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR NMSGUI_MC2M_hydraulic_tank_temp;

/* variable:     vt3_can_alarm_CAN_793
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_793
 */
extern BOOL FAR vt3_can_alarm_CAN_793;

/* variable:     NMSGUI_MC2M_service_brake_tank_1_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_service_brake_tank_1_touch;

/* variable:     NMSGUI_MC2M_service_brake_tank_2_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_service_brake_tank_2_touch;

/* variable:     NMSGUI_MC2M_park_brake_tank_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_park_brake_tank_touch;

/* variable:     NMSGUI_MC2M_accessory_tank_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_accessory_tank_touch;

/* variable:     NMSGUI_MC2M_hydraulic_tank_pressure_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_hydraulic_tank_pressure_touch;

/* variable:     NMSGUI_MC2M_hydraulic_tank_temp_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_hydraulic_tank_temp_touch;

/* variable:     NMSGUI_MC2M_fuel_level_left_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_fuel_level_left_touch;

/* variable:     NMSGUI_MC2M_fuel_level_right_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_fuel_level_right_touch;

/* variable:     NMSGUI_MC2M_fuel_temp_left_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_fuel_temp_left_touch;

/* variable:     NMSGUI_MC2M_fuel_temp_right_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_793
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_fuel_temp_right_touch;

/* variable:     vt3_can_alarm_CAN_794
 * definition:   /project/NMS_GUI/CAN_interface/CAN_794
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_794
 */
extern BOOL FAR vt3_can_alarm_CAN_794;

/* variable:     NMSGUI_MC2M_dropbox_high_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_794
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_dropbox_high_touch;

/* variable:     NMSGUI_MC2M_dropbox_neutral_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_794
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_dropbox_neutral_touch;

/* variable:     NMSGUI_MC2M_dropbox_low_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_794
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_dropbox_low_touch;

/* variable:     NMSGUI_MC2M_dropbox_admin_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_794
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_dropbox_admin_touch;

/* variable:     vt3_can_alarm_CAN_795
 * definition:   /project/NMS_GUI/CAN_interface/CAN_795
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_GUI/CAN_interface/CAN_795
 */
extern BOOL FAR vt3_can_alarm_CAN_795;

/* variable:     NMSGUI_MC2M_difflock_mid_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_795
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_difflock_mid_touch;

/* variable:     NMSGUI_MC2M_difflock_rear_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_795
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_difflock_rear_touch;

/* variable:     NMSGUI_MC2M_difflock_front_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_795
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_difflock_front_touch;

/* variable:     NMSGUI_MC2M_difflock_admin_touch
 * definition:   /project/NMS_GUI/CAN_interface/CAN_795
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR NMSGUI_MC2M_difflock_admin_touch;

/* variable:     vt3_can_alarm_CAN_799
 * definition:   /project/NMS_TEST/CAN_interface/CAN_799
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/NMS_TEST/CAN_interface/CAN_799
 */
extern BOOL FAR vt3_can_alarm_CAN_799;

/* variable:     TEST_MC2M_RemoteGasEnable
 * definition:   /project/NMS_TEST/CAN_interface/CAN_799
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR TEST_MC2M_RemoteGasEnable;

/* variable:     TEST_MC2M_RemoteGasRatio
 * definition:   /project/NMS_TEST/CAN_interface/CAN_799
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR TEST_MC2M_RemoteGasRatio;

/* variable:     vt3_can_alarm_busoff_CAN_J1939
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/MC2M/CPU0/CAN_Bus/CAN_J1939
 */
extern BOOL FAR vt3_can_alarm_busoff_CAN_J1939;

/* variable:     EAC1_Location
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Location J1939 SPN 927
 */
extern USINT FAR EAC1_Location;

/* variable:     EAC1_DifferentialLockStateFrontAxle1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Differential Lock State - Front Axle 1 J1939 SPN 567
 */
extern USINT FAR EAC1_DifferentialLockStateFrontAxle1;

/* variable:     EAC1_DifferentialLockStateFrontAxle2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Differential Lock State - Front Axle 2 J1939 SPN 568
 */
extern USINT FAR EAC1_DifferentialLockStateFrontAxle2;

/* variable:     EAC1_DifferentialLockStateRearAxle1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Differential Lock State - Rear Axle 1 J1939 SPN 569
 */
extern USINT FAR EAC1_DifferentialLockStateRearAxle1;

/* variable:     EAC1_DifferentialLockStateRearAxle2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Differential Lock State - Rear Axle 2 J1939 SPN 570
 */
extern USINT FAR EAC1_DifferentialLockStateRearAxle2;

/* variable:     EBC1_MC2M_ABSOffRoadSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EBC1_Electronic_Brake_Controller_33
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      ABS Off-road Switch J1939 SPN 575
 */
extern SINT FAR EBC1_MC2M_ABSOffRoadSwitch;

/* variable:     EBC1_MC2M_EngineRetarder
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EBC1_Electronic_Brake_Controller_33
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Retarder Selection J1939 SPN 973
 */
extern USINT FAR EBC1_MC2M_EngineRetarder;

/* variable:     EHR2_DestinationAdr
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CAN_message
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR EHR2_DestinationAdr;

/* variable:     EBC1_GasPedalEnable
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EBC1
 * type:         Enum87
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern Enum87 FAR EBC1_GasPedalEnable;

/* variable:     EEC2_GasPedal
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EEC2
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR EEC2_GasPedal;

/* variable:     TC1_1_TransmissionGearShiftInhbtRq
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 681
 */
extern Enum255 FAR TC1_1_TransmissionGearShiftInhbtRq;

/* variable:     TC1_1_TrnsmTrqCnvLockupDisableRq
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 682
 */
extern Enum255 FAR TC1_1_TrnsmTrqCnvLockupDisableRq;

/* variable:     TC1_1_DisengageDrivelineRequest
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 683
 */
extern Enum255 FAR TC1_1_DisengageDrivelineRequest;

/* variable:     TC1_1_TrnsmReverseGearShftInhbtRq
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4242
 */
extern Enum255 FAR TC1_1_TrnsmReverseGearShftInhbtRq;

/* variable:     TC1_1_RequestedPercentClutchSlip
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      PGN 684
 */
extern USINT FAR TC1_1_RequestedPercentClutchSlip;

/* variable:     TC1_1_TransmissionRequestedGear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      PGN 525
 */
extern USINT FAR TC1_1_TransmissionRequestedGear;

/* variable:     TC1_1_DisengiffLockRequestFrontAxl1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 685
 */
extern Enum255 FAR TC1_1_DisengiffLockRequestFrontAxl1;

/* variable:     TC1_1_DisengiffLockRequestFrontAxl2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 686
 */
extern Enum255 FAR TC1_1_DisengiffLockRequestFrontAxl2;

/* variable:     TC1_1_DisengageDiffLockRequestRearAxl1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 687
 */
extern Enum255 FAR TC1_1_DisengageDiffLockRequestRearAxl1;

/* variable:     TC1_1_DisengageDiffLockRequestRearAxl2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 688
 */
extern Enum255 FAR TC1_1_DisengageDiffLockRequestRearAxl2;

/* variable:     TC1_1_DisengageDiffLockRequestCentral
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 689
 */
extern Enum255 FAR TC1_1_DisengageDiffLockRequestCentral;

/* variable:     TC1_1_DisengiffLockRequestCentralFront
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 690
 */
extern Enum255 FAR TC1_1_DisengiffLockRequestCentralFront;

/* variable:     TC1_1_DisengiffLockRequestCentralRear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 691
 */
extern Enum255 FAR TC1_1_DisengiffLockRequestCentralRear;

/* variable:     TC1_1_TransmissionMode1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 1852
 */
extern Enum255 FAR TC1_1_TransmissionMode1;

/* variable:     TC1_1_TransmissionMode2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 1853
 */
extern Enum255 FAR TC1_1_TransmissionMode2;

/* variable:     TC1_1_TransmissionMode3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 1854
 */
extern Enum255 FAR TC1_1_TransmissionMode3;

/* variable:     TC1_1_TransmissionMode4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 1855
 */
extern Enum255 FAR TC1_1_TransmissionMode4;

/* variable:     TC1_1_TransmissionRequestedLaunchGear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum88
 * address:      not specified
 * constant:     False
 * comment:      PGN 4255
 */
extern Enum88 FAR TC1_1_TransmissionRequestedLaunchGear;

/* variable:     TC1_1_TrnsmShftSlctorDisplayMdeSw
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 2985
 */
extern Enum255 FAR TC1_1_TrnsmShftSlctorDisplayMdeSw;

/* variable:     TC1_1_TransmissionMode5
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4246
 */
extern Enum255 FAR TC1_1_TransmissionMode5;

/* variable:     TC1_1_TransmissionMode6
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4247
 */
extern Enum255 FAR TC1_1_TransmissionMode6;

/* variable:     TC1_1_TransmissionMode7
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4248
 */
extern Enum255 FAR TC1_1_TransmissionMode7;

/* variable:     TC1_1_TransmissionMode8
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4249
 */
extern Enum255 FAR TC1_1_TransmissionMode8;

/* variable:     TC1_1_TransmissionRequestedLaunchGear_res
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern Enum255 FAR TC1_1_TransmissionRequestedLaunchGear_res;

/* variable:     TC1_2_TransmissionGearShiftInhbtRq
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 681
 */
extern Enum255 FAR TC1_2_TransmissionGearShiftInhbtRq;

/* variable:     TC1_2_TrnsmTrqCnvLockupDisableRq
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 682
 */
extern Enum255 FAR TC1_2_TrnsmTrqCnvLockupDisableRq;

/* variable:     TC1_2_DisengageDrivelineRequest
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 683
 */
extern Enum255 FAR TC1_2_DisengageDrivelineRequest;

/* variable:     TC1_2_TrnsmReverseGearShftInhbtRq
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4242
 */
extern Enum255 FAR TC1_2_TrnsmReverseGearShftInhbtRq;

/* variable:     TC1_2_RequestedPercentClutchSlip
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      PGN 684
 */
extern USINT FAR TC1_2_RequestedPercentClutchSlip;

/* variable:     TC1_2_TransmissionRequestedGear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      PGN 525
 */
extern USINT FAR TC1_2_TransmissionRequestedGear;

/* variable:     TC1_2_DisengiffLockRequestFrontAxl1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 685
 */
extern Enum255 FAR TC1_2_DisengiffLockRequestFrontAxl1;

/* variable:     TC1_2_DisengiffLockRequestFrontAxl2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 686
 */
extern Enum255 FAR TC1_2_DisengiffLockRequestFrontAxl2;

/* variable:     TC1_2_DisengageDiffLockRequestRearAxl1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 687
 */
extern Enum255 FAR TC1_2_DisengageDiffLockRequestRearAxl1;

/* variable:     TC1_2_DisengageDiffLockRequestRearAxl2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 688
 */
extern Enum255 FAR TC1_2_DisengageDiffLockRequestRearAxl2;

/* variable:     TC1_2_DisengageDiffLockRequestCentral
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 689
 */
extern Enum255 FAR TC1_2_DisengageDiffLockRequestCentral;

/* variable:     TC1_2_DisengiffLockRequestCentralFront
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 690
 */
extern Enum255 FAR TC1_2_DisengiffLockRequestCentralFront;

/* variable:     TC1_2_DisengiffLockRequestCentralRear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 691
 */
extern Enum255 FAR TC1_2_DisengiffLockRequestCentralRear;

/* variable:     TC1_2_TransmissionMode1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 1852
 */
extern Enum255 FAR TC1_2_TransmissionMode1;

/* variable:     TC1_2_TransmissionMode2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 1853
 */
extern Enum255 FAR TC1_2_TransmissionMode2;

/* variable:     TC1_2_TransmissionMode3
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 1854
 */
extern Enum255 FAR TC1_2_TransmissionMode3;

/* variable:     TC1_2_TransmissionMode4
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 1855
 */
extern Enum255 FAR TC1_2_TransmissionMode4;

/* variable:     TC1_2_TransmissionRequestedLaunchGear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum88
 * address:      not specified
 * constant:     False
 * comment:      PGN 4255
 */
extern Enum88 FAR TC1_2_TransmissionRequestedLaunchGear;

/* variable:     TC1_2_TrnsmShftSlctorDisplayMdeSw
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 2985
 */
extern Enum255 FAR TC1_2_TrnsmShftSlctorDisplayMdeSw;

/* variable:     TC1_2_TransmissionMode5
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4246
 */
extern Enum255 FAR TC1_2_TransmissionMode5;

/* variable:     TC1_2_TransmissionMode6
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4247
 */
extern Enum255 FAR TC1_2_TransmissionMode6;

/* variable:     TC1_2_TransmissionMode7
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4248
 */
extern Enum255 FAR TC1_2_TransmissionMode7;

/* variable:     TC1_2_TransmissionMode8
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      PGN 4249
 */
extern Enum255 FAR TC1_2_TransmissionMode8;

/* variable:     TC1_2_TransmissionRequestedLaunchGear_res
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         Enum255
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern Enum255 FAR TC1_2_TransmissionRequestedLaunchGear_res;

/* variable:     Cummins_TwoSpeedAxleSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum358
 * address:      not specified
 * constant:     False
 * comment:      Two Speed Axle Switch J1939 SPN 69
 */
extern Enum358 FAR Cummins_TwoSpeedAxleSwitch;

/* variable:     Cummins_ParkingBrakeSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum359
 * address:      not specified
 * constant:     False
 * comment:      Parking Brake Switch J1939 SPN 70
 */
extern Enum359 FAR Cummins_ParkingBrakeSwitch;

/* variable:     Cummins_CruiseControlPauseSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum360
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Pause Switch J1939 SPN 1633
 */
extern Enum360 FAR Cummins_CruiseControlPauseSwitch;

/* variable:     Cummins_ParkBrakeReleaseInhibitRequest
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum361
 * address:      not specified
 * constant:     False
 * comment:      Park Brake Release Inhibit Request J1939 SPN 3807
 */
extern Enum361 FAR Cummins_ParkBrakeReleaseInhibitRequest;

/* variable:     Cummins_CruiseControlActive
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum362
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Active J1939 SPN 595
 */
extern Enum362 FAR Cummins_CruiseControlActive;

/* variable:     Cummins_CruiseControlEnableSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum363
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Enable Switch J1939 SPN 596
 */
extern Enum363 FAR Cummins_CruiseControlEnableSwitch;

/* variable:     Cummins_BrakeSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum364
 * address:      not specified
 * constant:     False
 * comment:      Brake Switch J1939 SPN 597
 */
extern Enum364 FAR Cummins_BrakeSwitch;

/* variable:     Cummins_ClutchSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum365
 * address:      not specified
 * constant:     False
 * comment:      Clutch Switch J1939 SPN 598
 */
extern Enum365 FAR Cummins_ClutchSwitch;

/* variable:     Cummins_CruiseControlSetSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum366
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Set Switch J1939 SPN 599
 */
extern Enum366 FAR Cummins_CruiseControlSetSwitch;

/* variable:     Cummins_CruiseControlCoastSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum367
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Coast (Decelerate) Switch J1939 SPN 600
 */
extern Enum367 FAR Cummins_CruiseControlCoastSwitch;

/* variable:     Cummins_CruiseControlResumeSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum368
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Resume Switch J1939 SPN 601
 */
extern Enum368 FAR Cummins_CruiseControlResumeSwitch;

/* variable:     Cummins_CruiseControlAccelerateSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum369
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Accelerate Switch J1939 SPN 602
 */
extern Enum369 FAR Cummins_CruiseControlAccelerateSwitch;

/* variable:     Cummins_CruiseControlSetSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Set Speed J1939 SPN 86 [km/h]
 */
extern USINT FAR Cummins_CruiseControlSetSpeed;

/* variable:     Cummins_CruiseControlStates
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum370
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control States J1939 SPN 527
 */
extern Enum370 FAR Cummins_CruiseControlStates;

/* variable:     Cummins_EngineIdleIncrementSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Increment Switch J1939 SPN 968
 */
extern Enum71 FAR Cummins_EngineIdleIncrementSwitch;

/* variable:     Cummins_EngineIdleDecrementSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Decrement Switch J1939 SPN 967
 */
extern Enum71 FAR Cummins_EngineIdleDecrementSwitch;

/* variable:     Cummins_EngineTestModeSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Test Mode Switch J1939 SPN 966
 */
extern Enum71 FAR Cummins_EngineTestModeSwitch;

/* variable:     Cummins_EngineShutdownOverrideSwitch
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Shutdown Override Switch J1939 SPN 1237
 */
extern Enum71 FAR Cummins_EngineShutdownOverrideSwitch;

/* variable:     Cummins_WheelBasedVehicleSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Wheel-Based Vehicle Speed J1939 SPN 84 [km/h]
 */
extern UINT FAR Cummins_WheelBasedVehicleSpeed;

/* variable:     vt3_can_period_EAC1_Electronic_Axle_Controller_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 */
extern UINT FAR vt3_can_period_EAC1_Electronic_Axle_Controller_1;

/* variable:     vt3_can_trigger_EAC1_Electronic_Axle_Controller_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EAC1_Electronic_Axle_Controller_1
 */
extern BOOL FAR vt3_can_trigger_EAC1_Electronic_Axle_Controller_1;

/* variable:     vt3_can_period_EBC1_Electronic_Brake_Controller_33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EBC1_Electronic_Brake_Controller_33
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EBC1_Electronic_Brake_Controller_33
 */
extern UINT FAR vt3_can_period_EBC1_Electronic_Brake_Controller_33;

/* variable:     vt3_can_trigger_EBC1_Electronic_Brake_Controller_33
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EBC1_Electronic_Brake_Controller_33
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/EBC1_Electronic_Brake_Controller_33
 */
extern BOOL FAR vt3_can_trigger_EBC1_Electronic_Brake_Controller_33;

/* variable:     vt3_can_period_CAN_message
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CAN_message
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CAN_message
 */
extern UINT FAR vt3_can_period_CAN_message;

/* variable:     vt3_can_trigger_CAN_message
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CAN_message
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CAN_message
 */
extern BOOL FAR vt3_can_trigger_CAN_message;

/* variable:     vt3_can_period_ECM_EBC1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EBC1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EBC1
 */
extern UINT FAR vt3_can_period_ECM_EBC1;

/* variable:     vt3_can_trigger_ECM_EBC1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EBC1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EBC1
 */
extern BOOL FAR vt3_can_trigger_ECM_EBC1;

/* variable:     vt3_can_period_ECM_EEC2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EEC2
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EEC2
 */
extern UINT FAR vt3_can_period_ECM_EEC2;

/* variable:     vt3_can_trigger_ECM_EEC2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EEC2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/ECM_EEC2
 */
extern BOOL FAR vt3_can_trigger_ECM_EEC2;

/* variable:     vt3_can_period_TC1_SHIFT_SELECTOR1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 */
extern UINT FAR vt3_can_period_TC1_SHIFT_SELECTOR1;

/* variable:     vt3_can_trigger_TC1_SHIFT_SELECTOR1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR1
 */
extern BOOL FAR vt3_can_trigger_TC1_SHIFT_SELECTOR1;

/* variable:     vt3_can_period_TC1_SHIFT_SELECTOR2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 */
extern UINT FAR vt3_can_period_TC1_SHIFT_SELECTOR2;

/* variable:     vt3_can_trigger_TC1_SHIFT_SELECTOR2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/TC1_SHIFT_SELECTOR2
 */
extern BOOL FAR vt3_can_trigger_TC1_SHIFT_SELECTOR2;

/* variable:     vt3_can_period_CCVS_Cruise_ControlVehicle_Speed2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 */
extern UINT FAR vt3_can_period_CCVS_Cruise_ControlVehicle_Speed2;

/* variable:     vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed2
 */
extern BOOL FAR vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed2;

/* variable:     vt3_can_alarm_DM01_ECM
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/DM01_ECM
 */
extern BOOL FAR vt3_can_alarm_DM01_ECM;

/* variable:     DM01_ECM_ProtectLamp
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Protect Lamp J1939 SPN 987 **(timeout 1500->5000)
 */
extern Enum13 FAR DM01_ECM_ProtectLamp;

/* variable:     DM01_ECM_AmberWarningLamp
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Amber Warning Lamp J1939 SPN 624
 */
extern Enum13 FAR DM01_ECM_AmberWarningLamp;

/* variable:     DM01_ECM_RedStopLamp
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Red Stop Lamp J1939 SPN 623 **(alarm on count 1->10)
 */
extern Enum13 FAR DM01_ECM_RedStopLamp;

/* variable:     DM01_ECM_MalfunctionIndicatorLamp
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum14
 * address:      not specified
 * constant:     False
 * comment:      Malfunction Indicator Lamp J1939 SPN 1213
 */
extern Enum14 FAR DM01_ECM_MalfunctionIndicatorLamp;

/* variable:     DM01_ECM_FlashProtectLamp
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Protect Lamp J1939 SPN 3041
 */
extern Enum15 FAR DM01_ECM_FlashProtectLamp;

/* variable:     DM01_ECM_FlashAmberWarningLamp
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Amber Warning Lamp (AWL) J1939 SPN 3040
 */
extern Enum15 FAR DM01_ECM_FlashAmberWarningLamp;

/* variable:     DM01_ECM_FlashRedStopLamp
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Red Stop Lamp (RSL) J1939 SPN 3039
 */
extern Enum15 FAR DM01_ECM_FlashRedStopLamp;

/* variable:     DM01_ECM_FlashMalfunctionIndicatorLamp
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum16
 * address:      not specified
 * constant:     False
 * comment:      Flash Malfunction Indicator Lamp (MIL) J1939 SPN 3038
 */
extern Enum16 FAR DM01_ECM_FlashMalfunctionIndicatorLamp;

/* variable:     DM01_ECM_SuspectParameterNumber
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Suspect Parameter Number J1939 SPN 1214
 */
extern UDINT FAR DM01_ECM_SuspectParameterNumber;

/* variable:     DM01_ECM_FailureModeIdentifier
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Failure Mode Identifier J1939 SPN 1215
 */
extern USINT FAR DM01_ECM_FailureModeIdentifier;

/* variable:     DM01_ECM_OccurrenceCount
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Occurrence Count J1939 SPN 1216
 */
extern USINT FAR DM01_ECM_OccurrenceCount;

/* variable:     DM01_ECM_SPNConversionMethod
 * definition:   /project/ECM/CAN_J1939/DM01_ECM
 * type:         Enum17
 * address:      not specified
 * constant:     False
 * comment:      SPN Conversion Method J1939 SPN 1706
 */
extern Enum17 FAR DM01_ECM_SPNConversionMethod;

/* variable:     vt3_can_alarm_DM01_BAM_ECM
 * definition:   /project/ECM/CAN_J1939/DM01_BAM_ECM
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/DM01_BAM_ECM
 */
extern BOOL FAR vt3_can_alarm_DM01_BAM_ECM;

/* variable:     DM01_BAM_ECM_CtrlByte
 * definition:   /project/ECM/CAN_J1939/DM01_BAM_ECM
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_ECM_CtrlByte;

/* variable:     DM01_BAM_ECM_TotNumByte
 * definition:   /project/ECM/CAN_J1939/DM01_BAM_ECM
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR DM01_BAM_ECM_TotNumByte;

/* variable:     DM01_BAM_ECM_TotNumPacket
 * definition:   /project/ECM/CAN_J1939/DM01_BAM_ECM
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_ECM_TotNumPacket;

/* variable:     DM01_BAM_ECM_Reserved
 * definition:   /project/ECM/CAN_J1939/DM01_BAM_ECM
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_ECM_Reserved;

/* variable:     DM01_BAM_ECM_PGNofPacket
 * definition:   /project/ECM/CAN_J1939/DM01_BAM_ECM
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR DM01_BAM_ECM_PGNofPacket;

/* variable:     vt3_can_alarm_EEC1_Electronic_Engine_Controller_1
 * definition:   /project/ECM/CAN_J1939/EEC1_Electronic_Engine_Controller_1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/EEC1_Electronic_Engine_Controller_1
 */
extern BOOL FAR vt3_can_alarm_EEC1_Electronic_Engine_Controller_1;

/* variable:     EEC1_EngineSpeed
 * definition:   /project/ECM/CAN_J1939/EEC1_Electronic_Engine_Controller_1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Speed J1939 SPN 190 [rpm]
 */
extern UINT FAR EEC1_EngineSpeed;

/* variable:     vt3_can_alarm_EEC2_Electronic_Engine_Controller_2
 * definition:   /project/ECM/CAN_J1939/EEC2_Electronic_Engine_Controller_2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/EEC2_Electronic_Engine_Controller_2
 */
extern BOOL FAR vt3_can_alarm_EEC2_Electronic_Engine_Controller_2;

/* variable:     EEC2_AcceleratorPedalPosition1
 * definition:   /project/ECM/CAN_J1939/EEC2_Electronic_Engine_Controller_2
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Accelerator Pedal Position 1 J1939 SPN 91 [%]
 */
extern USINT FAR EEC2_AcceleratorPedalPosition1;

/* variable:     vt3_can_alarm_EBC1_Electronic_Brake_Controller_1_vECM
 * definition:   /project/ECM/CAN_J1939/EBC1_Electronic_Brake_Controller_1_vECM
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/EBC1_Electronic_Brake_Controller_1_vECM
 */
extern BOOL FAR vt3_can_alarm_EBC1_Electronic_Brake_Controller_1_vECM;

/* variable:     EBC1_vECM_EBSBrakeSwitch
 * definition:   /project/ECM/CAN_J1939/EBC1_Electronic_Brake_Controller_1_vECM
 * type:         Enum66
 * address:      not specified
 * constant:     False
 * comment:      EBS Brake Switch J1939 SPN 1121
 */
extern Enum66 FAR EBC1_vECM_EBSBrakeSwitch;

/* variable:     EBC1_vECM_EngineRetarderSelection
 * definition:   /project/ECM/CAN_J1939/EBC1_Electronic_Brake_Controller_1_vECM
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Retarder Selection J1939 SPN 973 [%]
 */
extern USINT FAR EBC1_vECM_EngineRetarderSelection;

/* variable:     EBC1_vECM_ATCASRInformationSignal
 * definition:   /project/ECM/CAN_J1939/EBC1_Electronic_Brake_Controller_1_vECM
 * type:         Enum73
 * address:      not specified
 * constant:     False
 * comment:      ATC/ASR Information Signal J1939 SPN 1793
 */
extern Enum73 FAR EBC1_vECM_ATCASRInformationSignal;

/* variable:     vt3_can_alarm_SHUTDN_Shutdown
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/SHUTDN_Shutdown
 */
extern BOOL FAR vt3_can_alarm_SHUTDN_Shutdown;

/* variable:     SHUTDN_EngIdleShutdownHasShutdownEngine
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum346
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Shutdown has Shutdown Engine J1939 SPN 593
 */
extern Enum346 FAR SHUTDN_EngIdleShutdownHasShutdownEngine;

/* variable:     SHUTDN_EngineIdleShutdownDrvrAlertMode
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum347
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Shutdown Driver Alert Mode J1939 SPN 594
 */
extern Enum347 FAR SHUTDN_EngineIdleShutdownDrvrAlertMode;

/* variable:     SHUTDN_EngineIdleShutdownTimerOverride
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum347
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Shutdown Timer Override J1939 SPN 592
 */
extern Enum347 FAR SHUTDN_EngineIdleShutdownTimerOverride;

/* variable:     SHUTDN_EngineIdleShutdownTimerState
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum347
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Shutdown Timer State J1939 SPN 590
 */
extern Enum347 FAR SHUTDN_EngineIdleShutdownTimerState;

/* variable:     SHUTDN_EngineIdleShutdownTimerFunction
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum348
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Shutdown Timer Function J1939 SPN 591
 */
extern Enum348 FAR SHUTDN_EngineIdleShutdownTimerFunction;

/* variable:     SHUTDN_ACHighPressureFanSwitch
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum349
 * address:      not specified
 * constant:     False
 * comment:      A/C High Pressure Fan Switch J1939 SPN 985
 */
extern Enum349 FAR SHUTDN_ACHighPressureFanSwitch;

/* variable:     SHUTDN_RefrigerantLowPressureSwitch
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum350
 * address:      not specified
 * constant:     False
 * comment:      Refrigerant Low Pressure Switch J1939 SPN 875
 */
extern Enum350 FAR SHUTDN_RefrigerantLowPressureSwitch;

/* variable:     SHUTDN_RefrigerantHighPressureSwitch
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum351
 * address:      not specified
 * constant:     False
 * comment:      Refrigerant High Pressure Switch J1939 SPN 605
 */
extern Enum351 FAR SHUTDN_RefrigerantHighPressureSwitch;

/* variable:     SHUTDN_EngineWaitToStartLamp
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Wait to Start Lamp J1939 SPN 1081
 */
extern Enum71 FAR SHUTDN_EngineWaitToStartLamp;

/* variable:     SHUTDN_EngPrtctnSystemHasShutdownEng
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum346
 * address:      not specified
 * constant:     False
 * comment:      Engine Protection System has Shutdown Engine J1939 SPN 1110
 */
extern Enum346 FAR SHUTDN_EngPrtctnSystemHasShutdownEng;

/* variable:     SHUTDN_EngPrtctnSysApproachingShutdown
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum352
 * address:      not specified
 * constant:     False
 * comment:      Engine Protection System Approaching Shutdown J1939 SPN 1109
 */
extern Enum352 FAR SHUTDN_EngPrtctnSysApproachingShutdown;

/* variable:     SHUTDN_EngProtectionSystemTimerOverride
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum347
 * address:      not specified
 * constant:     False
 * comment:      Engine Protection System Timer Override J1939 SPN 1108
 */
extern Enum347 FAR SHUTDN_EngProtectionSystemTimerOverride;

/* variable:     SHUTDN_EngineProtectionSystemTimerState
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum347
 * address:      not specified
 * constant:     False
 * comment:      Engine Protection System Timer State J1939 SPN 1107
 */
extern Enum347 FAR SHUTDN_EngineProtectionSystemTimerState;

/* variable:     SHUTDN_EngineProtectionSystemConf
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum348
 * address:      not specified
 * constant:     False
 * comment:      Engine Protection System Configuration J1939 SPN 1111
 */
extern Enum348 FAR SHUTDN_EngineProtectionSystemConf;

/* variable:     SHUTDN_EngineAlarmAcknowledge
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum353
 * address:      not specified
 * constant:     False
 * comment:      Engine Alarm Acknowledge J1939 SPN 2815
 */
extern Enum353 FAR SHUTDN_EngineAlarmAcknowledge;

/* variable:     SHUTDN_EngineAlarmOutputCommandStatus
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum354
 * address:      not specified
 * constant:     False
 * comment:      Engine Alarm Output Command Status J1939 SPN 2814
 */
extern Enum354 FAR SHUTDN_EngineAlarmOutputCommandStatus;

/* variable:     SHUTDN_EngineAirShutoffCommandStatus
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum355
 * address:      not specified
 * constant:     False
 * comment:      Engine Air Shutoff Command Status J1939 SPN 2813
 */
extern Enum355 FAR SHUTDN_EngineAirShutoffCommandStatus;

/* variable:     SHUTDN_EngineOverspeedTest
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum356
 * address:      not specified
 * constant:     False
 * comment:      Engine Overspeed Test J1939 SPN 2812
 */
extern Enum356 FAR SHUTDN_EngineOverspeedTest;

/* variable:     SHUTDN_EngineAirShutoffStatus
 * definition:   /project/ECM/CAN_J1939/SHUTDN_Shutdown
 * type:         Enum357
 * address:      not specified
 * constant:     False
 * comment:      Engine Air Shutoff Status J1939 SPN 3667
 */
extern Enum357 FAR SHUTDN_EngineAirShutoffStatus;

/* variable:     vt3_can_alarm_ET1_Engine_Temperature_1
 * definition:   /project/ECM/CAN_J1939/ET1_Engine_Temperature_1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/ET1_Engine_Temperature_1
 */
extern BOOL FAR vt3_can_alarm_ET1_Engine_Temperature_1;

/* variable:     ET1_EngineCoolantTemperature
 * definition:   /project/ECM/CAN_J1939/ET1_Engine_Temperature_1
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Coolant Temperature J1939 SPN 110 [deg C]
 */
extern SINT FAR ET1_EngineCoolantTemperature;

/* variable:     vt3_can_alarm_EFL_P1_Engine_Fluid_LevelPressure_1
 * definition:   /project/ECM/CAN_J1939/EFL_P1_Engine_Fluid_LevelPressure_1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/EFL_P1_Engine_Fluid_LevelPressure_1
 */
extern BOOL FAR vt3_can_alarm_EFL_P1_Engine_Fluid_LevelPressure_1;

/* variable:     EFL_P1_EngineOilLevel
 * definition:   /project/ECM/CAN_J1939/EFL_P1_Engine_Fluid_LevelPressure_1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Oil Level J1939 SPN 98 [%]
 */
extern USINT FAR EFL_P1_EngineOilLevel;

/* variable:     EFL_P1_EngineOilPressure
 * definition:   /project/ECM/CAN_J1939/EFL_P1_Engine_Fluid_LevelPressure_1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Oil Pressure J1939 SPN 100 [kPa]
 */
extern USINT FAR EFL_P1_EngineOilPressure;

/* variable:     EFL_P1_EngineCoolantLevel
 * definition:   /project/ECM/CAN_J1939/EFL_P1_Engine_Fluid_LevelPressure_1
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Coolant Level J1939 SPN 111 [%]
 */
extern USINT FAR EFL_P1_EngineCoolantLevel;

/* variable:     vt3_can_alarm_IC1_InletExhaust_Conditions_1
 * definition:   /project/ECM/CAN_J1939/IC1_InletExhaust_Conditions_1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/IC1_InletExhaust_Conditions_1
 */
extern BOOL FAR vt3_can_alarm_IC1_InletExhaust_Conditions_1;

/* variable:     IC1_EngineIntakeManifold1Temperature
 * definition:   /project/ECM/CAN_J1939/IC1_InletExhaust_Conditions_1
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Intake Manifold 1 Temperature J1939 SPN 105 [deg C]
 */
extern SINT FAR IC1_EngineIntakeManifold1Temperature;

/* variable:     vt3_can_alarm_VEP1_Vehicle_Electrical_Power_1
 * definition:   /project/ECM/CAN_J1939/VEP1_Vehicle_Electrical_Power_1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/VEP1_Vehicle_Electrical_Power_1
 */
extern BOOL FAR vt3_can_alarm_VEP1_Vehicle_Electrical_Power_1;

/* variable:     VEP1_BatteryPotentialPowerInput1
 * definition:   /project/ECM/CAN_J1939/VEP1_Vehicle_Electrical_Power_1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Battery Potential / Power Input 1 J1939 SPN 168 [V]
 */
extern UINT FAR VEP1_BatteryPotentialPowerInput1;

/* variable:     vt3_can_alarm_WFI_Water_in_Fuel_Indicator
 * definition:   /project/ECM/CAN_J1939/WFI_Water_in_Fuel_Indicator
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/WFI_Water_in_Fuel_Indicator
 */
extern BOOL FAR vt3_can_alarm_WFI_Water_in_Fuel_Indicator;

/* variable:     WFI_WaterInFuelIndicator
 * definition:   /project/ECM/CAN_J1939/WFI_Water_in_Fuel_Indicator
 * type:         Enum346
 * address:      not specified
 * constant:     False
 * comment:      Water In Fuel Indicator J1939 SPN 97
 */
extern Enum346 FAR WFI_WaterInFuelIndicator;

/* variable:     vt3_can_alarm_CCVS_Cruise_ControlVehicle_Speed
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 */
extern BOOL FAR vt3_can_alarm_CCVS_Cruise_ControlVehicle_Speed;

/* variable:     CCVS_TwoSpeedAxleSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum358
 * address:      not specified
 * constant:     False
 * comment:      Two Speed Axle Switch J1939 SPN 69
 */
extern Enum358 FAR CCVS_TwoSpeedAxleSwitch;

/* variable:     CCVS_ParkingBrakeSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum359
 * address:      not specified
 * constant:     False
 * comment:      Parking Brake Switch J1939 SPN 70
 */
extern Enum359 FAR CCVS_ParkingBrakeSwitch;

/* variable:     CCVS_CruiseControlPauseSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum360
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Pause Switch J1939 SPN 1633
 */
extern Enum360 FAR CCVS_CruiseControlPauseSwitch;

/* variable:     CCVS_ParkBrakeReleaseInhibitRequest
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum361
 * address:      not specified
 * constant:     False
 * comment:      Park Brake Release Inhibit Request J1939 SPN 3807
 */
extern Enum361 FAR CCVS_ParkBrakeReleaseInhibitRequest;

/* variable:     CCVS_CruiseControlActive
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum362
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Active J1939 SPN 595
 */
extern Enum362 FAR CCVS_CruiseControlActive;

/* variable:     CCVS_CruiseControlEnableSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum363
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Enable Switch J1939 SPN 596
 */
extern Enum363 FAR CCVS_CruiseControlEnableSwitch;

/* variable:     CCVS_BrakeSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum364
 * address:      not specified
 * constant:     False
 * comment:      Brake Switch J1939 SPN 597
 */
extern Enum364 FAR CCVS_BrakeSwitch;

/* variable:     CCVS_ClutchSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum365
 * address:      not specified
 * constant:     False
 * comment:      Clutch Switch J1939 SPN 598
 */
extern Enum365 FAR CCVS_ClutchSwitch;

/* variable:     CCVS_CruiseControlSetSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum366
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Set Switch J1939 SPN 599
 */
extern Enum366 FAR CCVS_CruiseControlSetSwitch;

/* variable:     CCVS_CruiseControlCoastSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum367
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Coast (Decelerate) Switch J1939 SPN 600
 */
extern Enum367 FAR CCVS_CruiseControlCoastSwitch;

/* variable:     CCVS_CruiseControlResumeSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum368
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Resume Switch J1939 SPN 601
 */
extern Enum368 FAR CCVS_CruiseControlResumeSwitch;

/* variable:     CCVS_CruiseControlAccelerateSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum369
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Accelerate Switch J1939 SPN 602
 */
extern Enum369 FAR CCVS_CruiseControlAccelerateSwitch;

/* variable:     CCVS_CruiseControlSetSpeed
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control Set Speed J1939 SPN 86 [km/h]
 */
extern USINT FAR CCVS_CruiseControlSetSpeed;

/* variable:     CCVS_CruiseControlStates
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum370
 * address:      not specified
 * constant:     False
 * comment:      Cruise Control States J1939 SPN 527
 */
extern Enum370 FAR CCVS_CruiseControlStates;

/* variable:     CCVS_EngineIdleIncrementSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Increment Switch J1939 SPN 968
 */
extern Enum71 FAR CCVS_EngineIdleIncrementSwitch;

/* variable:     CCVS_EngineIdleDecrementSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Idle Decrement Switch J1939 SPN 967
 */
extern Enum71 FAR CCVS_EngineIdleDecrementSwitch;

/* variable:     CCVS_EngineTestModeSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Test Mode Switch J1939 SPN 966
 */
extern Enum71 FAR CCVS_EngineTestModeSwitch;

/* variable:     CCVS_EngineShutdownOverrideSwitch
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         Enum71
 * address:      not specified
 * constant:     False
 * comment:      Engine Shutdown Override Switch J1939 SPN 1237
 */
extern Enum71 FAR CCVS_EngineShutdownOverrideSwitch;

/* variable:     CCVS_WheelBasedVehicleSpeed
 * definition:   /project/ECM/CAN_J1939/CCVS_Cruise_ControlVehicle_Speed
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Wheel-Based Vehicle Speed J1939 SPN 84 [km/h]
 */
extern UINT FAR CCVS_WheelBasedVehicleSpeed;

/* variable:     vt3_can_alarm_EHR_Engine_Hours_Revolutions
 * definition:   /project/ECM/CAN_J1939/EHR_Engine_Hours_Revolutions
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/ECM/CAN_J1939/EHR_Engine_Hours_Revolutions
 */
extern BOOL FAR vt3_can_alarm_EHR_Engine_Hours_Revolutions;

/* variable:     EHR_TotalEngineHours
 * definition:   /project/ECM/CAN_J1939/EHR_Engine_Hours_Revolutions
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Engine Hours J1939 SPN 247
 */
extern UDINT FAR EHR_TotalEngineHours;

/* variable:     EHR_TotalEngineRevolutions
 * definition:   /project/ECM/CAN_J1939/EHR_Engine_Hours_Revolutions
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Engine Revolutions J1939 SPN 249
 */
extern UDINT FAR EHR_TotalEngineRevolutions;

/* variable:     vt3_can_alarm_DM01_TCM
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/TCM/CAN_J1939/DM01_TCM
 */
extern BOOL FAR vt3_can_alarm_DM01_TCM;

/* variable:     DM01_TCM_ProtectLamp
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Protect Lamp J1939 SPN 987 **(timeout 1500->5000)
 */
extern Enum13 FAR DM01_TCM_ProtectLamp;

/* variable:     DM01_TCM_AmberWarningLamp
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Amber Warning Lamp J1939 SPN 624
 */
extern Enum13 FAR DM01_TCM_AmberWarningLamp;

/* variable:     DM01_TCM_RedStopLamp
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Red Stop Lamp J1939 SPN 623 **(alarm on count 1->10)
 */
extern Enum13 FAR DM01_TCM_RedStopLamp;

/* variable:     DM01_TCM_MalfunctionIndicatorLamp
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum14
 * address:      not specified
 * constant:     False
 * comment:      Malfunction Indicator Lamp J1939 SPN 1213
 */
extern Enum14 FAR DM01_TCM_MalfunctionIndicatorLamp;

/* variable:     DM01_TCM_FlashProtectLamp
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Protect Lamp J1939 SPN 3041
 */
extern Enum15 FAR DM01_TCM_FlashProtectLamp;

/* variable:     DM01_TCM_FlashAmberWarningLamp
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Amber Warning Lamp (AWL) J1939 SPN 3040
 */
extern Enum15 FAR DM01_TCM_FlashAmberWarningLamp;

/* variable:     DM01_TCM_FlashRedStopLamp
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Red Stop Lamp (RSL) J1939 SPN 3039
 */
extern Enum15 FAR DM01_TCM_FlashRedStopLamp;

/* variable:     DM01_TCM_FlashMalfunctionIndicatorLamp
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum16
 * address:      not specified
 * constant:     False
 * comment:      Flash Malfunction Indicator Lamp (MIL) J1939 SPN 3038
 */
extern Enum16 FAR DM01_TCM_FlashMalfunctionIndicatorLamp;

/* variable:     DM01_TCM_SuspectParameterNumber
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Suspect Parameter Number J1939 SPN 1214
 */
extern UDINT FAR DM01_TCM_SuspectParameterNumber;

/* variable:     DM01_TCM_FailureModeIdentifier
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Failure Mode Identifier J1939 SPN 1215
 */
extern USINT FAR DM01_TCM_FailureModeIdentifier;

/* variable:     DM01_TCM_OccurrenceCount
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Occurrence Count J1939 SPN 1216
 */
extern USINT FAR DM01_TCM_OccurrenceCount;

/* variable:     DM01_TCM_SPNConversionMethod
 * definition:   /project/TCM/CAN_J1939/DM01_TCM
 * type:         Enum17
 * address:      not specified
 * constant:     False
 * comment:      SPN Conversion Method J1939 SPN 1706
 */
extern Enum17 FAR DM01_TCM_SPNConversionMethod;

/* variable:     vt3_can_alarm_DM01_BAM_TCM
 * definition:   /project/TCM/CAN_J1939/DM01_BAM_TCM
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/TCM/CAN_J1939/DM01_BAM_TCM
 */
extern BOOL FAR vt3_can_alarm_DM01_BAM_TCM;

/* variable:     DM01_BAM_TCM_CtrlByte
 * definition:   /project/TCM/CAN_J1939/DM01_BAM_TCM
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_TCM_CtrlByte;

/* variable:     DM01_BAM_TCM_TotNumByte
 * definition:   /project/TCM/CAN_J1939/DM01_BAM_TCM
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR DM01_BAM_TCM_TotNumByte;

/* variable:     DM01_BAM_TCM_TotNumPacket
 * definition:   /project/TCM/CAN_J1939/DM01_BAM_TCM
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_TCM_TotNumPacket;

/* variable:     DM01_BAM_TCM_Reserved
 * definition:   /project/TCM/CAN_J1939/DM01_BAM_TCM
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_TCM_Reserved;

/* variable:     DM01_BAM_TCM_PGNofPacket
 * definition:   /project/TCM/CAN_J1939/DM01_BAM_TCM
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR DM01_BAM_TCM_PGNofPacket;

/* variable:     vt3_can_alarm_ETC1_Electronic_Transmission_Controller_1
 * definition:   /project/TCM/CAN_J1939/ETC1_Electronic_Transmission_Controller_1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/TCM/CAN_J1939/ETC1_Electronic_Transmission_Controller_1
 */
extern BOOL FAR vt3_can_alarm_ETC1_Electronic_Transmission_Controller_1;

/* variable:     ETC1_TransmissionTrqCnvLockupEngaged
 * definition:   /project/TCM/CAN_J1939/ETC1_Electronic_Transmission_Controller_1
 * type:         Enum77
 * address:      not specified
 * constant:     False
 * comment:      Transmission Torque Converter Lockup Engaged J1939 SPN 573
 */
extern Enum77 FAR ETC1_TransmissionTrqCnvLockupEngaged;

/* variable:     ETC1_TransmissionOutputShaftSpeed
 * definition:   /project/TCM/CAN_J1939/ETC1_Electronic_Transmission_Controller_1
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Transmission Output Shaft Speed J1939 SPN 191 [rpm]
 */
extern UINT FAR ETC1_TransmissionOutputShaftSpeed;

/* variable:     vt3_can_alarm_ETC2_Electronic_Transmission_Controller_2
 * definition:   /project/TCM/CAN_J1939/ETC2_Electronic_Transmission_Controller_2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/TCM/CAN_J1939/ETC2_Electronic_Transmission_Controller_2
 */
extern BOOL FAR vt3_can_alarm_ETC2_Electronic_Transmission_Controller_2;

/* variable:     ETC2_TransmissionCurrentGear
 * definition:   /project/TCM/CAN_J1939/ETC2_Electronic_Transmission_Controller_2
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Transmission Current Gear J1939 SPN 523
 */
extern SINT FAR ETC2_TransmissionCurrentGear;

/* variable:     vt3_can_alarm_ETC7_Electronic_Transmission_Controller_7
 * definition:   /project/TCM/CAN_J1939/ETC7_Electronic_Transmission_Controller_7
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/TCM/CAN_J1939/ETC7_Electronic_Transmission_Controller_7
 */
extern BOOL FAR vt3_can_alarm_ETC7_Electronic_Transmission_Controller_7;

/* variable:     ETC7_ActiveShiftConsoleIndicator
 * definition:   /project/TCM/CAN_J1939/ETC7_Electronic_Transmission_Controller_7
 * type:         Enum257
 * address:      not specified
 * constant:     False
 * comment:      Active Shift Console Indicator J1939 SPN 2945
 */
extern Enum257 FAR ETC7_ActiveShiftConsoleIndicator;

/* variable:     vt3_can_alarm_TRF1_Transmission_Fluids_1
 * definition:   /project/TCM/CAN_J1939/TRF1_Transmission_Fluids_1
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/TCM/CAN_J1939/TRF1_Transmission_Fluids_1
 */
extern BOOL FAR vt3_can_alarm_TRF1_Transmission_Fluids_1;

/* variable:     TRF1_TransmissionOilLevelHighLow
 * definition:   /project/TCM/CAN_J1939/TRF1_Transmission_Fluids_1
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Transmission Oil Level High / Low J1939 SPN 3027 [l]
 */
extern SINT FAR TRF1_TransmissionOilLevelHighLow;

/* variable:     TRF1_TransmissionOilTemperature
 * definition:   /project/TCM/CAN_J1939/TRF1_Transmission_Fluids_1
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Transmission Oil Temperature J1939 SPN 177 [deg C]
 */
extern INT FAR TRF1_TransmissionOilTemperature;

/* variable:     vt3_can_alarm_TRF2_Transmission_Fluids_2
 * definition:   /project/TCM/CAN_J1939/TRF2_Transmission_Fluids_2
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/TCM/CAN_J1939/TRF2_Transmission_Fluids_2
 */
extern BOOL FAR vt3_can_alarm_TRF2_Transmission_Fluids_2;

/* variable:     TRF2_Transmission_Oil_Filter_Restriction_Switch
 * definition:   /project/TCM/CAN_J1939/TRF2_Transmission_Fluids_2
 * type:         Enum_TransOilFilterRestriction
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern Enum_TransOilFilterRestriction FAR TRF2_Transmission_Oil_Filter_Restriction_Switch;

/* variable:     vt3_can_alarm_DM01_EBS
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/EBS/CAN_J1939/DM01_EBS
 */
extern BOOL FAR vt3_can_alarm_DM01_EBS;

/* variable:     DM01_EBS_ProtectLamp
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Protect Lamp J1939 SPN 987 **(timeout 1500->5000)
 */
extern Enum13 FAR DM01_EBS_ProtectLamp;

/* variable:     DM01_EBS_AmberWarningLamp
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Amber Warning Lamp J1939 SPN 624
 */
extern Enum13 FAR DM01_EBS_AmberWarningLamp;

/* variable:     DM01_EBS_RedStopLamp
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum13
 * address:      not specified
 * constant:     False
 * comment:      Red Stop Lamp J1939 SPN 623 **(alarm on count 1->10)
 */
extern Enum13 FAR DM01_EBS_RedStopLamp;

/* variable:     DM01_EBS_MalfunctionIndicatorLamp
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum14
 * address:      not specified
 * constant:     False
 * comment:      Malfunction Indicator Lamp J1939 SPN 1213
 */
extern Enum14 FAR DM01_EBS_MalfunctionIndicatorLamp;

/* variable:     DM01_EBS_FlashProtectLamp
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Protect Lamp J1939 SPN 3041
 */
extern Enum15 FAR DM01_EBS_FlashProtectLamp;

/* variable:     DM01_EBS_FlashAmberWarningLamp
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Amber Warning Lamp (AWL) J1939 SPN 3040
 */
extern Enum15 FAR DM01_EBS_FlashAmberWarningLamp;

/* variable:     DM01_EBS_FlashRedStopLamp
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum15
 * address:      not specified
 * constant:     False
 * comment:      Flash Red Stop Lamp (RSL) J1939 SPN 3039
 */
extern Enum15 FAR DM01_EBS_FlashRedStopLamp;

/* variable:     DM01_EBS_FlashMalfunctionIndicatorLamp
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum16
 * address:      not specified
 * constant:     False
 * comment:      Flash Malfunction Indicator Lamp (MIL) J1939 SPN 3038
 */
extern Enum16 FAR DM01_EBS_FlashMalfunctionIndicatorLamp;

/* variable:     DM01_EBS_SuspectParameterNumber
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Suspect Parameter Number J1939 SPN 1214
 */
extern UDINT FAR DM01_EBS_SuspectParameterNumber;

/* variable:     DM01_EBS_FailureModeIdentifier
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Failure Mode Identifier J1939 SPN 1215
 */
extern USINT FAR DM01_EBS_FailureModeIdentifier;

/* variable:     DM01_EBS_OccurrenceCount
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Occurrence Count J1939 SPN 1216
 */
extern USINT FAR DM01_EBS_OccurrenceCount;

/* variable:     DM01_EBS_SPNConversionMethod
 * definition:   /project/EBS/CAN_J1939/DM01_EBS
 * type:         Enum17
 * address:      not specified
 * constant:     False
 * comment:      SPN Conversion Method J1939 SPN 1706
 */
extern Enum17 FAR DM01_EBS_SPNConversionMethod;

/* variable:     vt3_can_alarm_DM01_BAM_EBS
 * definition:   /project/EBS/CAN_J1939/DM01_BAM_EBS
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/EBS/CAN_J1939/DM01_BAM_EBS
 */
extern BOOL FAR vt3_can_alarm_DM01_BAM_EBS;

/* variable:     DM01_BAM_EBS_CtrlByte
 * definition:   /project/EBS/CAN_J1939/DM01_BAM_EBS
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_EBS_CtrlByte;

/* variable:     DM01_BAM_EBS_TotNumByte
 * definition:   /project/EBS/CAN_J1939/DM01_BAM_EBS
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR DM01_BAM_EBS_TotNumByte;

/* variable:     DM01_BAM_EBS_TotNumPacket
 * definition:   /project/EBS/CAN_J1939/DM01_BAM_EBS
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_EBS_TotNumPacket;

/* variable:     DM01_BAM_EBS_Reserved
 * definition:   /project/EBS/CAN_J1939/DM01_BAM_EBS
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR DM01_BAM_EBS_Reserved;

/* variable:     DM01_BAM_EBS_PGNofPacket
 * definition:   /project/EBS/CAN_J1939/DM01_BAM_EBS
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR DM01_BAM_EBS_PGNofPacket;

/* variable:     vt3_can_alarm_EBC2_Wheel_Speed_Information
 * definition:   /project/EBS/CAN_J1939/EBC2_Wheel_Speed_Information
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/EBS/CAN_J1939/EBC2_Wheel_Speed_Information
 */
extern BOOL FAR vt3_can_alarm_EBC2_Wheel_Speed_Information;

/* variable:     EBC2_FrontAxleSpeed
 * definition:   /project/EBS/CAN_J1939/EBC2_Wheel_Speed_Information
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Front Axle Speed J1939 SPN 904 [km/h]
 */
extern UINT FAR EBC2_FrontAxleSpeed;

/* variable:     vt3_can_alarm_busoff_CAN_Open_UKAS
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus interface bus-off: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS
 */
extern BOOL FAR vt3_can_alarm_busoff_CAN_Open_UKAS;

/* variable:     MC2M_ASELSAN_Hydrolic_Pressure_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Hidrolik Yağ Seviyesi İkazı
 */
extern BOOL FAR MC2M_ASELSAN_Hydrolic_Pressure_Warning;

/* variable:     MC2M_ASELSAN_Hydrolic_Temperature_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Hidrolik Yağ Sıcaklığı İkazı
 */
extern BOOL FAR MC2M_ASELSAN_Hydrolic_Temperature_Warning;

/* variable:     MC2M_ASELSAN_Alternator_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Şarj Sistemi Arızası
 */
extern BOOL FAR MC2M_ASELSAN_Alternator_Warning;

/* variable:     MC2M_ASELSAN_Low_Fuel_Warning_T1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Tank 1 Yakıt Uyarısı
 */
extern BOOL FAR MC2M_ASELSAN_Low_Fuel_Warning_T1;

/* variable:     MC2M_ASELSAN_Low_Fuel_Warning_T2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Tank 2 Yakıt Uyarısı
 */
extern BOOL FAR MC2M_ASELSAN_Low_Fuel_Warning_T2;

/* variable:     MC2M_ASELSAN_Water_In_Fuel_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         Enum346
 * address:      not specified
 * constant:     False
 * comment:      Yakıttaki Su Uyarısı
 */
extern Enum346 FAR MC2M_ASELSAN_Water_In_Fuel_Warning;

/* variable:     MC2M_ASELSAN_Fire_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Yangın Uyarısı
 */
extern BOOL FAR MC2M_ASELSAN_Fire_Warning;

/* variable:     MC2M_ASELSAN_Transmission_Oil_Level_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_ASELSAN_Transmission_Oil_Level_Warning;

/* variable:     MC2M_ASELSAN_Transmission_Oil_Fiter_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_ASELSAN_Transmission_Oil_Fiter_Warning;

/* variable:     MC2M_ASELSAN_Transmission_Oil_Temp_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_ASELSAN_Transmission_Oil_Temp_Warning;

/* variable:     MC2M_ASELSAN_Air_Filter_Clogged_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Motor Hava Filtresi
 */
extern BOOL FAR MC2M_ASELSAN_Air_Filter_Clogged_Warning;

/* variable:     MC2M_ASELSAN_Engine_Oil_Pressure_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Motor Yağ Basınci Uyarısı
 */
extern BOOL FAR MC2M_ASELSAN_Engine_Oil_Pressure_Warning;

/* variable:     MC2M_ASELSAN_EngineOilTemperature_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_ASELSAN_EngineOilTemperature_Warning;

/* variable:     MC2M_ASELSAN_HighWoltage_Warning
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Yuksek Voltaj Uyarısı
 */
extern BOOL FAR MC2M_ASELSAN_HighWoltage_Warning;

/* variable:     MC2M_ASELSAN_BlackOut_Mode
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_ASELSAN_BlackOut_Mode;

/* variable:     MC2M_ASELSAN_Engine_Intake_Manifold_Temp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Motor Hava alma manifoldu sicakligi
 */
extern SINT FAR MC2M_ASELSAN_Engine_Intake_Manifold_Temp;

/* variable:     MC2M_ASELSAN_Vehicle_Speed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Araç Hızı
 */
extern USINT FAR MC2M_ASELSAN_Vehicle_Speed;

/* variable:     MC2M_ASELSAN_FuelLevel_T1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_ASELSAN_FuelLevel_T1;

/* variable:     MC2M_ASELSAN_FuelLevel_T2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_ASELSAN_FuelLevel_T2;

/* variable:     MC2M_ASELSAN_Transmission_Oil_Temperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_ASELSAN_Transmission_Oil_Temperature;

/* variable:     MC2M_ASELSAN2_Transmission_Current_Gear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      RealGear=Value-1, Geri Vites= -1, Bos Vites =0
 */
extern USINT FAR MC2M_ASELSAN2_Transmission_Current_Gear;

/* variable:     MC2M_ASELSAN2_Critic_TCM_Error
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_ASELSAN2_Critic_TCM_Error;

/* variable:     MC2M_ASELSAN2_Critic_ECM_Error
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_ASELSAN2_Critic_ECM_Error;

/* variable:     MC2M_ASELSAN2_Motor_Control_Error
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_ASELSAN2_Motor_Control_Error;

/* variable:     MC2M_ASELSAN2_Engine_Speed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_ASELSAN2_Engine_Speed;

/* variable:     MC2M_ASELSAN2_Engine_Temp
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_ASELSAN2_Engine_Temp;

/* variable:     MC2M_ASELSAN2_Engine_Oil_Press
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_ASELSAN2_Engine_Oil_Press;

/* variable:     MC2M_ASELSAN2_Engine_Coolant_Level
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      %0 ile %100 arasında bir değer
 */
extern USINT FAR MC2M_ASELSAN2_Engine_Coolant_Level;

/* variable:     MC2M_MURPHY_EngineSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_MURPHY_EngineSpeed;

/* variable:     MC2M_MURPHY_VehicleSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_VehicleSpeed;

/* variable:     MC2M_MURPHY_FuelLevel_1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_MURPHY_FuelLevel_1;

/* variable:     MC2M_MURPHY_EngineTempValue
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_EngineTempValue;

/* variable:     MC2M_MURPHY_BatteryLevel
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR MC2M_MURPHY_BatteryLevel;

/* variable:     MC2M_MURPHY_EngineOilPressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_EngineOilPressure;

/* variable:     MC2M_MURPHY_ParkingBrakePressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_ParkingBrakePressure;

/* variable:     MC2M_MURPHY_ServiceBrake1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_ServiceBrake1;

/* variable:     MC2M_MURPHY_ServiceBrake2
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_ServiceBrake2;

/* variable:     MC2M_MURPHY_AccessoryPressure
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_AccessoryPressure;

/* variable:     MC2M_MURPHY_TransOilTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_TransOilTemperature;

/* variable:     MC2M_MURPHY_CurrentGear
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_MURPHY_CurrentGear;

/* variable:     MC2M_MURPHY_OutSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_MURPHY_OutSideTemperature;

/* variable:     MC2M_MURPHY_InSideTemperature
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_MURPHY_InSideTemperature;

/* variable:     MC2M_MURPHY_AngleX
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_MURPHY_AngleX;

/* variable:     MC2M_MURPHY_AngleY
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR MC2M_MURPHY_AngleY;

/* variable:     MC2M_MURPHY_ServiceBrakeActivated
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MURPHY_ServiceBrakeActivated;

/* variable:     MC2M_MURPHY_ParkingBrakeActivated
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MURPHY_ParkingBrakeActivated;

/* variable:     MC2M_MURPHY_RemoteAcceleratorPedalPosition1
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_RemoteAcceleratorPedalPosition1;

/* variable:     MC2M_MURPHY_RemCruiseControlStates
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_RemCruiseControlStates;

/* variable:     MC2M_MURPHY_RemCruiseControlSetSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_RemCruiseControlSetSpeed;

/* variable:     MC2M_MURPHY_Hour
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_154A
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_MURPHY_Hour;

/* variable:     MC2M_MURPHY_Minute
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_154A
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_MURPHY_Minute;

/* variable:     MC2M_MURPHY_Second
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_154A
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_MURPHY_Second;

/* variable:     MC2M_MURPHY_SyncMessage
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_154A
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR MC2M_MURPHY_SyncMessage;

/* variable:     MC2M_MOBILEYE_RightSignal
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MOBILEYE_RightSignal;

/* variable:     MC2M_MOBILEYE_LeftSignal
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MOBILEYE_LeftSignal;

/* variable:     MC2M_MOBILEYE_HighBeam
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MOBILEYE_HighBeam;

/* variable:     MC2M_MOBILEYE_LowBeam
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MOBILEYE_LowBeam;

/* variable:     MC2M_MOBILEYE_BrakeSignal
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MC2M_MOBILEYE_BrakeSignal;

/* variable:     MC2M_MOBILEYE_VehicleSpeed
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MOBILEYE_VehicleSpeed;

/* variable:     MC2M_MURPHY_TCM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_164A
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_MURPHY_TCM_SuspectParameterNumber;

/* variable:     MC2M_MURPHY_ECM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_164A
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_MURPHY_ECM_SuspectParameterNumber;

/* variable:     MC2M_MURPHY_EBS_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR MC2M_MURPHY_EBS_SuspectParameterNumber;

/* variable:     MC2M_MURPHY_TCM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_TCM_FailureModeIdentifier;

/* variable:     MC2M_MURPHY_ECM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_ECM_FailureModeIdentifier;

/* variable:     MC2M_MURPHY_EBS_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_EBS_FailureModeIdentifier;

/* variable:     MC2M_MURPHY_TCM_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_TCM_OccurrenceCount;

/* variable:     MC2M_MURPHY_ECM_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_166A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_ECM_OccurrenceCount;

/* variable:     MC2M_MURPHY_EBS_OccurrenceCount
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_166A
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR MC2M_MURPHY_EBS_OccurrenceCount;

/* variable:     vt3_can_period_CAN_101_Aselsan
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 */
extern UINT FAR vt3_can_period_CAN_101_Aselsan;

/* variable:     vt3_can_trigger_CAN_101_Aselsan
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_101_Aselsan
 */
extern BOOL FAR vt3_can_trigger_CAN_101_Aselsan;

/* variable:     vt3_can_period_CAN_102_Aselsan
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 */
extern UINT FAR vt3_can_period_CAN_102_Aselsan;

/* variable:     vt3_can_trigger_CAN_102_Aselsan
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_102_Aselsan
 */
extern BOOL FAR vt3_can_trigger_CAN_102_Aselsan;

/* variable:     vt3_can_period_CAN_151A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 */
extern UINT FAR vt3_can_period_CAN_151A;

/* variable:     vt3_can_trigger_CAN_151A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_151A
 */
extern BOOL FAR vt3_can_trigger_CAN_151A;

/* variable:     vt3_can_period_CAN_152A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 */
extern UINT FAR vt3_can_period_CAN_152A;

/* variable:     vt3_can_trigger_CAN_152A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_152A
 */
extern BOOL FAR vt3_can_trigger_CAN_152A;

/* variable:     vt3_can_period_CAN_153A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 */
extern UINT FAR vt3_can_period_CAN_153A;

/* variable:     vt3_can_trigger_CAN_153A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_153A
 */
extern BOOL FAR vt3_can_trigger_CAN_153A;

/* variable:     vt3_can_period_CAN_154A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_154A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_154A
 */
extern UINT FAR vt3_can_period_CAN_154A;

/* variable:     vt3_can_trigger_CAN_154A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_154A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_154A
 */
extern BOOL FAR vt3_can_trigger_CAN_154A;

/* variable:     vt3_can_period_CAN_171_Mobileye
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 */
extern UINT FAR vt3_can_period_CAN_171_Mobileye;

/* variable:     vt3_can_trigger_CAN_171_Mobileye
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_171_Mobileye
 */
extern BOOL FAR vt3_can_trigger_CAN_171_Mobileye;

/* variable:     vt3_can_period_CAN_164A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_164A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_164A
 */
extern UINT FAR vt3_can_period_CAN_164A;

/* variable:     vt3_can_trigger_CAN_164A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_164A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_164A
 */
extern BOOL FAR vt3_can_trigger_CAN_164A;

/* variable:     vt3_can_period_CAN_165A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 */
extern UINT FAR vt3_can_period_CAN_165A;

/* variable:     vt3_can_trigger_CAN_165A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_165A
 */
extern BOOL FAR vt3_can_trigger_CAN_165A;

/* variable:     vt3_can_period_CAN_166A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_166A
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send period [ms]: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_166A
 */
extern UINT FAR vt3_can_period_CAN_166A;

/* variable:     vt3_can_trigger_CAN_166A
 * definition:   /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_166A
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message send trigger: /project/MC2M/CPU0/CAN_Bus/CAN_Open_UKAS/CAN_166A
 */
extern BOOL FAR vt3_can_trigger_CAN_166A;

/* variable:     vt3_can_alarm_CAN_183_3
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_183_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MIDAC_UKAS/CAN_MIDAC/CAN_183_3
 */
extern BOOL FAR vt3_can_alarm_CAN_183_3;

/* variable:     MURPHY_MC2M_WiperLOW
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_183_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      WiperLOW
 */
extern BOOL FAR MURPHY_MC2M_WiperLOW;

/* variable:     MURPHY_MC2M_WiperHIGH
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_183_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      WiperHIGH
 */
extern BOOL FAR MURPHY_MC2M_WiperHIGH;

/* variable:     MURPHY_MC2M_WiperSelection
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_183_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      WiperSelection
 */
extern BOOL FAR MURPHY_MC2M_WiperSelection;

/* variable:     MURPHY_MC2M_Washer
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_183_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Washer
 */
extern BOOL FAR MURPHY_MC2M_Washer;

/* variable:     vt3_can_alarm_CAN_184_3
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_184_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MIDAC_UKAS/CAN_MIDAC/CAN_184_3
 */
extern BOOL FAR vt3_can_alarm_CAN_184_3;

/* variable:     MURPHY_MC2M_Horn_switch_On
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_184_3
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Horn_switch_On
 */
extern USINT FAR MURPHY_MC2M_Horn_switch_On;

/* variable:     vt3_can_alarm_CAN_185_3
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 */
extern BOOL FAR vt3_can_alarm_CAN_185_3;

/* variable:     MURPHY_MC2M_Light_P1_Park
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Light_P1_Park
 */
extern BOOL FAR MURPHY_MC2M_Light_P1_Park;

/* variable:     MURPHY_MC2M_LowBeamStatus
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      LowBeamStatus
 */
extern BOOL FAR MURPHY_MC2M_LowBeamStatus;

/* variable:     MURPHY_MC2M_LowBeam2Status
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      LowBeam2Status
 */
extern BOOL FAR MURPHY_MC2M_LowBeam2Status;

/* variable:     MURPHY_MC2M_TurnLeftSignal
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      TurnLeftSignal
 */
extern BOOL FAR MURPHY_MC2M_TurnLeftSignal;

/* variable:     MURPHY_MC2M_TurnRightSignal
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      TurnRightSignal
 */
extern BOOL FAR MURPHY_MC2M_TurnRightSignal;

/* variable:     MURPHY_MC2M_HighBeamStatus
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      HighBeamStatus
 */
extern BOOL FAR MURPHY_MC2M_HighBeamStatus;

/* variable:     MURPHY_MC2M_HighBeamFlashStatus
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_185_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      HighBeamFlashStatus
 */
extern BOOL FAR MURPHY_MC2M_HighBeamFlashStatus;

/* variable:     vt3_can_alarm_CAN_186_3
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_186_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MIDAC_UKAS/CAN_MIDAC/CAN_186_3
 */
extern BOOL FAR vt3_can_alarm_CAN_186_3;

/* variable:     MURPHY_MC2M_DIGIN19_InteriorLamps
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_186_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN19_InteriorLamps
 */
extern BOOL FAR MURPHY_MC2M_DIGIN19_InteriorLamps;

/* variable:     MURPHY_MC2M_DIGIN25_InteriorVentilation_1
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_186_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN25_InteriorVentilation_1
 */
extern BOOL FAR MURPHY_MC2M_DIGIN25_InteriorVentilation_1;

/* variable:     MURPHY_MC2M_DIGIN26_InteriorVentilation_2
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_186_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN26_InteriorVentilation_2
 */
extern BOOL FAR MURPHY_MC2M_DIGIN26_InteriorVentilation_2;

/* variable:     vt3_can_alarm_CAN_187_3
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 */
extern BOOL FAR vt3_can_alarm_CAN_187_3;

/* variable:     MURPHY_MC2M_DIGIN07_EngineProtection
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Engine Protection Override
 */
extern BOOL FAR MURPHY_MC2M_DIGIN07_EngineProtection;

/* variable:     MURPHY_MC2M_DIGIN12_DropBoxHigh
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Dropbox High Mode
 */
extern BOOL FAR MURPHY_MC2M_DIGIN12_DropBoxHigh;

/* variable:     MURPHY_MC2M_DIGIN14_DropBoxLow
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Dropbox Low Mode
 */
extern BOOL FAR MURPHY_MC2M_DIGIN14_DropBoxLow;

/* variable:     MURPHY_MC2M_DIGIN18_MirrorWindowResistance
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Mirror Window Resistances
 */
extern BOOL FAR MURPHY_MC2M_DIGIN18_MirrorWindowResistance;

/* variable:     MURPHY_MC2M_DIGIN22_DropBoxNeutral
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Dropbox Neutral Mode
 */
extern BOOL FAR MURPHY_MC2M_DIGIN22_DropBoxNeutral;

/* variable:     MURPHY_MC2M_DIGIN25_ABSoffRoad
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      ABS Off-Road Switch
 */
extern BOOL FAR MURPHY_MC2M_DIGIN25_ABSoffRoad;

/* variable:     MURPHY_MC2M_DIGIN26_RearFog
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Rear Fog
 */
extern BOOL FAR MURPHY_MC2M_DIGIN26_RearFog;

/* variable:     MURPHY_MC2M_DIGIN27_DiffLock
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Differential Lock
 */
extern BOOL FAR MURPHY_MC2M_DIGIN27_DiffLock;

/* variable:     MURPHY_MC2M_DIGIN30_FrontFog
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_187_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Front Fog
 */
extern BOOL FAR MURPHY_MC2M_DIGIN30_FrontFog;

/* variable:     vt3_can_alarm_CAN_188_3
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      CAN-bus message receive timeout: /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 */
extern BOOL FAR vt3_can_alarm_CAN_188_3;

/* variable:     MURPHY_MC2M_DIGIN00_DIGIN_BlackOut_S1
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN_BlackOut_S1
 */
extern BOOL FAR MURPHY_MC2M_DIGIN00_DIGIN_BlackOut_S1;

/* variable:     MURPHY_MC2M_DIGIN01_DIGIN_BlackOut_S2
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN_BlackOut_S2
 */
extern BOOL FAR MURPHY_MC2M_DIGIN01_DIGIN_BlackOut_S2;

/* variable:     MURPHY_MC2M_DIGIN02_DIGIN_BlackOut_S3
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN_BlackOut_S3
 */
extern BOOL FAR MURPHY_MC2M_DIGIN02_DIGIN_BlackOut_S3;

/* variable:     MURPHY_MC2M_DIGIN03_DIGIN_BlackOut_Tag
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN_BlackOut_Tag
 */
extern BOOL FAR MURPHY_MC2M_DIGIN03_DIGIN_BlackOut_Tag;

/* variable:     MURPHY_MC2M_DIGIN04_DIGIN_BlackOut_1
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN_BlackOut_1
 */
extern BOOL FAR MURPHY_MC2M_DIGIN04_DIGIN_BlackOut_1;

/* variable:     MURPHY_MC2M_DIGIN05_DIGIN_BlackOut_2
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN_BlackOut_2
 */
extern BOOL FAR MURPHY_MC2M_DIGIN05_DIGIN_BlackOut_2;

/* variable:     MURPHY_MC2M_DIGIN06_DIGIN_Hazard
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      DIGIN_Hazard
 */
extern BOOL FAR MURPHY_MC2M_DIGIN06_DIGIN_Hazard;

/* variable:     MURPHY_MC2M_ECM_Remote_Accelerator_Switch
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      ECM_Remote_Accelerator_Switch
 */
extern BOOL FAR MURPHY_MC2M_ECM_Remote_Accelerator_Switch;

/* variable:     MURPHY_MC2M_ECM_Remote_Accelerator
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      ECM_Remote_Accelerator
 */
extern USINT FAR MURPHY_MC2M_ECM_Remote_Accelerator;

/* variable:     MURPHY_MC2M_TCM_ShiftSelector_Button_R
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      TCM_ShiftSelector_Button_R
 */
extern BOOL FAR MURPHY_MC2M_TCM_ShiftSelector_Button_R;

/* variable:     MURPHY_MC2M_TCM_ShiftSelector_Button_N
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      TCM_ShiftSelector_Button_N
 */
extern BOOL FAR MURPHY_MC2M_TCM_ShiftSelector_Button_N;

/* variable:     MURPHY_MC2M_TCM_ShiftSelector_Button_D
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      TCM_ShiftSelector_Button_D
 */
extern BOOL FAR MURPHY_MC2M_TCM_ShiftSelector_Button_D;

/* variable:     MURPHY_MC2M_ECM_RemoteCruiseEnable_Switch
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      ECM_RemoteCruiseEnable_Switch
 */
extern BOOL FAR MURPHY_MC2M_ECM_RemoteCruiseEnable_Switch;

/* variable:     MURPHY_MC2M_ECM_RemoteCruiseSet_Switch
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      ECM_RemoteCruiseSet_Switch
 */
extern BOOL FAR MURPHY_MC2M_ECM_RemoteCruiseSet_Switch;

/* variable:     MURPHY_MC2M_ECM_RemoteCruiseResume_Switch
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      ECM_RemoteCruiseResume_Switch
 */
extern BOOL FAR MURPHY_MC2M_ECM_RemoteCruiseResume_Switch;

/* variable:     MURPHY_MC2M_ETI_RemooteConnectionOK
 * definition:   /project/MIDAC_UKAS/CAN_MIDAC/CAN_188_3
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR MURPHY_MC2M_ETI_RemooteConnectionOK;

/* variable:     DropboxDifflockAlarm
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR DropboxDifflockAlarm;

/* variable:     KilometreBilgisi_Degiskeni
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR KilometreBilgisi_Degiskeni;

/* variable:     Diger_Degisken_1
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR Diger_Degisken_1;

/* variable:     Diger_Degisken_2
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR Diger_Degisken_2;

/* variable:     TimeNow
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         TIME_OF_DAY
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TIME_OF_DAY FAR TimeNow;

/* variable:     cycle
 * definition:   /project/MC2M/CPU0/cycle
 * type:         cycle
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern cycle_t FAR cycle;

/* variable:     Stat_AmberLamp_fromECM
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_20
 */
extern BOOL FAR Stat_AmberLamp_fromECM;

/* variable:     Stat_RedLamp_fromECM
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J3_10
 */
extern BOOL FAR Stat_RedLamp_fromECM;

/* variable:     Stat_CheckTransLamp_fromTCM
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_5
 */
extern BOOL FAR Stat_CheckTransLamp_fromTCM;

/* variable:     Stat_ABS_IndicatorLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_6
 */
extern BOOL FAR Stat_ABS_IndicatorLamp;

/* variable:     Stat_BatteryIndicatorLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_7
 */
extern BOOL FAR Stat_BatteryIndicatorLamp;

/* variable:     Stat_TransOilTempLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_8
 */
extern BOOL FAR Stat_TransOilTempLamp;

/* variable:     Stat_BrakeIndicatorLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      J2_9
 */
extern BOOL FAR Stat_BrakeIndicatorLamp;

/* variable:     Stat_Wait2StartLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      in=SPN 1081 out=J2_4
 */
extern BOOL FAR Stat_Wait2StartLamp;

/* variable:     Stat_WeatherCold
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Hava soğuk ikonu
 */
extern BOOL FAR Stat_WeatherCold;

/* variable:     Stat_OilFilterDirtiness_1
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Yağ filtresi kirli 1
 */
extern BOOL FAR Stat_OilFilterDirtiness_1;

/* variable:     Stat_OilFilterDirtiness_2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/Data_WarningLights
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Yağ filtresi kirli 2
 */
extern BOOL FAR Stat_OilFilterDirtiness_2;

/* variable:     mainWarningLights
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/WarningLights/mainWarningLights
 * type:         mainWarningLights
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainWarningLights_t FAR mainWarningLights;

/* variable:     mainEngineTempGauge
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/mainEngineTempGauge
 * type:         mainEngineTempGauge
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainEngineTempGauge_t FAR mainEngineTempGauge;

/* variable:     VehicleSpeed
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      km/h
 */
extern USINT FAR VehicleSpeed;

/* variable:     WheelRPM
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      RPM
 */
extern UINT FAR WheelRPM;

/* variable:     DropboxRPM
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      RPM
 */
extern UINT FAR DropboxRPM;

/* variable:     TransOutputShaftSpeed
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      RPM
 */
extern UINT FAR TransOutputShaftSpeed;

/* variable:     DropboxGearRatio_Curr
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Constant
 */
extern UINT FAR DropboxGearRatio_Curr;

/* variable:     mainSpeedometer
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/mainSpeedometer
 * type:         mainSpeedometer
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainSpeedometer_t FAR mainSpeedometer;

/* variable:     mainAnalogGauges
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/mainAnalogGauges
 * type:         mainAnalogGauges
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainAnalogGauges_t FAR mainAnalogGauges;

/* variable:     mainTeraScreen
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/TERA_Screen/mainTeraScreen
 * type:         mainTeraScreen
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainTeraScreen_t FAR mainTeraScreen;

/* variable:     main_Lxicon
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/TERA_Screen/main_Lxicon
 * type:         main_Lxicon
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_Lxicon_t FAR main_Lxicon;

/* variable:     ECM_MoreThanOneActiveFault
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_DM_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR ECM_MoreThanOneActiveFault;

/* variable:     ECM_starting
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_DM_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR ECM_starting;

/* variable:     ECM_dtcSpnEngine
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_DM_data
 * type:         ARRAY100UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ARRAY100UDINT FAR ECM_dtcSpnEngine;

/* variable:     ECM_dtcFmiEngine
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_DM_data
 * type:         ARRAY100USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ARRAY100USINT FAR ECM_dtcFmiEngine;

/* variable:     ECM_led_AWL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Amber warning lamp
 */
extern BYTE FAR ECM_led_AWL_Engine;

/* variable:     ECM_led_RSL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Red stop lamp
 */
extern BYTE FAR ECM_led_RSL_Engine;

/* variable:     ECM_led_RPL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Red protect lamp
 */
extern BYTE FAR ECM_led_RPL_Engine;

/* variable:     ECM_dataMatrix
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_global_data_program
 * type:         dataArray
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern dataArray FAR ECM_dataMatrix;

/* variable:     ECM_offsetDataTabelV
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_global_data_program
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR ECM_offsetDataTabelV;

/* variable:     ECM_offsetDataTabelH
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_global_data_program
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR ECM_offsetDataTabelH;

/* variable:     ECM_Table_RED_Lamp
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_global_data_program
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR ECM_Table_RED_Lamp;

/* variable:     ECM_Table_AMBER_Lamp
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/ECM_global_data_program
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR ECM_Table_AMBER_Lamp;

/* variable:     DM01_ECM_decode
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/AlarmManagement/MultiAlarm/DM01_ECM_decode
 * type:         DM01_ECM_decode
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern DM01_ECM_decode_t FAR DM01_ECM_decode;

/* variable:     ServiceBrakeActivated
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/Data_ECM
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR ServiceBrakeActivated;

/* variable:     EngineStartPermit
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/Data_ECM
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR EngineStartPermit;

/* variable:     mainECM_Management
 * definition:   /project/MC2M/CPU0/SubRoutines/ECM/mainECM_Management
 * type:         mainECM_Management
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainECM_Management_t FAR mainECM_Management;

/* variable:     TCM_MoreThanOneActiveFault
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_DM_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR TCM_MoreThanOneActiveFault;

/* variable:     TCM_starting
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_DM_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR TCM_starting;

/* variable:     TCM_dtcSpnEngine
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_DM_data
 * type:         ARRAY100UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ARRAY100UDINT FAR TCM_dtcSpnEngine;

/* variable:     TCM_dtcFmiEngine
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_DM_data
 * type:         ARRAY100USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ARRAY100USINT FAR TCM_dtcFmiEngine;

/* variable:     TCM_led_AWL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Amber warning lamp
 */
extern BYTE FAR TCM_led_AWL_Engine;

/* variable:     TCM_led_RSL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Red stop lamp
 */
extern BYTE FAR TCM_led_RSL_Engine;

/* variable:     TCM_led_RPL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Red protect lamp
 */
extern BYTE FAR TCM_led_RPL_Engine;

/* variable:     TCM_dataMatrix
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_global_data_program
 * type:         dataArray
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern dataArray FAR TCM_dataMatrix;

/* variable:     TCM_offsetDataTabelV
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_global_data_program
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR TCM_offsetDataTabelV;

/* variable:     TCM_offsetDataTabelH
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_global_data_program
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR TCM_offsetDataTabelH;

/* variable:     TCM_Table_RED_Lamp
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_global_data_program
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR TCM_Table_RED_Lamp;

/* variable:     TCM_Table_AMBER_Lamp
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/TCM_global_data_program
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR TCM_Table_AMBER_Lamp;

/* variable:     DM01_TCM_decode
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/AlarmManagement/MultiAlarm/DM01_TCM_decode
 * type:         DM01_TCM_decode
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern DM01_TCM_decode_t FAR DM01_TCM_decode;

/* variable:     CurrentGear
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/Data_TCM
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      N=0 R=-1 D=1,2,3
 */
extern SINT FAR CurrentGear;

/* variable:     mainTCM_Management
 * definition:   /project/MC2M/CPU0/SubRoutines/TCM/mainTCM_Management
 * type:         mainTCM_Management
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainTCM_Management_t FAR mainTCM_Management;

/* variable:     EBS_MoreThanOneActiveFault
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_DM_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR EBS_MoreThanOneActiveFault;

/* variable:     EBS_starting
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_DM_data
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR EBS_starting;

/* variable:     EBS_dtcSpnEngine
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_DM_data
 * type:         ARRAY100UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ARRAY100UDINT FAR EBS_dtcSpnEngine;

/* variable:     EBS_dtcFmiEngine
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_DM_data
 * type:         ARRAY100USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ARRAY100USINT FAR EBS_dtcFmiEngine;

/* variable:     EBS_led_AWL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Amber warning lamp
 */
extern BYTE FAR EBS_led_AWL_Engine;

/* variable:     EBS_led_RSL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Red stop lamp
 */
extern BYTE FAR EBS_led_RSL_Engine;

/* variable:     EBS_led_RPL_Engine
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_DM_data
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      Red protect lamp
 */
extern BYTE FAR EBS_led_RPL_Engine;

/* variable:     EBS_dataMatrix
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_global_data_program
 * type:         dataArray
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern dataArray FAR EBS_dataMatrix;

/* variable:     EBS_offsetDataTabelV
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_global_data_program
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR EBS_offsetDataTabelV;

/* variable:     EBS_offsetDataTabelH
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_global_data_program
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern INT FAR EBS_offsetDataTabelH;

/* variable:     EBS_Table_RED_Lamp
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_global_data_program
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR EBS_Table_RED_Lamp;

/* variable:     EBS_Table_AMBER_Lamp
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/EBS_global_data_program
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR EBS_Table_AMBER_Lamp;

/* variable:     DM01_EBS_decode
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/DM01_EBS_decode
 * type:         DM01_EBS_decode
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern DM01_EBS_decode_t FAR DM01_EBS_decode;

/* variable:     mainEBS_Management
 * definition:   /project/MC2M/CPU0/SubRoutines/EBS/mainEBS_Management
 * type:         mainEBS_Management
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainEBS_Management_t FAR mainEBS_Management;

/* variable:     Format_BB
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Format_BB;

/* variable:     mainDiagnostics
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/mainDiagnostics
 * type:         mainDiagnostics
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainDiagnostics_t FAR mainDiagnostics;

/* variable:     mainMC2MDiagnostics
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/mainMC2MDiagnostics
 * type:         mainMC2MDiagnostics
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainMC2MDiagnostics_t FAR mainMC2MDiagnostics;

/* variable:     EL_format_local2
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/EL_format_local2
 * type:         EL_format_local2
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern EL_format_local2_t FAR EL_format_local2;

/* variable:     Cmd_HighBeam
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_HighBeam;

/* variable:     Cmd_HighBeamFlash
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_HighBeamFlash;

/* variable:     Cmd_LowBeam
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_LowBeam;

/* variable:     Cmd_ParkLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_ParkLamp;

/* variable:     Cmd_TurnSignal_Left
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_TurnSignal_Left;

/* variable:     Cmd_TurnSignal_Right
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_TurnSignal_Right;

/* variable:     Cmd_RearFog
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_RearFog;

/* variable:     Cmd_ReverseGear
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_ReverseGear;

/* variable:     Cmd_FrontFog
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_FrontFog;

/* variable:     Cmd_WorkLamp_Rear
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_WorkLamp_Rear;

/* variable:     Cmd_StopLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_StopLamp;

/* variable:     Cmd_PuddleLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_PuddleLamp;

/* variable:     Cmd_Hazard
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_Hazard;

/* variable:     Cmd_InteriorLamp_Front
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      iç lamba 1
 */
extern BOOL FAR Cmd_InteriorLamp_Front;

/* variable:     Cmd_InteriorLamp_Back
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      iç lamba 2
 */
extern BOOL FAR Cmd_InteriorLamp_Back;

/* variable:     Cmd_FootBrakeMicro
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Fren Lambası
 */
extern BOOL FAR Cmd_FootBrakeMicro;

/* variable:     Stat_TurnSignal_Ctr1
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR Stat_TurnSignal_Ctr1;

/* variable:     Stat_TurnSignal_Ctr2
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR Stat_TurnSignal_Ctr2;

/* variable:     TriggerTurnLeftSignal
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         F_TRIG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern F_TRIG FAR TriggerTurnLeftSignal;

/* variable:     TriggerTurnRightSignal
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_In
 * type:         F_TRIG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern F_TRIG FAR TriggerTurnRightSignal;

/* variable:     Stat_HighBeam
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_HighBeam;

/* variable:     Stat_LowBeam
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_LowBeam;

/* variable:     Stat_TurnSignalLamp_Left
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_TurnSignalLamp_Left;

/* variable:     Stat_TurnSignalLamp_Right
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_TurnSignalLamp_Right;

/* variable:     Stat_RearFogLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_RearFogLamp;

/* variable:     Stat_ReverseGearLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_ReverseGearLamp;

/* variable:     Stat_BackupAlarm
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BackupAlarm;

/* variable:     Stat_FrontFog
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_FrontFog;

/* variable:     Stat_WorkLamp_Rear
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_WorkLamp_Rear;

/* variable:     Stat_StopLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_StopLamp;

/* variable:     Stat_ParkLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_ParkLamp;

/* variable:     Stat_SideLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_SideLamp;

/* variable:     Stat_PuddleLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_PuddleLamp;

/* variable:     Stat_Hazard
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_Hazard;

/* variable:     Stat_InteriorLamp_Front
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_InteriorLamp_Front;

/* variable:     Stat_InteriorLamp_Back
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_InteriorLamp_Back;

/* variable:     Stat_StopLamps
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_StopLamps;

/* variable:     Stat_GIGA_Busy
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/Data_Lamps_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_GIGA_Busy;

/* variable:     mainLamps
 * definition:   /project/MC2M/CPU0/SubRoutines/Lamps_Backup/mainLamps
 * type:         mainLamps
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainLamps_t FAR mainLamps;

/* variable:     Stat_Wiper
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      0=None 1=Int1 2=Int2 3=Slow 4=Fast
 */
extern SINT FAR Stat_Wiper;

/* variable:     Stat_WiperOld
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      0=None 1=Int1 2=Int2 3=Slow 4=Fast
 */
extern SINT FAR Stat_WiperOld;

/* variable:     Stat_Washer
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_Washer;

/* variable:     WasherWiperTimer
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         TOF
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TOF FAR WasherWiperTimer;

/* variable:     INT1_TP
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR INT1_TP;

/* variable:     INT2_TP
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR INT2_TP;

/* variable:     ParkClose_TP
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      Silecek yavaş konum voltaj giriş değeri
 */
extern TP FAR ParkClose_TP;

/* variable:     Cmd_WiperHigh
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Silecek hızlı konumu girişi
 */
extern BOOL FAR Cmd_WiperHigh;

/* variable:     Cmd_WiperLow
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Silecek yavaş konumu girişi
 */
extern BOOL FAR Cmd_WiperLow;

/* variable:     Cmd_WiperIntermittent1
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Silecek fasılalı konum1 girişi
 */
extern BOOL FAR Cmd_WiperIntermittent1;

/* variable:     Cmd_WiperIntermittent2
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Silecek fasılalı konum2 girişi
 */
extern BOOL FAR Cmd_WiperIntermittent2;

/* variable:     Stat_Wiper_Intermittent1
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Stat_Wiper_Intermittent1;

/* variable:     Cmd_Wiper_Intermittent1_Ctr
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UDINT FAR Cmd_Wiper_Intermittent1_Ctr;

/* variable:     IsWiper1Stopped
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Wiper1 park durum değişkeni
 */
extern BOOL FAR IsWiper1Stopped;

/* variable:     IsWiper2Stopped
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/Data_Wipers
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Wiper2 park durum değişkeni
 */
extern BOOL FAR IsWiper2Stopped;

/* variable:     mainWipers
 * definition:   /project/MC2M/CPU0/SubRoutines/Wipers/mainWipers
 * type:         mainWipers
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainWipers_t FAR mainWipers;

/* variable:     Stat_Dropbox
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      0=Neutral 1=Low 2=High -1=Alarm
 */
extern SINT FAR Stat_Dropbox;

/* variable:     Cmd_Dropbox_High
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_Dropbox_High;

/* variable:     Cmd_Dropbox_Low
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_Dropbox_Low;

/* variable:     Cmd_Dropbox_Neutral
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_Dropbox_Neutral;

/* variable:     Stat_Dropbox_High
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_Dropbox_High;

/* variable:     Stat_Dropbox_Low
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_Dropbox_Low;

/* variable:     Stat_Dropbox_Neutral
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_Dropbox_Neutral;

/* variable:     Dropbox_High_TP
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR Dropbox_High_TP;

/* variable:     Dropbox_Low_TP
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR Dropbox_Low_TP;

/* variable:     Dropbox_Neutral_TP
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR Dropbox_Neutral_TP;

/* variable:     Dropbox_Pulse_TP
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR Dropbox_Pulse_TP;

/* variable:     mainDropbox
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/mainDropbox
 * type:         mainDropbox
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainDropbox_t FAR mainDropbox;

/* variable:     Stat_ResistancesFront
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_ResistancesFront;

/* variable:     TimerResistanceFront
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR TimerResistanceFront;

/* variable:     Stat_ResistancesSide
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_ResistancesSide;

/* variable:     TimerResistanceSide
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR TimerResistanceSide;

/* variable:     TriggerRes
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         F_TRIG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern F_TRIG FAR TriggerRes;

/* variable:     Cmd_TriggerRes
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_TriggerRes;

/* variable:     mainResistances
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/mainResistances
 * type:         mainResistances
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainResistances_t FAR mainResistances;

/* variable:     Cmd_EngineProtection
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_EngineProtection;

/* variable:     Stat_EngineProtection
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_EngineProtection;

/* variable:     Stat_EngineProtectionLED
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_EngineProtectionLED;

/* variable:     Stat_EngineProtectionERR
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_EngineProtectionERR;

/* variable:     TimerEngineOverride
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR TimerEngineOverride;

/* variable:     TimerDelta_EngineOverride
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         TIME
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TIME FAR TimerDelta_EngineOverride;

/* variable:     Stat_EngProtectionSystemTimerOverride
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      in=SPN 1108 out=J5_5
 */
extern BOOL FAR Stat_EngProtectionSystemTimerOverride;

/* variable:     Stat_EngineProtection_Ctr1
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR Stat_EngineProtection_Ctr1;

/* variable:     TriggerEngineProtection
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/Data_EngineProtection
 * type:         F_TRIG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern F_TRIG FAR TriggerEngineProtection;

/* variable:     mainEngineProtection
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineProtection/mainEngineProtection
 * type:         mainEngineProtection
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainEngineProtection_t FAR mainEngineProtection;

/* variable:     Stat_ABS4WD
 * definition:   /project/MC2M/CPU0/SubRoutines/ABS_4WD/Data_ABS4WD
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_ABS4WD;

/* variable:     Trigger_44
 * definition:   /project/MC2M/CPU0/SubRoutines/ABS_4WD/Data_ABS4WD
 * type:         R_TRIG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern R_TRIG FAR Trigger_44;

/* variable:     Trigger_42
 * definition:   /project/MC2M/CPU0/SubRoutines/ABS_4WD/Data_ABS4WD
 * type:         F_TRIG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern F_TRIG FAR Trigger_42;

/* variable:     mainABS4WD
 * definition:   /project/MC2M/CPU0/SubRoutines/ABS_4WD/mainABS4WD
 * type:         mainABS4WD
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainABS4WD_t FAR mainABS4WD;

/* variable:     Stat_DiffLock
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_DiffLock;

/* variable:     Cmd_Dropbox_4WD_Off
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_Dropbox_4WD_Off;

/* variable:     Stat_DiffLock44
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_DiffLock44;

/* variable:     Cmd_RearAxleDiffLock
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_RearAxleDiffLock;

/* variable:     Cmd_FrontAxleDiffLock
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_FrontAxleDiffLock;

/* variable:     Stat_4x4
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR Stat_4x4;

/* variable:     Stat_Dropbox_4WD_Off
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_Dropbox_4WD_Off;

/* variable:     Stat_RearAxleDiffLock
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_RearAxleDiffLock;

/* variable:     Stat_FrontAxleDiffLock
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_FrontAxleDiffLock;

/* variable:     Cmd_4x4_Buzzer
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR Cmd_4x4_Buzzer;

/* variable:     mainDiffLock
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/mainDiffLock
 * type:         mainDiffLock
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainDiffLock_t FAR mainDiffLock;

/* variable:     BatteryLevel
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      SPN 158 * 0.5
 */
extern UINT FAR BatteryLevel;

/* variable:     EngineTempValue
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Coolant Temperature - SPN 110
 */
extern USINT FAR EngineTempValue;

/* variable:     EngineOilPressure
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Engine Oil Pressure - SPN 100
 */
extern USINT FAR EngineOilPressure;

/* variable:     TransOilTemperature
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      SPN 177
 */
extern INT FAR TransOilTemperature;

/* variable:     EHR_2_TotalEngineRevolutions
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      SPN 249
 */
extern UDINT FAR EHR_2_TotalEngineRevolutions;

/* variable:     Odometer_EBS_FrontAxleSpeed
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR Odometer_EBS_FrontAxleSpeed;

/* variable:     ECM_TotalAlarm
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Toplam Gönderilen Alarm Sayısı
 */
extern SINT FAR ECM_TotalAlarm;

/* variable:     ECM_indexAlarm
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Alarm indisi
 */
extern SINT FAR ECM_indexAlarm;

/* variable:     TCM_TotalAlarm
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Toplam Gönderilen Alarm Sayısı
 */
extern SINT FAR TCM_TotalAlarm;

/* variable:     TCM_indexAlarm
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Alarm indisi
 */
extern SINT FAR TCM_indexAlarm;

/* variable:     EBS_TotalAlarm
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Toplam Gönderilen Alarm Sayısı
 */
extern SINT FAR EBS_TotalAlarm;

/* variable:     EBS_indexAlarm
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Ekran Alarm indisi
 */
extern SINT FAR EBS_indexAlarm;

/* variable:     mainJ1939toCANOpen
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/mainJ1939toCANOpen
 * type:         mainJ1939toCANOpen
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainJ1939toCANOpen_t FAR mainJ1939toCANOpen;

/* variable:     mainECM_TCM_ABS_DIAG
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/mainECM_TCM_ABS_DIAG
 * type:         mainECM_TCM_ABS_DIAG
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainECM_TCM_ABS_DIAG_t FAR mainECM_TCM_ABS_DIAG;

/* variable:     WinchControl
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/WinchControl
 * type:         WinchControl
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern WinchControl_t FAR WinchControl;

/* variable:     Cmd_winch_Up_RS
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_winch_Up_RS;

/* variable:     Cmd_winch_Down_RS
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_winch_Down_RS;

/* variable:     Cmd_winch_Up_RC
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_winch_Up_RC;

/* variable:     Cmd_winch_Down_RC
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_winch_Down_RC;

/* variable:     Cmd_endOfRope
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_endOfRope;

/* variable:     Cmd_winch_clutch_RC
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_winch_clutch_RC;

/* variable:     Cmd_winch_clutch_RS
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_winch_clutch_RS;

/* variable:     stat_winch_Up_RS
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR stat_winch_Up_RS;

/* variable:     stat_winch_Down_RS
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR stat_winch_Down_RS;

/* variable:     stat_winch_Up_RC
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR stat_winch_Up_RC;

/* variable:     stat_winch_Down_RC
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR stat_winch_Down_RC;

/* variable:     stat_endOfRope
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR stat_endOfRope;

/* variable:     stat_winch_clutch_RC
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR stat_winch_clutch_RC;

/* variable:     stat_winch_clutch_RS
 * definition:   /project/MC2M/CPU0/SubRoutines/WinchControl/Data_Winch_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR stat_winch_clutch_RS;

/* variable:     BlackOutControl
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/BlackOutControl
 * type:         BlackOutControl
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BlackOutControl_t FAR BlackOutControl;

/* variable:     Cmd_BlackOut_S1
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BlackOut_S1;

/* variable:     Cmd_BlackOut_S2
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BlackOut_S2;

/* variable:     Cmd_BlackOut_S3
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BlackOut_S3;

/* variable:     Cmd_BlackOut_Tag
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BlackOut_Tag;

/* variable:     Cmd_BlackOut_0
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BlackOut_0;

/* variable:     Cmd_BlackOut_1
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BlackOut_1;

/* variable:     Cmd_BlackOut_2
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BlackOut_2;

/* variable:     Cmd_BO_ParkLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BO_ParkLamp;

/* variable:     Cmd_BO_StopLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BO_StopLamp;

/* variable:     Cmd_BO_FollowLight
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BO_FollowLight;

/* variable:     Cmd_BlackOut
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_BlackOut;

/* variable:     Stat_BlackOut_S1
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_S1;

/* variable:     Stat_BlackOut_S2
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_S2;

/* variable:     Stat_BlackOut_S3
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_S3;

/* variable:     Stat_BlackOut_Tag
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_Tag;

/* variable:     Stat_BlackOut_1
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_1;

/* variable:     Stat_BlackOut_2
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_2;

/* variable:     Stat_BO_InitiorLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BO_InitiorLamp;

/* variable:     Stat_BO_ParkLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BO_ParkLamp;

/* variable:     Stat_BO_StopLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BO_StopLamp;

/* variable:     Stat_BO_FollowLight
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BO_FollowLight;

/* variable:     Stat_BlackOut_S1_t
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_S1_t;

/* variable:     Stat_BlackOut_S2_t
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_S2_t;

/* variable:     Stat_BlackOut_S3_t
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_S3_t;

/* variable:     Stat_BlackOut_Tag_t
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_Tag_t;

/* variable:     Stat_BlackOut_1_t
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_1_t;

/* variable:     Stat_BlackOut_2_t
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_2_t;

/* variable:     Stat_BlackOut_H2L
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut_H2L;

/* variable:     BlackOut_DBCtr
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UINT FAR BlackOut_DBCtr;

/* variable:     Stat_BlackOut0
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut0;

/* variable:     Stat_BlackOut
 * definition:   /project/MC2M/CPU0/SubRoutines/BlackOutControl/Data_BO_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BlackOut;

/* variable:     mainOtherFunctions
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/mainOtherFunctions
 * type:         mainOtherFunctions
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainOtherFunctions_t FAR mainOtherFunctions;

/* variable:     Cmd_interiorVentilation_1
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_interiorVentilation_1;

/* variable:     Cmd_interiorVentilation_2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_interiorVentilation_2;

/* variable:     Cmd_FireFighter
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_FireFighter;

/* variable:     Cmd_Horn
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BYTE
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BYTE FAR Cmd_Horn;

/* variable:     Cmd_AlternatorFailure
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_AlternatorFailure;

/* variable:     Cmd_CentralLockSystemEnable
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_CentralLockSystemEnable;

/* variable:     Cmd_CentralLockSystemDisable
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_CentralLockSystemDisable;

/* variable:     Cmd_MineLock
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_MineLock;

/* variable:     Cmd_InterBuzzer
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_InterBuzzer;

/* variable:     Cmd_CentralLockSystem
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_CentralLockSystem;

/* variable:     Fan_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         TON
 * address:      not specified
 * constant:     False
 * comment:      fanın 5 sn sonra çalışması için
 */
extern TON FAR Fan_TON;

/* variable:     fanActiveDelay
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      fanın 5 sn sonra çalışması için
 */
extern INT FAR fanActiveDelay;

/* variable:     Fire_Obj
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      fanın 5 sn sonra çalışması için
 */
extern TP FAR Fire_Obj;

/* variable:     stat_FireFighterActiveFan
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Yangında fanları çalıştır
 */
extern BOOL FAR stat_FireFighterActiveFan;

/* variable:     stat_FireFighterActiveFan_2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Yangında fanları çalıştır
 */
extern BOOL FAR stat_FireFighterActiveFan_2;

/* variable:     Stat_Horn
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_Horn;

/* variable:     Stat_Redresor
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_Redresor;

/* variable:     Stat_CentralLockSystem
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Merkezi kilit Sistemi
 */
extern BOOL FAR Stat_CentralLockSystem;

/* variable:     Stat_MineLock
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Mayın Kilidi
 */
extern BOOL FAR Stat_MineLock;

/* variable:     Stat_InterBuzzer
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      İç buzzer
 */
extern BOOL FAR Stat_InterBuzzer;

/* variable:     stat_ResistanceShould2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      İç buzzer
 */
extern BOOL FAR stat_ResistanceShould2;

/* variable:     Cmd_4x4_Buzzer_Ctr1
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      İç buzzer
 */
extern UDINT FAR Cmd_4x4_Buzzer_Ctr1;

/* variable:     Stat_4x4_Buzzer1
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      İç buzzer
 */
extern BOOL FAR Stat_4x4_Buzzer1;

/* variable:     Cmd_4x4_Buzzer_Ctr2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UDINT FAR Cmd_4x4_Buzzer_Ctr2;

/* variable:     Stat_4x4_Buzzer2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Stat_4x4_Buzzer2;

/* variable:     Cmd_4x4_Buzzer_Ctr3
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern UDINT FAR Cmd_4x4_Buzzer_Ctr3;

/* variable:     Stat_4x4_Buzzer3
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Stat_4x4_Buzzer3;

/* variable:     Stat_4x4_Buzzer4
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Stat_4x4_Buzzer4;

/* variable:     Stat_4x4_Buzzer
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Stat_4x4_Buzzer;

/* variable:     Cmd_T50FuelHeater
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Cmd_T50FuelHeater;

/* variable:     Stat_FuelTemp
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Stat_FuelTemp;

/* variable:     Stat_T50TankTemp
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Stat_T50TankTemp;

/* variable:     Cmd_T50TankResistance
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Cmd_T50TankResistance;

/* variable:     Cmd_Bypass_Switch
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern BOOL FAR Cmd_Bypass_Switch;

/* variable:     TriggerCentralLockSystemEnable
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         F_TRIG
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern F_TRIG FAR TriggerCentralLockSystemEnable;

/* variable:     TriggerCentralLockSystemDisable
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         F_TRIG
 * address:      not specified
 * constant:     False
 * comment:      boş string
 */
extern F_TRIG FAR TriggerCentralLockSystemDisable;

/* variable:     TemInputFiltered
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      filitrelenmis signal değeri
 */
extern UINT FAR TemInputFiltered;

/* variable:     TotalTemInput
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      toplam değer
 */
extern UDINT FAR TotalTemInput;

/* variable:     TemInputArray
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         ARRAY120UINT
 * address:      not specified
 * constant:     False
 * comment:      signal ın arrayi
 */
extern ARRAY120UINT FAR TemInputArray;

/* variable:     TemLevelNormalized
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      normalize edilmiş değer 0 ile 100 arası
 */
extern INT FAR TemLevelNormalized;

/* variable:     TemInputFiltered_23
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      filitrelenmis signal değeri
 */
extern UINT FAR TemInputFiltered_23;

/* variable:     TotalTemInput_23
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      toplam değer
 */
extern UDINT FAR TotalTemInput_23;

/* variable:     TemInputArray_23
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         ARRAY120UINT
 * address:      not specified
 * constant:     False
 * comment:      signal ın arrayi
 */
extern ARRAY120UINT FAR TemInputArray_23;

/* variable:     TemLevelNormalized_23
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/Data_OutSideTemp_SensorFilter
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      normalize edilmiş değer 0 ile 100 arası
 */
extern INT FAR TemLevelNormalized_23;

/* variable:     outsideTemperatur
 * definition:   /project/MC2M/CPU0/SubRoutines/OutSideTemperatur/outsideTemperatur
 * type:         outsideTemperatur
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern outsideTemperatur_t FAR outsideTemperatur;

/* variable:     TemInputFiltered_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      filitrelenmis signal değeri
 */
extern UINT FAR TemInputFiltered_2;

/* variable:     TotalTemInput_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      toplam değer
 */
extern UDINT FAR TotalTemInput_2;

/* variable:     TemInputArray_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         ARRAY120UINT
 * address:      not specified
 * constant:     False
 * comment:      signal ın arrayi
 */
extern ARRAY120UINT FAR TemInputArray_2;

/* variable:     TemLevelNormalized_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      normalize edilmiş değer 0 ile 100 arası
 */
extern INT FAR TemLevelNormalized_2;

/* variable:     TemInputFiltered_22
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      filitrelenmis signal değeri
 */
extern UINT FAR TemInputFiltered_22;

/* variable:     TotalTemInput_22
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      toplam değer
 */
extern UDINT FAR TotalTemInput_22;

/* variable:     TemInputArray_22
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         ARRAY120UINT
 * address:      not specified
 * constant:     False
 * comment:      signal ın arrayi
 */
extern ARRAY120UINT FAR TemInputArray_22;

/* variable:     TemLevelNormalized_22
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_SensorFilter
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      normalize edilmiş değer 0 ile 100 arası
 */
extern INT FAR TemLevelNormalized_22;

/* variable:     inSideTemperatur
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/inSideTemperatur
 * type:         inSideTemperatur
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern inSideTemperatur_t FAR inSideTemperatur;

/* variable:     Stat_HydraulicDoorOpened
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Arka hidrolik kapı açık durumu
 */
extern BOOL FAR Stat_HydraulicDoorOpened;

/* variable:     Stat_HydraulicDoorClosed
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Arka hidrolik kapı kapalı durumu
 */
extern BOOL FAR Stat_HydraulicDoorClosed;

/* variable:     Stat_GunTowerDoor_1
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 1 switch
 */
extern BOOL FAR Stat_GunTowerDoor_1;

/* variable:     Stat_GunTowerDoor_2
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern BOOL FAR Stat_GunTowerDoor_2;

/* variable:     BackDoor_IN_Open_DBCtr
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern UINT FAR BackDoor_IN_Open_DBCtr;

/* variable:     BackDoor_OUT_Open_DBCtr
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern UINT FAR BackDoor_OUT_Open_DBCtr;

/* variable:     BackDoor_IN_Close_DBCtr
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern UINT FAR BackDoor_IN_Close_DBCtr;

/* variable:     BackDoor_OUT_Close_DBCtr
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern UINT FAR BackDoor_OUT_Close_DBCtr;

/* variable:     HydraulicDoorClosed_DBCtr
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern UINT FAR HydraulicDoorClosed_DBCtr;

/* variable:     BackDoorHandle_Open_DBCtr
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern UINT FAR BackDoorHandle_Open_DBCtr;

/* variable:     backDoorTest_state
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern UINT FAR backDoorTest_state;

/* variable:     backDoorTest_buzzer
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      Silah Kulesi kapı 2 switch
 */
extern USINT FAR backDoorTest_buzzer;

/* variable:     Cmd_HydraulicDoorOpened
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_HydraulicDoorOpened;

/* variable:     Cmd_HydraulicDoorClosed
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_HydraulicDoorClosed;

/* variable:     Cmd_GunTowerDoor_1
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_GunTowerDoor_1;

/* variable:     Cmd_GunTowerDoor_2
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_GunTowerDoor_2;

/* variable:     Stat_BackDoor_IN_Open
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BackDoor_IN_Open;

/* variable:     Stat_BackDoor_OUT_Open
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BackDoor_OUT_Open;

/* variable:     Stat_BackDoor_IN_Close
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BackDoor_IN_Close;

/* variable:     Stat_BackDoor_OUT_Close
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BackDoor_OUT_Close;

/* variable:     Stat_BackDoorHandle_Open
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_In
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_BackDoorHandle_Open;

/* variable:     doorsControl
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/doorsControl
 * type:         doorsControl
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern doorsControl_t FAR doorsControl;

/* variable:     vehiclePosition
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/vehiclePosition
 * type:         vehiclePosition
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern vehiclePosition_t FAR vehiclePosition;

/* variable:     FuelLevel_Normalized_TR_TL
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/Data_FuelTank
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern SINT FAR FuelLevel_Normalized_TR_TL;

/* variable:     FuelTankControl
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelTankControl
 * type:         FuelTankControl
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern FuelTankControl_t FAR FuelTankControl;

/* variable:     FuelInputFiltered_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern UINT FAR FuelInputFiltered_R;

/* variable:     TotalFuelInput_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalFuelInput_R;

/* variable:     FuelInputArray_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY100UINT FAR FuelInputArray_R;

/* variable:     FuelLevel_Normalized_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern SINT FAR FuelLevel_Normalized_R;

/* variable:     FuelLevel_Normalized2_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern SINT FAR FuelLevel_Normalized2_R;

/* variable:     TotalFuelInput2_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR TotalFuelInput2_R;

/* variable:     FuelInputArray2_R
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/Data_FuelLevel_Right
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ARRAY100UINT FAR FuelInputArray2_R;

/* variable:     main_FuelLevel_Right
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Right/main_FuelLevel_Right
 * type:         main_FuelLevel_Right
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_FuelLevel_Right_t FAR main_FuelLevel_Right;

/* variable:     FuelInputFiltered_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern UINT FAR FuelInputFiltered_L;

/* variable:     TotalFuelInput_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalFuelInput_L;

/* variable:     FuelInputArray_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY100UINT FAR FuelInputArray_L;

/* variable:     FuelLevel_Normalized_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern SINT FAR FuelLevel_Normalized_L;

/* variable:     FuelLevel_Normalized2_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern SINT FAR FuelLevel_Normalized2_L;

/* variable:     TotalFuelInput2_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern UDINT FAR TotalFuelInput2_L;

/* variable:     FuelInputArray2_L
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/Data_FuelLevel_Left
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ARRAY100UINT FAR FuelInputArray2_L;

/* variable:     main_FuelLevel_Left
 * definition:   /project/MC2M/CPU0/SubRoutines/FuelTankControl/FuelGauge/FuelTank_Left/main_FuelLevel_Left
 * type:         main_FuelLevel_Left
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_FuelLevel_Left_t FAR main_FuelLevel_Left;

/* variable:     Stat_ExhaustBrake
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         SINT
 * address:      not specified
 * constant:     False
 * comment:      0=Idle 1=Requesting 2=Active -1=Restricted
 */
extern SINT FAR Stat_ExhaustBrake;

/* variable:     TimerExBrake
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         TP
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern TP FAR TimerExBrake;

/* variable:     Cmd_ExBrake
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_ExBrake;

/* variable:     Cmd_EngineBrake
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Cmd_EngineBrake;

/* variable:     Stat_EngineBrake
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_EngineBrake;

/* variable:     Stat_EngineBrakeLED
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR Stat_EngineBrakeLED;

/* variable:     mainEngineBrake
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/mainEngineBrake
 * type:         mainEngineBrake
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainEngineBrake_t FAR mainEngineBrake;

/* variable:     AselsanDiagnostic
 * definition:   /project/MC2M/CPU0/SubRoutines/AselsanDiagnosticData/AselsanDiagnostic
 * type:         AselsanDiagnostic
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern AselsanDiagnostic_t FAR AselsanDiagnostic;

/* variable:     main_UKAS_Control
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/main_UKAS_Control
 * type:         main_UKAS_Control
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_UKAS_Control_t FAR main_UKAS_Control;

/* variable:     main_UKAS_Receive_Control
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/main_UKAS_Receive_Control
 * type:         main_UKAS_Receive_Control
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_UKAS_Receive_Control_t FAR main_UKAS_Receive_Control;

/* variable:     UKAS_TCM_ShiftSelector_Button_D
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/data_UKAS
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR UKAS_TCM_ShiftSelector_Button_D;

/* variable:     UKAS_TCM_ShiftSelector_Button_N
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/data_UKAS
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR UKAS_TCM_ShiftSelector_Button_N;

/* variable:     UKAS_TCM_ShiftSelector_Button_R
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/data_UKAS
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR UKAS_TCM_ShiftSelector_Button_R;

/* variable:     UKAS_ECM_Remote_Accelerator_Switch
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/data_UKAS
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern BOOL FAR UKAS_ECM_Remote_Accelerator_Switch;

/* variable:     UKAS_ECM_Remote_Accelerator
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/data_UKAS
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR UKAS_ECM_Remote_Accelerator;

/* variable:     RemoteAcceleratorPedalPosition1
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/data_UKAS
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR RemoteAcceleratorPedalPosition1;

/* variable:     gear_selected
 * definition:   /project/MC2M/CPU0/SubRoutines/UKASControl/data_UKAS
 * type:         USINT
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern USINT FAR gear_selected;

/* variable:     mainMobileye
 * definition:   /project/MC2M/CPU0/SubRoutines/MobileyeControl/mainMobileye
 * type:         mainMobileye
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainMobileye_t FAR mainMobileye;

/* variable:     mainNMSGUI
 * definition:   /project/MC2M/CPU0/SubRoutines/NMSGUI/mainNMSGUI
 * type:         mainNMSGUI
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainNMSGUI_t FAR mainNMSGUI;

/* variable:     mainVVR
 * definition:   /project/MC2M/CPU0/SubRoutines/VVRControl/mainVVR
 * type:         mainVVR
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainVVR_t FAR mainVVR;

/* variable:     RPM_Set
 * definition:   /project/MC2M/CPU0/SubRoutines/RemooteRPM/RPM_Set
 * type:         RPM_Set
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern RPM_Set_t FAR RPM_Set;

/* variable:     mainJoystick
 * definition:   /project/MC2M/CPU0/SubRoutines/JoystickControl/mainJoystick
 * type:         mainJoystick
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainJoystick_t FAR mainJoystick;

/* variable:     ActivateWDO
 * definition:   /project/MC2M/CPU0/LibraryFunctions/ActivateWDO
 * type:         ActivateWDO
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern ActivateWDO_t FAR ActivateWDO;

/* variable:     pressureSensorsControl
 * definition:   /project/MC2M/CPU0/Sensors/pressureSensorsControl
 * type:         pressureSensorsControl
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern pressureSensorsControl_t FAR pressureSensorsControl;

/* variable:     mainSensor1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/mainSensor1
 * type:         mainSensor1
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainSensor1_t FAR mainSensor1;

/* variable:     mainSensor2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/mainSensor2
 * type:         mainSensor2
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainSensor2_t FAR mainSensor2;

/* variable:     mainSensor3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/mainSensor3
 * type:         mainSensor3
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainSensor3_t FAR mainSensor3;

/* variable:     mainSensor4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/mainSensor4
 * type:         mainSensor4
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainSensor4_t FAR mainSensor4;

/* variable:     main_HydrolicPressureSensor
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/main_HydrolicPressureSensor
 * type:         main_HydrolicPressureSensor
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_HydrolicPressureSensor_t FAR main_HydrolicPressureSensor;

/* variable:     main_HydrolicTempSensor
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/main_HydrolicTempSensor
 * type:         main_HydrolicTempSensor
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_HydrolicTempSensor_t FAR main_HydrolicTempSensor;

/* variable:     main_WebastoTempSensor
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/main_WebastoTempSensor
 * type:         main_WebastoTempSensor
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_WebastoTempSensor_t FAR main_WebastoTempSensor;

/* variable:     mainFrontPark
 * definition:   /project/MC2M/CPU0/Sensors/FrontParkSensor/mainFrontPark
 * type:         mainFrontPark
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern mainFrontPark_t FAR mainFrontPark;

/* variable:     TempInputFiltered_FuelT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern UINT FAR TempInputFiltered_FuelT_L;

/* variable:     TotalTempInput_FuelT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalTempInput_FuelT_L;

/* variable:     TempInputArray_FuelT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY100UINT FAR TempInputArray_FuelT_L;

/* variable:     TempLevel_Normalized_FuelT_L
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/DATA_FuelTempLevel_Left
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern INT FAR TempLevel_Normalized_FuelT_L;

/* variable:     main_FuelTempLevel_Left
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Left/main_FuelTempLevel_Left
 * type:         main_FuelTempLevel_Left
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_FuelTempLevel_Left_t FAR main_FuelTempLevel_Left;

/* variable:     TempInputFiltered_FuelT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         UINT
 * address:      not specified
 * constant:     False
 * comment:      Filtered Signal Value
 */
extern UINT FAR TempInputFiltered_FuelT_R;

/* variable:     TotalTempInput_FuelT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         UDINT
 * address:      not specified
 * constant:     False
 * comment:      Total Value
 */
extern UDINT FAR TotalTempInput_FuelT_R;

/* variable:     TempInputArray_FuelT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         ARRAY100UINT
 * address:      not specified
 * constant:     False
 * comment:      Array of Signal
 */
extern ARRAY100UINT FAR TempInputArray_FuelT_R;

/* variable:     TempLevel_Normalized_FuelT_R
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/DATA_FuelTempLevel_Right
 * type:         INT
 * address:      not specified
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
extern INT FAR TempLevel_Normalized_FuelT_R;

/* variable:     main_FuelTempLevel_Right
 * definition:   /project/MC2M/CPU0/Sensors/FuelTankTemp/TempTank_Right/main_FuelTempLevel_Right
 * type:         main_FuelTempLevel_Right
 * address:      not specified
 * constant:     False
 * comment:      
 */
extern main_FuelTempLevel_Right_t FAR main_FuelTempLevel_Right;

/* variable:     vt3_alarm_disconnected_TERA12
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_TERA12;

/* variable:     vt3_alarm_disconnected_MC2M_CPU1
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_MC2M_CPU1;

/* variable:     vt3_alarm_disconnected_GIGA
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_GIGA;

/* variable:     vt3_alarm_disconnected_Debug_GUI
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_Debug_GUI;

/* variable:     vt3_alarm_disconnected_NMS_GUI
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      device %s is not connected to CAN-bus
 */
extern BOOL FAR vt3_alarm_disconnected_NMS_GUI;

/* variable:     vt3_bytearray_P_warning
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_warning;

/* variable:     vt3_bytearray_P_error
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %P
 */
extern BOOL FAR vt3_bytearray_P_error;

/* variable:     vt3_bytearray_R_warning
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      warning related to memory class %R
 */
extern BOOL FAR vt3_bytearray_R_warning;

/* variable:     vt3_bytearray_R_error
 * definition:   /project/MC2M/CPU0
 * type:         BOOL
 * address:      not specified
 * constant:     False
 * comment:      error related to memory class %R
 */
extern BOOL FAR vt3_bytearray_R_error;

/* variable:     vt3_alarm_inhibition_bitmask
 * definition:   /project/MC2M/CPU0
 * type:         WORD
 * address:      not specified
 * constant:     False
 * comment:      bitmask of alarm inhibitions
 */
extern WORD FAR vt3_alarm_inhibition_bitmask;

/**************************************************************************/

/* declaration of variables with address in %M */

/* variable:     HTempInputFiltered_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Sensor_WebastoTemp_Filter_data
 * type:         UINT
 * address:      %MW0
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define HTempInputFiltered_2 (*(UINT FARPTR)(&BYTEM[0]))

/* variable:     HTempLevel_Normalized_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Sensor_WebastoTemp_Filter_data
 * type:         SINT
 * address:      %MB2
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define HTempLevel_Normalized_2 (*(SINT FARPTR)(&BYTEM[2]))

/* variable:     HTempTotalInput_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Sensor_WebastoTemp_Filter_data
 * type:         UDINT
 * address:      %MD4
 * constant:     False
 * comment:      Total Value
 */
#define HTempTotalInput_2 (*(UDINT FARPTR)(&BYTEM[4]))

/* variable:     DropboxFeedbackState
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         USINT
 * address:      %MB10
 * constant:     False
 * comment:      
 */
#define DropboxFeedbackState (*(USINT FARPTR)(&BYTEM[10]))

/* variable:     DropboxDoutState
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         USINT
 * address:      %MB11
 * constant:     False
 * comment:      
 */
#define DropboxDoutState (*(USINT FARPTR)(&BYTEM[11]))

/* variable:     DifflockFeedbackState
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         USINT
 * address:      %MB16
 * constant:     False
 * comment:      
 */
#define DifflockFeedbackState (*(USINT FARPTR)(&BYTEM[16]))

/* variable:     DifflockDoutState
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         USINT
 * address:      %MB17
 * constant:     False
 * comment:      
 */
#define DifflockDoutState (*(USINT FARPTR)(&BYTEM[17]))

/* variable:     Stat_WarningL2H
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      %MX18
 * constant:     False
 * comment:      
 */
#define Stat_WarningL2H (*(BOOL FARPTR)(&BYTEM[18]))

/* variable:     Stat_WarningH2L
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      %MX19
 * constant:     False
 * comment:      
 */
#define Stat_WarningH2L (*(BOOL FARPTR)(&BYTEM[19]))

/* variable:     Feedback_DropboxHigh_R_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         R_TRIG
 * address:      %M20
 * constant:     False
 * comment:      
 */
#define Feedback_DropboxHigh_R_TRIG (*(R_TRIG FARPTR)(&BYTEM[20]))

/* variable:     TCM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         USINT
 * address:      %MB25
 * constant:     False
 * comment:      SPN 249
 */
#define TCM_FailureModeIdentifier (*(USINT FARPTR)(&BYTEM[25]))

/* variable:     ECM_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         USINT
 * address:      %MB26
 * constant:     False
 * comment:      SPN 249
 */
#define ECM_FailureModeIdentifier (*(USINT FARPTR)(&BYTEM[26]))

/* variable:     EBS_FailureModeIdentifier
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         USINT
 * address:      %MB27
 * constant:     False
 * comment:      SPN 249
 */
#define EBS_FailureModeIdentifier (*(USINT FARPTR)(&BYTEM[27]))

/* variable:     Feedback_DropboxLow_R_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         R_TRIG
 * address:      %M28
 * constant:     False
 * comment:      
 */
#define Feedback_DropboxLow_R_TRIG (*(R_TRIG FARPTR)(&BYTEM[28]))

/* variable:     tmp_t50_res
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      %MX33
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define tmp_t50_res (*(BOOL FARPTR)(&BYTEM[33]))

/* variable:     tmp_fuel_t50
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      %MX34
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define tmp_fuel_t50 (*(BOOL FARPTR)(&BYTEM[34]))

/* variable:     WorkState_WebastoTankTemperature
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      %MX35
 * constant:     False
 * comment:      
 */
#define WorkState_WebastoTankTemperature (*(BOOL FARPTR)(&BYTEM[35]))

/* variable:     Feedback_FrontAxle_R_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         R_TRIG
 * address:      %M36
 * constant:     False
 * comment:      
 */
#define Feedback_FrontAxle_R_TRIG (*(R_TRIG FARPTR)(&BYTEM[36]))

/* variable:     AlarmState_FuelLevelLow_T1
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX41
 * constant:     False
 * comment:      
 */
#define AlarmState_FuelLevelLow_T1 (*(BOOL FARPTR)(&BYTEM[41]))

/* variable:     AlarmState_FuelLevelLow_T2
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX42
 * constant:     False
 * comment:      
 */
#define AlarmState_FuelLevelLow_T2 (*(BOOL FARPTR)(&BYTEM[42]))

/* variable:     Feedback_RearAxle_R_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         R_TRIG
 * address:      %M44
 * constant:     False
 * comment:      
 */
#define Feedback_RearAxle_R_TRIG (*(R_TRIG FARPTR)(&BYTEM[44]))

/* variable:     Feedback_4WD_DiffLock_R_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         R_TRIG
 * address:      %M52
 * constant:     False
 * comment:      
 */
#define Feedback_4WD_DiffLock_R_TRIG (*(R_TRIG FARPTR)(&BYTEM[52]))

/* variable:     Feedback_DropboxHigh_F_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         F_TRIG
 * address:      %M60
 * constant:     False
 * comment:      
 */
#define Feedback_DropboxHigh_F_TRIG (*(F_TRIG FARPTR)(&BYTEM[60]))

/* variable:     Feedback_DropboxLow_F_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         F_TRIG
 * address:      %M68
 * constant:     False
 * comment:      
 */
#define Feedback_DropboxLow_F_TRIG (*(F_TRIG FARPTR)(&BYTEM[68]))

/* variable:     Feedback_FrontAxle_F_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         F_TRIG
 * address:      %M76
 * constant:     False
 * comment:      
 */
#define Feedback_FrontAxle_F_TRIG (*(F_TRIG FARPTR)(&BYTEM[76]))

/* variable:     Feedback_RearAxle_F_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         F_TRIG
 * address:      %M84
 * constant:     False
 * comment:      
 */
#define Feedback_RearAxle_F_TRIG (*(F_TRIG FARPTR)(&BYTEM[84]))

/* variable:     Feedback_4WD_DiffLock_F_TRIG
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         F_TRIG
 * address:      %M92
 * constant:     False
 * comment:      
 */
#define Feedback_4WD_DiffLock_F_TRIG (*(F_TRIG FARPTR)(&BYTEM[92]))

/* variable:     TCM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         UDINT
 * address:      %MD100
 * constant:     False
 * comment:      SPN 249
 */
#define TCM_SuspectParameterNumber (*(UDINT FARPTR)(&BYTEM[100]))

/* variable:     ECM_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         UDINT
 * address:      %MD104
 * constant:     False
 * comment:      SPN 249
 */
#define ECM_SuspectParameterNumber (*(UDINT FARPTR)(&BYTEM[104]))

/* variable:     EBS_SuspectParameterNumber
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         UDINT
 * address:      %MD108
 * constant:     False
 * comment:      SPN 249
 */
#define EBS_SuspectParameterNumber (*(UDINT FARPTR)(&BYTEM[108]))

/* variable:     Total_Odometer_Low
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         UINT
 * address:      %MW112
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define Total_Odometer_Low (*(UINT FARPTR)(&BYTEM[112]))

/* variable:     Total_Odometer_High
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         UINT
 * address:      %MW114
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define Total_Odometer_High (*(UINT FARPTR)(&BYTEM[114]))

/* variable:     TotalOdometer_d
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         UDINT
 * address:      %MD116
 * constant:     False
 * comment:      
 */
#define TotalOdometer_d (*(UDINT FARPTR)(&BYTEM[116]))

/* variable:     Odometer
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %MD120
 * constant:     False
 * comment:      Hesaplanan birim mesafe(aaslan)
 */
#define Odometer (*(REAL FARPTR)(&BYTEM[120]))

/* variable:     AlarmState_SteeringWheelRepPump
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX156
 * constant:     False
 * comment:      
 */
#define AlarmState_SteeringWheelRepPump (*(BOOL FARPTR)(&BYTEM[156]))

/* variable:     Blink07
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         BOOL
 * address:      %MX158
 * constant:     False
 * comment:      
 */
#define Blink07 (*(BOOL FARPTR)(&BYTEM[158]))

/* variable:     Blink06
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         BOOL
 * address:      %MX159
 * constant:     False
 * comment:      
 */
#define Blink06 (*(BOOL FARPTR)(&BYTEM[159]))

/* variable:     Blink05
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         BOOL
 * address:      %MX160
 * constant:     False
 * comment:      
 */
#define Blink05 (*(BOOL FARPTR)(&BYTEM[160]))

/* variable:     Blink10
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         BOOL
 * address:      %MX161
 * constant:     False
 * comment:      
 */
#define Blink10 (*(BOOL FARPTR)(&BYTEM[161]))

/* variable:     SaveParameter
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         BOOL
 * address:      %MX162
 * constant:     False
 * comment:      Save Parameter of R Type
 */
#define SaveParameter (*(BOOL FARPTR)(&BYTEM[162]))

/* variable:     SWVersion
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         USINT
 * address:      %MB163
 * constant:     False
 * comment:      Software Version
 */
#define SWVersion (*(USINT FARPTR)(&BYTEM[163]))

/* variable:     MainLoop
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         UDINT
 * address:      %MD164
 * constant:     False
 * comment:      Main Counter +1 per 100msec
 */
#define MainLoop (*(UDINT FARPTR)(&BYTEM[164]))

/* variable:     DateTimeNow
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         DATE_AND_TIME
 * address:      %ML168
 * constant:     False
 * comment:      Current Date and Time
 */
#define DateTimeNow (*(DATE_AND_TIME FARPTR)(&BYTEM[168]))

/* variable:     SetDateTime
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         BOOL
 * address:      %MX176
 * constant:     False
 * comment:      Update Date and Time
 */
#define SetDateTime (*(BOOL FARPTR)(&BYTEM[176]))

/* variable:     outSideTemperature
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         SINT
 * address:      %MB177
 * constant:     False
 * comment:      Dış ortam sıcklaığı
 */
#define outSideTemperature (*(SINT FARPTR)(&BYTEM[177]))

/* variable:     GlobalFMI
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         USINT
 * address:      %MB178
 * constant:     False
 * comment:      
 */
#define GlobalFMI (*(USINT FARPTR)(&BYTEM[178]))

/* variable:     EngineOFF
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX179
 * constant:     False
 * comment:      
 */
#define EngineOFF (*(BOOL FARPTR)(&BYTEM[179]))

/* variable:     inSideTemperature
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         SINT
 * address:      %MB180
 * constant:     False
 * comment:      İç ortam sıcklaığı
 */
#define inSideTemperature (*(SINT FARPTR)(&BYTEM[180]))

/* variable:     Stat_interiorVentilation_1
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      %MX181
 * constant:     False
 * comment:      iç fan 1
 */
#define Stat_interiorVentilation_1 (*(BOOL FARPTR)(&BYTEM[181]))

/* variable:     InputFiltered_Sensor1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/Data_SensorFilter1
 * type:         UINT
 * address:      %MW182
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define InputFiltered_Sensor1 (*(UINT FARPTR)(&BYTEM[182]))

/* variable:     GlobalSPN
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         UDINT
 * address:      %MD184
 * constant:     False
 * comment:      
 */
#define GlobalSPN (*(UDINT FARPTR)(&BYTEM[184]))

/* variable:     DateTimeUpdate
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         DATE_AND_TIME
 * address:      %ML188
 * constant:     False
 * comment:      Requested Date and Time
 */
#define DateTimeUpdate (*(DATE_AND_TIME FARPTR)(&BYTEM[188]))

/* variable:     Stat_interiorVentilation_2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      %MX196
 * constant:     False
 * comment:      iç fan 2
 */
#define Stat_interiorVentilation_2 (*(BOOL FARPTR)(&BYTEM[196]))

/* variable:     stat_VehicleOn
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      %MX197
 * constant:     False
 * comment:      
 */
#define stat_VehicleOn (*(BOOL FARPTR)(&BYTEM[197]))

/* variable:     stat_ResistanceShould
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      %MX198
 * constant:     False
 * comment:      tank ısıtma resistansı devreye girmeli
 */
#define stat_ResistanceShould (*(BOOL FARPTR)(&BYTEM[198]))

/* variable:     fuelTank_1_Temperature
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      %MB199
 * constant:     False
 * comment:      birinci tank sıcaklık değeri
 */
#define fuelTank_1_Temperature (*(SINT FARPTR)(&BYTEM[199]))

/* variable:     fuelTank_2_Temperature
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      %MB200
 * constant:     False
 * comment:      ikinci tank sıcaklık değeri
 */
#define fuelTank_2_Temperature (*(SINT FARPTR)(&BYTEM[200]))

/* variable:     Stat_FireFighter
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         BOOL
 * address:      %MX201
 * constant:     False
 * comment:      CTIS & yangın söndürme Blackout
 */
#define Stat_FireFighter (*(BOOL FARPTR)(&BYTEM[201]))

/* variable:     InputFiltered_Sensor2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/Data_SensorFilter2
 * type:         UINT
 * address:      %MW202
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define InputFiltered_Sensor2 (*(UINT FARPTR)(&BYTEM[202]))

/* variable:     TotalInput_Sensor1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/Data_SensorFilter1
 * type:         UDINT
 * address:      %MD204
 * constant:     False
 * comment:      Total Value
 */
#define TotalInput_Sensor1 (*(UDINT FARPTR)(&BYTEM[204]))

/* variable:     InputFiltered_Sensor3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/Data_SensorFilter3
 * type:         UINT
 * address:      %MW208
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define InputFiltered_Sensor3 (*(UINT FARPTR)(&BYTEM[208]))

/* variable:     AngX_ACT
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      %MW210
 * constant:     False
 * comment:      X Hesaplanan Açı
 */
#define AngX_ACT (*(INT FARPTR)(&BYTEM[210]))

/* variable:     InputFiltered_Sensor4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/Data_SensorFilter4
 * type:         UINT
 * address:      %MW212
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define InputFiltered_Sensor4 (*(UINT FARPTR)(&BYTEM[212]))

/* variable:     AngY_ACT
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      %MW214
 * constant:     False
 * comment:      Y Hesaplanan Açı
 */
#define AngY_ACT (*(INT FARPTR)(&BYTEM[214]))

/* variable:     InputArray_Sensor1
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/ParkingBrake/Data_SensorFilter1
 * type:         ARRAY100UINT
 * address:      %M216
 * constant:     False
 * comment:      Array of Signal
 */
#define InputArray_Sensor1 (*(ARRAY100UINT FARPTR)(&BYTEM[216]))

/* variable:     TotalInput_Sensor2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/Data_SensorFilter2
 * type:         UDINT
 * address:      %MD416
 * constant:     False
 * comment:      Total Value
 */
#define TotalInput_Sensor2 (*(UDINT FARPTR)(&BYTEM[416]))

/* variable:     TotalInput_Sensor3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/Data_SensorFilter3
 * type:         UDINT
 * address:      %MD420
 * constant:     False
 * comment:      Total Value
 */
#define TotalInput_Sensor3 (*(UDINT FARPTR)(&BYTEM[420]))

/* variable:     TotalInput_Sensor4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/Data_SensorFilter4
 * type:         UDINT
 * address:      %MD424
 * constant:     False
 * comment:      Total Value
 */
#define TotalInput_Sensor4 (*(UDINT FARPTR)(&BYTEM[424]))

/* variable:     PresLevel_Normalized
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Sensor_HydrolicPressure_Filter_data
 * type:         SINT
 * address:      %MB447
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define PresLevel_Normalized (*(SINT FARPTR)(&BYTEM[447]))

/* variable:     InputFilteredPres
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Sensor_HydrolicPressure_Filter_data
 * type:         UINT
 * address:      %MW456
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define InputFilteredPres (*(UINT FARPTR)(&BYTEM[456]))

/* variable:     HTempInputFiltered
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Sensor_HydrolicTemp_Filter_data
 * type:         UINT
 * address:      %MW458
 * constant:     False
 * comment:      Filtered Signal Value
 */
#define HTempInputFiltered (*(UINT FARPTR)(&BYTEM[458]))

/* variable:     TotalPresInput
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Sensor_HydrolicPressure_Filter_data
 * type:         UDINT
 * address:      %MD460
 * constant:     False
 * comment:      Total Value
 */
#define TotalPresInput (*(UDINT FARPTR)(&BYTEM[460]))

/* variable:     HTempTotalInput
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Sensor_HydrolicTemp_Filter_data
 * type:         UDINT
 * address:      %MD464
 * constant:     False
 * comment:      Total Value
 */
#define HTempTotalInput (*(UDINT FARPTR)(&BYTEM[464]))

/* variable:     HTempLevel_Normalized
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Sensor_HydrolicTemp_Filter_data
 * type:         USINT
 * address:      %MB468
 * constant:     False
 * comment:      Normalized value from 0 to 100
 */
#define HTempLevel_Normalized (*(USINT FARPTR)(&BYTEM[468]))

/* variable:     AlarmState_OilFilterDirty_1
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX469
 * constant:     False
 * comment:      
 */
#define AlarmState_OilFilterDirty_1 (*(BOOL FARPTR)(&BYTEM[469]))

/* variable:     AlarmState_OilFilterDirty_2
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX470
 * constant:     False
 * comment:      
 */
#define AlarmState_OilFilterDirty_2 (*(BOOL FARPTR)(&BYTEM[470]))

/* variable:     AlarmState_HydrolicTankPressure
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX471
 * constant:     False
 * comment:      
 */
#define AlarmState_HydrolicTankPressure (*(BOOL FARPTR)(&BYTEM[471]))

/* variable:     AlarmState_HydrolicTankTemp
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX472
 * constant:     False
 * comment:      
 */
#define AlarmState_HydrolicTankTemp (*(BOOL FARPTR)(&BYTEM[472]))

/* variable:     AlarmState_WeatherCold
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX473
 * constant:     False
 * comment:      
 */
#define AlarmState_WeatherCold (*(BOOL FARPTR)(&BYTEM[473]))

/* variable:     AlarmState_DoorOpen_2
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX474
 * constant:     False
 * comment:      
 */
#define AlarmState_DoorOpen_2 (*(BOOL FARPTR)(&BYTEM[474]))

/* variable:     AlarmState_DoorOpen_3
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX475
 * constant:     False
 * comment:      
 */
#define AlarmState_DoorOpen_3 (*(BOOL FARPTR)(&BYTEM[475]))

/* variable:     AlarmState_DoorOpen_4
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX476
 * constant:     False
 * comment:      
 */
#define AlarmState_DoorOpen_4 (*(BOOL FARPTR)(&BYTEM[476]))

/* variable:     AlarmState_DoorOpen_5
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX477
 * constant:     False
 * comment:      
 */
#define AlarmState_DoorOpen_5 (*(BOOL FARPTR)(&BYTEM[477]))

/* variable:     SignalLoop
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         UDINT
 * address:      %MD520
 * constant:     False
 * comment:      Signal Counter
 */
#define SignalLoop (*(UDINT FARPTR)(&BYTEM[520]))

/* variable:     AlarmState_Battery
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX524
 * constant:     False
 * comment:      
 */
#define AlarmState_Battery (*(BOOL FARPTR)(&BYTEM[524]))

/* variable:     AlarmState_TransOilTemperature
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX525
 * constant:     False
 * comment:      
 */
#define AlarmState_TransOilTemperature (*(BOOL FARPTR)(&BYTEM[525]))

/* variable:     AlarmState_BrakeIndicator
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX526
 * constant:     False
 * comment:      
 */
#define AlarmState_BrakeIndicator (*(BOOL FARPTR)(&BYTEM[526]))

/* variable:     AlarmState_EngineOilLevel
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX527
 * constant:     False
 * comment:      
 */
#define AlarmState_EngineOilLevel (*(BOOL FARPTR)(&BYTEM[527]))

/* variable:     AlarmState_Alternator
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX528
 * constant:     False
 * comment:      
 */
#define AlarmState_Alternator (*(BOOL FARPTR)(&BYTEM[528]))

/* variable:     AlarmState_ECM_RedLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX529
 * constant:     False
 * comment:      
 */
#define AlarmState_ECM_RedLamp (*(BOOL FARPTR)(&BYTEM[529]))

/* variable:     AlarmState_ECM_AmberLamp
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX530
 * constant:     False
 * comment:      
 */
#define AlarmState_ECM_AmberLamp (*(BOOL FARPTR)(&BYTEM[530]))

/* variable:     AlarmState_AirFilterClogged
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX531
 * constant:     False
 * comment:      
 */
#define AlarmState_AirFilterClogged (*(BOOL FARPTR)(&BYTEM[531]))

/* variable:     AlarmState_DoorOpen_1
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX532
 * constant:     False
 * comment:      
 */
#define AlarmState_DoorOpen_1 (*(BOOL FARPTR)(&BYTEM[532]))

/* variable:     AlarmState_CheckTransmission
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX533
 * constant:     False
 * comment:      
 */
#define AlarmState_CheckTransmission (*(BOOL FARPTR)(&BYTEM[533]))

/* variable:     AlarmState_SumpTemp
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX534
 * constant:     False
 * comment:      
 */
#define AlarmState_SumpTemp (*(BOOL FARPTR)(&BYTEM[534]))

/* variable:     AlarmState_EngineOilPressure
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX535
 * constant:     False
 * comment:      
 */
#define AlarmState_EngineOilPressure (*(BOOL FARPTR)(&BYTEM[535]))

/* variable:     AlarmState_EngineOilTemperature
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX536
 * constant:     False
 * comment:      
 */
#define AlarmState_EngineOilTemperature (*(BOOL FARPTR)(&BYTEM[536]))

/* variable:     AlarmState_FuelLevelLow
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX537
 * constant:     False
 * comment:      
 */
#define AlarmState_FuelLevelLow (*(BOOL FARPTR)(&BYTEM[537]))

/* variable:     AlarmState_AccessoryPressure
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX538
 * constant:     False
 * comment:      
 */
#define AlarmState_AccessoryPressure (*(BOOL FARPTR)(&BYTEM[538]))

/* variable:     AlarmState_ServiceBrake1Pressure
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX539
 * constant:     False
 * comment:      
 */
#define AlarmState_ServiceBrake1Pressure (*(BOOL FARPTR)(&BYTEM[539]))

/* variable:     AlarmState_ServiceBrake2Pressure
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX540
 * constant:     False
 * comment:      
 */
#define AlarmState_ServiceBrake2Pressure (*(BOOL FARPTR)(&BYTEM[540]))

/* variable:     AlarmState_ParkBrakePressure
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX541
 * constant:     False
 * comment:      
 */
#define AlarmState_ParkBrakePressure (*(BOOL FARPTR)(&BYTEM[541]))

/* variable:     AlarmState_EngineCoolantLevelLow
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX542
 * constant:     False
 * comment:      
 */
#define AlarmState_EngineCoolantLevelLow (*(BOOL FARPTR)(&BYTEM[542]))

/* variable:     AlarmState_DirectionHyraulicLevel
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX543
 * constant:     False
 * comment:      
 */
#define AlarmState_DirectionHyraulicLevel (*(BOOL FARPTR)(&BYTEM[543]))

/* variable:     AlarmState_BrakeLiningWear
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         BOOL
 * address:      %MX544
 * constant:     False
 * comment:      
 */
#define AlarmState_BrakeLiningWear (*(BOOL FARPTR)(&BYTEM[544]))

/* variable:     LampAlarm_L01_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M548
 * constant:     False
 * comment:      
 */
#define LampAlarm_L01_TON (*(TON FARPTR)(&BYTEM[548]))

/* variable:     LampAlarm_L02_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M564
 * constant:     False
 * comment:      
 */
#define LampAlarm_L02_TON (*(TON FARPTR)(&BYTEM[564]))

/* variable:     LampAlarm_L03_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M580
 * constant:     False
 * comment:      
 */
#define LampAlarm_L03_TON (*(TON FARPTR)(&BYTEM[580]))

/* variable:     LampAlarm_L04_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M596
 * constant:     False
 * comment:      
 */
#define LampAlarm_L04_TON (*(TON FARPTR)(&BYTEM[596]))

/* variable:     LampAlarm_L05_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M612
 * constant:     False
 * comment:      
 */
#define LampAlarm_L05_TON (*(TON FARPTR)(&BYTEM[612]))

/* variable:     LampAlarm_L06_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M628
 * constant:     False
 * comment:      
 */
#define LampAlarm_L06_TON (*(TON FARPTR)(&BYTEM[628]))

/* variable:     LampAlarm_L07_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M644
 * constant:     False
 * comment:      
 */
#define LampAlarm_L07_TON (*(TON FARPTR)(&BYTEM[644]))

/* variable:     LampAlarm_L08_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M660
 * constant:     False
 * comment:      
 */
#define LampAlarm_L08_TON (*(TON FARPTR)(&BYTEM[660]))

/* variable:     LampAlarm_L09_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M676
 * constant:     False
 * comment:      
 */
#define LampAlarm_L09_TON (*(TON FARPTR)(&BYTEM[676]))

/* variable:     LampAlarm_L10_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M692
 * constant:     False
 * comment:      
 */
#define LampAlarm_L10_TON (*(TON FARPTR)(&BYTEM[692]))

/* variable:     LampAlarm_L11_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M708
 * constant:     False
 * comment:      
 */
#define LampAlarm_L11_TON (*(TON FARPTR)(&BYTEM[708]))

/* variable:     LampAlarm_L12_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M724
 * constant:     False
 * comment:      
 */
#define LampAlarm_L12_TON (*(TON FARPTR)(&BYTEM[724]))

/* variable:     LampAlarm_L13_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M740
 * constant:     False
 * comment:      
 */
#define LampAlarm_L13_TON (*(TON FARPTR)(&BYTEM[740]))

/* variable:     LampAlarm_L14_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M756
 * constant:     False
 * comment:      
 */
#define LampAlarm_L14_TON (*(TON FARPTR)(&BYTEM[756]))

/* variable:     LampAlarm_L15_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M772
 * constant:     False
 * comment:      
 */
#define LampAlarm_L15_TON (*(TON FARPTR)(&BYTEM[772]))

/* variable:     LampAlarm_L16_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M788
 * constant:     False
 * comment:      
 */
#define LampAlarm_L16_TON (*(TON FARPTR)(&BYTEM[788]))

/* variable:     LampAlarm_L17_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M804
 * constant:     False
 * comment:      
 */
#define LampAlarm_L17_TON (*(TON FARPTR)(&BYTEM[804]))

/* variable:     LampAlarm_L18_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M820
 * constant:     False
 * comment:      
 */
#define LampAlarm_L18_TON (*(TON FARPTR)(&BYTEM[820]))

/* variable:     LampAlarm_L19_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M836
 * constant:     False
 * comment:      
 */
#define LampAlarm_L19_TON (*(TON FARPTR)(&BYTEM[836]))

/* variable:     LampAlarm_L20_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M852
 * constant:     False
 * comment:      
 */
#define LampAlarm_L20_TON (*(TON FARPTR)(&BYTEM[852]))

/* variable:     LampAlarm_L21_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M868
 * constant:     False
 * comment:      
 */
#define LampAlarm_L21_TON (*(TON FARPTR)(&BYTEM[868]))

/* variable:     LampAlarm_L22_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M884
 * constant:     False
 * comment:      
 */
#define LampAlarm_L22_TON (*(TON FARPTR)(&BYTEM[884]))

/* variable:     LampAlarm_L23_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M900
 * constant:     False
 * comment:      
 */
#define LampAlarm_L23_TON (*(TON FARPTR)(&BYTEM[900]))

/* variable:     LampAlarm_L24_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M916
 * constant:     False
 * comment:      
 */
#define LampAlarm_L24_TON (*(TON FARPTR)(&BYTEM[916]))

/* variable:     LampAlarm_L25_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M932
 * constant:     False
 * comment:      
 */
#define LampAlarm_L25_TON (*(TON FARPTR)(&BYTEM[932]))

/* variable:     LampAlarm_L26_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M948
 * constant:     False
 * comment:      
 */
#define LampAlarm_L26_TON (*(TON FARPTR)(&BYTEM[948]))

/* variable:     LampAlarm_L27_TON
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Alarm_data
 * type:         TON
 * address:      %M964
 * constant:     False
 * comment:      
 */
#define LampAlarm_L27_TON (*(TON FARPTR)(&BYTEM[964]))

/* variable:     InputArray_Sensor2
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_1/Data_SensorFilter2
 * type:         ARRAY100UINT
 * address:      %M980
 * constant:     False
 * comment:      Array of Signal
 */
#define InputArray_Sensor2 (*(ARRAY100UINT FARPTR)(&BYTEM[980]))

/* variable:     InputArray_Sensor3
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/FootBrakeSensor_2/Data_SensorFilter3
 * type:         ARRAY100UINT
 * address:      %M1180
 * constant:     False
 * comment:      Array of Signal
 */
#define InputArray_Sensor3 (*(ARRAY100UINT FARPTR)(&BYTEM[1180]))

/* variable:     InputArray_Sensor4
 * definition:   /project/MC2M/CPU0/Sensors/BarGauges/Accessory/Data_SensorFilter4
 * type:         ARRAY100UINT
 * address:      %M1380
 * constant:     False
 * comment:      Array of Signal
 */
#define InputArray_Sensor4 (*(ARRAY100UINT FARPTR)(&BYTEM[1380]))

/* variable:     HTempInputArray_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Sensor_WebastoTemp_Filter_data
 * type:         ARRAY100UINT
 * address:      %M1780
 * constant:     False
 * comment:      Array of Signal
 */
#define HTempInputArray_2 (*(ARRAY100UINT FARPTR)(&BYTEM[1780]))

/* variable:     PresInputArray
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Sensor_HydrolicPressure_Filter_data
 * type:         ARRAY100UINT
 * address:      %M2380
 * constant:     False
 * comment:      Array of Signal
 */
#define PresInputArray (*(ARRAY100UINT FARPTR)(&BYTEM[2380]))

/* variable:     HTempInputArray
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Sensor_HydrolicTemp_Filter_data
 * type:         ARRAY100UINT
 * address:      %M2580
 * constant:     False
 * comment:      Array of Signal
 */
#define HTempInputArray (*(ARRAY100UINT FARPTR)(&BYTEM[2580]))

/* size of array BYTEM */
#define BYTEM_SIZE (2780)

/**************************************************************************/

/* declaration of variables with address in %P */

/* variable:     EngineTempValue1
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         USINT
 * address:      %PB0
 * constant:     False
 * comment:      SPN 249
 */
#define EngineTempValue1 (*(USINT FARPTR)(&BYTEP[0]))

/* variable:     Test_High
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      %PX1
 * constant:     False
 * comment:      
 */
#define Test_High (*(BOOL FARPTR)(&BYTEP[1]))

/* variable:     AverageQuantityPres
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Sensor_HydrolicPressure_Filter_data
 * type:         SINT
 * address:      %PB2
 * constant:     False
 * comment:      How many value of the array (max=30)
 */
#define AverageQuantityPres (*(SINT FARPTR)(&BYTEP[2]))

/* variable:     tankResistanceLimit
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      %PB3
 * constant:     False
 * comment:      tank ısıtma sıcaklık limiti
 */
#define tankResistanceLimit (*(SINT FARPTR)(&BYTEP[3]))

/* variable:     tankResistanceLimit2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      %PB4
 * constant:     False
 * comment:      İç buzzer
 */
#define tankResistanceLimit2 (*(SINT FARPTR)(&BYTEP[4]))

/* variable:     VehicleSpeed2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         USINT
 * address:      %PB5
 * constant:     False
 * comment:      109 new109
 */
#define VehicleSpeed2 (*(USINT FARPTR)(&BYTEP[5]))

/* variable:     PresGaugeValue_Min
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Sensor
 * type:         INT
 * address:      %PW6
 * constant:     False
 * comment:      Minimum Voltage for 0%
 */
#define PresGaugeValue_Min (*(INT FARPTR)(&BYTEP[6]))

/* variable:     PresGaugeValue_Mid
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Sensor
 * type:         INT
 * address:      %PW8
 * constant:     False
 * comment:      Maximum Voltage for 50%
 */
#define PresGaugeValue_Mid (*(INT FARPTR)(&BYTEP[8]))

/* variable:     PresGaugeValue_Max
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Sensor
 * type:         INT
 * address:      %PW10
 * constant:     False
 * comment:      Maximum Voltage for 100%
 */
#define PresGaugeValue_Max (*(INT FARPTR)(&BYTEP[10]))

/* variable:     EngineTempGaugeValue_1
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      %PW12
 * constant:     False
 * comment:      250-100
 */
#define EngineTempGaugeValue_1 (*(INT FARPTR)(&BYTEP[12]))

/* variable:     engineSpeedRPMConstant
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         SINT
 * address:      %PB14
 * constant:     False
 * comment:      Motorun çalışıp çalışmadığını öğrenmek için  motor hızı sabiti
 */
#define engineSpeedRPMConstant (*(SINT FARPTR)(&BYTEP[14]))

/* variable:     Fuel_Level_2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         SINT
 * address:      %PB15
 * constant:     False
 * comment:      109 new109
 */
#define Fuel_Level_2 (*(SINT FARPTR)(&BYTEP[15]))

/* variable:     FireFighterActiveFanTime
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Others_Out
 * type:         TIME
 * address:      %PD16
 * constant:     False
 * comment:      Yangında fanların çalışma süresi
 */
#define FireFighterActiveFanTime (*(TIME FARPTR)(&BYTEP[16]))

/* variable:     HTempGaugeValue_Min_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_WebastoTemp_Sensor
 * type:         INT
 * address:      %PW20
 * constant:     False
 * comment:      Minimum Voltage for 0%
 */
#define HTempGaugeValue_Min_2 (*(INT FARPTR)(&BYTEP[20]))

/* variable:     HTempGaugeValue_Mid_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_WebastoTemp_Sensor
 * type:         INT
 * address:      %PW22
 * constant:     False
 * comment:      Maximum Voltage for 50%
 */
#define HTempGaugeValue_Mid_2 (*(INT FARPTR)(&BYTEP[22]))

/* variable:     HTempGaugeValue_Max_2
 * definition:   /project/MC2M/CPU0/Sensors/WebastoTempSensor/Data_WebastoTemp_Sensor
 * type:         INT
 * address:      %PW24
 * constant:     False
 * comment:      Maximum Voltage for 100%
 */
#define HTempGaugeValue_Max_2 (*(INT FARPTR)(&BYTEP[24]))

/* variable:     EngineTempGaugeValue_2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      %PW26
 * constant:     False
 * comment:      600-550
 */
#define EngineTempGaugeValue_2 (*(INT FARPTR)(&BYTEP[26]))

/* variable:     EngineTempGaugeValue_3
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      %PW28
 * constant:     False
 * comment:      800-780
 */
#define EngineTempGaugeValue_3 (*(INT FARPTR)(&BYTEP[28]))

/* variable:     EngineTempGaugeValue_4
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      %PW30
 * constant:     False
 * comment:      930-930
 */
#define EngineTempGaugeValue_4 (*(INT FARPTR)(&BYTEP[30]))

/* variable:     EngineTempGaugeValue_5
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/EngineTempGauge/Data_EngineTempGauge
 * type:         INT
 * address:      %PW32
 * constant:     False
 * comment:      1020-1020
 */
#define EngineTempGaugeValue_5 (*(INT FARPTR)(&BYTEP[32]))

/* variable:     EEC1_EngineSpeed2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         UINT
 * address:      %PW34
 * constant:     False
 * comment:      109 new109
 */
#define EEC1_EngineSpeed2 (*(UINT FARPTR)(&BYTEP[34]))

/* variable:     TimerDelta_ResistanceFront
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         TIME
 * address:      %PD36
 * constant:     False
 * comment:      T#7m
 */
#define TimerDelta_ResistanceFront (*(TIME FARPTR)(&BYTEP[36]))

/* variable:     AMUCBO_AngleXOffSet
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      %PW40
 * constant:     False
 * comment:      Y Hesaplanan Açı
 */
#define AMUCBO_AngleXOffSet (*(INT FARPTR)(&BYTEP[40]))

/* variable:     AMUCBO_AngleYOffSet
 * definition:   /project/MC2M/CPU0/SubRoutines/VehiclePosition/Sensor_Data
 * type:         INT
 * address:      %PW42
 * constant:     False
 * comment:      Y Hesaplanan Açı
 */
#define AMUCBO_AngleYOffSet (*(INT FARPTR)(&BYTEP[42]))

/* variable:     TransOilTemperature2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         USINT
 * address:      %PB44
 * constant:     False
 * comment:      109 new109
 */
#define TransOilTemperature2 (*(USINT FARPTR)(&BYTEP[44]))

/* variable:     EngineTempValue2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         USINT
 * address:      %PB45
 * constant:     False
 * comment:      109 new109
 */
#define EngineTempValue2 (*(USINT FARPTR)(&BYTEP[45]))

/* variable:     EngineOilPressure2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         USINT
 * address:      %PB46
 * constant:     False
 * comment:      109 new109
 */
#define EngineOilPressure2 (*(USINT FARPTR)(&BYTEP[46]))

/* variable:     test_bit
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         BOOL
 * address:      %PX47
 * constant:     False
 * comment:      
 */
#define test_bit (*(BOOL FARPTR)(&BYTEP[47]))

/* variable:     test_bit2
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         BOOL
 * address:      %PX48
 * constant:     False
 * comment:      
 */
#define test_bit2 (*(BOOL FARPTR)(&BYTEP[48]))

/* variable:     test_bit3
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         BOOL
 * address:      %PX49
 * constant:     False
 * comment:      
 */
#define test_bit3 (*(BOOL FARPTR)(&BYTEP[49]))

/* variable:     backDoorTest_prd
 * definition:   /project/MC2M/CPU0/SubRoutines/DoorsControl/Data_DoorControl_Out
 * type:         UINT
 * address:      %PW50
 * constant:     False
 * comment:      
 */
#define backDoorTest_prd (*(UINT FARPTR)(&BYTEP[50]))

/* variable:     test_bit4
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         BOOL
 * address:      %PX62
 * constant:     False
 * comment:      
 */
#define test_bit4 (*(BOOL FARPTR)(&BYTEP[62]))

/* variable:     test_bit5
 * definition:   /project/MC2M/CPU0/SubRoutines/Dashboard_Screen/AnalogGauges/Speedometer/Data_Speed
 * type:         BOOL
 * address:      %PX63
 * constant:     False
 * comment:      
 */
#define test_bit5 (*(BOOL FARPTR)(&BYTEP[63]))

/* variable:     DropboxPulseDelay
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         TIME
 * address:      %PD64
 * constant:     False
 * comment:      T#8s
 */
#define DropboxPulseDelay (*(TIME FARPTR)(&BYTEP[64]))

/* variable:     Test_Low
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      %PX68
 * constant:     False
 * comment:      
 */
#define Test_Low (*(BOOL FARPTR)(&BYTEP[68]))

/* variable:     Test_Neutral
 * definition:   /project/MC2M/CPU0/SubRoutines/Dropbox/Data_Dropbox
 * type:         BOOL
 * address:      %PX69
 * constant:     False
 * comment:      
 */
#define Test_Neutral (*(BOOL FARPTR)(&BYTEP[69]))

/* variable:     Test_Dropbox_4WD_Off
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      %PX70
 * constant:     False
 * comment:      
 */
#define Test_Dropbox_4WD_Off (*(BOOL FARPTR)(&BYTEP[70]))

/* variable:     Test_RearAxleDiffLock
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      %PX71
 * constant:     False
 * comment:      
 */
#define Test_RearAxleDiffLock (*(BOOL FARPTR)(&BYTEP[71]))

/* variable:     Test_FrontAxleDiffLock
 * definition:   /project/MC2M/CPU0/SubRoutines/DiffLock/Data_DiffLock
 * type:         BOOL
 * address:      %PX72
 * constant:     False
 * comment:      
 */
#define Test_FrontAxleDiffLock (*(BOOL FARPTR)(&BYTEP[72]))

/* variable:     ResetTrp
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         BOOL
 * address:      %PX73
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define ResetTrp (*(BOOL FARPTR)(&BYTEP[73]))

/* variable:     MC2M_Formatted
 * definition:   /project/MC2M/CPU0/SubRoutines/Diagnostics/Data_Limit
 * type:         USINT
 * address:      %PB74
 * constant:     False
 * comment:      
 */
#define MC2M_Formatted (*(USINT FARPTR)(&BYTEP[74]))

/* variable:     test_brake
 * definition:   /project/MC2M/CPU0/SubRoutines/EngineBrake/Data_EngineBrake
 * type:         BOOL
 * address:      %PX75
 * constant:     False
 * comment:      
 */
#define test_brake (*(BOOL FARPTR)(&BYTEP[75]))

/* variable:     TimerDelta_ResistanceSide
 * definition:   /project/MC2M/CPU0/SubRoutines/Resistances/Data_Resistances
 * type:         TIME
 * address:      %PD96
 * constant:     False
 * comment:      T#7m
 */
#define TimerDelta_ResistanceSide (*(TIME FARPTR)(&BYTEP[96]))

/* variable:     PresLevel3_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      %PW272
 * constant:     False
 * comment:      
 */
#define PresLevel3_ANALOG (*(INT FARPTR)(&BYTEP[272]))

/* variable:     PresLevel3
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      %PW274
 * constant:     False
 * comment:      
 */
#define PresLevel3 (*(INT FARPTR)(&BYTEP[274]))

/* variable:     PresLevel4_ANALOG
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      %PW276
 * constant:     False
 * comment:      
 */
#define PresLevel4_ANALOG (*(INT FARPTR)(&BYTEP[276]))

/* variable:     PresLevel4
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicPressureSensor/Data_HydrolicPressure_Calibration
 * type:         INT
 * address:      %PW278
 * constant:     False
 * comment:      
 */
#define PresLevel4 (*(INT FARPTR)(&BYTEP[278]))

/* variable:     HTempGaugeValue_Min
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Sensor
 * type:         INT
 * address:      %PW304
 * constant:     False
 * comment:      Minimum Voltage for 0%
 */
#define HTempGaugeValue_Min (*(INT FARPTR)(&BYTEP[304]))

/* variable:     HTempGaugeValue_Mid
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Sensor
 * type:         INT
 * address:      %PW306
 * constant:     False
 * comment:      Maximum Voltage for 50%
 */
#define HTempGaugeValue_Mid (*(INT FARPTR)(&BYTEP[306]))

/* variable:     HTempGaugeValue_Max
 * definition:   /project/MC2M/CPU0/Sensors/HydrolicSensors/HydrolicTempSensor/Data_HydrolicTemp_Sensor
 * type:         INT
 * address:      %PW308
 * constant:     False
 * comment:      Maximum Voltage for 100%
 */
#define HTempGaugeValue_Max (*(INT FARPTR)(&BYTEP[308]))

/* variable:     TemLevel13_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW376
 * constant:     False
 * comment:      
 */
#define TemLevel13_ANALOG_2 (*(INT FARPTR)(&BYTEP[376]))

/* variable:     TemLevel13_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW378
 * constant:     False
 * comment:      
 */
#define TemLevel13_2 (*(INT FARPTR)(&BYTEP[378]))

/* variable:     TemLevel14_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW380
 * constant:     False
 * comment:      
 */
#define TemLevel14_ANALOG_2 (*(INT FARPTR)(&BYTEP[380]))

/* variable:     TemLevel14_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW382
 * constant:     False
 * comment:      
 */
#define TemLevel14_2 (*(INT FARPTR)(&BYTEP[382]))

/* variable:     TemLevel15_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW384
 * constant:     False
 * comment:      
 */
#define TemLevel15_ANALOG_2 (*(INT FARPTR)(&BYTEP[384]))

/* variable:     TemLevel15_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW386
 * constant:     False
 * comment:      
 */
#define TemLevel15_2 (*(INT FARPTR)(&BYTEP[386]))

/* variable:     TemLevel16_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW388
 * constant:     False
 * comment:      
 */
#define TemLevel16_ANALOG_2 (*(INT FARPTR)(&BYTEP[388]))

/* variable:     TemLevel16_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW390
 * constant:     False
 * comment:      
 */
#define TemLevel16_2 (*(INT FARPTR)(&BYTEP[390]))

/* variable:     TemLevel17_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW392
 * constant:     False
 * comment:      
 */
#define TemLevel17_ANALOG_2 (*(INT FARPTR)(&BYTEP[392]))

/* variable:     TemLevel17_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW394
 * constant:     False
 * comment:      
 */
#define TemLevel17_2 (*(INT FARPTR)(&BYTEP[394]))

/* variable:     TemLevel18_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW396
 * constant:     False
 * comment:      
 */
#define TemLevel18_ANALOG_2 (*(INT FARPTR)(&BYTEP[396]))

/* variable:     TemLevel18_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW398
 * constant:     False
 * comment:      
 */
#define TemLevel18_2 (*(INT FARPTR)(&BYTEP[398]))

/* variable:     TemLevel19_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW400
 * constant:     False
 * comment:      
 */
#define TemLevel19_ANALOG_2 (*(INT FARPTR)(&BYTEP[400]))

/* variable:     TemLevel19_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW402
 * constant:     False
 * comment:      
 */
#define TemLevel19_2 (*(INT FARPTR)(&BYTEP[402]))

/* variable:     TemLevel20_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW404
 * constant:     False
 * comment:      
 */
#define TemLevel20_ANALOG_2 (*(INT FARPTR)(&BYTEP[404]))

/* variable:     TemLevel20_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW406
 * constant:     False
 * comment:      
 */
#define TemLevel20_2 (*(INT FARPTR)(&BYTEP[406]))

/* variable:     TemLevel21_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW408
 * constant:     False
 * comment:      
 */
#define TemLevel21_ANALOG_2 (*(INT FARPTR)(&BYTEP[408]))

/* variable:     TemLevel21_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW410
 * constant:     False
 * comment:      
 */
#define TemLevel21_2 (*(INT FARPTR)(&BYTEP[410]))

/* variable:     TemLevel22_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW412
 * constant:     False
 * comment:      
 */
#define TemLevel22_ANALOG_2 (*(INT FARPTR)(&BYTEP[412]))

/* variable:     TemLevel22_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW414
 * constant:     False
 * comment:      
 */
#define TemLevel22_2 (*(INT FARPTR)(&BYTEP[414]))

/* variable:     TemLevel23_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW416
 * constant:     False
 * comment:      
 */
#define TemLevel23_ANALOG_2 (*(INT FARPTR)(&BYTEP[416]))

/* variable:     TemLevel23_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW418
 * constant:     False
 * comment:      
 */
#define TemLevel23_2 (*(INT FARPTR)(&BYTEP[418]))

/* variable:     TemLevel24_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW420
 * constant:     False
 * comment:      
 */
#define TemLevel24_ANALOG_2 (*(INT FARPTR)(&BYTEP[420]))

/* variable:     TemLevel24_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW422
 * constant:     False
 * comment:      
 */
#define TemLevel24_2 (*(INT FARPTR)(&BYTEP[422]))

/* variable:     TemLevel25_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW424
 * constant:     False
 * comment:      
 */
#define TemLevel25_ANALOG_2 (*(INT FARPTR)(&BYTEP[424]))

/* variable:     TemLevel25_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW426
 * constant:     False
 * comment:      
 */
#define TemLevel25_2 (*(INT FARPTR)(&BYTEP[426]))

/* variable:     TemLevel26_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW428
 * constant:     False
 * comment:      
 */
#define TemLevel26_ANALOG_2 (*(INT FARPTR)(&BYTEP[428]))

/* variable:     TemLevel26_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW430
 * constant:     False
 * comment:      
 */
#define TemLevel26_2 (*(INT FARPTR)(&BYTEP[430]))

/* variable:     TemLevel27_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW432
 * constant:     False
 * comment:      
 */
#define TemLevel27_ANALOG_2 (*(INT FARPTR)(&BYTEP[432]))

/* variable:     TemLevel27_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW434
 * constant:     False
 * comment:      
 */
#define TemLevel27_2 (*(INT FARPTR)(&BYTEP[434]))

/* variable:     TemLevel28_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW436
 * constant:     False
 * comment:      
 */
#define TemLevel28_ANALOG_2 (*(INT FARPTR)(&BYTEP[436]))

/* variable:     TemLevel28_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW438
 * constant:     False
 * comment:      
 */
#define TemLevel28_2 (*(INT FARPTR)(&BYTEP[438]))

/* variable:     TemLevel29_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW440
 * constant:     False
 * comment:      
 */
#define TemLevel29_ANALOG_2 (*(INT FARPTR)(&BYTEP[440]))

/* variable:     TemLevel29_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW442
 * constant:     False
 * comment:      
 */
#define TemLevel29_2 (*(INT FARPTR)(&BYTEP[442]))

/* variable:     TemLevel30_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW444
 * constant:     False
 * comment:      
 */
#define TemLevel30_ANALOG_2 (*(INT FARPTR)(&BYTEP[444]))

/* variable:     TemLevel30_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW446
 * constant:     False
 * comment:      
 */
#define TemLevel30_2 (*(INT FARPTR)(&BYTEP[446]))

/* variable:     TemLevel31_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW448
 * constant:     False
 * comment:      
 */
#define TemLevel31_ANALOG_2 (*(INT FARPTR)(&BYTEP[448]))

/* variable:     TemLevel31_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW450
 * constant:     False
 * comment:      
 */
#define TemLevel31_2 (*(INT FARPTR)(&BYTEP[450]))

/* variable:     TemLevel32_ANALOG_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW452
 * constant:     False
 * comment:      
 */
#define TemLevel32_ANALOG_2 (*(INT FARPTR)(&BYTEP[452]))

/* variable:     TemLevel32_2
 * definition:   /project/MC2M/CPU0/SubRoutines/InSideTemperatur/Data_InSideTemp_Calibration
 * type:         INT
 * address:      %PW454
 * constant:     False
 * comment:      
 */
#define TemLevel32_2 (*(INT FARPTR)(&BYTEP[454]))

/* size of array BYTEP */
#define BYTEP_SIZE (2000)

/**************************************************************************/

/* declaration of variables with address in %R */

/* variable:     TotalMinute
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         SINT
 * address:      %RB0
 * constant:     False
 * comment:      Total Minute
 */
#define TotalMinute (*(SINT FARPTR)(&BYTER[0]))

/* variable:     TotalHour
 * definition:   /project/MC2M/CPU0/Data/global_data
 * type:         UINT
 * address:      %RW4
 * constant:     False
 * comment:      Total Hour
 */
#define TotalHour (*(UINT FARPTR)(&BYTER[4]))

/* variable:     TotalTripMeter
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD8
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter (*(REAL FARPTR)(&BYTER[8]))

/* variable:     TotalTripMeter2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD12
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter2 (*(REAL FARPTR)(&BYTER[12]))

/* variable:     TotalOdometer
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD16
 * constant:     False
 * comment:      Toplam Kilometre - Metre
 */
#define TotalOdometer (*(REAL FARPTR)(&BYTER[16]))

/* variable:     TotalOdometer2
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD20
 * constant:     False
 * comment:      Toplam Kilometre - Metre
 */
#define TotalOdometer2 (*(REAL FARPTR)(&BYTER[20]))

/* variable:     TotalTripMeterX
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD24
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeterX (*(REAL FARPTR)(&BYTER[24]))

/* variable:     TotalTripMeter5
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD28
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter5 (*(REAL FARPTR)(&BYTER[28]))

/* variable:     TotalTripMeter6
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD32
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter6 (*(REAL FARPTR)(&BYTER[32]))

/* variable:     TotalTripMeter7
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD36
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter7 (*(REAL FARPTR)(&BYTER[36]))

/* variable:     TotalTripMeter8
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD40
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter8 (*(REAL FARPTR)(&BYTER[40]))

/* variable:     TotalTripMeter9
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD44
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter9 (*(REAL FARPTR)(&BYTER[44]))

/* variable:     TotalTripMeter10
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD48
 * constant:     False
 * comment:      Toplam Trip - Metre
 */
#define TotalTripMeter10 (*(REAL FARPTR)(&BYTER[48]))

/* variable:     TotalOdometer1km
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD52
 * constant:     False
 * comment:      1km mesafe - Metre (aaslan)
 */
#define TotalOdometer1km (*(REAL FARPTR)(&BYTER[52]))

/* variable:     TotalOdometer100m
 * definition:   /project/MC2M/CPU0/SubRoutines/OtherFunctions/Data_Other_In
 * type:         REAL
 * address:      %RD56
 * constant:     False
 * comment:      100m mesafe - Metre (aaslan)
 */
#define TotalOdometer100m (*(REAL FARPTR)(&BYTER[56]))

/* variable:     EHR_2_TotalEngineHours
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         UDINT
 * address:      %RD60
 * constant:     False
 * comment:      SPN 247
 */
#define EHR_2_TotalEngineHours (*(UDINT FARPTR)(&BYTER[60]))

/* variable:     TotalEngineHours_Old
 * definition:   /project/MC2M/CPU0/SubRoutines/J1939_CANOpen/Data_J1939_CANOpen
 * type:         UDINT
 * address:      %RD64
 * constant:     False
 * comment:      
 */
#define TotalEngineHours_Old (*(UDINT FARPTR)(&BYTER[64]))

/* size of array BYTER */
#define BYTER_SIZE (4000)

/**************************************************************************/

/* declaration of variables with address in %I */

/* variable:     DIGIN_TurnRightSignal
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX0
 * constant:     False
 * comment:      INP00 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_TurnRightSignal (*(BOOL FARPTR)(&BYTEI[0]))

/* variable:     DIGIN_VVR_OilFilter
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX4
 * constant:     False
 * comment:      INP01 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_VVR_OilFilter (*(BOOL FARPTR)(&BYTEI[4]))

/* variable:     DIGIN_Feedback_4WD_DiffLock
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX8
 * constant:     False
 * comment:      INP02 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_Feedback_4WD_DiffLock (*(BOOL FARPTR)(&BYTEI[8]))

/* variable:     DIGIN_Feedback_DropboxLow
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX12
 * constant:     False
 * comment:      INP03 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_Feedback_DropboxLow (*(BOOL FARPTR)(&BYTEI[12]))

/* variable:     DIGIN_GunTowerDoor_1
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX16
 * constant:     False
 * comment:      INP04 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_GunTowerDoor_1 (*(BOOL FARPTR)(&BYTEI[16]))

/* variable:     DIGIN_AirFilterClogged
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX20
 * constant:     False
 * comment:      INP05 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_AirFilterClogged (*(BOOL FARPTR)(&BYTEI[20]))

/* variable:     DIGIN_Feedback_RearAxle
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX24
 * constant:     False
 * comment:      INP06 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_Feedback_RearAxle (*(BOOL FARPTR)(&BYTEI[24]))

/* variable:     DIGIN_BackDoorHandle_Open
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX28
 * constant:     False
 * comment:      INP07 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_BackDoorHandle_Open (*(BOOL FARPTR)(&BYTEI[28]))

/* variable:     DIGIN_SteeringWheelRepPump
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX32
 * constant:     False
 * comment:      INP08 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_SteeringWheelRepPump (*(BOOL FARPTR)(&BYTEI[32]))

/* variable:     DIGIN_EngineCoolantLevelLow
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX36
 * constant:     False
 * comment:      INP09 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_EngineCoolantLevelLow (*(BOOL FARPTR)(&BYTEI[36]))

/* variable:     AIN_Tank_Left_Level
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW40
 * constant:     False
 * comment:      INP10 input, configured as PIN_20mA_ANALOGIN
 */
#define AIN_Tank_Left_Level (*(UINT FARPTR)(&BYTEI[40]))

/* variable:     DIGIN_Light_P1_Park
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX44
 * constant:     False
 * comment:      INP11 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_Light_P1_Park (*(BOOL FARPTR)(&BYTEI[44]))

/* variable:     AIN_FootBrakePressureSensor_1
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW48
 * constant:     False
 * comment:      INP12 input, configured as PIN_20mA_ANALOGIN
 */
#define AIN_FootBrakePressureSensor_1 (*(UINT FARPTR)(&BYTEI[48]))

/* variable:     AIN_FuelTankLeft_Temp
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW52
 * constant:     False
 * comment:      INP13 input, configured as PIN_20mA_ANALOGIN
 */
#define AIN_FuelTankLeft_Temp (*(UINT FARPTR)(&BYTEI[52]))

/* variable:     AIN_AccessoryPressureSensor
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW56
 * constant:     False
 * comment:      INP14 input, configured as PIN_20mA_ANALOGIN
 */
#define AIN_AccessoryPressureSensor (*(UINT FARPTR)(&BYTEI[56]))

/* variable:     DIGIN_LowBeamStatus
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX60
 * constant:     False
 * comment:      INP15 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_LowBeamStatus (*(BOOL FARPTR)(&BYTEI[60]))

/* variable:     DIGIN_WiperLow
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX68
 * constant:     False
 * comment:      INP17 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_WiperLow (*(BOOL FARPTR)(&BYTEI[68]))

/* variable:     DIGIN_Unmanned_Mode
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX72
 * constant:     False
 * comment:      INP18 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_Unmanned_Mode (*(BOOL FARPTR)(&BYTEI[72]))

/* variable:     DIGIN_BackDoor_IN_Close
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX76
 * constant:     False
 * comment:      INP19 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_BackDoor_IN_Close (*(BOOL FARPTR)(&BYTEI[76]))

/* variable:     AIN_Tank_Right_Level
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW80
 * constant:     False
 * comment:      INP20 input, configured as PIN_LOR_ANALOGIN
 */
#define AIN_Tank_Right_Level (*(UINT FARPTR)(&BYTEI[80]))

/* variable:     DIGIN_HandBrakeActivated
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX84
 * constant:     False
 * comment:      INP21 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_HandBrakeActivated (*(BOOL FARPTR)(&BYTEI[84]))

/* variable:     DIGIN_Feedback_DropboxHigh
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX88
 * constant:     False
 * comment:      INP22 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_Feedback_DropboxHigh (*(BOOL FARPTR)(&BYTEI[88]))

/* variable:     DIGIN_CentralLockSystemEnable
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX92
 * constant:     False
 * comment:      INP23 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_CentralLockSystemEnable (*(BOOL FARPTR)(&BYTEI[92]))

/* variable:     DIGIN_VVR_OilLevel
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX96
 * constant:     False
 * comment:      INP24 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_VVR_OilLevel (*(BOOL FARPTR)(&BYTEI[96]))

/* variable:     AIN_FuelTankRight_Temp
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW100
 * constant:     False
 * comment:      INP25 input, configured as PIN_LOR_ANALOGIN
 */
#define AIN_FuelTankRight_Temp (*(UINT FARPTR)(&BYTEI[100]))

/* variable:     DIGIN_TCM_104
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX104
 * constant:     False
 * comment:      INP26 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_TCM_104 (*(BOOL FARPTR)(&BYTEI[104]))

/* variable:     DIGIN_BackDoor_OUT_Open
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX108
 * constant:     False
 * comment:      INP27 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_BackDoor_OUT_Open (*(BOOL FARPTR)(&BYTEI[108]))

/* variable:     DIGIN_BackDoor_OUT_Close
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX112
 * constant:     False
 * comment:      INP28 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_BackDoor_OUT_Close (*(BOOL FARPTR)(&BYTEI[112]))

/* variable:     DIGIN_AlternatorFailure
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX116
 * constant:     False
 * comment:      INP29 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_AlternatorFailure (*(BOOL FARPTR)(&BYTEI[116]))

/* variable:     AIN_VVR_Pressure
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW120
 * constant:     False
 * comment:      INP30 input, configured as PIN_20mA_ANALOGIN
 */
#define AIN_VVR_Pressure (*(UINT FARPTR)(&BYTEI[120]))

/* variable:     AIN_WebastoTankResistanceSensor
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW124
 * constant:     False
 * comment:      INP31 input, configured as PIN_20mA_ANALOGIN
 */
#define AIN_WebastoTankResistanceSensor (*(UINT FARPTR)(&BYTEI[124]))

/* variable:     AIN_VVR_Temperature
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW128
 * constant:     False
 * comment:      INP32 input, configured as PIN_HIR_ANALOGIN
 */
#define AIN_VVR_Temperature (*(UINT FARPTR)(&BYTEI[128]))

/* variable:     AIN_ParkBrakePressureSensor
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW132
 * constant:     False
 * comment:      INP33 input, configured as PIN_20mA_ANALOGIN
 */
#define AIN_ParkBrakePressureSensor (*(UINT FARPTR)(&BYTEI[132]))

/* variable:     DIGIN_DoorOpenSwitch
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX136
 * constant:     False
 * comment:      INP34 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_DoorOpenSwitch (*(BOOL FARPTR)(&BYTEI[136]))

/* variable:     AIN_FootBrakePressureSensor_2
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW140
 * constant:     False
 * comment:      INP35 input, configured as PIN_20mA_ANALOGIN
 */
#define AIN_FootBrakePressureSensor_2 (*(UINT FARPTR)(&BYTEI[140]))

/* variable:     DIGIN_Bypass_Switch
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX144
 * constant:     False
 * comment:      INP36 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_Bypass_Switch (*(BOOL FARPTR)(&BYTEI[144]))

/* variable:     DIGIN_HighBeamStatus
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX148
 * constant:     False
 * comment:      INP37 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_HighBeamStatus (*(BOOL FARPTR)(&BYTEI[148]))

/* variable:     DIGIN_WiperIntermittent
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX152
 * constant:     False
 * comment:      INP38 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_WiperIntermittent (*(BOOL FARPTR)(&BYTEI[152]))

/* variable:     DIGIN_WiperHigh
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX156
 * constant:     False
 * comment:      INP39 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_WiperHigh (*(BOOL FARPTR)(&BYTEI[156]))

/* variable:     DIGIN_TurnLeftSignal
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX160
 * constant:     False
 * comment:      INP40 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_TurnLeftSignal (*(BOOL FARPTR)(&BYTEI[160]))

/* variable:     DIGIN_Back_HydDoorOpened
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX168
 * constant:     False
 * comment:      INP42 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_Back_HydDoorOpened (*(BOOL FARPTR)(&BYTEI[168]))

/* variable:     DIGIN_Back_HydDoorClosed
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX172
 * constant:     False
 * comment:      INP43 input, configured as PIN_LO_DIGITALIN
 */
#define DIGIN_Back_HydDoorClosed (*(BOOL FARPTR)(&BYTEI[172]))

/* variable:     DIGIN_WiperWasher
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX176
 * constant:     False
 * comment:      INP44 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_WiperWasher (*(BOOL FARPTR)(&BYTEI[176]))

/* variable:     DIGIN_BlackOut
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX180
 * constant:     False
 * comment:      INP45 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_BlackOut (*(BOOL FARPTR)(&BYTEI[180]))

/* variable:     DIGIN_FrontAxleDiffLock
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX184
 * constant:     False
 * comment:      INP46 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_FrontAxleDiffLock (*(BOOL FARPTR)(&BYTEI[184]))

/* variable:     DIGIN_RearAxleDiffLock
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX188
 * constant:     False
 * comment:      INP47 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_RearAxleDiffLock (*(BOOL FARPTR)(&BYTEI[188]))

/* variable:     DIGIN_BackDoor_IN_Open
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX192
 * constant:     False
 * comment:      INP48 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_BackDoor_IN_Open (*(BOOL FARPTR)(&BYTEI[192]))

/* variable:     DIGIN_KeySwitchActivated
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX196
 * constant:     False
 * comment:      INP49 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_KeySwitchActivated (*(BOOL FARPTR)(&BYTEI[196]))

/* variable:     DIGIN_Hazard
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX200
 * constant:     False
 * comment:      INP50 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_Hazard (*(BOOL FARPTR)(&BYTEI[200]))

/* variable:     DIGIN_IntakeAirHeaterActivated
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX204
 * constant:     False
 * comment:      INP51 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_IntakeAirHeaterActivated (*(BOOL FARPTR)(&BYTEI[204]))

/* variable:     DIGIN_EngineBrake
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX208
 * constant:     False
 * comment:      INP52 input, configured as PIN_HI_DIGITALIN
 */
#define DIGIN_EngineBrake (*(BOOL FARPTR)(&BYTEI[208]))

/* variable:     AIN_Brake_Joystick
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW212
 * constant:     False
 * comment:      INP53 input, configured as PIN_30V_ANALOGIN
 */
#define AIN_Brake_Joystick (*(UINT FARPTR)(&BYTEI[212]))

/* variable:     DOUT_TurnSignalLamp_Left_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX284
 * constant:     False
 * comment:      OUT00 feedback
 */
#define DOUT_TurnSignalLamp_Left_feedback (*(BOOL FARPTR)(&BYTEI[284]))

/* variable:     DOUT_EngineProtection_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX288
 * constant:     False
 * comment:      OUT01 feedback
 */
#define DOUT_EngineProtection_feedback (*(BOOL FARPTR)(&BYTEI[288]))

/* variable:     DOUT_Tank2_Valve_Draw_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX292
 * constant:     False
 * comment:      OUT02 feedback
 */
#define DOUT_Tank2_Valve_Draw_feedback (*(BOOL FARPTR)(&BYTEI[292]))

/* variable:     DOUT_FuelWater_Evacuation_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX296
 * constant:     False
 * comment:      OUT03 feedback
 */
#define DOUT_FuelWater_Evacuation_feedback (*(BOOL FARPTR)(&BYTEI[296]))

/* variable:     DOUT_Brake_En_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX300
 * constant:     False
 * comment:      OUT04 feedback
 */
#define DOUT_Brake_En_feedback (*(BOOL FARPTR)(&BYTEI[300]))

/* variable:     DOUT_T90Enable_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX308
 * constant:     False
 * comment:      OUT06 feedback
 */
#define DOUT_T90Enable_feedback (*(BOOL FARPTR)(&BYTEI[308]))

/* variable:     DOUT_Backup_Alarm_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX312
 * constant:     False
 * comment:      OUT07 feedback
 */
#define DOUT_Backup_Alarm_feedback (*(BOOL FARPTR)(&BYTEI[312]))

/* variable:     DOUT_InteriorVantilator_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX316
 * constant:     False
 * comment:      OUT08 feedback
 */
#define DOUT_InteriorVantilator_feedback (*(BOOL FARPTR)(&BYTEI[316]))

/* variable:     DOUT_RearDoorControlValf_1_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX320
 * constant:     False
 * comment:      OUT09 feedback
 */
#define DOUT_RearDoorControlValf_1_feedback (*(BOOL FARPTR)(&BYTEI[320]))

/* variable:     DOUT_WiperMotor_1_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX324
 * constant:     False
 * comment:      OUT10 feedback
 */
#define DOUT_WiperMotor_1_feedback (*(BOOL FARPTR)(&BYTEI[324]))

/* variable:     DOUT_HazardButtonLed_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX328
 * constant:     False
 * comment:      OUT11 feedback
 */
#define DOUT_HazardButtonLed_feedback (*(BOOL FARPTR)(&BYTEI[328]))

/* variable:     DOUT_RearDoorControlValf_2_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX332
 * constant:     False
 * comment:      OUT12 feedback
 */
#define DOUT_RearDoorControlValf_2_feedback (*(BOOL FARPTR)(&BYTEI[332]))

/* variable:     DOUT_Tank1_Valve_Draw_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX336
 * constant:     False
 * comment:      OUT13 feedback
 */
#define DOUT_Tank1_Valve_Draw_feedback (*(BOOL FARPTR)(&BYTEI[336]))

/* variable:     PWMOUT_VVR_Pump_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW340
 * constant:     False
 * comment:      OUT14 feedback
 */
#define PWMOUT_VVR_Pump_feedback (*(UINT FARPTR)(&BYTEI[340]))

/* variable:     DOUT_SideWindowResistance_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX344
 * constant:     False
 * comment:      OUT15 feedback
 */
#define DOUT_SideWindowResistance_feedback (*(BOOL FARPTR)(&BYTEI[344]))

/* variable:     DOUT_InteriorLamp_BO_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX352
 * constant:     False
 * comment:      OUT17 feedback
 */
#define DOUT_InteriorLamp_BO_feedback (*(BOOL FARPTR)(&BYTEI[352]))

/* variable:     DOUT_ResistanceLED_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX356
 * constant:     False
 * comment:      OUT18 feedback
 */
#define DOUT_ResistanceLED_feedback (*(BOOL FARPTR)(&BYTEI[356]))

/* variable:     DOUT_Dropbox_4WD_Off_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX360
 * constant:     False
 * comment:      OUT19 feedback
 */
#define DOUT_Dropbox_4WD_Off_feedback (*(BOOL FARPTR)(&BYTEI[360]))

/* variable:     DOUT_TurnSignalLamp_Right_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX364
 * constant:     False
 * comment:      OUT20 feedback
 */
#define DOUT_TurnSignalLamp_Right_feedback (*(BOOL FARPTR)(&BYTEI[364]))

/* variable:     DOUT_WiperMotor_2_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX368
 * constant:     False
 * comment:      OUT21 feedback
 */
#define DOUT_WiperMotor_2_feedback (*(BOOL FARPTR)(&BYTEI[368]))

/* variable:     DOUT_Washer_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX372
 * constant:     False
 * comment:      OUT22 feedback
 */
#define DOUT_Washer_feedback (*(BOOL FARPTR)(&BYTEI[372]))

/* variable:     DOUT_BatteryCharge_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX376
 * constant:     False
 * comment:      OUT23 feedback
 */
#define DOUT_BatteryCharge_feedback (*(BOOL FARPTR)(&BYTEI[376]))

/* variable:     DOUT_Dropbox_Neutral_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX380
 * constant:     False
 * comment:      OUT24 feedback
 */
#define DOUT_Dropbox_Neutral_feedback (*(BOOL FARPTR)(&BYTEI[380]))

/* variable:     DOUT_Dropbox_Low_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX384
 * constant:     False
 * comment:      OUT25 feedback
 */
#define DOUT_Dropbox_Low_feedback (*(BOOL FARPTR)(&BYTEI[384]))

/* variable:     DOUT_Dropbox_High_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX388
 * constant:     False
 * comment:      OUT26 feedback
 */
#define DOUT_Dropbox_High_feedback (*(BOOL FARPTR)(&BYTEI[388]))

/* variable:     DOUT_RearAxleDiffLock_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX392
 * constant:     False
 * comment:      OUT27 feedback
 */
#define DOUT_RearAxleDiffLock_feedback (*(BOOL FARPTR)(&BYTEI[392]))

/* variable:     DOUT_FrontAxleDiffLock_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX396
 * constant:     False
 * comment:      OUT28 feedback
 */
#define DOUT_FrontAxleDiffLock_feedback (*(BOOL FARPTR)(&BYTEI[396]))

/* variable:     DOUT_WiperMotorLow_1_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX400
 * constant:     False
 * comment:      OUT29 feedback
 */
#define DOUT_WiperMotorLow_1_feedback (*(BOOL FARPTR)(&BYTEI[400]))

/* variable:     DOUT_ResistancesFront_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX404
 * constant:     False
 * comment:      OUT30 feedback
 */
#define DOUT_ResistancesFront_feedback (*(BOOL FARPTR)(&BYTEI[404]))

/* variable:     DOUT_WiperMotorLow_2_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %IX408
 * constant:     False
 * comment:      OUT31 feedback
 */
#define DOUT_WiperMotorLow_2_feedback (*(BOOL FARPTR)(&BYTEI[408]))

/* variable:     ANOUT_BrakeProportional_feedback
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %IW416
 * constant:     False
 * comment:      OUT33 feedback
 */
#define ANOUT_BrakeProportional_feedback (*(UINT FARPTR)(&BYTEI[416]))


/**************************************************************************/

/* declaration of variables with address in %Q */

/* variable:     DOUT_TurnSignalLamp_Left
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX142
 * constant:     False
 * comment:      OUT00 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_TurnSignalLamp_Left (*(BOOL FARPTR)(&BYTEQ[142]))

/* variable:     DOUT_EngineProtection
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX144
 * constant:     False
 * comment:      OUT01 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_EngineProtection (*(BOOL FARPTR)(&BYTEQ[144]))

/* variable:     DOUT_Tank2_Valve_Draw
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX146
 * constant:     False
 * comment:      OUT02 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_Tank2_Valve_Draw (*(BOOL FARPTR)(&BYTEQ[146]))

/* variable:     DOUT_FuelWater_Evacuation
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX148
 * constant:     False
 * comment:      OUT03 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_FuelWater_Evacuation (*(BOOL FARPTR)(&BYTEQ[148]))

/* variable:     DOUT_Brake_En
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX150
 * constant:     False
 * comment:      OUT04 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_Brake_En (*(BOOL FARPTR)(&BYTEQ[150]))

/* variable:     DOUT_T90Enable
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX154
 * constant:     False
 * comment:      OUT06 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_T90Enable (*(BOOL FARPTR)(&BYTEQ[154]))

/* variable:     DOUT_Backup_Alarm
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX156
 * constant:     False
 * comment:      OUT07 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_Backup_Alarm (*(BOOL FARPTR)(&BYTEQ[156]))

/* variable:     DOUT_InteriorVantilator
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX158
 * constant:     False
 * comment:      OUT08 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_InteriorVantilator (*(BOOL FARPTR)(&BYTEQ[158]))

/* variable:     DOUT_RearDoorControlValf_1
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX160
 * constant:     False
 * comment:      OUT09 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_RearDoorControlValf_1 (*(BOOL FARPTR)(&BYTEQ[160]))

/* variable:     DOUT_WiperMotor_1
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX162
 * constant:     False
 * comment:      OUT10 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_WiperMotor_1 (*(BOOL FARPTR)(&BYTEQ[162]))

/* variable:     DOUT_HazardButtonLed
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX164
 * constant:     False
 * comment:      OUT11 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_HazardButtonLed (*(BOOL FARPTR)(&BYTEQ[164]))

/* variable:     DOUT_RearDoorControlValf_2
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX166
 * constant:     False
 * comment:      OUT12 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_RearDoorControlValf_2 (*(BOOL FARPTR)(&BYTEQ[166]))

/* variable:     DOUT_Tank1_Valve_Draw
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX168
 * constant:     False
 * comment:      OUT13 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_Tank1_Valve_Draw (*(BOOL FARPTR)(&BYTEQ[168]))

/* variable:     PWMOUT_VVR_Pump
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %QW170
 * constant:     False
 * comment:      OUT14 output, configured as PIN_HI_OPENLOOP_PWMOUT
 */
#define PWMOUT_VVR_Pump (*(UINT FARPTR)(&BYTEQ[170]))

/* variable:     DOUT_SideWindowResistance
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX172
 * constant:     False
 * comment:      OUT15 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_SideWindowResistance (*(BOOL FARPTR)(&BYTEQ[172]))

/* variable:     DOUT_InteriorLamp_BO
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX176
 * constant:     False
 * comment:      OUT17 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_InteriorLamp_BO (*(BOOL FARPTR)(&BYTEQ[176]))

/* variable:     DOUT_ResistanceLED
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX178
 * constant:     False
 * comment:      OUT18 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_ResistanceLED (*(BOOL FARPTR)(&BYTEQ[178]))

/* variable:     DOUT_Dropbox_4WD_Off
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX180
 * constant:     False
 * comment:      OUT19 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_Dropbox_4WD_Off (*(BOOL FARPTR)(&BYTEQ[180]))

/* variable:     DOUT_TurnSignalLamp_Right
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX182
 * constant:     False
 * comment:      OUT20 output, configured as PIN_HI_DIGOUT_D
 */
#define DOUT_TurnSignalLamp_Right (*(BOOL FARPTR)(&BYTEQ[182]))

/* variable:     DOUT_WiperMotor_2
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX184
 * constant:     False
 * comment:      OUT21 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_WiperMotor_2 (*(BOOL FARPTR)(&BYTEQ[184]))

/* variable:     DOUT_Washer
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX186
 * constant:     False
 * comment:      OUT22 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_Washer (*(BOOL FARPTR)(&BYTEQ[186]))

/* variable:     DOUT_BatteryCharge
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX188
 * constant:     False
 * comment:      OUT23 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_BatteryCharge (*(BOOL FARPTR)(&BYTEQ[188]))

/* variable:     DOUT_Dropbox_Neutral
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX190
 * constant:     False
 * comment:      OUT24 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_Dropbox_Neutral (*(BOOL FARPTR)(&BYTEQ[190]))

/* variable:     DOUT_Dropbox_Low
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX192
 * constant:     False
 * comment:      OUT25 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_Dropbox_Low (*(BOOL FARPTR)(&BYTEQ[192]))

/* variable:     DOUT_Dropbox_High
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX194
 * constant:     False
 * comment:      OUT26 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_Dropbox_High (*(BOOL FARPTR)(&BYTEQ[194]))

/* variable:     DOUT_RearAxleDiffLock
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX196
 * constant:     False
 * comment:      OUT27 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_RearAxleDiffLock (*(BOOL FARPTR)(&BYTEQ[196]))

/* variable:     DOUT_FrontAxleDiffLock
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX198
 * constant:     False
 * comment:      OUT28 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_FrontAxleDiffLock (*(BOOL FARPTR)(&BYTEQ[198]))

/* variable:     DOUT_WiperMotorLow_1
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX200
 * constant:     False
 * comment:      OUT29 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_WiperMotorLow_1 (*(BOOL FARPTR)(&BYTEQ[200]))

/* variable:     DOUT_ResistancesFront
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX202
 * constant:     False
 * comment:      OUT30 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_ResistancesFront (*(BOOL FARPTR)(&BYTEQ[202]))

/* variable:     DOUT_WiperMotorLow_2
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         BOOL
 * address:      %QX204
 * constant:     False
 * comment:      OUT31 output, configured as PIN_HI_DIGOUT
 */
#define DOUT_WiperMotorLow_2 (*(BOOL FARPTR)(&BYTEQ[204]))

/* variable:     ANOUT_BrakeProportional
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         UINT
 * address:      %QW208
 * constant:     False
 * comment:      OUT33 output, configured as PIN_10V_ANOUT
 */
#define ANOUT_BrakeProportional (*(UINT FARPTR)(&BYTEQ[208]))


/**************************************************************************/

/* declaration of variables with address in %S */

/* variable:     DOUT_TurnSignalLamp_Left_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB71
 * constant:     False
 * comment:      OUT00 status
 */
#define DOUT_TurnSignalLamp_Left_status (*(SINT FARPTR)(&BYTES[71]))

/* variable:     DOUT_EngineProtection_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB72
 * constant:     False
 * comment:      OUT01 status
 */
#define DOUT_EngineProtection_status (*(SINT FARPTR)(&BYTES[72]))

/* variable:     DOUT_Backup_Alarm_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB78
 * constant:     False
 * comment:      OUT07 status
 */
#define DOUT_Backup_Alarm_status (*(SINT FARPTR)(&BYTES[78]))

/* variable:     DOUT_InteriorVantilator_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB79
 * constant:     False
 * comment:      OUT08 status
 */
#define DOUT_InteriorVantilator_status (*(SINT FARPTR)(&BYTES[79]))

/* variable:     DOUT_HazardButtonLed_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB82
 * constant:     False
 * comment:      OUT11 status
 */
#define DOUT_HazardButtonLed_status (*(SINT FARPTR)(&BYTES[82]))

/* variable:     DOUT_SideWindowResistance_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB86
 * constant:     False
 * comment:      OUT15 status
 */
#define DOUT_SideWindowResistance_status (*(SINT FARPTR)(&BYTES[86]))

/* variable:     DOUT_InteriorLamp_BO_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB88
 * constant:     False
 * comment:      OUT17 status
 */
#define DOUT_InteriorLamp_BO_status (*(SINT FARPTR)(&BYTES[88]))

/* variable:     DOUT_ResistanceLED_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB89
 * constant:     False
 * comment:      OUT18 status
 */
#define DOUT_ResistanceLED_status (*(SINT FARPTR)(&BYTES[89]))

/* variable:     DOUT_TurnSignalLamp_Right_status
 * definition:   /project/MC2M/CPU0/IO_CFG
 * type:         SINT
 * address:      %SB91
 * constant:     False
 * comment:      OUT20 status
 */
#define DOUT_TurnSignalLamp_Right_status (*(SINT FARPTR)(&BYTES[91]))


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
