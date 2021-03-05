:: file: C:\Users\yazilim1\Desktop\nmsGit\YAE8E3~1\YALCIN~1\code\MC2M\CPU1\link.bat
:: date: Fri Mar 05 15:55:33 2021
cd "C:\Users\yazilim1\Desktop\nmsGit\YAE8E3~1\YALCIN~1\code\MC2M\CPU1"
set TMP=C:\Users\yazilim1\AppData\Local\Temp
"C:\Program Files (x86)\Freescale\CWS12v5.1\Prog\linker.exe" -ViewHidden -WmsgFbm -AllocNext -WmsgSe1823 -obin\xxx_a01_cpu01. "C:\Users\yazilim1\Desktop\nmsGit\YAE8E3~1\YALCIN~1\code\MC2M\CPU1\link.prm"
@type EDOUT
"C:\Program Files (x86)\Freescale\CWS12v5.1\Prog\burner.exe" -ViewHidden -f="C:\PROGRA~2\vt3\RESOUR~1\targets\MC2M_2~1\CPU1\lib\prm\burner.bbl" -env"ABS_FILE=C:\Users\yazilim1\Desktop\nmsGit\YAE8E3~1\YALCIN~1\code\MC2M\CPU1\bin\xxx_a01_cpu01"
@type EDOUT
:: end of file
