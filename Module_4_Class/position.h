#ifndef Position_H
#define Position_H
#include <iostream>



class Position{
  private:
    int x, y;
  public:
    Position();
    Position(int X, int Y);
    int getX()const{return x;};
    int getY()const{return y;};
    void setX(int x);
    void setY(int y);
    static double calcDistance(Position start, Position end);
};










#endif