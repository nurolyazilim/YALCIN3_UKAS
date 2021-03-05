:: file:    make.bat
:: date:    Fri Mar 05 15:55:33 2021
:: device:  /project/MC2M/CPU1
:: use this batch file to compile the source code and build the binary file

@ECHO *** running scons ***
set VT3_HC12_COMPILER_PATH=C:\Program Files (x86)\Freescale\CWS12v5.1\
call "C:\Program Files (x86)\vt3\SCons.exe" --debug=explain --sconstruct="C:\Program Files (x86)\vt3\resources\targets\MC2M_2CPU\CPU1\SConstruct.py" LIBPATH="C:\Program Files (x86)\vt3\resources\targets\MC2M_2CPU\CPU1\lib"  OBJPATH=""  MAKELIB="0"  USEPDF="0" USEHB="1" USEISOBUS="0" TARGET="xxx_a01_cpu01"

@ECHO *** scons terminated ***
@if (%1)==() pause

:: end of file
