/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN_COMMON_C
#define INCLUDE__VT3_CAN_COMMON_C

#include "vt3_base.h"
#include "vt3_canlib.h"

#include "vt3_CAN_common.h"
#include "vt3_POU_common.h"

#include "vt3_CAN__CanOpen.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* debug source address of this device */
const BYTE FAR vt3_local_debug_source_address = 13;

/* number of devices in the project */
const BYTE FAR vt3_devices_count = 6;

/* table of debug source address for each device */
const BYTE FAR vt3_devices_debug_source_address[] =
{
	/* SA,    device name          */
	   18, /* TERA12               */
	    5, /* CPU0                 */
	  133, /* CPU1                 */
	   13, /* GIGA                 */
	    2, /* Debug_GUI            */
	   50, /* NMS_GUI              */
}; /* vt3_devices_debug_source_address */

/* CAN-bus routing table (index is source address) */
const BYTE FAR vt3_routing_table[256] =
{
/* port bit,  SA, device name          */
	0x00, /*   0,                      */
	0x00, /*   1,                      */
	0x01, /*   2, Debug_GUI            */
	0x00, /*   3,                      */
	0x00, /*   4,                      */
	0x01, /*   5, CPU0                 */
	0x00, /*   6,                      */
	0x00, /*   7,                      */
	0x00, /*   8,                      */
	0x00, /*   9,                      */
	0x00, /*  10,                      */
	0x00, /*  11,                      */
	0x00, /*  12,                      */
	0x00, /*  13,                      */
	0x00, /*  14,                      */
	0x00, /*  15,                      */
	0x00, /*  16,                      */
	0x00, /*  17,                      */
	0x01, /*  18, TERA12               */
	0x00, /*  19,                      */
	0x00, /*  20,                      */
	0x00, /*  21,                      */
	0x00, /*  22,                      */
	0x00, /*  23,                      */
	0x00, /*  24,                      */
	0x00, /*  25,                      */
	0x00, /*  26,                      */
	0x00, /*  27,                      */
	0x00, /*  28,                      */
	0x00, /*  29,                      */
	0x00, /*  30,                      */
	0x00, /*  31,                      */
	0x00, /*  32,                      */
	0x00, /*  33,                      */
	0x00, /*  34,                      */
	0x00, /*  35,                      */
	0x00, /*  36,                      */
	0x00, /*  37,                      */
	0x00, /*  38,                      */
	0x00, /*  39,                      */
	0x00, /*  40,                      */
	0x00, /*  41,                      */
	0x00, /*  42,                      */
	0x00, /*  43,                      */
	0x00, /*  44,                      */
	0x00, /*  45,                      */
	0x00, /*  46,                      */
	0x00, /*  47,                      */
	0x00, /*  48,                      */
	0x00, /*  49,                      */
	0x01, /*  50, NMS_GUI              */
	0x00, /*  51,                      */
	0x00, /*  52,                      */
	0x00, /*  53,                      */
	0x00, /*  54,                      */
	0x00, /*  55,                      */
	0x00, /*  56,                      */
	0x00, /*  57,                      */
	0x00, /*  58,                      */
	0x00, /*  59,                      */
	0x00, /*  60,                      */
	0x00, /*  61,                      */
	0x00, /*  62,                      */
	0x00, /*  63,                      */
	0x00, /*  64,                      */
	0x00, /*  65,                      */
	0x00, /*  66,                      */
	0x00, /*  67,                      */
	0x00, /*  68,                      */
	0x00, /*  69,                      */
	0x00, /*  70,                      */
	0x00, /*  71,                      */
	0x00, /*  72,                      */
	0x00, /*  73,                      */
	0x00, /*  74,                      */
	0x00, /*  75,                      */
	0x00, /*  76,                      */
	0x00, /*  77,                      */
	0x00, /*  78,                      */
	0x00, /*  79,                      */
	0x00, /*  80,                      */
	0x00, /*  81,                      */
	0x00, /*  82,                      */
	0x00, /*  83,                      */
	0x00, /*  84,                      */
	0x00, /*  85,                      */
	0x00, /*  86,                      */
	0x00, /*  87,                      */
	0x00, /*  88,                      */
	0x00, /*  89,                      */
	0x00, /*  90,                      */
	0x00, /*  91,                      */
	0x00, /*  92,                      */
	0x00, /*  93,                      */
	0x00, /*  94,                      */
	0x00, /*  95,                      */
	0x00, /*  96,                      */
	0x00, /*  97,                      */
	0x00, /*  98,                      */
	0x00, /*  99,                      */
	0x00, /* 100,                      */
	0x00, /* 101,                      */
	0x00, /* 102,                      */
	0x00, /* 103,                      */
	0x00, /* 104,                      */
	0x00, /* 105,                      */
	0x00, /* 106,                      */
	0x00, /* 107,                      */
	0x00, /* 108,                      */
	0x00, /* 109,                      */
	0x00, /* 110,                      */
	0x00, /* 111,                      */
	0x00, /* 112,                      */
	0x00, /* 113,                      */
	0x00, /* 114,                      */
	0x00, /* 115,                      */
	0x00, /* 116,                      */
	0x00, /* 117,                      */
	0x00, /* 118,                      */
	0x00, /* 119,                      */
	0x00, /* 120,                      */
	0x00, /* 121,                      */
	0x00, /* 122,                      */
	0x00, /* 123,                      */
	0x00, /* 124,                      */
	0x00, /* 125,                      */
	0x00, /* 126,                      */
	0x00, /* 127,                      */
	0x00, /* 128,                      */
	0x00, /* 129,                      */
	0x00, /* 130,                      */
	0x00, /* 131,                      */
	0x00, /* 132,                      */
	0x01, /* 133, CPU1                 */
	0x00, /* 134,                      */
	0x00, /* 135,                      */
	0x00, /* 136,                      */
	0x00, /* 137,                      */
	0x00, /* 138,                      */
	0x00, /* 139,                      */
	0x00, /* 140,                      */
	0x00, /* 141,                      */
	0x00, /* 142,                      */
	0x00, /* 143,                      */
	0x00, /* 144,                      */
	0x00, /* 145,                      */
	0x00, /* 146,                      */
	0x00, /* 147,                      */
	0x00, /* 148,                      */
	0x00, /* 149,                      */
	0x00, /* 150,                      */
	0x00, /* 151,                      */
	0x00, /* 152,                      */
	0x00, /* 153,                      */
	0x00, /* 154,                      */
	0x00, /* 155,                      */
	0x00, /* 156,                      */
	0x00, /* 157,                      */
	0x00, /* 158,                      */
	0x00, /* 159,                      */
	0x00, /* 160,                      */
	0x00, /* 161,                      */
	0x00, /* 162,                      */
	0x00, /* 163,                      */
	0x00, /* 164,                      */
	0x00, /* 165,                      */
	0x00, /* 166,                      */
	0x00, /* 167,                      */
	0x00, /* 168,                      */
	0x00, /* 169,                      */
	0x00, /* 170,                      */
	0x00, /* 171,                      */
	0x00, /* 172,                      */
	0x00, /* 173,                      */
	0x00, /* 174,                      */
	0x00, /* 175,                      */
	0x00, /* 176,                      */
	0x00, /* 177,                      */
	0x00, /* 178,                      */
	0x00, /* 179,                      */
	0x00, /* 180,                      */
	0x00, /* 181,                      */
	0x00, /* 182,                      */
	0x00, /* 183,                      */
	0x00, /* 184,                      */
	0x00, /* 185,                      */
	0x00, /* 186,                      */
	0x00, /* 187,                      */
	0x00, /* 188,                      */
	0x00, /* 189,                      */
	0x00, /* 190,                      */
	0x00, /* 191,                      */
	0x00, /* 192,                      */
	0x00, /* 193,                      */
	0x00, /* 194,                      */
	0x00, /* 195,                      */
	0x00, /* 196,                      */
	0x00, /* 197,                      */
	0x00, /* 198,                      */
	0x00, /* 199,                      */
	0x00, /* 200,                      */
	0x00, /* 201,                      */
	0x00, /* 202,                      */
	0x00, /* 203,                      */
	0x00, /* 204,                      */
	0x00, /* 205,                      */
	0x00, /* 206,                      */
	0x00, /* 207,                      */
	0x00, /* 208,                      */
	0x00, /* 209,                      */
	0x00, /* 210,                      */
	0x00, /* 211,                      */
	0x00, /* 212,                      */
	0x00, /* 213,                      */
	0x00, /* 214,                      */
	0x00, /* 215,                      */
	0x00, /* 216,                      */
	0x00, /* 217,                      */
	0x00, /* 218,                      */
	0x00, /* 219,                      */
	0x00, /* 220,                      */
	0x00, /* 221,                      */
	0x00, /* 222,                      */
	0x00, /* 223,                      */
	0x00, /* 224,                      */
	0x00, /* 225,                      */
	0x00, /* 226,                      */
	0x00, /* 227,                      */
	0x00, /* 228,                      */
	0x00, /* 229,                      */
	0x00, /* 230,                      */
	0x00, /* 231,                      */
	0x00, /* 232,                      */
	0x00, /* 233,                      */
	0x00, /* 234,                      */
	0x00, /* 235,                      */
	0x00, /* 236,                      */
	0x00, /* 237,                      */
	0x00, /* 238,                      */
	0x00, /* 239,                      */
	0x00, /* 240,                      */
	0x00, /* 241,                      */
	0x00, /* 242,                      */
	0x00, /* 243,                      */
	0x00, /* 244,                      */
	0x00, /* 245,                      */
	0x00, /* 246,                      */
	0x00, /* 247,                      */
	0x00, /* 248,                      */
	0x00, /* 249,                      */
	0x00, /* 250,                      */
	0x00, /* 251,                      */
	0x00, /* 252,                      */
	0x00, /* 253,                      */
	0x00, /* 254,                      */
	0x01, /* broadcast */
};

