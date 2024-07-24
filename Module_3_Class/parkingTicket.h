#ifndef ParkingTicket_H
#define ParkingTicket_H
#include "parkedCar.h"
#include "policeOfficer.h"
#include "time.h"


class ParkingTicket{
private:
  ParkedCar car;
  double fee;
  PoliceOfficer officer;
  Time time;
public:
  ParkingTicket();
  ParkingTicket(ParkedCar c, PoliceOfficer po, double fine);
  void setFee(double fine);
  double getFee()const;
  friend ostream& operator<<(ostream& strm, const ParkingTicket &ticket);
  static double calculateFine(Time min);


  friend ostream;
};






#endif