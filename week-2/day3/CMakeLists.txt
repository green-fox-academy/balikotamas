cmake_minimum_required(VERSION 3.14)
project(day3)

set(CMAKE_CXX_STANDARD 14)

set(SDL2_ROOT_PATH C:/Users/balas/Downloads/SDL2_windows)
IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

set(EXECUTABLES "draw;draw2;draw3;draw4;draw5;draw6")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GFA_SDL2 REQUIRED)