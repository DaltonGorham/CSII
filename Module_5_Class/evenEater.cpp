#include "evenEater.h"

int EvenEater::getNumFromUser(){
  int num;
  cout << "Enter a integer." << endl;
  cin >> num;
  return num;
}





string EvenEater:: eat(int num){
  if (num % 2 == 0){
    return "Yum";
  }
  else{
    throw OddFoodException();
  }
}
