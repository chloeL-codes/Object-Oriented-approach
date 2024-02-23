#include "Enemy.h"
#include "Type1.h"
#include <iostream>
using namespace std;
Type1::Type1(){
  setX(300);
  setY(500);
  setStatus(2);
}
void Type1::move_position(){
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
      cout<<"PitBull moves to "<<getX()<<","<<getY()<<" ";
  }}
  //dead then not move
  else if(getStatus()==0||getX()==0||getX()<0){
      cout<<"PitBull dead at position "<<getX()<<","<<getY()<<" ";
  }
}

void Type1::fire_weapon(){
  int decision=rand()%3;
  if (getStatus()!=0){
    if(decision==0){
      cout<<"PitBull fire weapon: bite leg "<<endl;}
    else if(decision==1){
      cout<<"PitBull fire weapon: bite neck "<<endl;
    }
    else if(decision==2){
      cout<<"PitBull fire weapon: slash chest "<<endl;
    }
    else
      cout<<"PitBull fire weapon: bite shoulder "<<endl;}
  else if(getStatus()==0){
    cout<<"PitBull fire weapon: Dead!!! "<<endl;
  }
}

void Type1::update_status(){
  int attack=rand()%2;
  if(getStatus()!=0){
    if(attack==1){
    cout<<"PitBull update Status: Have been hit(bark),";
    setStatus(getStatus()-1);
    cout<<"Status points: "<<getStatus();}
    else{
      cout<<"PitBull update Status: Not get attack,Status Points: "<<getStatus();
    }
  }
  else if(getStatus()==0){
    cout<<"PitBull update Status: Dead!!! Status Points : "<<getStatus();
    }
  
}
