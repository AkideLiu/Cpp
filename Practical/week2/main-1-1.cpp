// Author : Akide Liu
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

extern int diagonal(int array[4][4]);

using namespace std;

int main(){
    int array[4][4] = {};
    int number = 0;

    for (auto & i : array) {
        for (int & j : i) {
            j = number;
            number++;
        }
    }

    int sum = diagonal(array);
    cout << sum << endl;

}