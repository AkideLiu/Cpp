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

//1-2
extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

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

TEST(workshop3,q2){
    string courses[4] = {"aa", "bb", "cc", "dd"};
    string students[4] = {"s1","s2","s3","s4"};
    int nstudents = 4;
    int report_card[4][4];
    for (int i = 0; i < nstudents; ++i) {
        for (int j = 0; j < 4; ++j) {
            report_card[i][j] = rand() % 100;
        }
    }
    print_class(courses,students,report_card,nstudents);
}