cmake_minimum_required(VERSION 3.16)
project(gestione_autorimessa LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gestione_autorimessa
        gestione_autorimessa_cyber.cpp
        utilities.cpp
        json_manager.cpp
        json.hpp
)
