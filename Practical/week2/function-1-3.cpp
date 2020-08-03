// Author : Akide Liu 
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

void count_numbers(int array[4][4]){

    //http://www.cplusplus.com/doc/tutorial/dynamic/
    int *count_array = new(nothrow) int[10];

    for (int i = 0; i < 10; ++i) {
        count_array[i] = 0;
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (array[i][j] <= 9 && array[i][j] >= 0) {
                count_array[array[i][j]]++;
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        cout << i << ":" << count_array[i] << ";";
    }
    cout << endl;
    delete[] count_array;

}
