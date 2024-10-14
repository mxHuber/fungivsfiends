#include "GameDirector.hpp"

GameDirector::GameDirector() {
  for (auto &Element : TimeEvents) {
    Element = -1.0f;
  }
}

void GameDirector::advance() {
  // TODO:
}

void loadLevel(const std::string &PathToDataFile) {
  // TODO: create yaml parser and use it to deserialize file
}