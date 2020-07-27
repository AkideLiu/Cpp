// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
using namespace std;

int count(int array[], int n, int number) {
    if ( n < 1 ) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] == number) {
            count++;
        }
    }

    return count;
}
