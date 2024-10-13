#include "Level.hpp"

Level::Level() {
  Quad Background;
  Quads.push_back(Background);

  QuadButton PlayButton;
  QuadButton QuitButton;
  Buttons[0] = PlayButton;
  Buttons[1] = QuitButton;

  // TODO: fungi selection, with fungi buttons
  // TODO: buttons for tiles where fungi can be placed
  // TODO: one quad for each enemy type
}
