// Author : Akide Liu 
// Date : 11/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

void printer(int array[10][10]){
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j != 9){
                cout << array[i][j] << " ";
            }else {
                cout << array[i][j];
            }
        }
        cout << endl;
    }
};