:: file:    make.bat
:: date:    Wed Aug 26 09:37:05 2020
:: device:  /project/GIGA
:: use this batch file to compile the source code and build the binary file

@ECHO *** running scons ***
set VT3_HC12_COMPILER_PATH=C:\Program Files (x86)\Freescale\CWS12v5.1\
call "C:\Program Files (x86)\vt3\SCons.exe" --debug=explain --sconstruct="C:\Program Files (x86)\vt3\resources\targets\GIGA_05600005_01\SConstruct.py" LIBPATH="C:\Program Files (x86)\vt3\resources\targets\GIGA_05600005_01\lib"  OBJPATH=""  MAKELIB="0"  USEPDF="0" USEHB="1" USEISOBUS="0" TARGET="xxx_a01_giga"

@ECHO *** scons terminated ***
@if (%1)==() pause

:: end of file
