#ifndef GAME_HPP
#define GAME_HPP

#include "SceneLevel.hpp"
#include "SceneSplashScreen.hpp"
#include <v0idengine/ECS.hpp>
#include <v0idengine/Scene.hpp>

class Game
{
public:
  Game();
  ~Game();

  void captureInput();
  void update();
  void lateUpdate();
  void draw();
  void calculateDeltaTime();
  bool isRunning() const;

private:
  v0id::Window window;
  v0id::ResourcePath resourcePath;
  v0id::Input input;
  v0id::SceneStateMachine sceneManager;
  sf::Clock clock;
  float deltaTime;
};

#endif