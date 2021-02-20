cmake_minimum_required(VERSION 3.0.0)
project(sdlproject VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)
enable_testing()

add_executable(sdlproject main.cpp)

# list(APPEND CMAKE_PREFIX_PATH  C:/Users/nhatvu148/Work/vcpkg/packages/sdl2_x64-windows/share/sdl2)

configure_file(sdlprojectConfig.h.in sdlprojectConfig.h)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

find_package(SDL2 CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} ${EXTRA_LINKS} SDL2::SDL2)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/sdlprojectConfig.h" DESTINATION include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
