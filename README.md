# Default build folders:

- ./out/build for Windows
- ./build for Linux and MacOS

# VSCode Command Palette:

- cmake:quick start
- cmake:select variant
- cmake:configure
- cmake:build
- cmake:debug

# Note:
- If used in VS: Open Cmake Settings Editor => Select Toolset and Build root (CMakeSettings.json)
- If used in VSCode: Initialize cmake project in MacOS/Linux/Windows will be the same. When using first time in Windows: cmake:quick start or configure -> select MingGW64 gcc

# CMake Commands:

- cmake -S . -B out/build/