// Author : Akide Liu
// Date : 22/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 10;

    const int *p1 = &a;
    p1 = &b;
    // *p1 = 100;

    int *const p2 = &a;
    // p2 = &b;
    *p2 = 100;
    cout << *p2 << endl;

    const int *const p3 = &a;
    // p3 = &b;
    // *p3 = 100;

}
