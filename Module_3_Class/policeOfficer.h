#ifndef PoliceOfficer_H
#define PoliceOfficer_H
#include "parkedCar.h"
#include "parkingMeter.h"
#include "time.h"
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
  double makeTicket(ParkedCar c, ParkingMeter meter);
  Time calcTime(ParkedCar c, ParkingMeter meter);
  Time calcTimeSimplify(ParkedCar c, ParkingMeter meter);
  int getBadgeNumber()const;
  string getName()const;
};


#endif