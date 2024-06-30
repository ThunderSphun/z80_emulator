cmake_minimum_required(VERSION 3.22)
project(Z80_emulator)

set(CMAKE_CXX_STANDARD 20)

include_directories(Z80/include)

add_executable(${PROJECT_NAME} Z80/main.cpp)
