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
CMAKE_SOURCE_DIR = /mnt/d/Ccode/Practice1205

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Ccode/Practice1205/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Practice1205.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Practice1205.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Practice1205.dir/flags.make

CMakeFiles/Practice1205.dir/main.c.o: CMakeFiles/Practice1205.dir/flags.make
CMakeFiles/Practice1205.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Ccode/Practice1205/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Practice1205.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Practice1205.dir/main.c.o   -c /mnt/d/Ccode/Practice1205/main.c

CMakeFiles/Practice1205.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Practice1205.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Ccode/Practice1205/main.c > CMakeFiles/Practice1205.dir/main.c.i

CMakeFiles/Practice1205.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Practice1205.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Ccode/Practice1205/main.c -o CMakeFiles/Practice1205.dir/main.c.s

# Object files for target Practice1205
Practice1205_OBJECTS = \
"CMakeFiles/Practice1205.dir/main.c.o"

# External object files for target Practice1205
Practice1205_EXTERNAL_OBJECTS =

Practice1205: CMakeFiles/Practice1205.dir/main.c.o
Practice1205: CMakeFiles/Practice1205.dir/build.make
Practice1205: CMakeFiles/Practice1205.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Ccode/Practice1205/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Practice1205"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Practice1205.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Practice1205.dir/build: Practice1205

.PHONY : CMakeFiles/Practice1205.dir/build

CMakeFiles/Practice1205.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Practice1205.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Practice1205.dir/clean

CMakeFiles/Practice1205.dir/depend:
	cd /mnt/d/Ccode/Practice1205/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Ccode/Practice1205 /mnt/d/Ccode/Practice1205 /mnt/d/Ccode/Practice1205/cmake-build-debug /mnt/d/Ccode/Practice1205/cmake-build-debug /mnt/d/Ccode/Practice1205/cmake-build-debug/CMakeFiles/Practice1205.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Practice1205.dir/depend

