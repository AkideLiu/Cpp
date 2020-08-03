// Author : Akide Liu 
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
#include <bitset>

int GLOBAL_FLAG = 0;
using namespace std;

bool is_a_palindrome(int integers[], int length){
    GLOBAL_FLAG = 0;
    if (length < 1) {
        GLOBAL_FLAG = -1;
    }

    for (int i = 0; i < length; ++i) {
        if (integers[i] != integers[length - i - 1]) {
            GLOBAL_FLAG = -2;
        }
    }

    return GLOBAL_FLAG >= 0;
}

int sum_if_a_palindrome(int integers[], int length){
    is_a_palindrome(integers,length);
    if (GLOBAL_FLAG < 0) {
        return GLOBAL_FLAG;
    }
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += integers[i];
    }
    return sum;
}



int sum_elements(int integers[], int length) {
    is_a_palindrome(integers,length);
    if (GLOBAL_FLAG == -1) {
        return GLOBAL_FLAG;
    }
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += integers[i];
    }
    return sum;
}