#include "parkedCar.cpp"
#include "parkingMeter.cpp"
#include "policeOfficer.cpp"
#include "parkingTicket.cpp"
#include "time.cpp"
using namespace std;



int main(){

  ParkedCar car("Chevy","Malibu","White","375 2DH", 263);
  ParkingMeter meter(0);
  PoliceOfficer officer("Paul Blark", 1593);

  double fine = officer.makeTicket(car,meter);

  ParkingTicket ticket(car, officer, fine);

  cout << ticket;

  ticket.findTimeIllegallyParked(car,meter,officer);

  cout << endl << endl;


  ParkedCar yourCar("Ford", "F150", "Black", "882 TED", 120);
  ParkingMeter yourMeter(50);
  PoliceOfficer cop("John Doe", 19552);

  double fee = cop.makeTicket(yourCar, yourMeter);

  ParkingTicket yourTicket(yourCar, cop, fee);

  cout << yourTicket; yourTicket.findTimeIllegallyParked(yourCar, yourMeter, cop);


  





  return 0;
}