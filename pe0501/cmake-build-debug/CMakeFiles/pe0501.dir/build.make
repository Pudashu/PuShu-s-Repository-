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
CMAKE_SOURCE_DIR = /mnt/d/Ccode/pe0501

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Ccode/pe0501/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pe0501.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pe0501.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pe0501.dir/flags.make

CMakeFiles/pe0501.dir/main.c.o: CMakeFiles/pe0501.dir/flags.make
CMakeFiles/pe0501.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Ccode/pe0501/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pe0501.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pe0501.dir/main.c.o   -c /mnt/d/Ccode/pe0501/main.c

CMakeFiles/pe0501.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pe0501.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Ccode/pe0501/main.c > CMakeFiles/pe0501.dir/main.c.i

CMakeFiles/pe0501.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pe0501.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Ccode/pe0501/main.c -o CMakeFiles/pe0501.dir/main.c.s

# Object files for target pe0501
pe0501_OBJECTS = \
"CMakeFiles/pe0501.dir/main.c.o"

# External object files for target pe0501
pe0501_EXTERNAL_OBJECTS =

pe0501: CMakeFiles/pe0501.dir/main.c.o
pe0501: CMakeFiles/pe0501.dir/build.make
pe0501: CMakeFiles/pe0501.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Ccode/pe0501/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pe0501"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pe0501.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pe0501.dir/build: pe0501

.PHONY : CMakeFiles/pe0501.dir/build

CMakeFiles/pe0501.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pe0501.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pe0501.dir/clean

CMakeFiles/pe0501.dir/depend:
	cd /mnt/d/Ccode/pe0501/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Ccode/pe0501 /mnt/d/Ccode/pe0501 /mnt/d/Ccode/pe0501/cmake-build-debug /mnt/d/Ccode/pe0501/cmake-build-debug /mnt/d/Ccode/pe0501/cmake-build-debug/CMakeFiles/pe0501.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pe0501.dir/depend

