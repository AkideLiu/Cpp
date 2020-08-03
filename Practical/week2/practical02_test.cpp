// Author : Akide Liu 
// Date : 3/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <gtest/gtest.h>
#include <iostream>

using namespace std;

//1-1
extern int diagonal(int array[4][4]);
//
//1-2
extern int identity(int array[10][10]);

//1-3
extern void count_numbers(int array[4][4]);

//1-4
extern void print_scaled_matrix(int array[3][3],int scale);

//1-5
extern void print_summed_matrices(int array1[3][3],int array2[3][3]);

//2-1
extern void print_as_binary(std::string decimal_number);

//2-2
extern int binary_to_number(int binary_digits[], int number_of_digits);

//2-3
extern int sum_elements(int integers[], int length);

extern bool is_a_palindrome(int integers[], int length);

extern int sum_if_a_palindrome(int integers[], int length);

//2-4

extern int sum_min_and_max(int integers[], int length);

extern int max_integer(int integers[], int length);

extern int min_integer(int integers[], int length);


TEST(prac2,func_1_1) {
    int array[4][4] = {};
    int number = 0;

    for (auto & i : array) {
        for (int & j : i) {
            j = number;
            number++;
        }
    }

    int sum = diagonal(array);
    // cout << sum << endl;
    EXPECT_EQ(sum,30);
}
//
TEST(prac2,func_1_2) {
    int array[10][10] = {};
    int array2[10][10] = {};
    int number = 1;

    for (auto & i : array) {
        for (int & j : i) {
            j = number;
            number++;
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == j) {
                array2[i][j] = 1;
            } else {
                array2[i][j] = 0;
            }
        }
    }

    EXPECT_EQ(identity(array),  0);
    EXPECT_EQ(identity(array2),1);
}

TEST(prac2,func_1_3) {
    int array[4][4] = {};

    for (auto & i : array) {
        for (int & j : i) {
            j = rand() % 10;
        }
    }

    count_numbers(array);
}

TEST(prac2,func_1_4) {
    int scale = 3 ;
    int threebythree[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    print_scaled_matrix(threebythree,scale) ;
}

TEST(prac2,func_1_5) {
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
    print_summed_matrices(matrix1,matrix2) ;
}

TEST(prac2,func_2_1) {
    print_as_binary("123");
    print_as_binary("6");
}

TEST(prac2,func_2_2) {
    int array1[] = {1,2,1,0,1};
    int array2[] = {1,0,0,1,0};
    int array3[] = {0,0,1,1,1};

    EXPECT_EQ(binary_to_number(array1,5), 0);
    EXPECT_EQ(binary_to_number(array2,5), 18);
    EXPECT_EQ(binary_to_number(array3,5), 7);

}

TEST(prac2,func_2_3) {
    int array1[] = {1,2,-1,0,-5};
    int array2[] = {1,0,0,1,0};
    int array3[] = {1,2,0,2,1};

    EXPECT_EQ(sum_elements(array1,5),-3);
    EXPECT_EQ(sum_elements(array2,5),2);

    EXPECT_EQ(sum_if_a_palindrome(array3,5),6);
    EXPECT_EQ(sum_if_a_palindrome(array2, 5), -2);

    EXPECT_EQ(is_a_palindrome(array2,5),false);
    EXPECT_EQ(is_a_palindrome(array3,5),true);
}

TEST(prac2,func_2_4) {
    int array1[] = {1,2,-1,0,-5};
    int array2[] = {1,0,0,1,0};
    int array3[] = {1,2,0,2,1};


    EXPECT_EQ(sum_min_and_max(array1,5),-3);
    EXPECT_EQ(max_integer(array2,5),1);
    EXPECT_EQ(min_integer(array3,5),0);
    EXPECT_EQ(sum_min_and_max(array3,5),2);
}

GTEST_API_ int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}