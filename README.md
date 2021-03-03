# Default build folders:

- ./out/build for Windows (in Visual Studio)
- ./build (in Visual Studio Code)

# VSCode Command Palette:

- cmake:quick start
- cmake:select a kit
- cmake:select variant
- cmake:configure
- cmake:build
- cmake:debug
- cmake:install

# Note:

- In Windows: better use kit as Visual Studio 2019 build tool
- If used in VS: Open Cmake Settings Editor => Select Toolset and Build root (CMakeSettings.json)
- If used in VSCode: Initialize cmake project in MacOS/Linux/Windows will be the same. When using first time in Windows: cmake:quick start or configure -> select MingGW64 gcc
- Add C:\Program Files\Git\bin to Path to run sh, bash scripts in Windows cmd/powershell
- choco install make
- make -f Makefile2

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
- https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/cmake-settings.md#cmake-settings
- https://www.gnu.org/software/make/manual/make.pdf

# Git Submodule:

- git submodule add https://github.com/glfw/glfw.git external/glfw
- git commit -am "some comments"
- chmod +x configure.sh build.sh run.sh install.h
- git submodule update --init --recursive

# ITK.js:

- https://insightsoftwareconsortium.github.io/itk-js/api/
- cd itkjs
- npx itk-js build .
- npx node ./index.js
