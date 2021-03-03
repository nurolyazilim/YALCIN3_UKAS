main_timer := main_timer +1;

IF ((main_timer MOD 5) == 0) THEN
    blink05 := NOT blink05;
END_IF