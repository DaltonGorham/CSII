#ifndef PoliceOfficer_H
#define PoliceOfficer_H
#include "parkedCar.h"
#include "parkingMeter.h"
using namespace std;
#include <iostream>




class PoliceOfficer{
private:
  int badgeNumber;
  string name;
public:
  bool examineCar(ParkedCar c, ParkingMeter meter);
  double makeTicket(ParkedCar c, ParkingMeter meter);
  int calcTime(ParkedCar c, ParkingMeter meter);
  int getBadgeNumber()const;
  string getName()const;
};








#endif