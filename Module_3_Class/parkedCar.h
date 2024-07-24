#ifndef ParkedCar_H
#define ParkedCar_H
#include <iostream>
using namespace std;


class ParkedCar{
private:
  string make, model, color,licensePlate;
  int minutesParked;
public:
  ParkedCar();
  ParkedCar(string m,string mod,string c,string plate);
  void setMinutesParked(int);
  string getMake()const;
  string getModel()const;
  string getColor()const;
  string getLicensePlate()const;
  int getMinutesParked()const;
};






#endif