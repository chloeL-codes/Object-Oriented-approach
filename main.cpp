#include "Enemy.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
  const int max_enemy=20;
  Enemy* enemy_ptr[max_enemy];
  int num_enemy;
  enemy_ptr[0]=new Type1();
  enemy_ptr[1]=new Type2();
  enemy_ptr[2]=new Type3();
  num_enemy=3;

  char choice;
  do{
    for (int i=0;i<num_enemy;i++){
      enemy_ptr[i]->move_position();
    }
    cout<<'\n';

    int randEnemy=rand()%num_enemy;
    enemy_ptr[randEnemy]->fire_weapon();

    int randEnemy2=rand()%num_enemy;
    enemy_ptr[randEnemy2]->update_status();

    cout<<"\n\nWould you like to continue? (y/n): ";
    cin>>choice;
  }while(choice=='y');

cout<<"\nExiting......";
return 0;
}