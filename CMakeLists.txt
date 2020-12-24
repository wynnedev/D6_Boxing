cmake_minimum_required(VERSION 3.16)
project(Project_D6)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project_D6 main.cpp statemachine.cpp statemachine.hpp game.cpp game.hpp States/introstate.cpp States/introstate.hpp States/mainmenustate.cpp States/mainmenustate.hpp States/quitstate.cpp States/quitstate.hpp boxer.cpp boxer.hpp)