// Author : Akide Liu 
// Date : 22/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *p = arr;

    cout << "first element " << arr[0] << endl;
    cout << "first element by pointer " << *p << endl;

    for (int i = 0; i < 5; ++i) {
        cout << *p++ << endl;
    }
}