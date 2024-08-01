#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;

Dog::Dog(int a, string n, string b) {
	name = n;
	age = a;
	breed = b;
}
Dog::Dog() {

}

int Dog::getHumanDogAge() {
	return age * 7;
}
string Dog::getDoggieDesc() {
	return name + " is a " + to_string(age) + "-year old " + breed;
}
string Dog::playDead() {
	return name + " rolls onto its back with its paws in the air.";
}
string Dog::shake() {
	return name + " lifts a fuzzy paw in the air for your to shake.";
}
void Dog::doTrick() {
	cout << shake() << endl;
}