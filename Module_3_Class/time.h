#ifndef Time_H
#define Time_H
#include <iostream>
using namespace std;


class Time{
private:
  int days, hours, minutes, seconds;
public:
  Time();
  Time(int d, int h, int m, int s);
  Time(int h, int m, int s);
  Time(int h, int m);
  void simplify();
  Time operator+(Time& right);
  Time operator-(Time& right);
  Time operator++();
  Time operator++(int);
  Time operator--();
  Time operator--(int);
  bool operator<(Time& right);
  bool operator>(Time& right);
  friend ostream& operator<<(ostream &str, const Time &obj);
  operator int();
  int getDays()const;
  int getHours()const;
  int getMinutes()const;
  int getSeconds()const;
  int getTimeinMinutes()const;

  friend ostream;
};





#endif