/* CAN-bus source address */
const BYTE FAR vt3_CAN_source_address[2] = {
	/* CAN0 */ 0x0D,
	/* CAN1 */ 0x00,
}; /* vt3_CAN_source_address */

/* CAN-bus bitrate */
const UINT FAR vt3_CAN_bitrate[2] = {
	/* CAN0 */ 250,
	/* CAN1 */ 0,
}; /* vt3_CAN_bitrate */

/* Access Levels */
const WORD FAR vt3_CAN_License[][2] = {
	{ 0xA005, 100 },
	{ 0xA3B4, 100 },
	{ 0xA3C4, 100 },
	{ 0x0000,   0 },
};

/***********************************************************/
/* J1939 rx buffers                                        */

/* buffer sa = 146, port 0 */
static BYTE FAR rx_j1939_146_0[8];

/* buffer sa = 105, port 0 */
static BYTE FAR rx_j1939_105_0[8];

/* buffer sa = 85, port 0 */
static BYTE FAR rx_j1939_85_0[8];

/* buffer sa = 101, port 0 */
static BYTE FAR rx_j1939_101_0[8];

/* buffer sa = 147, port 0 */
static BYTE FAR rx_j1939_147_0[8];

/* buffer sa = 86, port 0 */
static BYTE FAR rx_j1939_86_0[8];

