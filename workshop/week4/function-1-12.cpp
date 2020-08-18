// Author : Akide Liu 
// Date : 18/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
#include <string>

using namespace std;

int size_of_variable_star_arr(){
    int a, *p;
    p = &a;
    int *t = new int;
    int *arr = new int[3];
    delete[] arr;
    delete t;
    return sizeof(arr);
}
