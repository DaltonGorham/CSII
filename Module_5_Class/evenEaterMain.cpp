#include "evenEater.cpp"
#include <iostream>
using namespace std;


int main(){

  int num;
  EvenEater eater;
  do {
  num = eater.getNumFromUser();
  try{
   cout << eater.eat(num);
  }
  catch(OddFoodException ex){
    cout << "Odd Number. Try Again" << endl;
  }
  }while(num % 2 != 0);















  return 0;
}