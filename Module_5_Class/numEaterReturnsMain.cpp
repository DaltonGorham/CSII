#include "numEater.h"
#include <iostream>
#include <limits>
using namespace std;



int main(){



  NumEater<int> eater;

  do{
    try{
      int num = eater.feedMe();
      int remains = eater.diejest(num);

      if (num < 0) {
        eater.cortisolOverload();
        break;
      }

      if (remains > 0) {
        cout << "Leftover Fun: " << remains << endl;
      }
      break;


    }catch(NonQualityFoodException& ex){
      cout << "Non-Quality Food, FEED ME NUMBERS!!!" << endl;
    }
  }while(true);










  return 0;
}
