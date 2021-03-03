    
    //ilk calismada dikkate alma   
    if (!ECM_starting) {
        
//        DM1_Engine_decode.dlc = dlc;
        DM01_ECM_decode.dlc = dlc;
//        DM1_Engine_decode.data = data;
        DM01_ECM_decode.data = data;
//        DM1_Engine_decode__call();
        DM01_ECM_decode__call();

        if ((DM01_ECM_decode.DTC_COUNT == 1) &&
            (ECM_MoreThanOneActiveFault)) {
                ;
        }
        else {
            //Amber Warning Lamp
            //lamp_command = DM1_Engine_AmberWarningLamp * 4;
            lamp_command = DM01_ECM_AmberWarningLamp * 4;
            //lamp_command |= DM1_Engine_FlashAmberWarningLamp;
            lamp_command |= DM01_ECM_FlashAmberWarningLamp;
            ECM_led_AWL_Engine = lamp_command & 0x0F;
        
            //Red Stop Lamp
            lamp_command *= 16; //left shift 4 bits
            //lamp_command |= DM1_Engine_RedStopLamp * 4;
            lamp_command |= DM01_ECM_RedStopLamp * 4;
            //lamp_command |= DM1_Engine_FlashRedStopLamp;        
            lamp_command |= DM01_ECM_FlashRedStopLamp;        
            ECM_led_RSL_Engine = lamp_command & 0x0F;
        
            //Red Protection Lamp
            lamp_command *= 16; //left shift 4 bits
            //lamp_command |= DM1_Engine_ProtectLamp * 4;
            lamp_command |= DM01_ECM_ProtectLamp * 4;
            //lamp_command |= DM1_Engine_FlashProtectLamp;
            lamp_command |= DM01_ECM_FlashProtectLamp;
            ECM_led_RPL_Engine = lamp_command & 0x0F;
        }
    }
    
    return TRUE;   