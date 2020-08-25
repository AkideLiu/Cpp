#include <gtest/gtest.h>
#include <iostream>

using namespace std;

// 1-1
extern int *readNumbers() ;
extern void printNumbers(int *numbers,int length) ;

//4-1

int secondSmallestSum(int *numbers,int length);


TEST(workshop4,q1_1){
    int * nums = readNumbers();
    printNumbers(nums,10);
}

TEST(workshop4,q4_1){
    int array[4] = {1,2,3,4};
    int * ptr_array = array;
    int a = secondSmallestSum(ptr_array,4);
    EXPECT_EQ(a,2);
}