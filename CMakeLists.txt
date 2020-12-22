cmake_minimum_required(VERSION 3.16)
project(Project_D6)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project_D6 main.cpp statemachine.cpp statemachine.hpp game.cpp game.hpp introstate.cpp introstate.hpp mainmenustate.cpp mainmenustate.hpp)