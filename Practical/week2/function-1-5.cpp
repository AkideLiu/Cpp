// Author : Akide Liu 
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

void print_summed_matrices(int array1[3][3],int array2[3][3]){

    int **result = new(nothrow) int *[3];
    for (int i = 0; i < 3; ++i) {
        result[i] = new(nothrow) int[3];
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = array1[i][j] + array2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    delete[] result;
}
