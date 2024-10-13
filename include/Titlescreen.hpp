#ifndef FVTF_TITLESCREEN_HPP
#define FVTF_TITLESCREEN_HPP
#include <array>

class Titlescreen {
public:
  Titlescreen();

private:
  // Update size of array when adding new elements
  std::array<QuadButton, 2> Buttons;
  std::array<Quad, 1> Quads;
};

#endif
