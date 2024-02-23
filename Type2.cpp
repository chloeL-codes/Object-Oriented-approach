#include "Enemy.h"
#include "Type2.h"
#include <iostream>
using namespace std;
Type2::Type2(){
  setX(400);
  setY(100);
  setStatus(8);
  setWeaponNum(4);
}
void Type2::move_position(){
int direction=rand()%2;
if((getStatus()>0)){
  if (getX()>0&&getX()<800){
    //if 0 go right
    int move=(rand()%30)+15;
    if (direction==0){
      setX(getX()+move);}
    //if 1 go left
    else{
      setX(getX()-move);
    }
    cout<<"Jet moves to "<<getX()<<","<<getY()<<" ";
  }
}
else if(getStatus()==0||getX()==0||getX()<0){
    cout<<"Jet dead at position "<<getX()<<","<<getY()<<" ";
}
}

void Type2::fire_weapon(){
   int decision=rand()%2;
  if (getStatus()!=0&&getWeaponNum()!=0){
    //use weapon
    if(decision==0){
    cout<<"Jet weapon: missiles. "<<"Number left: "<<getWeaponNum()<<endl;
    setWeaponNum(getWeaponNum()-1);}
    else{
      cout<<"Jet weapon: missiles. "<<"Number left: "<<getWeaponNum()<<endl;
    }
  }
  if(getStatus()==0||getWeaponNum()==0){
  cout<<"Jet weapon: dead!!! "<<endl;}
}

void Type2::update_status(){
  int attack=rand()%4;
  if(getStatus()!=0){
    if(attack==2){
    cout<<"Jet update Status: Have been hit(ping),";
    setStatus(getStatus()-1);
    cout<<"Status points: "<<getStatus();}
       else{
      cout<<"Jet update Status: Not get attack,Status Points: "<<getStatus();
    }
  }

  else if(getStatus()==0){
    cout<<"Jet update Status: Dead!!! Status Points : "<<getStatus();
  }

}