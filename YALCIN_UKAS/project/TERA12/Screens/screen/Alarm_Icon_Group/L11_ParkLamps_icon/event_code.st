
(* write the event code in language: Structured Text *)

IF(MC2M_TERA_Icon_Status_L11 ) THEN 
  IF(MC2M_TERA_Icon_Status_BO_S1 OR
     MC2M_TERA_Icon_Status_BO_S2 OR 
     MC2M_TERA_Icon_Status_BO_S3)THEN
     Icon_Status_L11 := 2;
     ELSE 
     Icon_Status_L11 := 1;
     END_IF
ELSE
    Icon_Status_L11 := 0;
END_IF