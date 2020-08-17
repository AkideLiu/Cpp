// Author : Akide Liu 
// Date : 17/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>

using namespace std;

void cpyia(int old_array[],int new_array[],int length){
    int *ptr_o = old_array;
    int *ptr_n = new_array;

    for (int i = 0; i < length; ++i) {
        *ptr_n++ = *ptr_o++;
        // ptr_n[i] = ptr_o[i];
    }

}