// Author : Akide Liu 
// Date : 22/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

void swap1(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
};

void swap2(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a = 10;
    int b = 20;

    swap1(a, b);
    cout << a << " " << b << endl;

    swap2(&a, &b);
    cout << a << " " << b << endl;
}
