@echo off
setlocal EnableDelayedExpansion

set "BROWSER_TAMER_ROOT=%~dp0"
set "VCPKG_ROOT=%BROWSER_TAMER_ROOT%.build\vcpkg"

git -C "%BROWSER_TAMER_ROOT%" submodule update --init --recursive

call :ReplaceSubmodule "common" "https://github.com/aloneguid/common" "master"
call :ReplaceSubmodule "grey" "https://github.com/aloneguid/grey" "master"
call :ReplaceSubmodule "bt/ext/lsignal" "https://github.com/cpp11nullptr/lsignal" "master"
exit /b

if exist "%VCPKG_ROOT%\bootstrap-vcpkg.bat" goto:$Bootstrap
git clone "https://github.com/Microsoft/vcpkg.git" "%VCPKG_ROOT%"

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
exit /b

:ReplaceSubmodule
    set sub_module=%~1
    set new_path=%~1
    set submodule_url=%~2
    set branch=%~3
    call :Command git submodule deinit "%sub_module%"
    if errorlevel 1 (
        echo Failed to deinit submodule "%sub_module%" as it may already be removed.
        exit /b 0
    )

    call :Command git rm "%sub_module%"
    if errorlevel 1 (
        echo Failed to remove submodule "%sub_module%" as it may already be removed.
        exit /b 0
    )

    call :Command git add "%~dp0.gitmodules"
    call :Command git commit -m "Removed submodule %sub_module%"
    call :Command git subtree add --prefix "%new_path%" "%submodule_url%" "%branch%"
exit /b

:Command
    setlocal EnableDelayedExpansion
    set "_command=%*"
    set "_command=!_command:   = !"
    set "_command=!_command:  = !"
    echo [##cmd] !_command!
    !_command!
exit /b
