// Author : Akide Liu
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

extern int identity(int array[10][10]);

using namespace std;

int main(){
    int array[10][10] = {};
    int array2[10][10] = {};
    int number = 1;

    for (auto & i : array) {
        for (int & j : i) {
            j = number;
            number++;
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == j) {
                array2[i][j] = 1;
            } else {
                array2[i][j] = 0;
            }
        }
    }



    cout << identity(array) << endl;
    cout << identity(array2) << endl;

}