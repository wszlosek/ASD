# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wojciechszlosek/Desktop/ASD/HeapSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wojciechszlosek/Desktop/ASD/HeapSort/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HeapSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HeapSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HeapSort.dir/flags.make

CMakeFiles/HeapSort.dir/main.cpp.o: CMakeFiles/HeapSort.dir/flags.make
CMakeFiles/HeapSort.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wojciechszlosek/Desktop/ASD/HeapSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HeapSort.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HeapSort.dir/main.cpp.o -c /Users/wojciechszlosek/Desktop/ASD/HeapSort/main.cpp

CMakeFiles/HeapSort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HeapSort.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wojciechszlosek/Desktop/ASD/HeapSort/main.cpp > CMakeFiles/HeapSort.dir/main.cpp.i

CMakeFiles/HeapSort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HeapSort.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wojciechszlosek/Desktop/ASD/HeapSort/main.cpp -o CMakeFiles/HeapSort.dir/main.cpp.s

CMakeFiles/HeapSort.dir/Kopiec.cpp.o: CMakeFiles/HeapSort.dir/flags.make
CMakeFiles/HeapSort.dir/Kopiec.cpp.o: ../Kopiec.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wojciechszlosek/Desktop/ASD/HeapSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HeapSort.dir/Kopiec.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HeapSort.dir/Kopiec.cpp.o -c /Users/wojciechszlosek/Desktop/ASD/HeapSort/Kopiec.cpp

CMakeFiles/HeapSort.dir/Kopiec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HeapSort.dir/Kopiec.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wojciechszlosek/Desktop/ASD/HeapSort/Kopiec.cpp > CMakeFiles/HeapSort.dir/Kopiec.cpp.i

CMakeFiles/HeapSort.dir/Kopiec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HeapSort.dir/Kopiec.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wojciechszlosek/Desktop/ASD/HeapSort/Kopiec.cpp -o CMakeFiles/HeapSort.dir/Kopiec.cpp.s

# Object files for target HeapSort
HeapSort_OBJECTS = \
"CMakeFiles/HeapSort.dir/main.cpp.o" \
"CMakeFiles/HeapSort.dir/Kopiec.cpp.o"

# External object files for target HeapSort
HeapSort_EXTERNAL_OBJECTS =

HeapSort: CMakeFiles/HeapSort.dir/main.cpp.o
HeapSort: CMakeFiles/HeapSort.dir/Kopiec.cpp.o
HeapSort: CMakeFiles/HeapSort.dir/build.make
HeapSort: CMakeFiles/HeapSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wojciechszlosek/Desktop/ASD/HeapSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable HeapSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HeapSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HeapSort.dir/build: HeapSort

.PHONY : CMakeFiles/HeapSort.dir/build

CMakeFiles/HeapSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HeapSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HeapSort.dir/clean

CMakeFiles/HeapSort.dir/depend:
	cd /Users/wojciechszlosek/Desktop/ASD/HeapSort/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wojciechszlosek/Desktop/ASD/HeapSort /Users/wojciechszlosek/Desktop/ASD/HeapSort /Users/wojciechszlosek/Desktop/ASD/HeapSort/cmake-build-debug /Users/wojciechszlosek/Desktop/ASD/HeapSort/cmake-build-debug /Users/wojciechszlosek/Desktop/ASD/HeapSort/cmake-build-debug/CMakeFiles/HeapSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HeapSort.dir/depend

