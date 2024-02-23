#ifndef ENEMY_H
#define ENEMY_H

class Enemy{
  private:
    int x_position;
    int y_position;
    int width;
    int height;
    int status;
    int bullets;
 public:
    //setters
    void setX(int x);
    void setY(int y);
    void setWidth(int w);
    void setHeight(int h);
    void setStatus(int s);
    void setWeaponNum(int b);

    //getters
    int getX();
    int getY();
    int getWidth();
    int getHeight();
    int getStatus();
    int getWeaponNum();

    //methods
    virtual void move_position()=0;
    virtual void fire_weapon()=0;
    virtual void update_status()=0;
};
#endif