#ifndef FVF_TOWER_HPP
#define FVF_TOWER_HPP

class Tower {
public:
  Tower() = default;

  void advance();

private:
  int Health = 1;
  int Damage = 1;
  int AttackSpeed = 1;
};

#endif
