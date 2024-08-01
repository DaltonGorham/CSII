#ifndef Boat_H
#define Boat_H
#include "vehicle.h"


class Boat : public Vehicle{
  public:
    void travel(Position destination) override;
    Boat(double speed, Position position, int numPassengers, int maxPassengers);
};








#endif