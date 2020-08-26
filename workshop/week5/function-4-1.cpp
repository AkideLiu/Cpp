#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#ifndef GTest_ignore

int *readNumbers(){
    int * array = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    return array;

}
void printNumbers(int *numbers,int length){
    for (int i = 0; i < length; i++)
    {
        cout << i << " "<<numbers[i] << endl;
    }

}

#endif

int secondSmallestSum(int *numbers,int length){

    // The number of all possible subarrays of an array of size N is N * (N + 1)/2. Let countSubarrays(N) = N * (N + 1)/2
    // https://www.geeksforgeeks.org/number-subarrays-maximum-value-given-range
    
    // int *newArray = new int[length * (length + 1) / 2];

    int newArray[255];

    for (int i = 0; i < 255; ++i){
        newArray[i] = 0;
    }

    int new_array_index = 0;

    for (int i = 0; i < length; ++i) {
        int sum = 0;
        for (int j = 0; j < length - i; ++j) {
            sum += numbers[i + j];
            newArray[new_array_index] = sum;
            new_array_index++;
        }
    }

    sort(newArray,newArray + new_array_index);

    return newArray[1];
}