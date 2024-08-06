#include <iostream>
using namespace std;
#include "numEater.h"

template<class T>
T cubeIt(T num){return num * num;};

int main(){



  cout << "CUBE IT TEST" << endl;

  int integer = cubeIt(25.5);
  double decimal = cubeIt(25.5);

  cout << "Integer: " << integer << endl;
  cout << "Double: " << decimal << endl << endl;

  cout << "EATER TEST" << endl;


  NumEater<int> eater1;
  NumEater<double> eater2;

  double list[5] = {5, 4.4, 10.2, 7, 4};

  for (auto &num : list){
    cout << "Eater 1: "; eater1.eat(num);
    cout << "Eater 2: "; eater2.eat(num);
  }
  cout << endl;
  cout << "Eater 1: " << eater1.burp() << endl;
  cout << "Eater 2: " << eater2.burp() << endl;


}