# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Ccode/Projekt1303

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Ccode/Projekt1303/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Projekt1303.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Projekt1303.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Projekt1303.dir/flags.make

CMakeFiles/Projekt1303.dir/main.c.o: CMakeFiles/Projekt1303.dir/flags.make
CMakeFiles/Projekt1303.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Ccode/Projekt1303/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Projekt1303.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Projekt1303.dir/main.c.o   -c /mnt/d/Ccode/Projekt1303/main.c

CMakeFiles/Projekt1303.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Projekt1303.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Ccode/Projekt1303/main.c > CMakeFiles/Projekt1303.dir/main.c.i

CMakeFiles/Projekt1303.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Projekt1303.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Ccode/Projekt1303/main.c -o CMakeFiles/Projekt1303.dir/main.c.s

# Object files for target Projekt1303
Projekt1303_OBJECTS = \
"CMakeFiles/Projekt1303.dir/main.c.o"

# External object files for target Projekt1303
Projekt1303_EXTERNAL_OBJECTS =

Projekt1303: CMakeFiles/Projekt1303.dir/main.c.o
Projekt1303: CMakeFiles/Projekt1303.dir/build.make
Projekt1303: CMakeFiles/Projekt1303.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Ccode/Projekt1303/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Projekt1303"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Projekt1303.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Projekt1303.dir/build: Projekt1303

.PHONY : CMakeFiles/Projekt1303.dir/build

CMakeFiles/Projekt1303.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Projekt1303.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Projekt1303.dir/clean

CMakeFiles/Projekt1303.dir/depend:
	cd /mnt/d/Ccode/Projekt1303/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Ccode/Projekt1303 /mnt/d/Ccode/Projekt1303 /mnt/d/Ccode/Projekt1303/cmake-build-debug /mnt/d/Ccode/Projekt1303/cmake-build-debug /mnt/d/Ccode/Projekt1303/cmake-build-debug/CMakeFiles/Projekt1303.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Projekt1303.dir/depend

