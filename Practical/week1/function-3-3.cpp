// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double weightedaverage(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    int *countArray = (int *) malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i) {

        countArray[i] = 0;

        for (int j = 0; j < n; ++j) {
            if (array[j] == array[i]) {
                countArray[i] += 1;
            }
        }
    }

    double result = 0;
    for (int i = 0; i < n; ++i) {
        result += (double (array[i] * countArray[i]) / n);
    }

    return result;

}
