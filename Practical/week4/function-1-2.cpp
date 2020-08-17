// Author : Akide Liu 
// Date : 17/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

int main()
{
    int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10};
    int *b = new int[10];

    /* address of a[0] is assigned to ptr */
    ptr = &a[0];

    // I want to copy the values in a into b; since i've declared b
    // as a dynamically allocated array,
    // I can now do pointer magic!!
    b = ptr;

    cout << "Value of first element in b " << b[0] << endl;
    cout << "Value of second element in b " << b[1] << endl;

    a[1] = 42;
    cout << "Value of second element in b " << b[1] << endl;

    return 0;

    /*  the shallow copy is different than the deep copy
     *  array copied in shallow mode will lead to elements in copied array dynamically change following the original array's elements' change.
     */
}
