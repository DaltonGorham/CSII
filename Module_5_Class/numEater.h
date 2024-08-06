#ifndef NumEater_H
#define NumEater_H
#include <iostream>
using namespace std;


template<class T>
class NumEater{
  private:
    T sum;
  public:
    NumEater() : sum(0){}
    void eat(T num){cout << "Nom-Nom\n"; sum+= num;}
    T burp(){return sum;};
};


NumEater<int> eater1;
NumEater<double> eater2;

 





#endif