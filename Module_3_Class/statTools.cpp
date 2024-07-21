#include "statTools.h"
#include <algorithm>
using namespace std;





int StatTools:: min(vector<int> nums){
  int min = nums[0];

  for (int i = 0; i < nums.size(); i++){
    if (min > nums[i]){
      min = nums[i];
    }
  }
  return min;
}

int StatTools:: max(vector<int> nums){
  int max = nums[0];

  for (int i = 0; i < nums.size(); i++){
    if (max < nums[i]){
      max = nums[i];
    }
  }
  return max;
}

double StatTools:: mean(vector<int> nums){

  int sum;
  for (int i = 0; i < nums.size(); i ++){
    sum += nums[i];
  }
  return static_cast<double> (sum) / nums.size();
}

double StatTools:: median(vector<int> nums){
  sort(nums.begin(), nums.end());

  int size = nums.size();

  if (nums.size() % 2 == 0){
    return (nums[(size / 2) - 1] + nums[size / 2]) / 2.0;
  }
  else return nums[size / 2];
}

vector<int> StatTools::mode(vector<int> nums){
  sort(nums.begin(), nums.end());
  vector<int> modes;
  int highestFrequency = 0;
  int currentFrequency = 1;

  for (int i = 1; i <= nums.size(); i++) {
    if (i < nums.size() && nums[i] == nums[i - 1]) {
        currentFrequency++;
  } else{
    if (currentFrequency > highestFrequency){
      modes.clear();
      modes.push_back(nums[i - 1]);
      highestFrequency = currentFrequency;
    } else if (currentFrequency == highestFrequency){
      modes.push_back(nums[i - 1]);
    }
    currentFrequency = 1;
  }
  }
  return modes;
}