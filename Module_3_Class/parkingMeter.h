#ifndef ParkingMater_H
#define ParkingMeter_H

class ParkingMeter{
private:
  int minPurchased;
public:
  ParkingMeter(int num);
  void setMinPurchased(int min);
  int getMinPurchased()const;
};






#endif