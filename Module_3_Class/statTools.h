#ifndef StatTools_H
#define StatTools_H
#include <vector>
#include <iostream>
using namespace std;

class StatTools{
  public:
    static int min(vector<int> nums);
    static int max(vector<int> nums);
    static double mean(vector<int> nums);
    static double median(vector<int> nums);
    static vector<int> mode(vector<int> nums);
};





#endif