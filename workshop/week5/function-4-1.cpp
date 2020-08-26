#include <iostream>
#include <vector>
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

void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int secondSmallestSum(int *numbers,int length){
    
    // vector<int> vector;
    //
    // for (int i = 0; i < length; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < length - i ; ++j){
    //         sum += numbers[i + j];
    //         vector.push_back(sum);
    //     }
    // }
    //
    // int *array = &vector[0];
    //
    // for (int i = 0; i < vector.size() - 1; i++) {
    //     for (int j = vector.size() - 1; j >= i; --j) {
    //         if (array[j - 1] > array[j]){
    //             swap(array, j, j - 1);
    //         }
    //     }
    // }

    // The number of all possible subarrays of an array of size N is N * (N + 1)/2. Let countSubarrays(N) = N * (N + 1)/2
    // https://www.geeksforgeeks.org/number-subarrays-maximum-value-given-range
    int *new_array = new int[length * (length + 1) / 2];

    int new_array_index = 0;

    for (int i = 0; i < length; ++i) {
        int sum = 0;
        for (int j = 0; j < length - i; ++j) {
            sum += numbers[i + j];
            new_array[new_array_index] = sum;
            new_array_index++;
        }
    }

    new_array_index++;

    for (int i = 0; i < new_array_index; ++i) {
        for (int j = new_array_index - 1; j >= i; --j) {
            if (new_array[j - 1] > new_array[j]){
                swap(new_array, j, j - 1);
            }
        }
    }

    return new_array[1];

}