#ifndef Vehicle_H
#define Vehicle_H
#include "position.h"



class Vehicle{
  protected:
    double speed;
    Position position;
    int numPassengers;
    int maxPassengers;
  public:
    Vehicle();
    Vehicle(int s, Position p, int numP, int maxP);
    void setSpeed(double s);
    void setPosition(Position p);
    void setNumPassengers(int p);
    void setMaxPassengers(int p);
    double getSpeed()const{return speed;};
    Position getPosition()const{return position;};
    int getNumPassengers()const{return numPassengers;};
    int getMaxPassengers()const{return maxPassengers;};
    double getETA(Position destination);
    virtual void travel(Position destination) = 0;


};











#endif