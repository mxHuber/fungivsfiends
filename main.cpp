#include <QuadGenerator.hpp>
#include <Renderer.hpp>

int main() {
  mlh::Renderer App = mlh::Renderer();

  App.setShader("../mlh-renderer/resources/Shaders/Vertex.shader",
                "../mlh-renderer/resources/Shaders/Fragment.shader");
  // App.addQuad(mlh::QuadGenerator::getQuad());
  // TODO: load TestLevel.yaml
  // TODO: add buttons for fungi that select them
  // TODO: add buttons on tiles, to place down fungi
  // TODO: add game logic for resources, enemy spawns, enemy movement, enemy
  // attack, enemy death, victory and defeat condition, etc
  // add multithreading to run render loop seperate from game logic loop and
  // make it make sense ofc, no race conditions or other buggerinoes
  App.runLoop();
}
