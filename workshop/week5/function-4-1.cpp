#include <iostream>
#include <vector>
using namespace std;

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

void swap(int array[], int i, int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int secondSmallestSum(int *numbers,int length){
    
    vector<int> array;
    
    for (int i = 0; i < length; i++)
    {
        int sum = 0;
        for (int j = 0; j < length - i ; ++j){
            sum += numbers[i + j];
            array.push_back(sum);
        }
    }

    for (int i = 0; i < array.size() - 1; i++) {
        for (int j = array.size() - 1; j >= i; --j) {
            if (array[j - 1] > array[j]){
                swap(&array[0], j, j - 1);
            }
        }
    }

    return array.at(1);

}