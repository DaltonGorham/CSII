#ifndef Assignments_H
#define Assignments_H
#include <iostream>
using namespace std;


class Assignments{
  private: 
    string name;
    int pointsPossible;
    int pointsEarned;
    int dueDate;
  public:
    string getName()const;
    int getPointsPossible() const;
    int getPointsEarned() const;
    void setName(string n);
    void setPointsPossible(int points);
    void setPointsEarned(int points);
    void setDueDate(int dueDate);
};

#endif