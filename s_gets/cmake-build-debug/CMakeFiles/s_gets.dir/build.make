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
CMAKE_SOURCE_DIR = /mnt/d/Ccode/s_gets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Ccode/s_gets/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/s_gets.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/s_gets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/s_gets.dir/flags.make

CMakeFiles/s_gets.dir/main.c.o: CMakeFiles/s_gets.dir/flags.make
CMakeFiles/s_gets.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Ccode/s_gets/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/s_gets.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/s_gets.dir/main.c.o   -c /mnt/d/Ccode/s_gets/main.c

CMakeFiles/s_gets.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/s_gets.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Ccode/s_gets/main.c > CMakeFiles/s_gets.dir/main.c.i

CMakeFiles/s_gets.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/s_gets.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Ccode/s_gets/main.c -o CMakeFiles/s_gets.dir/main.c.s

# Object files for target s_gets
s_gets_OBJECTS = \
"CMakeFiles/s_gets.dir/main.c.o"

# External object files for target s_gets
s_gets_EXTERNAL_OBJECTS =

s_gets: CMakeFiles/s_gets.dir/main.c.o
s_gets: CMakeFiles/s_gets.dir/build.make
s_gets: CMakeFiles/s_gets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Ccode/s_gets/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable s_gets"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/s_gets.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/s_gets.dir/build: s_gets

.PHONY : CMakeFiles/s_gets.dir/build

CMakeFiles/s_gets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/s_gets.dir/cmake_clean.cmake
.PHONY : CMakeFiles/s_gets.dir/clean

CMakeFiles/s_gets.dir/depend:
	cd /mnt/d/Ccode/s_gets/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Ccode/s_gets /mnt/d/Ccode/s_gets /mnt/d/Ccode/s_gets/cmake-build-debug /mnt/d/Ccode/s_gets/cmake-build-debug /mnt/d/Ccode/s_gets/cmake-build-debug/CMakeFiles/s_gets.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/s_gets.dir/depend

