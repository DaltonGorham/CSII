#include "policeOfficer.h"
#include "parkingTicket.h"
using namespace std;


PoliceOfficer::PoliceOfficer(string n, int bn) : name(n), badgeNumber(bn){}

bool PoliceOfficer::examineCar(ParkedCar c, ParkingMeter meter){
  return meter.getMinPurchased() > c.getMinutesParked();
}



ParkingTicket PoliceOfficer::makeTicket(ParkedCar c, ParkingMeter meter){
  double fine;
  ParkingTicket dummy;
  if (examineCar(c, meter)){
    int expiredMins = calcTime(c,meter);
    ParkingTicket ticket;
    fine = ticket.getFee();
    ticket = ParkingTicket(c, *this,fine);
    return ticket;
}
else return dummy;
}

int PoliceOfficer::calcTime(ParkedCar c, ParkingMeter meter){
  int expiredMins = c.getMinutesParked() - meter.getMinPurchased();

  return expiredMins;
}

