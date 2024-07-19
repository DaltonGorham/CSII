#include "kennel.h"

int Kennel::kennelCount = 0;

Kennel::Kennel() {
  dogs = new Dog[maxSize];
}

Kennel::~Kennel(){
  delete[] dogs;
}

void Kennel::add(Dog d){
  dogs[kennelCount] = d; 
  kennelCount++;
}

void Kennel:: add(int num){
  kennelCount += num;
  }

int Kennel::getKennelCount(){
  return kennelCount;
}

void Kennel::adoptDog(){
  kennelCount--;
}