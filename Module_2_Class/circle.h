#ifndef Circle_H
#define Circle_H
#include <iostream>
using namespace std;

class Circle{
  private:
    int X;
    int Y;
    double radius;
  public:
    Circle();
    Circle(int x, int y, double rad);
    ~Circle();
    int getX()const;
    int getY()const;
    double getRadius()const;
    double getCircumference()const;
    void setX(int x);
    void setY(int y);
    void setRadius(double r);
};












#endif