#ifndef TYPE3_H
#define TYPE3_H
#include "Enemy.h"
class Type3:public Enemy{
  public:
    Type3();
    void move_position();
    void fire_weapon();
    void update_status();
};
#endif