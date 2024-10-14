#include <QuadGenerator.hpp>
#include <Renderer.hpp>

int main() {
  mlh::Renderer App = mlh::Renderer();

  App.setShader("../mlh-renderer/resources/Shaders/Vertex.shader",
                "../mlh-renderer/resources/Shaders/Fragment.shader");
  App.addQuad(mlh::QuadGenerator::getQuad());
  App.runLoop();
}