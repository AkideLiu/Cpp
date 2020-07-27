// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
#include <cmath>
using namespace std;


void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int median(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    for (int i = 0; i < n; ++i) {

        for (int j = i + 1; j < n; ++j) {

            if (array[i] > array[j]) {

                swap(array, j, i);

            }
        }
    }

    int middle = ceil(n / 2) ;

    return array[middle];
}
