#include "car.h"
using namespace std;


Car::Car(double speed, Position position, int numPassengers, int maxPassengers)
    : Vehicle(speed, position, numPassengers, maxPassengers) {}



void Car::travel(Position destination){
  cout << "This car drives " << Position::calcDistance(position, destination) << " miles at " << speed << "mph to " << destination.getX() << ", " << destination.getY() << " over land. The trip takes " << getETA(destination) << " hours.";
  position = destination;
}