#ifndef Student_H
#define Student_H
#include "assignments.h"
#include <iostream>
#include <vector>
using namespace std;

class Student{
  private:
    string firstName;
    string lastName;
    int idNumber;
    string emailAddress;
    int phoneNumber;
    string address;
    vector<Assignments> assignments;
  public:
    string getFirstName()const;
    string getLastName()const;
    int getIdNumber()const;
    string getEmail()const;
    vector<Assignments> getAssignments()const;
    void setFirstName(string first);
    void setLastName(string last);
    void setIdNumber(int id);
    void setEmail(string email);
    string getDisplayString();
    double getGrade();

};


#endif
