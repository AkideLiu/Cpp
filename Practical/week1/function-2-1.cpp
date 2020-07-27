// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
using namespace std;

int count_even(int number){
    if ( number < 1 ) {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= number; ++i) {
        if (i % 2 == 0) {
            count++;
        }
    }
    return count;
}

