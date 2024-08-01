#include "position.cpp"
#include "vehicle.cpp"
#include "car.cpp"
#include "boat.cpp"
using namespace std;




int main(){

Vehicle* vehicles[5];

vehicles[0] = new Car(60, Position(5,5), 4, 5);
vehicles[1] = new Boat(25, Position(20, 20), 3, 6);
vehicles[2] = new Car(35, Position(10,10), 3, 4 );
vehicles[3] = new Boat(24, Position(24,22), 2, 8);
vehicles[4] = new Car(75, Position(22, 10), 5, 6);


Position destination (50,50);

for (Vehicle* & vehicle : vehicles){
  vehicle->travel(destination);
  cout << endl;
}


for (Vehicle* & vehicle : vehicles){
  delete vehicle;
}







}