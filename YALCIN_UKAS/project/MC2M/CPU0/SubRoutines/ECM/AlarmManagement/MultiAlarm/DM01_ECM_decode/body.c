
    /* Lamps status is encoded in first two bytes */
    ProtectLamp                     = (Enum13)(((Enum13)data[0] & 0x03)); 
    AmberWarningLamp                = (Enum13)((((Enum13)data[0] >> 2) & 0x03));
    RedStopLamp                     = (Enum13)((((Enum13)data[0] >> 4) & 0x03));
    MalfunctionIndicatorLamp        = (Enum14)((((Enum14)data[0] >> 6) & 0x03));
    FlashProtectLamp                = (Enum15)(((Enum15)data[1] & 0x03));
    FlashAmberWarningLamp           = (Enum15)((((Enum15)data[1] >> 2) & 0x03));
    FlashRedStopLamp                = (Enum15)((((Enum15)data[1] >> 4) & 0x03));
    FlashMalfunctionIndicatorLamp   = (Enum16)((((Enum16)data[1] >> 6) & 0x03));

    
    /* after the first two bytes, an array of diagnostic trouble code follows 
     * each item of the array is 4 bytes 
     * calculate the number of items
     */

    DTC_COUNT = (dlc - 2) / 4;
    if ( DTC_COUNT == 1 ) {
        if (ECM_MoreThanOneActiveFault) {
            MultiFaultCounter++;
            if (MultiFaultCounter > 1) {
                ECM_MoreThanOneActiveFault = FALSE;
            }
        }
    }
    else {
        ECM_MoreThanOneActiveFault = TRUE;
        MultiFaultCounter = 0;
    }    
    /* scan the items */
    for ( i = 0; i < DTC_COUNT; i ++ )
    {
        /* bytes offset */
        n = i * 4 + 2;
        
        /* extract the relevant information from the item */
        CM = (Enum17)((((Enum17)data[n+3] >> 7) & 0x01));
        if ( CM == 0 )
        {   
            /* SPN interpretation Version 4 */
           /* SPN = (UDINT)(((((UDINT)(data[n+2] & 0xE0) << 16) | 
                            ((UDINT)data[n+1] << 8)) | 
                             (UDINT)data[n])); */
                             
            SPN = (UDINT)(((((UDINT)(data[n+2] & 0xE0) << 11) | 
                            ((UDINT)data[n+1] << 8)) | 
                             (UDINT)data[n]));
        }
        else
        {
            /* SPN interpretation Version 1 */
            SPN = (UDINT)(((((UDINT)data[n] << 11) | 
                             ((UDINT)data[n+1] << 3)) | 
                             ((UDINT)(data[n+2] & 0xE0) >> 5)));
        }
        
        FMI = (USINT)((((USINT)data[n+2]) & 0x1F));        
        OC = (USINT)(((USINT)data[n+3] & 0x7F));
        
        /* TODO: insert code here to process the 
         * diagnostic trouble code, using the values of
         * CM, SPN, FMI, OC to perform the action 
         * required by the application 
         */
         
         
        ECM_dtcSpnEngine[i+1] = SPN; //SPN listesi
        ECM_dtcFmiEngine[i+1] = FMI; //FMI listesi
        ECM_dtcSpnEngine[0]   = i+1; //Kac adet alarm var? 

    ECM_dataMatrix[i][0] = i+1;
    ECM_dataMatrix[i][1] = SPN;
    ECM_dataMatrix[i][2] = USINT_TO_UDINT(FMI);
    ECM_dataMatrix[i][3] = USINT_TO_UDINT(OC);

    GlobalSPN=SPN;
    GlobalFMI=FMI;
 //   ECM_SuspectParameterNumber = SPN;
 //   ECM_FailureModeIdentifier = FMI; 
    
    //1111Table_RED_Lamp = RedStopLamp;
    //1111Table_AMBER_Lamp = AmberWarningLamp;
    
    }