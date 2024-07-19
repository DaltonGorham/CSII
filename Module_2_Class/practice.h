#ifndef Practice_H
#define Practice_H
#include <iostream>
using namespace std;


class Coin{
  private:
    bool heads;
    int sideUp;
  public:
    Coin();
    void flip();
    bool isHeadsUp();
    string getSideUp();
};






#endif