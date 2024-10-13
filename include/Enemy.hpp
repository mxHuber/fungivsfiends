#ifndef FVTF_ENEMY_HPP
#define FVTF_ENEMY_HPP

class Enemy {
public:
  Enemy() = default;

  void advance();

private:
  int Health = 1;
  float Speed = 0.1;
  int Damage = 1;
  int AttackSpeed = 1;
};

#endif
