# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/uauser/Desktop/Tyrion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/uauser/Desktop/Tyrion

# Include any dependencies generated for this target.
include src/CMakeFiles/gamelogic.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/gamelogic.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/gamelogic.dir/flags.make

src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o: src/gamelogic/Player.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/Player.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/Player.cpp > CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/Player.cpp -o CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o

src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o: src/gamelogic/World.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/World.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/World.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/World.cpp > CMakeFiles/gamelogic.dir/gamelogic/World.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/World.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/World.cpp -o CMakeFiles/gamelogic.dir/gamelogic/World.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o

src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o: src/gamelogic/Entity.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/Entity.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/Entity.cpp > CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/Entity.cpp -o CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o

src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o: src/gamelogic/Bullet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/Bullet.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/Bullet.cpp > CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/Bullet.cpp -o CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o

src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o: src/gamelogic/EntityFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/EntityFactory.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/EntityFactory.cpp > CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/EntityFactory.cpp -o CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o

src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o: src/gamelogic/Enemy.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/Enemy.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/Enemy.cpp > CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/Enemy.cpp -o CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o

src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o: src/gamelogic/Vector.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/Vector.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/Vector.cpp > CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/Vector.cpp -o CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o

src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o: src/gamelogic/Background.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/Background.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/Background.cpp > CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/Background.cpp -o CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o

src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o: src/CMakeFiles/gamelogic.dir/flags.make
src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o: src/gamelogic/Powerup.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrion/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o -c /home/uauser/Desktop/Tyrion/src/gamelogic/Powerup.cpp

src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.i"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrion/src/gamelogic/Powerup.cpp > CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.i

src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.s"
	cd /home/uauser/Desktop/Tyrion/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrion/src/gamelogic/Powerup.cpp -o CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.s

src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o.requires:
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o.requires

src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o.provides: src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/gamelogic.dir/build.make src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o.provides.build
.PHONY : src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o.provides

src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o.provides.build: src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o

# Object files for target gamelogic
gamelogic_OBJECTS = \
"CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o" \
"CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o" \
"CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o" \
"CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o" \
"CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o" \
"CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o" \
"CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o" \
"CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o" \
"CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o"

# External object files for target gamelogic
gamelogic_EXTERNAL_OBJECTS =

src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/build.make
src/libgamelogic.a: src/CMakeFiles/gamelogic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libgamelogic.a"
	cd /home/uauser/Desktop/Tyrion/src && $(CMAKE_COMMAND) -P CMakeFiles/gamelogic.dir/cmake_clean_target.cmake
	cd /home/uauser/Desktop/Tyrion/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gamelogic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/gamelogic.dir/build: src/libgamelogic.a
.PHONY : src/CMakeFiles/gamelogic.dir/build

src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/Player.cpp.o.requires
src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/World.cpp.o.requires
src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/Entity.cpp.o.requires
src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/Bullet.cpp.o.requires
src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/EntityFactory.cpp.o.requires
src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/Enemy.cpp.o.requires
src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/Vector.cpp.o.requires
src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/Background.cpp.o.requires
src/CMakeFiles/gamelogic.dir/requires: src/CMakeFiles/gamelogic.dir/gamelogic/Powerup.cpp.o.requires
.PHONY : src/CMakeFiles/gamelogic.dir/requires

src/CMakeFiles/gamelogic.dir/clean:
	cd /home/uauser/Desktop/Tyrion/src && $(CMAKE_COMMAND) -P CMakeFiles/gamelogic.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/gamelogic.dir/clean

src/CMakeFiles/gamelogic.dir/depend:
	cd /home/uauser/Desktop/Tyrion && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uauser/Desktop/Tyrion /home/uauser/Desktop/Tyrion/src /home/uauser/Desktop/Tyrion /home/uauser/Desktop/Tyrion/src /home/uauser/Desktop/Tyrion/src/CMakeFiles/gamelogic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/gamelogic.dir/depend

