#include <iostream>
using namespace std;
void practiceArrays();
void practicePointers();
int findSum(int arr[], int size);
double findAverage(int arr[], int size);
int findHighest(int arr[], int size);
int findLowest(int arr[], int size);
int getAmount();

int main(){

  int menu;

  do {
    cout << "1: Practice Arrays " << endl;
    cout << "2: Practice Pointers " << endl;
    cout << "0: Quit" << endl;

    cin >> menu;

  switch (menu){
    case 1: practiceArrays(); break;
    case 2: practicePointers(); break;
    case 0: break;
  };
  } while (menu > 0);

  return 0;
}



void practiceArrays(){
  int size = getAmount();
  int* numbers = new int[size];
  cout << "Enter " << size << " integers" << endl;
  for (int i = 0; i < size; i++){
    cin >> numbers[i];
  }

  cout << "The sum is: " << findSum(numbers, size) << endl;
  cout << "The average is: " << findAverage(numbers, size) << endl;
  cout << "The Highest is: " << findHighest(numbers, size) << endl;
  cout << "The Lowest is: " << findLowest(numbers, size) << endl;

  delete []numbers;
  numbers = nullptr;
}

void practicePointers(){
  string name;
  int age;
  cout << "What is your name? " << endl;
  cin >> name;
  cout << "What is your age?" << endl;
  cin >> age;

  cout << "Name: " << name << endl << "Address: " << &name << endl;

  cout << "Age: " << age << endl << "Address: " << &age << endl;


  string months[12] =
   { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

  for (int i = 0; i < 12; i++){
    cout << *(months + i) << " ";
  }
  cout << endl;
  for (int i = 11; i > -1; i--){
    cout << *(months + i) << " ";
  }
  cout << endl;


}




int getAmount(){
  int amount;
  cout << "How many numbers do you want? " << endl;
  cin >> amount;

  return amount;
}

int findSum(int arr[], int size){
  int sum;
  for (int i = 0; i < size; i++){
    sum += arr[i];
  }
  return sum;
}

double findAverage(int arr[], int size){
  double average;
  int sum = findSum(arr, size);

  
  average = static_cast<double> (sum) / size;
  return average;
}

int findHighest(int arr[], int size){
  int highest = arr[0]; 

  for (int i = 0; i < size; i++){
    if (highest < arr[i]){
      highest = arr[i];
    }
  }

  return highest;
}


int findLowest(int arr[], int size){
    int lowest = arr[0];  

    for (int i = 0; i < size; i++){
      if (lowest > arr[i]){
        lowest = arr[i];
      }
    }
    return lowest;
}
