// Author : Akide Liu 
// Date : 17/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>

using namespace std;

void cpyda(double *old_array,double *new_array,int length){

    for (int i = 0; i < length; ++i) {
        *new_array++ = *old_array++;
    }

}