:: Nahraje build hex do Arduina pomocí AVRDUDE

REM call build %1

set avrdude="%USERPROFILE%\.platformio\packages\tool-avrdude\avrdude.exe"

%avrdude% -C%USERPROFILE%\.platformio\packages\tool-avrdude\avrdude.conf -v -patmega328p -carduino -PCOM3 -b115200 -D -Uflash:w:build/%~nx1.hex:i 

