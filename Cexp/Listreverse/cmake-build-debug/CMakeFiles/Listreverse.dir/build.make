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
CMAKE_SOURCE_DIR = /mnt/d/Computer_Science/Cexp/Listreverse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Computer_Science/Cexp/Listreverse/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Listreverse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Listreverse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Listreverse.dir/flags.make

CMakeFiles/Listreverse.dir/main.c.o: CMakeFiles/Listreverse.dir/flags.make
CMakeFiles/Listreverse.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Computer_Science/Cexp/Listreverse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Listreverse.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Listreverse.dir/main.c.o   -c /mnt/d/Computer_Science/Cexp/Listreverse/main.c

CMakeFiles/Listreverse.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Listreverse.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Computer_Science/Cexp/Listreverse/main.c > CMakeFiles/Listreverse.dir/main.c.i

CMakeFiles/Listreverse.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Listreverse.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Computer_Science/Cexp/Listreverse/main.c -o CMakeFiles/Listreverse.dir/main.c.s

# Object files for target Listreverse
Listreverse_OBJECTS = \
"CMakeFiles/Listreverse.dir/main.c.o"

# External object files for target Listreverse
Listreverse_EXTERNAL_OBJECTS =

Listreverse: CMakeFiles/Listreverse.dir/main.c.o
Listreverse: CMakeFiles/Listreverse.dir/build.make
Listreverse: CMakeFiles/Listreverse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Computer_Science/Cexp/Listreverse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Listreverse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Listreverse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Listreverse.dir/build: Listreverse

.PHONY : CMakeFiles/Listreverse.dir/build

CMakeFiles/Listreverse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Listreverse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Listreverse.dir/clean

CMakeFiles/Listreverse.dir/depend:
	cd /mnt/d/Computer_Science/Cexp/Listreverse/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Computer_Science/Cexp/Listreverse /mnt/d/Computer_Science/Cexp/Listreverse /mnt/d/Computer_Science/Cexp/Listreverse/cmake-build-debug /mnt/d/Computer_Science/Cexp/Listreverse/cmake-build-debug /mnt/d/Computer_Science/Cexp/Listreverse/cmake-build-debug/CMakeFiles/Listreverse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Listreverse.dir/depend

