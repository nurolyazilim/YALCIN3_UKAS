


IF(MC2M_TERA_DIAG_Stat_4x4 == 3)THEN
    L10_Difflock_Dropbox := TRUE;    
    L11_Difflock_Front := TRUE;
    L12_Difflock_Rear := TRUE;
ELSIF(MC2M_TERA_DIAG_Stat_4x4 == 2)THEN
    L10_Difflock_Dropbox := TRUE;    
    L11_Difflock_Front := FALSE;
    L12_Difflock_Rear := TRUE;
ELSIF(MC2M_TERA_DIAG_Stat_4x4 == 1)THEN
    L10_Difflock_Dropbox := TRUE;    
    L11_Difflock_Front := FALSE;
    L12_Difflock_Rear := FALSE;
ELSE 
    L10_Difflock_Dropbox := FALSE;    
    L11_Difflock_Front := FALSE;
    L12_Difflock_Rear := FALSE;
END_IF

