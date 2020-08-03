// Author : Akide Liu
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

extern int binary_to_number(int binary_digits[], int number_of_digits);

using namespace std;

int main(){
    int array1[] = {1,2,1,0,1};
    int array2[] = {1,0,0,1,0};
    int array3[] = {0,0,1,1,1};

    cout << binary_to_number(array1,5) << endl;
    cout << binary_to_number(array2,5) << endl;
    cout << binary_to_number(array3,5) << endl;
}