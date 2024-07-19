#ifndef Kennel_H
#define Kennel_H
#include "dog.h"
#include <iostream>
using namespace std;

class Kennel{
  private:
    Dog* dogs;
    int maxSize = 100;
    static int kennelCount;
  public:
    Kennel();
    ~Kennel();
    static int getKennelCount();
    void add(Dog d);
    void add(int num);
    void adoptDog();

};


#endif