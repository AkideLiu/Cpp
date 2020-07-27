// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
using namespace std;

void twofivenine(int array[], int n) {
    if (n < 1) {
        cout << "" << endl;
    }

    int disArray[3] = {0, 0, 0};

    for (int i = 0; i < n; ++i) {
        switch (array[i]) {
            case 2:
                disArray[0]++;
            case 5:
                disArray[1]++;
            case 9:
                disArray[2]++;
        }
    }
    cout << "2:" << disArray[0]
         << ";5:" << disArray[1]
         << ";9:" << disArray[2]
         << ";"
         << endl;

    cout << "" << endl;
}

