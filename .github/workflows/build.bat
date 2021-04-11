@echo off
cd %~dp0
set PATH=C:\build;C:\mingw64\bin;%PATH%
set CS_DEV_PATH=C:\build
cd ..\..
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
mingw32-make -j8
cd ..
cspkg build https://github.com/covscript/package-example/releases/download/windows-schedule/ . --flat