/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DM01_EBS_DECODE_C
#define INCLUDE__VT3_POU__DM01_EBS_DECODE_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* initializers of addressed variables */

/* table of initializators of addressed variables */
static const vt3_screen_initializer FAR __init_table__DM01_EBS_decode[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__DM01_EBS_decode[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const DM01_EBS_decode_t FAR __const__DM01_EBS_decode__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* dlc                  */ ((UINT)0U),
	/* data                 */ (BYTE FARPTR)NULL,
	/* DTC_COUNT            */ ((UINT)0U),
	/* SPN                  */ ((UDINT)0UL),
	/* FMI                  */ ((USINT)0U),
	/* CM                   */ 0,
	/* OC                   */ ((USINT)0U),
	/* ProtectLamp          */ 0,
	/* AmberWarningLamp     */ 0,
	/* RedStopLamp          */ 0,
	/* MalfunctionIndicatorLamp */ 0,
	/* FlashProtectLamp     */ 0,
	/* FlashAmberWarningLamp */ 0,
	/* FlashRedStopLamp     */ 0,
	/* FlashMalfunctionIndicatorLamp */ 0,
	/* MultiFaultCounter    */ ((BYTE)0x0U),
}; /* end of __const__DM01_EBS_decode__param_init */

/* initialization of PROGRAM status */
void DM01_EBS_decode__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__DM01_EBS_decode; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&DM01_EBS_decode, &__const__DM01_EBS_decode__param_init, sizeof __const__DM01_EBS_decode__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void DM01_EBS_decode__call(void)
{
	/* local variables */
	UINT i = ((UINT)0U); /* dtc index */
	UINT n = ((UINT)0U); /* byte offset = i * 4 + 2 */
	/* end of local variables */

	/* preamble: conditional execution */
	DM01_EBS_decode.ENO = DM01_EBS_decode.EN;
	if ( ! DM01_EBS_decode.EN )
		return;


	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/MC2M/CPU0/SubRoutines/EBS/AlarmManagement/MultiAlarm/DM01_EBS_decode
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	    /* Lamps status is encoded in first two bytes */
	    (DM01_EBS_decode.ProtectLamp)                     = (Enum13)(((Enum13)(DM01_EBS_decode.data)[0] & 0x03));
	    (DM01_EBS_decode.AmberWarningLamp)                = (Enum13)((((Enum13)(DM01_EBS_decode.data)[0] >> 2) & 0x03));
	    (DM01_EBS_decode.RedStopLamp)                     = (Enum13)((((Enum13)(DM01_EBS_decode.data)[0] >> 4) & 0x03));
	    (DM01_EBS_decode.MalfunctionIndicatorLamp)        = (Enum14)((((Enum14)(DM01_EBS_decode.data)[0] >> 6) & 0x03));
	    (DM01_EBS_decode.FlashProtectLamp)                = (Enum15)(((Enum15)(DM01_EBS_decode.data)[1] & 0x03));
	    (DM01_EBS_decode.FlashAmberWarningLamp)           = (Enum15)((((Enum15)(DM01_EBS_decode.data)[1] >> 2) & 0x03));
	    (DM01_EBS_decode.FlashRedStopLamp)                = (Enum15)((((Enum15)(DM01_EBS_decode.data)[1] >> 4) & 0x03));
	    (DM01_EBS_decode.FlashMalfunctionIndicatorLamp)   = (Enum16)((((Enum16)(DM01_EBS_decode.data)[1] >> 6) & 0x03));
	
	    
	    /* after the first two bytes, an array of diagnostic trouble code follows 
	     * each item of the array is 4 bytes 
	     * calculate the number of items
	     */
	
	    (DM01_EBS_decode.DTC_COUNT) = ((DM01_EBS_decode.dlc) - 2) / 4;
	    if ( (DM01_EBS_decode.DTC_COUNT) == 1 ) {
	        if (EBS_MoreThanOneActiveFault) {
	            (DM01_EBS_decode.MultiFaultCounter)++;
	            if ((DM01_EBS_decode.MultiFaultCounter) > 1) {
	                EBS_MoreThanOneActiveFault = (FALSE);
	            }
	        }
	    }
	    else {
	        EBS_MoreThanOneActiveFault = (TRUE);
	        (DM01_EBS_decode.MultiFaultCounter) = 0;
	    }    
	    /* scan the items */
	    for ( i = 0; i < (DM01_EBS_decode.DTC_COUNT); i ++ )
	    {
	        /* bytes offset */
	        n = i * 4 + 2;
	        
	        /* extract the relevant information from the item */
	        (DM01_EBS_decode.CM) = (Enum17)((((Enum17)(DM01_EBS_decode.data)[n+3] >> 7) & 0x01));
	        if ( (DM01_EBS_decode.CM) == 0 )
	        {   
	            /* SPN interpretation Version 4 */
	           /* SPN = (UDINT)(((((UDINT)(data[n+2] & 0xE0) << 16) | 
	                            ((UDINT)data[n+1] << 8)) | 
	                             (UDINT)data[n])); */
	                             
	            (DM01_EBS_decode.SPN) = (UDINT)(((((UDINT)((DM01_EBS_decode.data)[n+2] & 0xE0) << 11) | 
	                            ((UDINT)(DM01_EBS_decode.data)[n+1] << 8)) | 
	                             (UDINT)(DM01_EBS_decode.data)[n]));
	        }
	        else
	        {
	            /* SPN interpretation Version 1 */
	            (DM01_EBS_decode.SPN) = (UDINT)(((((UDINT)(DM01_EBS_decode.data)[n] << 11) | 
	                             ((UDINT)(DM01_EBS_decode.data)[n+1] << 3)) | 
	                             ((UDINT)((DM01_EBS_decode.data)[n+2] & 0xE0) >> 5)));
	        }
	        
	        (DM01_EBS_decode.FMI) = (USINT)((((USINT)(DM01_EBS_decode.data)[n+2]) & 0x1F));        
	        (DM01_EBS_decode.OC) = (USINT)(((USINT)(DM01_EBS_decode.data)[n+3] & 0x7F));
	        
	        /* TODO: insert code here to process the 
	         * diagnostic trouble code, using the values of
	         * CM, SPN, FMI, OC to perform the action 
	         * required by the application 
	         */
	         
	         
	        EBS_dtcSpnEngine[i+1] = (DM01_EBS_decode.SPN); //SPN listesi
	        EBS_dtcFmiEngine[i+1] = (DM01_EBS_decode.FMI); //FMI listesi
	        EBS_dtcSpnEngine[0]   = i+1; //Kac adet alarm var? 
	
	    EBS_dataMatrix[i][0] = i+1;
	    EBS_dataMatrix[i][1] = (DM01_EBS_decode.SPN);
	    EBS_dataMatrix[i][2] = USINT_TO_UDINT((DM01_EBS_decode.FMI));
	    EBS_dataMatrix[i][3] = USINT_TO_UDINT((DM01_EBS_decode.OC));
	
	    GlobalSPN=(DM01_EBS_decode.SPN);
	    GlobalFMI=(DM01_EBS_decode.FMI);
	 //   ECM_SuspectParameterNumber = SPN;
	 //   ECM_FailureModeIdentifier = FMI; 
	    
	    //1111TCM_Table_RED_Lamp = RedStopLamp;
	    //1111TCM_Table_AMBER_Lamp = AmberWarningLamp;
	    
	    }
	}

	/* end of PROGRAM body */
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__DM01_EBS_DECODE_C */

/* end of file */
