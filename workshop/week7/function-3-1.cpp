#include <iostream>
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

bool equalsArray(int *numbers1,int *numbers2,int length){

    for (int i = 0; i < length; ++i) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }

    return true;
}
