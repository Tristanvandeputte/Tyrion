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
CMAKE_SOURCE_DIR = /home/uauser/Desktop/Tyrian

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/uauser/Desktop/Tyrian

# Include any dependencies generated for this target.
include src/CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/game.dir/flags.make

src/CMakeFiles/game.dir/main.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/main.cpp.o: src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/main.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/main.cpp.o -c /home/uauser/Desktop/Tyrian/src/main.cpp

src/CMakeFiles/game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/main.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/main.cpp > CMakeFiles/game.dir/main.cpp.i

src/CMakeFiles/game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/main.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/main.cpp -o CMakeFiles/game.dir/main.cpp.s

src/CMakeFiles/game.dir/main.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/main.cpp.o.requires

src/CMakeFiles/game.dir/main.cpp.o.provides: src/CMakeFiles/game.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/main.cpp.o.provides

src/CMakeFiles/game.dir/main.cpp.o.provides.build: src/CMakeFiles/game.dir/main.cpp.o

src/CMakeFiles/game.dir/KeyBoard.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/KeyBoard.cpp.o: src/KeyBoard.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/KeyBoard.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/KeyBoard.cpp.o -c /home/uauser/Desktop/Tyrian/src/KeyBoard.cpp

src/CMakeFiles/game.dir/KeyBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/KeyBoard.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/KeyBoard.cpp > CMakeFiles/game.dir/KeyBoard.cpp.i

src/CMakeFiles/game.dir/KeyBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/KeyBoard.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/KeyBoard.cpp -o CMakeFiles/game.dir/KeyBoard.cpp.s

src/CMakeFiles/game.dir/KeyBoard.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/KeyBoard.cpp.o.requires

src/CMakeFiles/game.dir/KeyBoard.cpp.o.provides: src/CMakeFiles/game.dir/KeyBoard.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/KeyBoard.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/KeyBoard.cpp.o.provides

src/CMakeFiles/game.dir/KeyBoard.cpp.o.provides.build: src/CMakeFiles/game.dir/KeyBoard.cpp.o

src/CMakeFiles/game.dir/Player.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/Player.cpp.o: src/Player.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/Player.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/Player.cpp.o -c /home/uauser/Desktop/Tyrian/src/Player.cpp

src/CMakeFiles/game.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/Player.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/Player.cpp > CMakeFiles/game.dir/Player.cpp.i

src/CMakeFiles/game.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/Player.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/Player.cpp -o CMakeFiles/game.dir/Player.cpp.s

src/CMakeFiles/game.dir/Player.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/Player.cpp.o.requires

src/CMakeFiles/game.dir/Player.cpp.o.provides: src/CMakeFiles/game.dir/Player.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/Player.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/Player.cpp.o.provides

src/CMakeFiles/game.dir/Player.cpp.o.provides.build: src/CMakeFiles/game.dir/Player.cpp.o

src/CMakeFiles/game.dir/Game.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/Game.cpp.o: src/Game.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/Game.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/Game.cpp.o -c /home/uauser/Desktop/Tyrian/src/Game.cpp

src/CMakeFiles/game.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/Game.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/Game.cpp > CMakeFiles/game.dir/Game.cpp.i

src/CMakeFiles/game.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/Game.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/Game.cpp -o CMakeFiles/game.dir/Game.cpp.s

src/CMakeFiles/game.dir/Game.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/Game.cpp.o.requires

src/CMakeFiles/game.dir/Game.cpp.o.provides: src/CMakeFiles/game.dir/Game.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/Game.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/Game.cpp.o.provides

src/CMakeFiles/game.dir/Game.cpp.o.provides.build: src/CMakeFiles/game.dir/Game.cpp.o

src/CMakeFiles/game.dir/World.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/World.cpp.o: src/World.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/World.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/World.cpp.o -c /home/uauser/Desktop/Tyrian/src/World.cpp

src/CMakeFiles/game.dir/World.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/World.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/World.cpp > CMakeFiles/game.dir/World.cpp.i

src/CMakeFiles/game.dir/World.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/World.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/World.cpp -o CMakeFiles/game.dir/World.cpp.s

src/CMakeFiles/game.dir/World.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/World.cpp.o.requires

src/CMakeFiles/game.dir/World.cpp.o.provides: src/CMakeFiles/game.dir/World.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/World.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/World.cpp.o.provides

src/CMakeFiles/game.dir/World.cpp.o.provides.build: src/CMakeFiles/game.dir/World.cpp.o

src/CMakeFiles/game.dir/Entity.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/Entity.cpp.o: src/Entity.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/Entity.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/Entity.cpp.o -c /home/uauser/Desktop/Tyrian/src/Entity.cpp

