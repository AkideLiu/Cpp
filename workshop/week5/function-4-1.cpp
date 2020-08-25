#include <iostream>
#include <vector>
#include <algorithm>    // std::sort
using namespace std;

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;


int secondSmallestSum(int *numbers,int length){
    
    // int * array = new int[length];

    vector<int> array;
    
    for (int i = 0; i < length; i++)
    {
        int sum = 0;
        for (int j = 0; j < length - i ; ++j){
            sum += numbers[i + j];
            array.push_back(sum);
        }
    }

    sort (array.begin(),array.end(),myobject);

    return *(array.begin()+1);
    
}