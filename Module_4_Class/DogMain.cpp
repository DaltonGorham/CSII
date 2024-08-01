#include "Creature.cpp"
#include "Animal.cpp"
#include "Dog.cpp"
#include "HuntingDog.cpp"


int main(){


  Creature bob;
  Animal george;
  Dog phil;
  HuntingDog dog;

  Dog* myDog = new HuntingDog;
  myDog->doTrick();
  phil.doTrick();

  Creature* yourMom = new Animal;
  yourMom->doTrick();

  Dog* dogs[3];
  dogs[0] = &phil;
  dogs[1] = new HuntingDog(5, "Roof", "German shep");
  dogs[2] = new Dog(5,"Spot","Husky");

  for (Dog* &d : dogs){
    d->doTrick();
  }








  return 0;
}