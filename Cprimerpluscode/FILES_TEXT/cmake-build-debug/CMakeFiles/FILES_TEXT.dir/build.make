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
CMAKE_SOURCE_DIR = /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FILES_TEXT.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FILES_TEXT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FILES_TEXT.dir/flags.make

CMakeFiles/FILES_TEXT.dir/main.c.o: CMakeFiles/FILES_TEXT.dir/flags.make
CMakeFiles/FILES_TEXT.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FILES_TEXT.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FILES_TEXT.dir/main.c.o   -c /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/main.c

CMakeFiles/FILES_TEXT.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FILES_TEXT.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/main.c > CMakeFiles/FILES_TEXT.dir/main.c.i

CMakeFiles/FILES_TEXT.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FILES_TEXT.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/main.c -o CMakeFiles/FILES_TEXT.dir/main.c.s

# Object files for target FILES_TEXT
FILES_TEXT_OBJECTS = \
"CMakeFiles/FILES_TEXT.dir/main.c.o"

# External object files for target FILES_TEXT
FILES_TEXT_EXTERNAL_OBJECTS =

FILES_TEXT: CMakeFiles/FILES_TEXT.dir/main.c.o
FILES_TEXT: CMakeFiles/FILES_TEXT.dir/build.make
FILES_TEXT: CMakeFiles/FILES_TEXT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable FILES_TEXT"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FILES_TEXT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FILES_TEXT.dir/build: FILES_TEXT

.PHONY : CMakeFiles/FILES_TEXT.dir/build

CMakeFiles/FILES_TEXT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FILES_TEXT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FILES_TEXT.dir/clean

CMakeFiles/FILES_TEXT.dir/depend:
	cd /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/cmake-build-debug /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/cmake-build-debug /mnt/d/Computer_Science/Ccode/Cprimerpluscode/FILES_TEXT/cmake-build-debug/CMakeFiles/FILES_TEXT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FILES_TEXT.dir/depend
