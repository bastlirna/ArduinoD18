@echo off

:: skript pro bild všech souborů pomocí platformio ci

if [%1]==[] goto :build_all
goto :build_sample

:build_all
for /d %%D in (samples\*) do call :build_sample %%~nD
goto :eof

:: ---------------------------------------------------------

:build_sample

echo Sample %~nx1
mkdir tmp\%~nx1
mkdir build
pio ci --board "uno" --build-dir tmp/%~nx1 --keep-build-dir -l common samples/%~nx1
copy tmp\%~nx1\.pioenvs\uno\firmware.hex build\%~nx1.hex
