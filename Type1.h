#ifndef TYPE1_H
#define TYPE1_H
#include "Enemy.h"
class Type1:public Enemy{
  public:
    Type1();
    void move_position();
    void fire_weapon();
    void update_status();
};
#endif