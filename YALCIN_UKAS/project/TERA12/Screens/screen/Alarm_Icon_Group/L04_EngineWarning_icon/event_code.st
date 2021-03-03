
(* write the event code in language: Structured Text *)
IF(MC2M_TERA_Icon_Status_L04)THEN
    Icon_Status_L04 := 2;
ELSIF(MC2M_TERA_Icon_Status_L05)THEN
    Icon_Status_L04 := 1;
ELSE
    Icon_Status_L04 := 0;
END_IF