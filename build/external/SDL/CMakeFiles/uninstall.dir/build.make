# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hubert/projects/MMM

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hubert/projects/MMM/build

# Utility rule file for uninstall.

# Include any custom commands dependencies for this target.
include external/SDL/CMakeFiles/uninstall.dir/compiler_depend.make

# Include the progress variables for this target.
include external/SDL/CMakeFiles/uninstall.dir/progress.make

external/SDL/CMakeFiles/uninstall:
	cd /home/hubert/projects/MMM/build/external/SDL && /usr/bin/cmake -P /home/hubert/projects/MMM/build/external/SDL/cmake_uninstall.cmake

uninstall: external/SDL/CMakeFiles/uninstall
uninstall: external/SDL/CMakeFiles/uninstall.dir/build.make
.PHONY : uninstall

# Rule to build all files generated by this target.
external/SDL/CMakeFiles/uninstall.dir/build: uninstall
.PHONY : external/SDL/CMakeFiles/uninstall.dir/build

external/SDL/CMakeFiles/uninstall.dir/clean:
	cd /home/hubert/projects/MMM/build/external/SDL && $(CMAKE_COMMAND) -P CMakeFiles/uninstall.dir/cmake_clean.cmake
.PHONY : external/SDL/CMakeFiles/uninstall.dir/clean

external/SDL/CMakeFiles/uninstall.dir/depend:
	cd /home/hubert/projects/MMM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hubert/projects/MMM /home/hubert/projects/MMM/external/SDL /home/hubert/projects/MMM/build /home/hubert/projects/MMM/build/external/SDL /home/hubert/projects/MMM/build/external/SDL/CMakeFiles/uninstall.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : external/SDL/CMakeFiles/uninstall.dir/depend
