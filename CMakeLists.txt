cmake_minimum_required(VERSION 3.16)
project(my_project_name)

set(CMAKE_CXX_STANDARD 14)

include_directories( ../../computer/CLionProjects/lab06-generics-alpha/src )

include_directories(  ../../computer/CLionProjects/lab06-generics-alpha/lib )
include_directories(  ../../computer/CLionProjects/lab06-generics-alpha/tst )

## Use next line if you are going to use Google Test
add_subdirectory( ../../computer/CLionProjects/lab06-generics-alpha/lib/googletest)