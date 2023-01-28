cmake_minimum_required(VERSION 3.9)
project(MyGame
  DESCRIPTION "A game used to test v0idengine"  
  LANGUAGES CXX
  )
add_executable(MyGame
  Main.cpp
  src/Game.cpp
  src/SceneLevel.cpp
  src/SceneSplashScreen.cpp
  )
target_include_directories(MyGame PRIVATE include src)
target_link_libraries(MyGame
  PRIVATE
    v0idengine
    sfml-graphics
    sfml-window
    sfml-system
  )