src/CMakeFiles/game.dir/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/Entity.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/Entity.cpp > CMakeFiles/game.dir/Entity.cpp.i

src/CMakeFiles/game.dir/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/Entity.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/Entity.cpp -o CMakeFiles/game.dir/Entity.cpp.s

src/CMakeFiles/game.dir/Entity.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/Entity.cpp.o.requires

src/CMakeFiles/game.dir/Entity.cpp.o.provides: src/CMakeFiles/game.dir/Entity.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/Entity.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/Entity.cpp.o.provides

src/CMakeFiles/game.dir/Entity.cpp.o.provides.build: src/CMakeFiles/game.dir/Entity.cpp.o

src/CMakeFiles/game.dir/PlayerFactory.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/PlayerFactory.cpp.o: src/PlayerFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/PlayerFactory.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/PlayerFactory.cpp.o -c /home/uauser/Desktop/Tyrian/src/PlayerFactory.cpp

src/CMakeFiles/game.dir/PlayerFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/PlayerFactory.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/PlayerFactory.cpp > CMakeFiles/game.dir/PlayerFactory.cpp.i

src/CMakeFiles/game.dir/PlayerFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/PlayerFactory.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/PlayerFactory.cpp -o CMakeFiles/game.dir/PlayerFactory.cpp.s

src/CMakeFiles/game.dir/PlayerFactory.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/PlayerFactory.cpp.o.requires

src/CMakeFiles/game.dir/PlayerFactory.cpp.o.provides: src/CMakeFiles/game.dir/PlayerFactory.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/PlayerFactory.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/PlayerFactory.cpp.o.provides

src/CMakeFiles/game.dir/PlayerFactory.cpp.o.provides.build: src/CMakeFiles/game.dir/PlayerFactory.cpp.o

src/CMakeFiles/game.dir/EntityFactory.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/EntityFactory.cpp.o: src/EntityFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/EntityFactory.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/EntityFactory.cpp.o -c /home/uauser/Desktop/Tyrian/src/EntityFactory.cpp

src/CMakeFiles/game.dir/EntityFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/EntityFactory.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/EntityFactory.cpp > CMakeFiles/game.dir/EntityFactory.cpp.i

src/CMakeFiles/game.dir/EntityFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/EntityFactory.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/EntityFactory.cpp -o CMakeFiles/game.dir/EntityFactory.cpp.s

src/CMakeFiles/game.dir/EntityFactory.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/EntityFactory.cpp.o.requires

src/CMakeFiles/game.dir/EntityFactory.cpp.o.provides: src/CMakeFiles/game.dir/EntityFactory.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/EntityFactory.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/EntityFactory.cpp.o.provides

src/CMakeFiles/game.dir/EntityFactory.cpp.o.provides.build: src/CMakeFiles/game.dir/EntityFactory.cpp.o

src/CMakeFiles/game.dir/StopWatch.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/StopWatch.cpp.o: src/StopWatch.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/StopWatch.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/StopWatch.cpp.o -c /home/uauser/Desktop/Tyrian/src/StopWatch.cpp

src/CMakeFiles/game.dir/StopWatch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/StopWatch.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/StopWatch.cpp > CMakeFiles/game.dir/StopWatch.cpp.i

src/CMakeFiles/game.dir/StopWatch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/StopWatch.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/StopWatch.cpp -o CMakeFiles/game.dir/StopWatch.cpp.s

src/CMakeFiles/game.dir/StopWatch.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/StopWatch.cpp.o.requires

src/CMakeFiles/game.dir/StopWatch.cpp.o.provides: src/CMakeFiles/game.dir/StopWatch.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/StopWatch.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/StopWatch.cpp.o.provides

src/CMakeFiles/game.dir/StopWatch.cpp.o.provides.build: src/CMakeFiles/game.dir/StopWatch.cpp.o

src/CMakeFiles/game.dir/Bullet.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/Bullet.cpp.o: src/Bullet.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/Bullet.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/Bullet.cpp.o -c /home/uauser/Desktop/Tyrian/src/Bullet.cpp

src/CMakeFiles/game.dir/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/Bullet.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/Bullet.cpp > CMakeFiles/game.dir/Bullet.cpp.i

src/CMakeFiles/game.dir/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/Bullet.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/Bullet.cpp -o CMakeFiles/game.dir/Bullet.cpp.s

src/CMakeFiles/game.dir/Bullet.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/Bullet.cpp.o.requires

