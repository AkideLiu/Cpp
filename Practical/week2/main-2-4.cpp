// Author : Akide Liu
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

extern int sum_elements(int integers[], int length);

extern bool is_a_palindrome(int integers[], int length);

extern int sum_if_a_palindrome(int integers[], int length);

using namespace std;

int main(){
    int array1[] = {1,2,-1,0,-5};
    int array2[] = {1,0,0,1,0};
    int array3[] = {1,2,0,2,1};

    cout << sum_elements(array1,5) << endl;
    cout << is_a_palindrome(array2,5) << endl;
    cout << is_a_palindrome(array3,5) << endl;
    cout << sum_if_a_palindrome(array3,5) << endl;
}