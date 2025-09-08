@echo off
setlocal enabledelayedexpansion

for %%i in (%*) do (
    main.exe %%i > Test\output%%i.txt
    fc Test\output%%i.txt Test\expected%%i.txt > nul
    if errorlevel 1 (
        echo FAIL %%i
    ) else (
        echo PASS %%i
    )
)

endlocal