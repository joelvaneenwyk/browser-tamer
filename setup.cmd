@echo off
setlocal EnableDelayedExpansion

set "BROWSER_TAMER_ROOT=%~dp0"
set "VCPKG_ROOT=%BROWSER_TAMER_ROOT%.build\vcpkg"
if exist "%VCPKG_ROOT%\bootstrap-vcpkg.bat" goto:$Bootstrap

git -C "%BROWSER_TAMER_ROOT%" submodule update --init --recursive
git clone https://github.com/Microsoft/vcpkg.git "%VCPKG_ROOT%"

:$Bootstrap
cd /d "%VCPKG_ROOT%"
call "%VCPKG_ROOT%\bootstrap-vcpkg.bat"
vcpkg integrate install

set "variable=E:\myfiles\app1\data\*.csv"
set "variable=%variable:\=/%"
echo "%variable%"

endlocal & (
    set "VCPKG_DISABLE_METRICS=1"
    set "VCPKG_ROOT=%VCPKG_ROOT:\=/%"
    set "BROWSER_TAMER_ROOT=%BROWSER_TAMER_ROOT%"
)

call powershell -NoProfile -File "%BROWSER_TAMER_ROOT%\local-build.ps1"
