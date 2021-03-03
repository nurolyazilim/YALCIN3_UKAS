:: file: C:\Users\Mert\Desktop\WORKSP~1\YALCIN~2\YALCIN~1\code\GIGA\link.bat
:: date: Wed Aug 26 09:37:07 2020
cd "C:\Users\Mert\Desktop\WORKSP~1\YALCIN~2\YALCIN~1\code\GIGA"
set TMP=C:\Users\Mert\AppData\Local\Temp
"C:\Program Files (x86)\Freescale\CWS12v5.1\Prog\linker.exe" -ViewHidden -WmsgFbm -AllocNext -WmsgSe1823 -obin\xxx_a01_giga. "C:\Users\Mert\Desktop\WORKSP~1\YALCIN~2\YALCIN~1\code\GIGA\link.prm"
@type EDOUT
"C:\Program Files (x86)\Freescale\CWS12v5.1\Prog\burner.exe" -ViewHidden -f="C:\PROGRA~2\vt3\RESOUR~1\targets\GIGA_0~1\lib\prm\burner.bbl" -env"ABS_FILE=bin\xxx_a01_giga"
@type EDOUT
:: end of file
