#ifndef FVF_GAME_DIRECTOR_HPP
#define FVF_GAME_DIRECTOR_HPP

#include <Enemy.hpp>
#include <Tower.hpp>
#include <array>
#include <string>

class GameDirector {
public:
  GameDirector();
  void advance();
  void loadLevel(const std::string &PathToDataFile);

private:
  float DeltaTime = 0.0f;
  float LastFrame = 0.0f;

  unsigned int TileTexture = 0;
  std::array<Enemy, 8> PossibleEnemySpawns = {};
  std::array<Tower, 8> PossibleTowersToPlace = {};

  std::array<Enemy, 64> LoadedEnemies = {};
  std::array<Tower, 64> PlacedTowers = {};

  std::array<float, 256> TimeEvents = {};
};

#endif
