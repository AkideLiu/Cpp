// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

extern bool ascending(int array[], int n);

int main() {

    int array[15] = {3, 4, 5, 9, 4, 6, 7, 8, 2, 1, 3, 4, 5, 6, 3};

    cout << ascending(array, 15) << endl;
    
    return 0;
}