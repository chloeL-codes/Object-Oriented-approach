#include "Enemy.h"

void Enemy::setX(int x){
  x_position=x;
}

void Enemy::setY(int y){
  y_position=y;
}

void Enemy::setWidth(int w){
  width=w;
}

void Enemy::setHeight(int h){
  height=h;
}

void Enemy::setStatus(int s){
  status=s;
}

void Enemy::setWeaponNum(int b){
  bullets=b;
}

int Enemy::getX(){
  return x_position;
}

int Enemy::getY(){
  return y_position;
}

int Enemy::getWidth(){
  return width;
}

int Enemy::getHeight(){
  return height;
}

int Enemy::getStatus(){
  return status;
}

int Enemy::getWeaponNum(){
  return bullets;
}