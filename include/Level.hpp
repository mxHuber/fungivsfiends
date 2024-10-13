#ifndef FVTF_LEVEL_HPP
#define FVTF_LEVEL_HPP
#include <array>

class Level {
public:
  Level();

private:
  // TODO: set reserved space for these elements
  // Update the reserved space when adding new elements
  std::array<QuadButton, 2> Buttons;
  std::array<Quad, 1> Quads;
};

#endif
