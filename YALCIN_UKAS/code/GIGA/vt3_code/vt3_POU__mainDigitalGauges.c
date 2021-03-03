/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINDIGITALGAUGES_C
#define INCLUDE__VT3_POU__MAINDIGITALGAUGES_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* suppress HC12 specific warnings */
#pragma MESSAGE DISABLE C5909 // Assignment in condition
#pragma MESSAGE DISABLE C5918 // Removed dead goto
#pragma MESSAGE DISABLE C5917 // Removed dead assignment
#pragma MESSAGE DISABLE C5660 // Removed dead code
#pragma MESSAGE DISABLE C1420 // Result of function-call is ignored
#pragma MESSAGE DISABLE C4002 // Result not used

/* initializers of addressed variables */

/* table of initializators of addressed variables */
static const vt3_screen_initializer FAR __init_table__mainDigitalGauges[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainDigitalGauges[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainDigitalGauges_t FAR __const__mainDigitalGauges__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainDigitalGauges__param_init */

/* initialization of PROGRAM status */
void mainDigitalGauges__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainDigitalGauges; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainDigitalGauges, &__const__mainDigitalGauges__param_init, sizeof __const__mainDigitalGauges__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainDigitalGauges__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	mainDigitalGauges.ENO = mainDigitalGauges.EN;
	if ( ! mainDigitalGauges.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalGIGA_ServiceBrake1Input = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_153 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_153; i += 1 )
			{
				GIGA_ServiceBrake1InputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)1)),
					(i)), 100)] = (UINT)(GIGA_ServiceBrake1InputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		GIGA_ServiceBrake1InputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_ServiceBrake1);

		{
			/* for loop */
			const SINT _forstop_573 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_573; i += 1 )
			{
				TotalGIGA_ServiceBrake1Input = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalGIGA_ServiceBrake1Input),
					(GIGA_ServiceBrake1InputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		ServiceBrake1InputFiltered = (USINT)REAL_TO_USINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalGIGA_ServiceBrake1Input)),
				SINT_TO_REAL((SINT)(((SINT)50)))));

		GIGA_ServiceBrake1 = (USINT)ADD_USINT((ServiceBrake1InputFiltered),
			(GIGABarGaugeOverride));

		if ( GT_BYTE_2((GIGA_ServiceBrake1),
			((SINT)100)) ) {
			GIGA_ServiceBrake1 = (USINT)((SINT)100);
		}

		TotalGIGA_ServiceBrake2Input = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_1206 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_1206; i += 1 )
			{
				GIGA_ServiceBrake2InputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)1)),
					(i)), 100)] = (UINT)(GIGA_ServiceBrake2InputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)100)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		GIGA_ServiceBrake2InputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_ServiceBrake2);

		{
			/* for loop */
			const SINT _forstop_1626 = SUB_SINT((SINT)(((SINT)100)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_1626; i += 1 )
			{
				TotalGIGA_ServiceBrake2Input = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalGIGA_ServiceBrake2Input),
					(GIGA_ServiceBrake2InputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		ServiceBrake2InputFiltered = (USINT)REAL_TO_USINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalGIGA_ServiceBrake2Input)),
				SINT_TO_REAL((SINT)(((SINT)100)))));

		GIGA_ServiceBrake2 = (USINT)ADD_USINT((ServiceBrake2InputFiltered),
			(GIGABarGaugeOverride));

		if ( GT_BYTE_2((GIGA_ServiceBrake2),
			((SINT)100)) ) {
			GIGA_ServiceBrake2 = (USINT)((SINT)100);
		}

		TotalGIGA_ParkingBrakePressureInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_2320 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_2320; i += 1 )
			{
				GIGA_ParkingBrakePressureInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)1)),
					(i)), 100)] = (UINT)(GIGA_ParkingBrakePressureInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)50)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		GIGA_ParkingBrakePressureInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_ParkingBrakePressure);

		{
			/* for loop */
			const SINT _forstop_2803 = SUB_SINT((SINT)(((SINT)50)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_2803; i += 1 )
			{
				TotalGIGA_ParkingBrakePressureInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalGIGA_ParkingBrakePressureInput),
					(GIGA_ParkingBrakePressureInputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		ParkingBrakePressureInputFiltered = (USINT)REAL_TO_USINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalGIGA_ParkingBrakePressureInput)),
				SINT_TO_REAL((SINT)(((SINT)50)))));

		GIGA_ParkingBrakePressure = (USINT)ADD_USINT((ParkingBrakePressureInputFiltered),
			(GIGABarGaugeOverride));

		if ( GT_BYTE_2((GIGA_ParkingBrakePressure),
			((SINT)100)) ) {
			GIGA_ParkingBrakePressure = (USINT)((SINT)100);
		}

		TotalGIGA_AccessoryPressureInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_3521 = SUB_SINT((SINT)(((SINT)20)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_3521; i += 1 )
			{
				GIGA_AccessoryPressureInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)20)),
						((SINT)1)),
					(i)), 100)] = (UINT)(GIGA_AccessoryPressureInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)20)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		GIGA_AccessoryPressureInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_AccessoryPressure);

		{
			/* for loop */
			const SINT _forstop_3977 = SUB_SINT((SINT)(((SINT)20)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_3977; i += 1 )
			{
				TotalGIGA_AccessoryPressureInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalGIGA_AccessoryPressureInput),
					(GIGA_AccessoryPressureInputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		AccessoryPressureInputFiltered = (USINT)REAL_TO_USINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalGIGA_AccessoryPressureInput)),
				SINT_TO_REAL((SINT)(((SINT)20)))));

		GIGA_AccessoryPressure = (USINT)ADD_USINT((AccessoryPressureInputFiltered),
			(GIGABarGaugeOverride));

		if ( GT_BYTE_2((GIGA_AccessoryPressure),
			((SINT)100)) ) {
			GIGA_AccessoryPressure = (USINT)((SINT)100);
		}

		if ( (NMSGUI_MC2M_hydraulic_tank_pressure_touch) ) {
			GIGA_HyraulicLevel = (USINT)(NMSGUI_MC2M_hydraulic_tank_pressure);
		} else if  ( TRUE ) {
			GIGA_HyraulicLevel = (USINT)INT_TO_USINT((MC2M_TERA_DIAG_PresLevel_Normalized));
		}

		if ( OR_BOOL(OR_BOOL(LT_BYTE_2((GIGA_HyraulicLevel),
					((SINT)20)),
				GT_BYTE_2((GIGA_HyraulicLevel),
					((SINT)70))),
			(test)) ) {
			if ( GT_SINT_2((hydraulicPressureTimer),
				((SINT)100)) ) {
				Stat_Buzzer = TRUE;
				hydraulicPressureTimer = (SINT)((SINT)101);
				if ( GT_WORD_2((buzzertimer),
					((SINT)20)) ) {
					Buzzer_Frequency = (UINT)((INT)700);
					buzzertimer = (UINT)((SINT)21);
				} else if  ( TRUE ) {
					Buzzer_Frequency = (UINT)((SINT)0);
					buzzertimer = (UINT)ADD_UINT((buzzertimer),
						((SINT)1));
				}
			} else if  ( TRUE ) {
				hydraulicPressureTimer = (SINT)ADD_SINT((hydraulicPressureTimer),
					((SINT)1));
				Stat_Buzzer = FALSE;
				buzzertimer = (UINT)((SINT)0);
			}
		} else if  ( TRUE ) {
			hydraulicPressureTimer = (SINT)((SINT)0);
			Stat_Buzzer = FALSE;
			buzzertimer = (UINT)((SINT)0);
		}

		if ( (NMSGUI_MC2M_hydraulic_tank_temp_touch) ) {
			GIGA_HyraulicTemp = (SINT)(NMSGUI_MC2M_hydraulic_tank_temp);
		} else if  ( TRUE ) {
			GIGA_HyraulicTemp = (SINT)INT_TO_SINT((MC2M_TERA_DIAG_HTempLevel_Normalized));
		}

		GIGA_VVRPump = (INT)(MC2M_TERA_DIAG_VvrPump);

		GIGA_VVRPumpTrigger = (SINT)(MC2M_TERA_DIAG_VVRPumpTrigger);

		GIGA_CACTemp = (INT)(MC2M_TERA_DIAG_CACTemp);

		GIGA_RadiatorTemp = (INT)(MC2M_TERA_RadiatorTemp);

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return;

	}


	/* end of PROGRAM body */
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__MAINDIGITALGAUGES_C */

/* end of file */
