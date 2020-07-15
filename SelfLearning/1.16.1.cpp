// Author : Akide Liu 
// Date : 15/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(bool *a, bool *b){
    bool temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n1 = 100, n2 = 202;
    Swap(&n1, &n2);
    cout << n1 << "," << n2 << endl;


    float f1 = 100.2, f2 = 202.1;
    Swap(&f1, &f2);
    cout << f1 << "," << f2 << endl;


    char c1 = 'A', c2 = 'C';
    Swap(&c1, &c2);
    cout << c1 << "," << c2 << endl;


    bool b1 = true, b2 = false;
    Swap(&b1, &b2);
    cout << b1 << "," << b2 << endl;
}