src/CMakeFiles/game.dir/Bullet.cpp.o.provides: src/CMakeFiles/game.dir/Bullet.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/Bullet.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/Bullet.cpp.o.provides

src/CMakeFiles/game.dir/Bullet.cpp.o.provides.build: src/CMakeFiles/game.dir/Bullet.cpp.o

src/CMakeFiles/game.dir/BulletFactory.cpp.o: src/CMakeFiles/game.dir/flags.make
src/CMakeFiles/game.dir/BulletFactory.cpp.o: src/BulletFactory.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/uauser/Desktop/Tyrian/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/game.dir/BulletFactory.cpp.o"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/game.dir/BulletFactory.cpp.o -c /home/uauser/Desktop/Tyrian/src/BulletFactory.cpp

src/CMakeFiles/game.dir/BulletFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/BulletFactory.cpp.i"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/uauser/Desktop/Tyrian/src/BulletFactory.cpp > CMakeFiles/game.dir/BulletFactory.cpp.i

src/CMakeFiles/game.dir/BulletFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/BulletFactory.cpp.s"
	cd /home/uauser/Desktop/Tyrian/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/uauser/Desktop/Tyrian/src/BulletFactory.cpp -o CMakeFiles/game.dir/BulletFactory.cpp.s

src/CMakeFiles/game.dir/BulletFactory.cpp.o.requires:
.PHONY : src/CMakeFiles/game.dir/BulletFactory.cpp.o.requires

src/CMakeFiles/game.dir/BulletFactory.cpp.o.provides: src/CMakeFiles/game.dir/BulletFactory.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/game.dir/build.make src/CMakeFiles/game.dir/BulletFactory.cpp.o.provides.build
.PHONY : src/CMakeFiles/game.dir/BulletFactory.cpp.o.provides

src/CMakeFiles/game.dir/BulletFactory.cpp.o.provides.build: src/CMakeFiles/game.dir/BulletFactory.cpp.o

# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/main.cpp.o" \
"CMakeFiles/game.dir/KeyBoard.cpp.o" \
"CMakeFiles/game.dir/Player.cpp.o" \
"CMakeFiles/game.dir/Game.cpp.o" \
"CMakeFiles/game.dir/World.cpp.o" \
"CMakeFiles/game.dir/Entity.cpp.o" \
"CMakeFiles/game.dir/PlayerFactory.cpp.o" \
"CMakeFiles/game.dir/EntityFactory.cpp.o" \
"CMakeFiles/game.dir/StopWatch.cpp.o" \
"CMakeFiles/game.dir/Bullet.cpp.o" \
"CMakeFiles/game.dir/BulletFactory.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

src/game: src/CMakeFiles/game.dir/main.cpp.o
src/game: src/CMakeFiles/game.dir/KeyBoard.cpp.o
src/game: src/CMakeFiles/game.dir/Player.cpp.o
src/game: src/CMakeFiles/game.dir/Game.cpp.o
src/game: src/CMakeFiles/game.dir/World.cpp.o
src/game: src/CMakeFiles/game.dir/Entity.cpp.o
src/game: src/CMakeFiles/game.dir/PlayerFactory.cpp.o
src/game: src/CMakeFiles/game.dir/EntityFactory.cpp.o
src/game: src/CMakeFiles/game.dir/StopWatch.cpp.o
src/game: src/CMakeFiles/game.dir/Bullet.cpp.o
src/game: src/CMakeFiles/game.dir/BulletFactory.cpp.o
src/game: src/CMakeFiles/game.dir/build.make
src/game: /usr/lib/x86_64-linux-gnu/libsfml-system.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-window.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-network.so
src/game: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
src/game: src/CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable game"
	cd /home/uauser/Desktop/Tyrian/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/game.dir/build: src/game
.PHONY : src/CMakeFiles/game.dir/build

src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/main.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/KeyBoard.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/Player.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/Game.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/World.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/Entity.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/PlayerFactory.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/EntityFactory.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/StopWatch.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/Bullet.cpp.o.requires
src/CMakeFiles/game.dir/requires: src/CMakeFiles/game.dir/BulletFactory.cpp.o.requires
.PHONY : src/CMakeFiles/game.dir/requires

src/CMakeFiles/game.dir/clean:
	cd /home/uauser/Desktop/Tyrian/src && $(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/game.dir/clean

src/CMakeFiles/game.dir/depend:
	cd /home/uauser/Desktop/Tyrian && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/uauser/Desktop/Tyrian /home/uauser/Desktop/Tyrian/src /home/uauser/Desktop/Tyrian /home/uauser/Desktop/Tyrian/src /home/uauser/Desktop/Tyrian/src/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/game.dir/depend

