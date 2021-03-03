:: file: C:\Users\Mert\Desktop\WORKSP~1\YALCIN~2\YALCIN~1\code\MC2M\CPU0\link.bat
:: date: Wed Aug 26 09:36:34 2020
cd "C:\Users\Mert\Desktop\WORKSP~1\YALCIN~2\YALCIN~1\code\MC2M\CPU0"
set TMP=C:\Users\Mert\AppData\Local\Temp
"C:\Program Files (x86)\Freescale\CWS12v5.1\Prog\linker.exe" -ViewHidden -WmsgFbm -AllocNext -WmsgSe1823 -obin\xxx_a01_cpu00. "C:\Users\Mert\Desktop\WORKSP~1\YALCIN~2\YALCIN~1\code\MC2M\CPU0\link.prm"
@type EDOUT
"C:\Program Files (x86)\Freescale\CWS12v5.1\Prog\burner.exe" -ViewHidden -f="C:\PROGRA~2\vt3\RESOUR~1\targets\MC2M_2~1\CPU0\lib\prm\burner.bbl" -env"ABS_FILE=C:\Users\Mert\Desktop\WORKSP~1\YALCIN~2\YALCIN~1\code\MC2M\CPU0\bin\xxx_a01_cpu00"
@type EDOUT
:: end of file
