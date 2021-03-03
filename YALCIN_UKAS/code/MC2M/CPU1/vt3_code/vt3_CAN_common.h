/* device:       /project/MC2M/CPU1 */
/* device model: MC2M_2CPU\CPU1 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN_COMMON_H
#define INCLUDE__VT3_CAN_COMMON_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* global CAN-bus initialization function */
void vt3_can_init(void);

/* global CAN-bus receive function */
void vt3_can_rx(void);

/* global CAN-bus transmit function */
void vt3_can_tx(void);

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_CAN_COMMON_H */

/* end of file */
