
(* type code here *)

// öncelik kumanda da olacak 
//Cmd_winch_Up_RS:= IOMODE_2_DIGIN11_Winch_RS_Up AND (NOT IOMODE_2_DIGIN09_Winch_RS_Down);


stat_endOfRope       := IOMODE_2_DIGIN06_EndOfRope;
stat_winch_clutch_RC := IOMODE_2_DIGIN10_Winch_RC_Clutch;
stat_winch_clutch_RS := IOMODE_2_DIGIN08_Winch_RS_Clutch;



stat_winch_Up_RS     := IOMODE_2_DIGIN11_Winch_RS_Up AND (NOT IOMODE_2_DIGIN09_Winch_RS_Down);   //  hangisi up down 1 mi 2 mi ? vinç kontrol valfi olarak 
stat_winch_Down_RS   := IOMODE_2_DIGIN09_Winch_RS_Down AND (NOT IOMODE_2_DIGIN11_Winch_RS_Up);

stat_winch_Up_RC     := IOMODE_2_DIGIN00_Winch_RC_Up AND( NOT IOMODE_2_DIGIN02_Winch_RC_Down);
stat_winch_Down_RC   := IOMODE_2_DIGIN02_Winch_RC_Down AND(NOT IOMODE_2_DIGIN00_Winch_RC_Up);



MC2M_MUX_DIGOUT23_Winch_Up    := (stat_winch_Up_RS AND (NOT stat_winch_Down_RC)) OR stat_winch_Up_RC;  // wich control up rs 
MC2M_MUX_DIGOUT24_Winch_Down  := (stat_winch_Down_RS AND (NOT stat_winch_Up_RC)) OR stat_winch_Down_RC;


MC2M_MUX_DIGOUT25_Winch_Clutch:= stat_winch_clutch_RC OR stat_winch_clutch_RS;

//MC2M_MUX_DIGOUT24_Winch_RS_Down:= IOMODE_2_DIGIN09_Winch_RS_Down;  // winch control rs down 

