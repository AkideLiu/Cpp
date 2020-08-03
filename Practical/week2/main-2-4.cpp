// Author : Akide Liu
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

extern int sum_min_and_max(int integers[], int length);

extern int max_integer(int integers[], int length);

extern int min_integer(int integers[], int length);

using namespace std;

int main(){
    int array1[] = {1,2,-1,0,-5};
    int array2[] = {1,0,0,1,0};
    int array3[] = {1,2,0,2,1};

    cout << sum_min_and_max(array1,5) << endl;
    cout << max_integer(array2,5) << endl;
    cout << min_integer(array3,5) << endl;
    cout << sum_min_and_max(array3,5) << endl;
}