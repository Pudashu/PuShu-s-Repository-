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
CMAKE_SOURCE_DIR = /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Struct_Class_score.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Struct_Class_score.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Struct_Class_score.dir/flags.make

CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.o: CMakeFiles/Struct_Class_score.dir/flags.make
CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.o: ../Stuct_Class_Score.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.o   -c /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/Stuct_Class_Score.c

CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/Stuct_Class_Score.c > CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.i

CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/Stuct_Class_Score.c -o CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.s

# Object files for target Struct_Class_score
Struct_Class_score_OBJECTS = \
"CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.o"

# External object files for target Struct_Class_score
Struct_Class_score_EXTERNAL_OBJECTS =

Struct_Class_score: CMakeFiles/Struct_Class_score.dir/Stuct_Class_Score.c.o
Struct_Class_score: CMakeFiles/Struct_Class_score.dir/build.make
Struct_Class_score: CMakeFiles/Struct_Class_score.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Struct_Class_score"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Struct_Class_score.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Struct_Class_score.dir/build: Struct_Class_score

.PHONY : CMakeFiles/Struct_Class_score.dir/build

CMakeFiles/Struct_Class_score.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Struct_Class_score.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Struct_Class_score.dir/clean

CMakeFiles/Struct_Class_score.dir/depend:
	cd /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/cmake-build-debug /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/cmake-build-debug /mnt/d/Computer_Science/Ccode/Cexp/Struct_Class_score/cmake-build-debug/CMakeFiles/Struct_Class_score.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Struct_Class_score.dir/depend

