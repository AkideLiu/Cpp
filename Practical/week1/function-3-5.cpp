// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void passorfail(char grade) {

    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
            cout << "Pass" << endl;
            break;
        case 'D':
        case 'E':
            cout << "Fail" << endl;
            break;
        default:
            cout << "Nothing" << endl;
    }


}
