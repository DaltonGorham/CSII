#include "parkingTicket.h"
#include "parkedCar.h"
#include "time.h"
#include "policeOfficer.h"
using namespace std;

ParkingTicket::ParkingTicket() : fee(0.0) {}

ParkingTicket::ParkingTicket(ParkedCar c, PoliceOfficer po, double fine) :
car(c), officer(po),fee(fine){}

void ParkingTicket::setFee(double fine){
  fee = fine;
}

double ParkingTicket::getFee()const{
  return fee;
}

ostream& operator<<(ostream& strm, const ParkingTicket& ticket){
  strm << "Parking Ticket: \n";
  strm << "Car: " << ticket.car.getMake() << " " << ticket.car.getModel() << endl;
  strm << "License Plate #: " << ticket.car.getLicensePlate() << endl;
  strm << "Officer: " << ticket.officer.getName() << ", " << "Badge Number: " << ticket.officer.getBadgeNumber() << endl;
  strm << "Fine: $" << ticket.getFee() << endl;
  return strm;
}

double ParkingTicket::calculateFine(Time min){
  double fine = 25.0;
   if (min.getTimeinMinutes() > 60 ){
    fine += 10 * (min.getTimeinMinutes() / 60);
  }

  return fine;
}


void ParkingTicket::findTimeIllegallyParked(ParkedCar car, ParkingMeter meter, PoliceOfficer officer){
    if (officer.examineCar(car,meter)){
    cout << "Time Illegally Parked: " << officer.calcTimeSimplify(car,meter);
  }
  else {
    cout << "Time Illegally Parked: 0";  }
}