#include "parkedCar.cpp"
#include "parkingMeter.cpp"
#include "policeOfficer.cpp"
using namespace std;



int main(){

  ParkedCar car("Chevy","Malibu","White","375 2DH");
  ParkingMeter meter(60);
  PoliceOfficer officer("Paul Blark", 1593);

  ParkingTicket ticket = officer.makeTicket(car, meter);
  cout << ticket << endl;





  return 0;
}