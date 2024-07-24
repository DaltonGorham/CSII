#include "parkingTicket.h"
#include "parkedCar.h"
#include "time.h"
#include "policeOfficer.h"
using namespace std;



ParkingTicket::ParkingTicket(ParkedCar c, PoliceOfficer po, double fine) :
car(c), officer(po),fee(fine){}

void ParkingTicket::setFee(double fine){
  fee = fine;
}

double ParkingTicket::getFee()const{
  return fee;
}

ostream& operator<<(ostream& strm, const ParkingTicket& ticket){
  strm << ticket;
}

double ParkingTicket::calculateFine
(Time min){
  double fine = 25.0;
   if (min.getTimeinMinutes() > 60 ){
    fine += 10 * min.getTimeinMinutes() / 60;
  }

  return fine;
}