/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_IO_H
#define INCLUDE__VT3_IO_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* index for I/O local points */
#define VT3_IO_INDEX_DIGIN_TurnRightSignal (   0)  /* INP00      */
#define VT3_IO_INDEX_DIGIN_VVR_OilFilter  (   1)  /* INP01      */
#define VT3_IO_INDEX_DIGIN_Feedback_4WD_DiffLock (   2)  /* INP02      */
#define VT3_IO_INDEX_DIGIN_Feedback_DropboxLow (   3)  /* INP03      */
#define VT3_IO_INDEX_DIGIN_GunTowerDoor_1 (   4)  /* INP04      */
#define VT3_IO_INDEX_DIGIN_AirFilterClogged (   5)  /* INP05      */
#define VT3_IO_INDEX_DIGIN_Feedback_RearAxle (   6)  /* INP06      */
#define VT3_IO_INDEX_DIGIN_BackDoorHandle_Open (   7)  /* INP07      */
#define VT3_IO_INDEX_DIGIN_SteeringWheelRepPump (   8)  /* INP08      */
#define VT3_IO_INDEX_DIGIN_EngineCoolantLevelLow (   9)  /* INP09      */
#define VT3_IO_INDEX_AIN_Tank_Left_Level  (  10)  /* INP10      */
#define VT3_IO_INDEX_DIGIN_Light_P1_Park  (  11)  /* INP11      */
#define VT3_IO_INDEX_AIN_FootBrakePressureSensor_1 (  12)  /* INP12      */
#define VT3_IO_INDEX_AIN_FuelTankLeft_Temp (  13)  /* INP13      */
#define VT3_IO_INDEX_AIN_AccessoryPressureSensor (  14)  /* INP14      */
#define VT3_IO_INDEX_DIGIN_LowBeamStatus  (  15)  /* INP15      */
#define VT3_IO_INDEX_DIGIN_WiperLow       (  17)  /* INP17      */
#define VT3_IO_INDEX_DIGIN_Unmanned_Mode  (  18)  /* INP18      */
#define VT3_IO_INDEX_DIGIN_BackDoor_IN_Close (  19)  /* INP19      */
#define VT3_IO_INDEX_AIN_Tank_Right_Level (  20)  /* INP20      */
#define VT3_IO_INDEX_DIGIN_HandBrakeActivated (  21)  /* INP21      */
#define VT3_IO_INDEX_DIGIN_Feedback_DropboxHigh (  22)  /* INP22      */
#define VT3_IO_INDEX_DIGIN_CentralLockSystemEnable (  23)  /* INP23      */
#define VT3_IO_INDEX_DIGIN_VVR_OilLevel   (  24)  /* INP24      */
#define VT3_IO_INDEX_AIN_FuelTankRight_Temp (  25)  /* INP25      */
#define VT3_IO_INDEX_DIGIN_TCM_104        (  26)  /* INP26      */
#define VT3_IO_INDEX_DIGIN_BackDoor_OUT_Open (  27)  /* INP27      */
#define VT3_IO_INDEX_DIGIN_BackDoor_OUT_Close (  28)  /* INP28      */
#define VT3_IO_INDEX_DIGIN_AlternatorFailure (  29)  /* INP29      */
#define VT3_IO_INDEX_AIN_VVR_Pressure     (  30)  /* INP30      */
#define VT3_IO_INDEX_AIN_WebastoTankResistanceSensor (  31)  /* INP31      */
#define VT3_IO_INDEX_AIN_VVR_Temperature  (  32)  /* INP32      */
#define VT3_IO_INDEX_AIN_ParkBrakePressureSensor (  33)  /* INP33      */
#define VT3_IO_INDEX_DIGIN_DoorOpenSwitch (  34)  /* INP34      */
#define VT3_IO_INDEX_AIN_FootBrakePressureSensor_2 (  35)  /* INP35      */
#define VT3_IO_INDEX_DIGIN_Bypass_Switch  (  36)  /* INP36      */
#define VT3_IO_INDEX_DIGIN_HighBeamStatus (  37)  /* INP37      */
#define VT3_IO_INDEX_DIGIN_WiperIntermittent (  38)  /* INP38      */
#define VT3_IO_INDEX_DIGIN_WiperHigh      (  39)  /* INP39      */
#define VT3_IO_INDEX_DIGIN_TurnLeftSignal (  40)  /* INP40      */
#define VT3_IO_INDEX_DIGIN_Back_HydDoorOpened (  42)  /* INP42      */
#define VT3_IO_INDEX_DIGIN_Back_HydDoorClosed (  43)  /* INP43      */
#define VT3_IO_INDEX_DIGIN_WiperWasher    (  44)  /* INP44      */
#define VT3_IO_INDEX_DIGIN_BlackOut       (  45)  /* INP45      */
#define VT3_IO_INDEX_DIGIN_FrontAxleDiffLock (  46)  /* INP46      */
#define VT3_IO_INDEX_DIGIN_RearAxleDiffLock (  47)  /* INP47      */
#define VT3_IO_INDEX_DIGIN_BackDoor_IN_Open (  48)  /* INP48      */
#define VT3_IO_INDEX_DIGIN_KeySwitchActivated (  49)  /* INP49      */
#define VT3_IO_INDEX_DIGIN_Hazard         (  50)  /* INP50      */
#define VT3_IO_INDEX_DIGIN_IntakeAirHeaterActivated (  51)  /* INP51      */
#define VT3_IO_INDEX_DIGIN_EngineBrake    (  52)  /* INP52      */
#define VT3_IO_INDEX_AIN_Brake_Joystick   (  53)  /* INP53      */
#define VT3_IO_INDEX_DOUT_TurnSignalLamp_Left (  71)  /* OUT00      */
#define VT3_IO_INDEX_DOUT_EngineProtection (  72)  /* OUT01      */
#define VT3_IO_INDEX_DOUT_Tank2_Valve_Draw (  73)  /* OUT02      */
#define VT3_IO_INDEX_DOUT_FuelWater_Evacuation (  74)  /* OUT03      */
#define VT3_IO_INDEX_DOUT_Brake_En        (  75)  /* OUT04      */
#define VT3_IO_INDEX_DOUT_T90Enable       (  77)  /* OUT06      */
#define VT3_IO_INDEX_DOUT_Backup_Alarm    (  78)  /* OUT07      */
#define VT3_IO_INDEX_DOUT_InteriorVantilator (  79)  /* OUT08      */
#define VT3_IO_INDEX_DOUT_RearDoorControlValf_1 (  80)  /* OUT09      */
#define VT3_IO_INDEX_DOUT_WiperMotor_1    (  81)  /* OUT10      */
#define VT3_IO_INDEX_DOUT_HazardButtonLed (  82)  /* OUT11      */
#define VT3_IO_INDEX_DOUT_RearDoorControlValf_2 (  83)  /* OUT12      */
#define VT3_IO_INDEX_DOUT_Tank1_Valve_Draw (  84)  /* OUT13      */
#define VT3_IO_INDEX_PWMOUT_VVR_Pump      (  85)  /* OUT14      */
#define VT3_IO_INDEX_DOUT_SideWindowResistance (  86)  /* OUT15      */
#define VT3_IO_INDEX_DOUT_InteriorLamp_BO (  88)  /* OUT17      */
#define VT3_IO_INDEX_DOUT_ResistanceLED   (  89)  /* OUT18      */
#define VT3_IO_INDEX_DOUT_Dropbox_4WD_Off (  90)  /* OUT19      */
#define VT3_IO_INDEX_DOUT_TurnSignalLamp_Right (  91)  /* OUT20      */
#define VT3_IO_INDEX_DOUT_WiperMotor_2    (  92)  /* OUT21      */
#define VT3_IO_INDEX_DOUT_Washer          (  93)  /* OUT22      */
#define VT3_IO_INDEX_DOUT_BatteryCharge   (  94)  /* OUT23      */
#define VT3_IO_INDEX_DOUT_Dropbox_Neutral (  95)  /* OUT24      */
#define VT3_IO_INDEX_DOUT_Dropbox_Low     (  96)  /* OUT25      */
#define VT3_IO_INDEX_DOUT_Dropbox_High    (  97)  /* OUT26      */
#define VT3_IO_INDEX_DOUT_RearAxleDiffLock (  98)  /* OUT27      */
#define VT3_IO_INDEX_DOUT_FrontAxleDiffLock (  99)  /* OUT28      */
#define VT3_IO_INDEX_DOUT_WiperMotorLow_1 ( 100)  /* OUT29      */
#define VT3_IO_INDEX_DOUT_ResistancesFront ( 101)  /* OUT30      */
#define VT3_IO_INDEX_DOUT_WiperMotorLow_2 ( 102)  /* OUT31      */
#define VT3_IO_INDEX_ANOUT_BrakeProportional ( 104)  /* OUT33      */

/* total number of local I/O resources */
#define VT3_IO_COUNT                      ( 111)

/* size of memory arrays for %I %Q %S */
#define BYTEI_SIZE                        (VT3_IO_COUNT * 4)
#define BYTEQ_SIZE                        (VT3_IO_COUNT * 2)
#define BYTES_SIZE                        (VT3_IO_COUNT * 1)

/* I/O force flags and values (used by the debugger) */
extern BYTE FAR vt3_force_flags           [VT3_IO_COUNT];
extern UINT FAR vt3_force_values          [VT3_IO_COUNT];

/* This function is called by the runtime system at the beginning.
 * In initializes all local and remote I/O resources */
void vt3_IO_init(void);

/* This function is called by the runtime system at time intervals = VT3_TASK_PERIOD_IO
 * In read and writes all local and remote I/O resources */
void vt3_IO_cycle(void);

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_IO_H */

/* end of file */
