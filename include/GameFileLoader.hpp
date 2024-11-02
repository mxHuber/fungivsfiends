#ifndef FVF_GAME_FILE_LOADER_HPP
#define FVF_GAME_FILE_LOADER_HPP

#include <Renderer.hpp>
#include <string>

class GameFileLoader {
public:
  static void loadFile(const std::string &FilePath, mlh::Renderer &Renderer);
};

#endif