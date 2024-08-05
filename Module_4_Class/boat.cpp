#include "boat.h"


Boat::Boat(double speed, Position position, int numPassengers, int maxPassengers) : Vehicle(speed, position, numPassengers, maxPassengers){}



void Boat::travel(Position destination){
  std::cout << "This boat sails " << Position::calcDistance(position, destination) << " miles at " << speed << "mph to " << destination.getX() << ", " << destination.getY() << ", on seas, lakes, and rivers" << " The trip takes " << getETA(destination) << " hours";
  position = destination;
}