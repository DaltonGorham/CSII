#ifndef ParkedCar_H
#define ParkedCar_H
#include <iostream>
#include <time.h>
using namespace std;


class ParkedCar{
private:
  string make, model, color,licensePlate;
  int minutesParked;
public:
  ParkedCar();
  ParkedCar(string m,string mod,string c,string plate, int minParked);
  void setMinutesParked(int);
  string getMake()const;
  string getModel()const;
  string getColor()const;
  string getLicensePlate()const;
  int getMinutesParked()const;
};






#endif