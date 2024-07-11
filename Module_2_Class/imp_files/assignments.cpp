#include "../header_files/assignments.h"

string Assignments::getName()const{
  return name;
}

int Assignments::getPointsPossible()const{
  return pointsPossible;
}

int Assignments::getPointsEarned()const{
  return pointsEarned;
}

void Assignments::setName(string n){
  name = n;
}

void Assignments::setPointsPossible(int points){
  pointsPossible = points;
}

void Assignments::setPointsEarned(int points){
  pointsEarned = points;
}

void Assignments::setDueDate(int date){
  dueDate = date;
}