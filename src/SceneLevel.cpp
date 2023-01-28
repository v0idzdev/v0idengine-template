#include "SceneLevel.hpp"

SceneLevel::SceneLevel(v0id::ResourcePath& resourcePath)
  : resourcePath(resourcePath)
{
}

SceneLevel::~SceneLevel() {}

void
SceneLevel::onCreate()
{
  // TODO: Load objects and add components
}

void
SceneLevel::onDestroy()
{
  // TODO: Free dynamically allocated memory
}

void
SceneLevel::processInput()
{
  input.update();

  if (input.isKeyPressed(v0id::Input::Key::Esc))
    exit(0);

  // TODO: Write code to process user input
}

void
SceneLevel::update(float deltaTime)
{
  // TODO: Write code to update the scene on each fame
}

void
SceneLevel::lateUpdate(float deltaTime)
{
  // TODO: Write code to update the scene after each fame
}

void
SceneLevel::draw(v0id::Window& window)
{
  // TODO: Write code to render the scene on each frame
}