:: file: C:\Users\yazilim1\Desktop\nmsGit\YAE8E3~1\YALCIN~1\code\GIGA\link.bat
:: date: Fri Mar 05 15:56:06 2021
cd "C:\Users\yazilim1\Desktop\nmsGit\YAE8E3~1\YALCIN~1\code\GIGA"
set TMP=C:\Users\yazilim1\AppData\Local\Temp
"C:\Program Files (x86)\Freescale\CWS12v5.1\Prog\linker.exe" -ViewHidden -WmsgFbm -AllocNext -WmsgSe1823 -obin\xxx_a01_giga. "C:\Users\yazilim1\Desktop\nmsGit\YAE8E3~1\YALCIN~1\code\GIGA\link.prm"
@type EDOUT
"C:\Program Files (x86)\Freescale\CWS12v5.1\Prog\burner.exe" -ViewHidden -f="C:\PROGRA~2\vt3\RESOUR~1\targets\GIGA_0~1\lib\prm\burner.bbl" -env"ABS_FILE=bin\xxx_a01_giga"
@type EDOUT
:: end of file
