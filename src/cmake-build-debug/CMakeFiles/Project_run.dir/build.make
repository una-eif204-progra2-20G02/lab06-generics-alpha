# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/computer/AppData/Local/JetBrains/CLion2020.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/computer/AppData/Local/JetBrains/CLion2020.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project_run.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_run.dir/flags.make

CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.obj: CMakeFiles/Project_run.dir/flags.make
CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.obj: CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.obj"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.obj -c /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.cpp

CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.cpp > CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.i

CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.cpp -o CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.s

CMakeFiles/Project_run.dir/main.obj: CMakeFiles/Project_run.dir/flags.make
CMakeFiles/Project_run.dir/main.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project_run.dir/main.obj"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_run.dir/main.obj -c /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/main.cpp

CMakeFiles/Project_run.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_run.dir/main.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/main.cpp > CMakeFiles/Project_run.dir/main.i

CMakeFiles/Project_run.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_run.dir/main.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/main.cpp -o CMakeFiles/Project_run.dir/main.s

# Object files for target Project_run
Project_run_OBJECTS = \
"CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.obj" \
"CMakeFiles/Project_run.dir/main.obj"

# External object files for target Project_run
Project_run_EXTERNAL_OBJECTS =

Project_run: CMakeFiles/Project_run.dir/CMakeFiles/3.17.3/CompilerIdCXX/CMakeCXXCompilerId.obj
Project_run: CMakeFiles/Project_run.dir/main.obj
Project_run: CMakeFiles/Project_run.dir/build.make
Project_run: CMakeFiles/Project_run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Project_run"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_run.dir/build: Project_run

.PHONY : CMakeFiles/Project_run.dir/build

CMakeFiles/Project_run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_run.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_run.dir/clean

CMakeFiles/Project_run.dir/depend:
	cd /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug /cygdrive/c/Users/computer/CLionProjects/lab06-generics-alpha/src/cmake-build-debug/CMakeFiles/Project_run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project_run.dir/depend

