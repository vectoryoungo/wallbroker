# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/juhongtao/wallbroker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/juhongtao/wallbroker/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/xlab4t.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/xlab4t.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xlab4t.dir/flags.make

CMakeFiles/xlab4t.dir/main.cpp.o: CMakeFiles/xlab4t.dir/flags.make
CMakeFiles/xlab4t.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/juhongtao/wallbroker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/xlab4t.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/xlab4t.dir/main.cpp.o -c /Users/juhongtao/wallbroker/main.cpp

CMakeFiles/xlab4t.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xlab4t.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/juhongtao/wallbroker/main.cpp > CMakeFiles/xlab4t.dir/main.cpp.i

CMakeFiles/xlab4t.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xlab4t.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/juhongtao/wallbroker/main.cpp -o CMakeFiles/xlab4t.dir/main.cpp.s

CMakeFiles/xlab4t.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/xlab4t.dir/main.cpp.o.requires

CMakeFiles/xlab4t.dir/main.cpp.o.provides: CMakeFiles/xlab4t.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/xlab4t.dir/build.make CMakeFiles/xlab4t.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/xlab4t.dir/main.cpp.o.provides

CMakeFiles/xlab4t.dir/main.cpp.o.provides.build: CMakeFiles/xlab4t.dir/main.cpp.o


CMakeFiles/xlab4t.dir/Sales_item.cpp.o: CMakeFiles/xlab4t.dir/flags.make
CMakeFiles/xlab4t.dir/Sales_item.cpp.o: ../Sales_item.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/juhongtao/wallbroker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/xlab4t.dir/Sales_item.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/xlab4t.dir/Sales_item.cpp.o -c /Users/juhongtao/wallbroker/Sales_item.cpp

CMakeFiles/xlab4t.dir/Sales_item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xlab4t.dir/Sales_item.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/juhongtao/wallbroker/Sales_item.cpp > CMakeFiles/xlab4t.dir/Sales_item.cpp.i

CMakeFiles/xlab4t.dir/Sales_item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xlab4t.dir/Sales_item.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/juhongtao/wallbroker/Sales_item.cpp -o CMakeFiles/xlab4t.dir/Sales_item.cpp.s

CMakeFiles/xlab4t.dir/Sales_item.cpp.o.requires:

.PHONY : CMakeFiles/xlab4t.dir/Sales_item.cpp.o.requires

CMakeFiles/xlab4t.dir/Sales_item.cpp.o.provides: CMakeFiles/xlab4t.dir/Sales_item.cpp.o.requires
	$(MAKE) -f CMakeFiles/xlab4t.dir/build.make CMakeFiles/xlab4t.dir/Sales_item.cpp.o.provides.build
.PHONY : CMakeFiles/xlab4t.dir/Sales_item.cpp.o.provides

CMakeFiles/xlab4t.dir/Sales_item.cpp.o.provides.build: CMakeFiles/xlab4t.dir/Sales_item.cpp.o


# Object files for target xlab4t
xlab4t_OBJECTS = \
"CMakeFiles/xlab4t.dir/main.cpp.o" \
"CMakeFiles/xlab4t.dir/Sales_item.cpp.o"

# External object files for target xlab4t
xlab4t_EXTERNAL_OBJECTS =

xlab4t: CMakeFiles/xlab4t.dir/main.cpp.o
xlab4t: CMakeFiles/xlab4t.dir/Sales_item.cpp.o
xlab4t: CMakeFiles/xlab4t.dir/build.make
xlab4t: CMakeFiles/xlab4t.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/juhongtao/wallbroker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable xlab4t"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xlab4t.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xlab4t.dir/build: xlab4t

.PHONY : CMakeFiles/xlab4t.dir/build

CMakeFiles/xlab4t.dir/requires: CMakeFiles/xlab4t.dir/main.cpp.o.requires
CMakeFiles/xlab4t.dir/requires: CMakeFiles/xlab4t.dir/Sales_item.cpp.o.requires

.PHONY : CMakeFiles/xlab4t.dir/requires

CMakeFiles/xlab4t.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/xlab4t.dir/cmake_clean.cmake
.PHONY : CMakeFiles/xlab4t.dir/clean

CMakeFiles/xlab4t.dir/depend:
	cd /Users/juhongtao/wallbroker/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/juhongtao/wallbroker /Users/juhongtao/wallbroker /Users/juhongtao/wallbroker/cmake-build-debug /Users/juhongtao/wallbroker/cmake-build-debug /Users/juhongtao/wallbroker/cmake-build-debug/CMakeFiles/xlab4t.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xlab4t.dir/depend

