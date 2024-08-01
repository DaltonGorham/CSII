#include "vehicle.h"



Vehicle::Vehicle(){}

Vehicle::Vehicle(int s, Position p, int numP, int maxP) : speed(s), position(p), numPassengers(numP), maxPassengers(maxP){}


void Vehicle::setSpeed(double s){
  speed = s;
}

void Vehicle::setPosition(Position p){
  position = p;
}

void Vehicle::setNumPassengers(int p){
  numPassengers = p;
}

void Vehicle::setMaxPassengers(int p){
  maxPassengers = p;
}

double Vehicle::getETA(Position destination){
  double distance = Position::calcDistance(position, destination);
  return distance / speed;
}
