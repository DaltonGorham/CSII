#ifndef Car_H
#define Car_H
#include "vehicle.h"
class Car : public Vehicle{
  public:
    void travel(Position destination) override;
    Car(double speed, Position position, int numPassengers, int maxPassengers);

};








#endif