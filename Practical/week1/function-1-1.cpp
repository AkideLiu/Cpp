// Author : Akide Liu
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

int sum_array(int array[], int n) {
    if ( n < 1 ) {
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    return sum;
}