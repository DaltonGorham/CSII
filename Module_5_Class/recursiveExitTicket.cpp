#include <iostream>
#include <vector>
using namespace std;

void factor(int num, int currentNum, vector<int>& factors);
vector<int> getFactors(int num);

int main(){
  int num;
  cout << "Enter an non-negative integer and I will give you all the factors of it." << endl;
  cin >> num;
  
  vector<int> factors = getFactors(num);

  cout << "The factors of " << num << " are: " << endl;

  for (int factor : factors){
    cout << factor << " ";
  }





  return 0;
}

void factor(int num, int currentNum, vector<int>& factors)
{
  if (currentNum > num / 2)
    return;


  if (num % currentNum == 0){
    factors.push_back(currentNum);
  }

  factor(num,currentNum + 1, factors);
}

vector<int> getFactors(int num)
{
  vector<int> factors;
  factor(num, 1, factors);
  factors.push_back(num);
  return factors;
}