#ifndef TYPE2_H
#define TYPE2_H
#include "Enemy.h"
class Type2:public Enemy{
  public:
    Type2();
    void move_position();
    void fire_weapon();
    void update_status();
};
#endif