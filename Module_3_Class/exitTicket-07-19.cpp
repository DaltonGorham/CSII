#include "statTools.cpp"
using namespace std;




int main(){

  vector<int> nums = {5,6,4,3,2,3,4,5,6,7,8,1,3,4,5,6,7,72};

  StatTools tools;

  cout << "Min: " << tools.min(nums) << endl;
  cout << "Max: " << tools.max(nums) << endl;
  cout << "Mean: " << tools.mean(nums) << endl;
  cout << "Median: " << tools.median(nums) << endl;

  vector<int> modes = tools.mode(nums);
  cout << "Mode(s): ";

  for (int mode : modes){
    cout << mode << " ";
  }




  return 0;
}