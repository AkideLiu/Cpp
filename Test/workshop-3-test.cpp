// Author : Akide Liu 
// Date : 11/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <gtest/gtest.h>
#include <iostream>
#include <cmath>

//1-1
extern void printer(int array[10][10]);
using namespace std;
TEST(workshop3,q1){
    int array[10][10];
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            array[i][j] = rand() % 10;
        }
    }

    printer(array);
}