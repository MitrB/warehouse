cmake_minimum_required(VERSION 3.10)

project(Warehouse)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(OpenGL REQUIRED)

add_subdirectory(third_party)

file(GLOB_RECURSE SOURCES 
   ${PROJECT_SOURCE_DIR}/src/*.cpp 
   ${PROJECT_SOURCE_DIR}/src/*.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(Warehouse PRIVATE glfw glad)