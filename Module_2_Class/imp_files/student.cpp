#include "../header_files/student.h"





string Student::getFirstName()const{
  return firstName;
}

string Student::getLastName()const{
  return lastName;
}

int Student::getIdNumber()const{
  return idNumber;
}

string Student::getEmail()const{
  return emailAddress;
}

vector<Assignments> Student::getAssignments()const{
  return assignments;
}