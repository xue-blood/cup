@echo off


if "%1"=="/u" goto :uninstall

:install
    set name=%1
    reg add "HKCR\%name%" /v "URL Protocol" /f
    reg add "HKCR\%name%\shell\open\command" /d "%~dp0\cup %%1" /f
    goto :EOF

:uninstall
    set name=%2
    reg delete "HKCR\%name%" /f
    goto :EOF