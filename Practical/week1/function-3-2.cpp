// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
#include <cmath>
using namespace std;

bool fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }


    //ceil will count down digital
    //in case i < middle number - 1
    for (int i = 0; i < ceil(n/2); ++i) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }

    for (int i = ceil(n/2); i < n-1; ++i) {
        if (array[i] < array[i + 1]) {
            return false;
        }
    }

    return true;
}

