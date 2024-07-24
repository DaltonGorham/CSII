#include "policeOfficer.h"
#include "parkingTicket.h"
using namespace std;

PoliceOfficer::PoliceOfficer() : badgeNumber(0), name("") {}

PoliceOfficer::PoliceOfficer(string n, int bn) : name(n), badgeNumber(bn){}

bool PoliceOfficer::examineCar(ParkedCar c, ParkingMeter meter){
  return meter.getMinPurchased() < c.getMinutesParked();
}



double PoliceOfficer::makeTicket(ParkedCar c, ParkingMeter meter){
  if (examineCar(c, meter)){
    Time expiredTime = calcTime(c,meter);
    double fine = ParkingTicket::calculateFine(expiredTime);
    return fine;
  }
  else{
    return 0.0;
  }
}
Time PoliceOfficer::calcTime(ParkedCar c, ParkingMeter meter){
  int expiredMins = c.getMinutesParked() - meter.getMinPurchased();

   Time expiredTime(0,0, expiredMins, 0);
  return expiredTime;
}

Time PoliceOfficer::calcTimeSimplify(ParkedCar c, ParkingMeter meter){
  int expiredMins = c.getMinutesParked() - meter.getMinPurchased();
   Time expiredTime(0,0, expiredMins, 0);
   expiredTime.simplify();
  return expiredTime;
}

int PoliceOfficer::getBadgeNumber()const{
  return badgeNumber;
}

string PoliceOfficer::getName()const{
  return name;
}