/* buffer sa = 81, port 0 */
static BYTE FAR rx_j1939_81_0[8];

/* buffer sa = 102, port 0 */
static BYTE FAR rx_j1939_102_0[8];

/* buffer sa = 87, port 0 */
static BYTE FAR rx_j1939_87_0[8];

/* buffer sa = 82, port 0 */
static BYTE FAR rx_j1939_82_0[8];

/* buffer sa = 134, port 0 */
static BYTE FAR rx_j1939_134_0[8];

/* buffer sa = 98, port 0 */
static BYTE FAR rx_j1939_98_0[8];

/* buffer sa = 78, port 0 */
static BYTE FAR rx_j1939_78_0[8];

/* buffer sa = 83, port 0 */
static BYTE FAR rx_j1939_83_0[8];

/* buffer sa = 129, port 0 */
static BYTE FAR rx_j1939_129_0[8];

/* buffer sa = 135, port 0 */
static BYTE FAR rx_j1939_135_0[8];

/* buffer sa = 99, port 0 */
static BYTE FAR rx_j1939_99_0[8];

/* buffer sa = 104, port 0 */
static BYTE FAR rx_j1939_104_0[8];

/* buffer sa = 79, port 0 */
static BYTE FAR rx_j1939_79_0[8];

/* buffer sa = 84, port 0 */
static BYTE FAR rx_j1939_84_0[8];

