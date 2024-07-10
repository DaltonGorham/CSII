#include <iostream>
#include <ctime>
using namespace std;

class Die{
  private:
    int faceValue;
    const int SIDES = 6;
  public:
    void roll();
    int getFaceValue() const;
    string printDie() const;
};

void Die::roll(){
  faceValue = (rand() % SIDES + 1);
}

int Die::getFaceValue() const{
  return faceValue;
}

string Die::printDie() const{
  return "A 6-sided Die showing a ";
}




int main(){
  srand(time(0));




  Die die1;
  Die die2;
  Die die3;

  die1.roll();
  die2.roll();
  die3.roll();

  cout << "Die 1: " << die1.printDie() << die1.getFaceValue() << endl;

  cout << "Die 2: " << die2.printDie() << die2.getFaceValue() << endl;

  cout << "Die 3: " << die3.printDie() << die3.getFaceValue() << endl;

  cout << "The sum of the three die: " << (die1.getFaceValue() + die2.getFaceValue() + die3.getFaceValue());


  return 0;
}