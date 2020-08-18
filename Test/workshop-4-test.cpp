// Author : Akide Liu 
// Date : 18/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <gtest/gtest.h>
#include <iostream>
// 1-1
extern int size_of_variable_star_t();

// 1-12
extern int size_of_variable_star_arr();

// 1-5
extern int size_of_array_arr();

// 2-1
extern float add_op(float left, float right);

extern float subtract_op(float left, float right);

extern float arithmetic_ops(float left, float right, std::string op);

// 2-3
extern float arithmetic_ops(float left, float right, float (*op)(float, float));

// 2-4
extern float multiply_op(float left, float right);

using namespace std;

TEST(workshop4,q1_1){
    cout <<size_of_variable_star_t() << endl;
}

TEST(workshop4,q1_4){
    cout << size_of_variable_star_arr() << endl;
}

TEST(workshop4,q1_5){
    cout << size_of_array_arr() << endl;
}

TEST(workshop4,q2_1){
    float a = 3.2, b = 4.2;
    EXPECT_FLOAT_EQ(add_op(a,b),a + b);
    EXPECT_FLOAT_EQ(subtract_op(a, b), a - b);

    EXPECT_FLOAT_EQ(arithmetic_ops(a,b,"+"),a + b);
    EXPECT_FLOAT_EQ(arithmetic_ops(a,b,"-"),a - b);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}