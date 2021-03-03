/* device:       /project/MC2M/CPU1 */
/* device model: MC2M_2CPU\CPU1 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANINTERFACE_C
#define INCLUDE__VT3_CAN__CANINTERFACE_C

#include <stdlib.h>
#include "vt3_runtime.h"
#include "vt3_canlib.h"
#include "vt3_POU_common.h"
#include "vt3_CAN__CanInterface.h"
#include "vt3_vars.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* suppress HC12 specific warnings */
#pragma MESSAGE DISABLE C5909 // Assignment in condition
#pragma MESSAGE DISABLE C5918 // Removed dead goto
#pragma MESSAGE DISABLE C5917 // Removed dead assignment
#pragma MESSAGE DISABLE C5660 // Removed dead code
#pragma MESSAGE DISABLE C1420 // Result of function-call is ignored
#pragma MESSAGE DISABLE C4002 // Result not used


/* CAN-bus receive interrupt function */
/* message:  CAN_152 */
/* COB-ID:   0x00000152 */
/* CAN port: 0 */
static void canrx_0_00000152_CAN_152(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: InSideTemperature */
	if ( dlc >= 8 )
	{
		MC2M_TERA_InSideTemperature = (SINT)((SINT)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_162 */
/* COB-ID:   0x00000162 */
/* CAN port: 0 */
static void canrx_0_00000162_CAN_162(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: OUT21AN */
	if ( dlc >= 2 )
	{
		MC2M_TERA_DIAG_OUT21AN = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_713 */
/* COB-ID:   0x00000713 */
/* CAN port: 0 */
static void canrx_0_00000713_CAN_713(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: ResetTrip */
	if ( dlc >= 1 )
	{
		GIGA_MC2M_ResetTrip = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: GIGAOdometerBackup */
	if ( dlc >= 5 )
	{
		GIGA_MC2M_GIGAOdometerBackup = (UDINT)(((((UDINT)db[1] | ((UDINT)db[2] << 8)) | ((UDINT)db[3] << 16)) | ((UDINT)db[4] << 24)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_Horn */
/* COB-ID:   0x38FFFF4E */
/* CAN port: 0 */
static void canrx_0_38FFFF4E_CAN_Horn(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: Horn_Switch_On */
	if ( dlc >= 6 )
	{
		Horn_Switch_On = (BYTE)((BYTE)db[5]);
	}

} /* CAN-bus receive end */

/* table of received messages */
static const vt3_can_rx_init_t FAR vt3_can_rx_init_CanInterface[4] = {
	/*    cob-id    tout  alm  alm   mux   mux  call function                            */
	/*                    off   on   pos    id                                           */
	{ 0x00000152,    150,   3,   1,  255,    0, canrx_0_00000152_CAN_152                 },
	{ 0x00000162,   1500,   3,   1,  255,    0, canrx_0_00000162_CAN_162                 },
	{ 0x00000713,   1500,   3,   1,  255,    0, canrx_0_00000713_CAN_713                 },
	{ 0x18FFFF4E,   1500,   3,   1,  255,    0, canrx_0_38FFFF4E_CAN_Horn                },
};

/* initializers for receive and transmit variables */
static const SINT FAR __init_value__MC2M_TERA_InSideTemperature = ((SINT)0);
static const UINT FAR __init_value__MC2M_TERA_DIAG_OUT21AN = ((UINT)0U);
static const BOOL FAR __init_value__GIGA_MC2M_ResetTrip = FALSE;
static const UDINT FAR __init_value__GIGA_MC2M_GIGAOdometerBackup = ((UDINT)0UL);
static const BYTE FAR __init_value__Horn_Switch_On = ((BYTE)0x0U);

/* table of initializators */
static const vt3_screen_initializer FAR __init_table__CanInterface[] = {
	{ &MC2M_TERA_InSideTemperature, &__init_value__MC2M_TERA_InSideTemperature, 1 },
	{ &MC2M_TERA_DIAG_OUT21AN, &__init_value__MC2M_TERA_DIAG_OUT21AN, 2 },
	{ &GIGA_MC2M_ResetTrip , &__init_value__GIGA_MC2M_ResetTrip, 1 },
	{ &GIGA_MC2M_GIGAOdometerBackup, &__init_value__GIGA_MC2M_GIGAOdometerBackup, 4 },
	{ &Horn_Switch_On      , &__init_value__Horn_Switch_On, 1 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__CanInterface[] */

/* transmit timers */


/******************************************************************************/
/* remote I/O devices */
/******************************************************************************/


/******************************************************************************/
/* functions */
/******************************************************************************/

/* CAN interface initialization function */
void vt3_can_CanInterface_init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize variables */
	for ( p = __init_table__CanInterface; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* reset alarms */
	vt3_can_alarm_busoff_CAN_interface = FALSE;
	vt3_can_alarm_CAN_152 = FALSE;
	vt3_can_alarm_CAN_162 = FALSE;
	vt3_can_alarm_CAN_713 = FALSE;
	vt3_can_alarm_CAN_Horn = FALSE;

	/* initialize can TX value */

	/* reset timers */

	/* initialize the interface */
	vt3_init_interface(0, 250, vt3_can_rx_init_CanInterface, 4);

	/******************************************************************************/
	/* initialization of remote I/O devices */
	/******************************************************************************/


}

/* CAN interface receive function */
void vt3_can_CanInterface_rx(void)
{
	CanRxObj * pmsg;  /* pointer to message record */

	/* check for BUSOFF errors */
	if ( vt3_can_check_busoff(0) )
	{
		vt3_can_alarm_busoff_CAN_interface = TRUE;
	}

	/* RX message: CAN_152 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_152);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_InSideTemperature = __init_value__MC2M_TERA_InSideTemperature;
	}
	vt3_can_alarm_CAN_152 = ! pmsg->RxOK;

	/* RX message: CAN_162 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_162);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_DIAG_OUT21AN = __init_value__MC2M_TERA_DIAG_OUT21AN;
	}
	vt3_can_alarm_CAN_162 = ! pmsg->RxOK;

	/* RX message: CAN_713 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_713);
	if ( ! pmsg->RxOK ) 
	{
		GIGA_MC2M_ResetTrip = __init_value__GIGA_MC2M_ResetTrip;
		GIGA_MC2M_GIGAOdometerBackup = __init_value__GIGA_MC2M_GIGAOdometerBackup;
	}
	vt3_can_alarm_CAN_713 = ! pmsg->RxOK;

	/* RX message: CAN_Horn */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_HORN);
	if ( ! pmsg->RxOK ) 
	{
		Horn_Switch_On = __init_value__Horn_Switch_On;
	}
	vt3_can_alarm_CAN_Horn = ! pmsg->RxOK;


	/******************************************************************************/
	/* receive messages from remote I/O devices */
	/******************************************************************************/


}

/* CAN interface transmit function */
void vt3_can_CanInterface_tx(void)
{

	/******************************************************************************/
	/* transmit messages to remote I/O devices (only for master) */
	/******************************************************************************/

}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN__CANINTERFACE_C */

/* end of file */
