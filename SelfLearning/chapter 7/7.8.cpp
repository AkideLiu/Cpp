// Author : Akide Liu
// Date : 22/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

void bubbleSort(int *arr, int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length -1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(int);

    bubbleSort(arr, length);
    printArray(arr, length);

    return 0;
}