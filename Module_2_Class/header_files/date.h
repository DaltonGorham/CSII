#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef Date_H
#define Date_H


class Date{
private:
    int year;
    int month;
    int day;
  public:
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);
};


#endif