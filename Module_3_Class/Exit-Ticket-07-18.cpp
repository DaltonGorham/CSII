#include "kennel.cpp"
using namespace std;



int main(){
  Kennel pound;

  Dog dog1;
  Dog dog2;
  Dog dog3;

  pound.add(dog1);
  pound.add(dog2);
  pound.add(dog3);
  int dogs;
  int dogsToAdd;
  cout << "Total dogs in the kennel: " << pound.getKennelCount() << endl;
  
  cout << "Are there any dogs to add to the kennel? If so how many?" << endl;
  cin >> dogsToAdd;

  pound.add(dogsToAdd);




  cout << "How many dogs do you want to adopt?" << endl;
  cin >> dogs;

  for (int i = 0; i < dogs; i++){
    pound.adoptDog();
  }
  
  cout << "Total dogs in the kennel after adoption day: " << pound.getKennelCount() << endl;





  return 0;
}