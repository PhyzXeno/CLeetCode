# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Git\CLeetCode\longestCommonPrefix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Git\CLeetCode\longestCommonPrefix\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/longestCommonPrefix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/longestCommonPrefix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/longestCommonPrefix.dir/flags.make

CMakeFiles/longestCommonPrefix.dir/main.c.obj: CMakeFiles/longestCommonPrefix.dir/flags.make
CMakeFiles/longestCommonPrefix.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Git\CLeetCode\longestCommonPrefix\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/longestCommonPrefix.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\longestCommonPrefix.dir\main.c.obj   -c C:\Git\CLeetCode\longestCommonPrefix\main.c

CMakeFiles/longestCommonPrefix.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/longestCommonPrefix.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Git\CLeetCode\longestCommonPrefix\main.c > CMakeFiles\longestCommonPrefix.dir\main.c.i

CMakeFiles/longestCommonPrefix.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/longestCommonPrefix.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Git\CLeetCode\longestCommonPrefix\main.c -o CMakeFiles\longestCommonPrefix.dir\main.c.s

CMakeFiles/longestCommonPrefix.dir/main.c.obj.requires:

.PHONY : CMakeFiles/longestCommonPrefix.dir/main.c.obj.requires

CMakeFiles/longestCommonPrefix.dir/main.c.obj.provides: CMakeFiles/longestCommonPrefix.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\longestCommonPrefix.dir\build.make CMakeFiles/longestCommonPrefix.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/longestCommonPrefix.dir/main.c.obj.provides

CMakeFiles/longestCommonPrefix.dir/main.c.obj.provides.build: CMakeFiles/longestCommonPrefix.dir/main.c.obj


# Object files for target longestCommonPrefix
longestCommonPrefix_OBJECTS = \
"CMakeFiles/longestCommonPrefix.dir/main.c.obj"

# External object files for target longestCommonPrefix
longestCommonPrefix_EXTERNAL_OBJECTS =

longestCommonPrefix.exe: CMakeFiles/longestCommonPrefix.dir/main.c.obj
longestCommonPrefix.exe: CMakeFiles/longestCommonPrefix.dir/build.make
longestCommonPrefix.exe: CMakeFiles/longestCommonPrefix.dir/linklibs.rsp
longestCommonPrefix.exe: CMakeFiles/longestCommonPrefix.dir/objects1.rsp
longestCommonPrefix.exe: CMakeFiles/longestCommonPrefix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Git\CLeetCode\longestCommonPrefix\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable longestCommonPrefix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\longestCommonPrefix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/longestCommonPrefix.dir/build: longestCommonPrefix.exe

.PHONY : CMakeFiles/longestCommonPrefix.dir/build

CMakeFiles/longestCommonPrefix.dir/requires: CMakeFiles/longestCommonPrefix.dir/main.c.obj.requires

.PHONY : CMakeFiles/longestCommonPrefix.dir/requires

CMakeFiles/longestCommonPrefix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\longestCommonPrefix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/longestCommonPrefix.dir/clean

CMakeFiles/longestCommonPrefix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Git\CLeetCode\longestCommonPrefix C:\Git\CLeetCode\longestCommonPrefix C:\Git\CLeetCode\longestCommonPrefix\cmake-build-debug C:\Git\CLeetCode\longestCommonPrefix\cmake-build-debug C:\Git\CLeetCode\longestCommonPrefix\cmake-build-debug\CMakeFiles\longestCommonPrefix.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/longestCommonPrefix.dir/depend

