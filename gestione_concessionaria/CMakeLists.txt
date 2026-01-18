cmake_minimum_required(VERSION 3.16)

project(gestione_concessionaria)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(gestione_concessionaria Car.cpp Car.hpp Garage.cpp Garage.hpp Main.cpp)