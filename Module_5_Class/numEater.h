#ifndef NumEater_H
#define NumEater_H
#include <iostream>
#include <limits>
using namespace std;

class NonQualityFoodException{};
template<class T>
class NumEater{
  private:
    T sum;
  public:
    NumEater() : sum(0){}
    void eat(T num){cout << "Nom-Nom\n"; sum+= num;}
    T burp(){return sum;};
    T diejest(T num){
      if (num - 2 < 0 ){
        return num;
      }

      num-= 2;
      endorphineSurge();
      return diejest(num);
      

    }
    void endorphineSurge(){cout << "Bliss\n";}
    void cortisolOverload(){cout << "STRESS! STRESS! STRESS!\n";}
    T feedMe() {
        T num;
        cout << "I am Lord NumEater. Feed me a NUMBER NOW! ";
        cin >> num;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            throw NonQualityFoodException(); 
        }

        return num;
    }
};




 





#endif