#ifndef FVTF_GAME_DIRECTOR_HPP
#define FVTF_GAME_DIRECTOR_HPP

class GameDirector {
public:
  void advance();

private:
  float DeltaTime = 0.0f;
  float LastFrame = 0.0f;
};

#endif
