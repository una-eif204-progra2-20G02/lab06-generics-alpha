cmake_minimum_required(VERSION 3.16)
project(my_project_name)

set(CMAKE_CXX_STANDARD 14)

set(BINARY ${CMAKE_PROJECT_NAME})

# add_executable(ExampleProject main.cpp file1.cpp file1.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES} main.coo)


