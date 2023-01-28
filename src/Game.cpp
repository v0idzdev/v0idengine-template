#include "Game.hpp"

Game::Game()
  : window("My Game")
{
  // Create a pointer to the splash screen
  std::shared_ptr<SceneSplashScreen> splashScreen =
    std::make_shared<SceneSplashScreen>(resourcePath, sceneManager, window);

  // Create a pointer to the main level
  std::shared_ptr<SceneLevel> level =
    std::make_shared<SceneLevel>(resourcePath);

  // Add the splash screen and get its ID
  unsigned int splashScreenID = sceneManager.add(splashScreen);

  // Add the main level and get its ID
  unsigned int levelID = sceneManager.add(level);

  // Instruct the splash screen to switch to the main level after a specified
  // period of time
  splashScreen->setSwitchToScene(levelID);

  // Swicth to the splash screen
  sceneManager.switchTo(splashScreenID);

  // TODO: Add additional loading code here

  deltaTime = clock.restart().asSeconds();
}

Game::~Game() {}

void
Game::captureInput()
{
  sceneManager.processInput();
}

void
Game::update()
{
  window.update();
  sceneManager.update(deltaTime);
}

void
Game::lateUpdate()
{
  sceneManager.lateUpdate(deltaTime);
}

void
Game::draw()
{
  window.beginDraw();
  sceneManager.draw(window);
  window.endDraw();
}

void
Game::calculateDeltaTime()
{
  deltaTime = clock.restart().asSeconds();
}

bool
Game::isRunning() const
{
  return window.isOpen();
}