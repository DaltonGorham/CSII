#ifndef DOG_H
#define DOG_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Dog : public Animal
{
private:
	int age;
	string name;
	string breed;
public: 
	Dog(int a, string n, string b);
	Dog();
	int getHumanDogAge();
	string getDoggieDesc();
	string playDead();
	string shake();
	virtual void doTrick();
};

#endif