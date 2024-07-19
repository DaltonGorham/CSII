#include "practice.h"
#include <ctime>

Coin::Coin(){
  flip();
}

void Coin::flip(){
  sideUp = rand() % 2 + 1;
}

bool Coin::isHeadsUp(){
  if (sideUp == 1){
    return true;
  }
  return false;
}

string Coin::getSideUp(){
  if (isHeadsUp()){
    return "Heads";
  }
  else if (!isHeadsUp()) return "Tails";
  
}

