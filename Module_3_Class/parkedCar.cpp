#include "parkedCar.h"
using namespace std;



ParkedCar::ParkedCar(){}
ParkedCar::ParkedCar(string m, string mod, string c, string plate,int minParked)
: make(m), model(mod), color(c), licensePlate(plate), minutesParked(minParked)
{}

void ParkedCar::setMinutesParked(int min){
  minutesParked = min;
}

string ParkedCar::getMake()const{
  return make;
}

string ParkedCar::getModel()const{
  return model;
}

string ParkedCar::getColor()const{
  return color;
}

string ParkedCar::getLicensePlate()const{
  return licensePlate;
}

int ParkedCar::getMinutesParked()const{
  return minutesParked;
}



