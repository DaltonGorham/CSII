#ifndef PoliceOfficer_H
#define PoliceOfficer_H
#include "parkedCar.h"
#include "parkingMeter.h"
#include "parkingTicket.h"
using namespace std;
#include <iostream>




class PoliceOfficer{
private:
  int badgeNumber;
  string name;
public:
  PoliceOfficer();
  PoliceOfficer(string n, int bn);
  bool examineCar(ParkedCar c, ParkingMeter meter);
  ParkingTicket makeTicket(ParkedCar c, ParkingMeter meter);
  int calcTime(ParkedCar c, ParkingMeter meter);
  int getBadgeNumber()const;
  string getName()const;
};








#endif