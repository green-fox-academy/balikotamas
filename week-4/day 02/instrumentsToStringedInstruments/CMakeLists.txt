cmake_minimum_required(VERSION 3.14)
project(instrumentsToStringedInstruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(instrumentsToStringedInstruments main.cpp Instruments.cpp Instruments.h StringedInstrument.cpp StringedInstrument.h ElectricGuitar.cpp ElectricGuitar.h BassGuitar.cpp BassGuitar.h Violin.cpp Violin.h)