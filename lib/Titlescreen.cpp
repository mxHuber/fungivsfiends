#include "Titlescreen.hpp"

Titlescreen::Titlescreen() {
  Quad Background;
  Quads.push_back(Background);

  QuadButton PlayButton;
  QuadButton QuitButton;
  Buttons[0] = PlayButton;
  Buttons[1] = QuitButton;
}
