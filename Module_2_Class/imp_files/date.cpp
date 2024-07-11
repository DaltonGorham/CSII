#include <iostream>
#include "../header_files/date.h"

int Date::getYear()const{
  return year;
}

void Date::setYear(int y){
  year = y;
}

int Date::getMonth()const{
  return month;
}

void Date::setMonth(int m){
  month = m;
}

int Date::getDay()const{
  return day;
}

void Date::setDay(int d){
  day = d;
}



