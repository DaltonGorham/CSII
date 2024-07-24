#include "parkingMeter.h"
using namespace std;


ParkingMeter::ParkingMeter(int num) : minPurchased(num){}

void ParkingMeter::setMinPurchased(int min){
  minPurchased = min;
}

int ParkingMeter::getMinPurchased()const{
  return minPurchased;
}