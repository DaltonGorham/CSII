#ifndef ParkedCar_H
#define ParkedCar_H
#include <iostream>
using namespace std;


class ParkedCar{
private:
  string make, model, color,licensePlate;
  int minutesParked;
public:
  ParkedCar(string m,string mod,string c,int plate);
  void setMinutesParked(int);
  string getMake()const;
  string getModel()const;
  string getColor()const;
  int getLicensePlate()const;
};






#endif