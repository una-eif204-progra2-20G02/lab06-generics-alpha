cmake_minimum_required(VERSION 3.13)  # CMake version check
project(simple_example)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard
set(BINARY ${CMAKE_PROJECT_NAME})

# add_executable(ExampleProject main.cpp file1.cpp file1.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification
# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable

