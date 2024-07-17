#include <iostream>
#include "circle.h"
#include "circle.cpp"



int main(){


  Circle c(10, 25,9);

  cout << "X:" << c.getX() << endl;
  cout << "Y:" << c.getY() << endl;
  cout << "Radius: " << c.getRadius() << endl;
  cout << "Circumference: " << c.getCircumference() << endl;






  return 0;
}

