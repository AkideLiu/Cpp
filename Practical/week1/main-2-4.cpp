// Author : Akide Liu 
// Date : 27/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

// extern bool ascending(int array[], int n);

int main() {

    int array[6] = {6,3,4,2,1,1};
    int array1[6] = {1,2,2,3,4,5};

    cout << ascending(array, 6) << endl;
    cout << ascending(array1, 6) << endl;

    return 0;
}