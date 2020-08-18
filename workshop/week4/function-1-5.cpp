// Author : Akide Liu 
// Date : 18/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
#include <string>

using namespace std;

int size_of_array_arr()  {
    int a, *p;
    p = &a;
    int *t = new int;
    int n = 3;
    int *arr = new int[n];

    int size = 0;

    for (int i = 0; i < n; ++i) {
        size += sizeof(*arr);
        arr++;
    }

    return size;
}
