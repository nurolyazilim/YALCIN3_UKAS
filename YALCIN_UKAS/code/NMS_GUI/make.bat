:: file:    make.bat
:: date:    Mon Dec 02 10:59:41 2019
:: device:  /project/NMS_GUI
:: use this batch file to compile the source code and build the binary file

@ECHO *** running scons ***
set VT3_MINGW_X86_COMPILER_PATH=C:\Program Files (x86)\vt3\resources\mingw\
call "C:\Program Files (x86)\vt3\SCons.exe" --debug=explain --sconstruct="C:\Program Files (x86)\vt3\resources\targets\PC_Windows\SConstruct.py" LIBPATH="C:\Program Files (x86)\vt3\resources\targets\PC_Windows\lib"  OBJPATH=""  MAKELIB="0"  USEPDF="0" USEHB="1" USEISOBUS="0" TARGET="vt3_app"

@ECHO *** scons terminated ***
@if (%1)==() pause

:: end of file
