# Set a list of source files
set(SRC_LIST sfml/KeyBoard.cpp sfml/Player.cpp sfml/Game.cpp sfml/PlayerFactory.cpp  sfml/StopWatch.cpp sfml/Bullet.cpp sfml/BulletFactory.cpp sfml/Enemy.cpp sfml/EnemyFactory.cpp )

# Set a list of library files
set(LIB_LIST gamelogic/Player.cpp gamelogic/World.cpp gamelogic/Entity.cpp gamelogic/Bullet.cpp gamelogic/EntityFactory.cpp gamelogic/Enemy.cpp)

# Add a executable that should be built
add_executable(${EXECUTABLE_NAME} sfml/main.cpp ${SRC_LIST})

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMakeModule/" ${CMAKE_MODULE_PATH}) # aanpassen afh van waar sfml search zich bevind
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()

# Add our custom made library
add_library(gamelogic STATIC ${LIB_LIST})

# Link it with our executable
target_link_libraries(${EXECUTABLE_NAME} gamelogic)

# Set install targets for when we run 'make install'
install(TARGETS ${EXECUTABLE_NAME} gamelogic
    RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/bin
    ARCHIVE DESTINATION ${PROJECT_SOURCE_DIR}/lib
    LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/lib)
