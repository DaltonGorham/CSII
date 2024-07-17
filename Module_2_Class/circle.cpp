#include "circle.h"


Circle::Circle()
{
  X = 0;
  Y = 0;
  radius = 0.0;
}

Circle::Circle(int x, int y, double rad){
  X = x;
  Y = y;
  radius = rad;
}


Circle::~Circle(){
  cout << "Destroying Circle..";
}

void Circle:: setX(int x){
  X = x;
}

void Circle:: setY(int y){
  Y = y;
}

void Circle:: setRadius(double r){
  radius = r;
}


int Circle::getX()const{
  return X;
}

int Circle::getY()const{
  return Y;
}

double Circle::getRadius()const{
  return radius;
}

double Circle::getCircumference()const{
  return 2 * 3.14159 * radius;
}


