#include "Enemy.h"
#include "Type3.h"
#include <iostream>
using namespace std;
Type3::Type3(){
  setX(300);
  setY(500);
  setStatus(1);
  setWeaponNum(12);
}
void Type3::move_position(){
 int direction=rand()%2;
  if(getStatus()>0){
    if (getX()>0&&getX()<800){
      //if 0 go right
      int move=rand()%6+3;
      if (direction==0){
        setX(getX()+move);}
      //if 1 go left
      else{
        setX(getX()-move);
      }
      cout<<"Solider moves to "<<getX()<<","<<getY()<<" ";
  }}
  else if(getStatus()==0||getX()==0||getX()<0){
      cout<<"Solider dead at position "<<getX()<<","<<getY()<<" ";
  }
}

void Type3::fire_weapon(){
  int decision=rand()%2;
  if (getStatus()!=0&&getWeaponNum()!=0){
    //use weapon
    if(decision==0){
    cout<<"Solider weapon: rifle "<<"Bullets left: "<<getWeaponNum()<<endl;
    setWeaponNum(getWeaponNum()-1);}
    else{
      cout<<"Solider weapon: rifle.  "<<"Bullets left: "<<getWeaponNum()<<endl;
    }
  }
  if(getStatus()==0||getWeaponNum()==0){
  cout<<"Solider weapon: dead!!! "<<endl;}
}

void Type3::update_status(){
  int attack=rand()%1;
  if(getStatus()!=0){
    if(attack==0){
    cout<<"Solider update Status: Have been hit(bark),";
    setStatus(getStatus()-1);
    cout<<"Status points: "<<getStatus();}
    else{
    cout<<"Solider update Status: Not get attack,Status points: "<<getStatus();
    }
  }
  else if(getStatus()==0){
    cout<<"Solider update Status: Dead!!! Status Points : "<<getStatus();
  }
}