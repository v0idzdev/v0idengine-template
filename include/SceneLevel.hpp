#ifndef SCENELEVEL_HPP
#define SCENELEVEL_HPP

#include <v0idengine/Core.hpp>
#include <v0idengine/ECS.hpp>
#include <v0idengine/Scenes.hpp>

class SceneLevel : public v0id::Scene
{
public:
  SceneLevel(v0id::ResourcePath& resourcePath);
  ~SceneLevel();

  void onCreate() override;
  void onDestroy() override;
  void processInput() override;
  void update(float deltaTime) override;
  void lateUpdate(float deltaTime) override;
  void draw(v0id::Window& window) override;

private:
  // TODO: Place sprites and scene variables here

  v0id::ResourcePath& resourcePath;
  v0id::Input input;
};

#endif