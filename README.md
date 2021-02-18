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
- make -C out/build/

# VSCode Extensions for C++:

- ms-vscode.cpptools
- ms-vscode.cmake-tools
- twxs.cmake

# References:

- https://cmake.org/cmake/help/latest/guide/tutorial/index.html#guide:CMake%20Tutorial
- https://cmake.org/cmake/help/latest/index.html#
- https://docs.microsoft.com/en-us/cpp/build/vcpkg?view=msvc-160&viewFallbackFrom=vs-2019
- https://docs.microsoft.com/en-us/cpp/build/cmake-projects-in-visual-studio?view=msvc-160&viewFallbackFrom=vs-2019