/* buffer sa = 141, port 0 */
static BYTE FAR rx_j1939_141_0[8];

/* buffer sa = 100, port 0 */
static BYTE FAR rx_j1939_100_0[8];

/* j1939 tx multi packet */
struct_j1939_MultiPacket j1939_MultiPacket = { 0, 0, 0, (BYTE FARPTR)NULL, 0xFF, 0, 0, 0 };

/* number of slots for receiving j1939 multipacket messages */
const BYTE FAR vt3_j1939_rx_count = 22;

/* slots for receiving multipacket j1939 messages - part in ROM */
const vt3_j1939_rx_slot_table_t FAR vt3_j1939_rx_slot_table[22] = {
	{ 146, 0, rx_j1939_146_0 }, 
	{ 105, 0, rx_j1939_105_0 }, 
	{  85, 0, rx_j1939_85_0 }, 
	{ 101, 0, rx_j1939_101_0 }, 
	{ 147, 0, rx_j1939_147_0 }, 
	{  86, 0, rx_j1939_86_0 }, 
	{  81, 0, rx_j1939_81_0 }, 
	{ 102, 0, rx_j1939_102_0 }, 
	{  87, 0, rx_j1939_87_0 }, 
	{  82, 0, rx_j1939_82_0 }, 
	{ 134, 0, rx_j1939_134_0 }, 
	{  98, 0, rx_j1939_98_0 }, 
	{  78, 0, rx_j1939_78_0 }, 
	{  83, 0, rx_j1939_83_0 }, 
	{ 129, 0, rx_j1939_129_0 }, 
	{ 135, 0, rx_j1939_135_0 }, 
	{  99, 0, rx_j1939_99_0 }, 
	{ 104, 0, rx_j1939_104_0 }, 
	{  79, 0, rx_j1939_79_0 }, 
	{  84, 0, rx_j1939_84_0 }, 
	{ 141, 0, rx_j1939_141_0 }, 
	{ 100, 0, rx_j1939_100_0 }, 
};

/* parallel array: size of slots for receiving multipacket j1939 messages */
const UINT FAR vt3_j1939_rx_slot_size_table[22] = {
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
	   8,
};

/* slots for receiving multipacket j1939 messages - part in SRAM */
vt3_j1939_rx_table_t FAR vt3_j1939_rx_table[22] = {
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
	{ 0, 0, 0, 0, 0, 0 }, 
};

/***********************************************************/

/* global CAN-bus initialization function */
void vt3_can_init(void)
{
	/* initialize each interface */
	vt3_can_CanOpen_init();
}

/* global CAN-bus receive function */
void vt3_can_rx(void)
{
	/* receive from each interface */
	vt3_can_CanOpen_rx();

	/* check device connection */
	vt3_alarm_disconnected_TERA12 = ALM_login_state(18) != LOGIN_OK;
	vt3_alarm_disconnected_MC2M_CPU0 = ALM_login_state(5) != LOGIN_OK;
	vt3_alarm_disconnected_MC2M_CPU1 = ALM_login_state(133) != LOGIN_OK;
	vt3_alarm_disconnected_Debug_GUI = ALM_login_state(2) != LOGIN_OK;
	vt3_alarm_disconnected_NMS_GUI = ALM_login_state(50) != LOGIN_OK;
}

/* global CAN-bus transmit function */
void vt3_can_tx(void)
{
	/* transmit to each interface */
	vt3_can_CanOpen_tx();
}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN_COMMON_C */

/* end of file */
