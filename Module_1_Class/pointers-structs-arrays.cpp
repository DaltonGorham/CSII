#include <iostream>
using namespace std;
void practiceArrays();
void practicePointers();
void practiceStructs();
int findSum(int arr[], int size);
double findAverage(int arr[], int size);
int findHighest(int arr[], int size);
int findLowest(int arr[], int size);
int main(){

  practiceArrays();
  




  return 0;
}


void practiceArrays(){
  int numbers[5];
  cout << "Enter 5 integers" << endl;
  for (int i = 0; i < 5; i++){
    cin >> numbers[i];
  }

  cout << "The sum is: " << findSum(numbers, 5) << endl;
  cout << "The average is: " << findAverage(numbers, 5) << endl;
  cout << "The Highest is: " << findHighest(numbers, 5) << endl;
  cout << "The Lowest is: " << findLowest(numbers, 5) << endl;


}

void practicePointers(){

}

void practiceStructs(){

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
