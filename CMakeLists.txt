# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(Warehouse)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable target
add_executable(Warehouse src/main.cpp)
