#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1-1
extern int *readNumbers() ;
extern void printNumbers(int *numbers,int length) ;

// 2-1

extern void hexDigits(int *numbers,int length) ;

// 3-1
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

// 3-2

extern int *reverseArray(int *numbers1,int length) ;

//4-1

extern int secondSmallestSum(int *numbers,int length);


TEST(workshop4,q1_1) /* NOLINT */ {
    // int * nums = readNumbers();
    // printNumbers(nums,10);
    int length = 10;
    int * nums = new int[length] {5,2,3,4,35,6,7,8,-9,10};
    printNumbers(nums,length);
    delete[] nums;
}

TEST(workshop4,q2_1) /* NOLINT */  {
    int length = 10;
    int * nums = new int[length] {11,12,3,4,15,6,7,8,9,10};
    hexDigits(nums,length);
    delete[] nums;
}

TEST(workshop4,q3_1) /* NOLINT */ {
    int length = 10;
    int * nums1 = new int[length] {11,12,3,4,15,6,7,8,9,10};
    int * nums2 = new int[length] {5,2,3,4,35,6,7,8,-9,10};

    EXPECT_TRUE(equalsArray(nums1, nums1,length));
    EXPECT_FALSE(equalsArray(nums1, nums2, length));

    delete[] nums1;
    delete[] nums2;
}

TEST(workshop4,q3_2) /* NOLINT */ {

    vector<int> nums = {11, 12, 3, 4, 15, 6, 7, 8, 9, 10};
    int length = nums.size();
    int *reverseArr = reverseArray(&nums[0], length);
    reverse(nums.begin(), nums.end());

    for (int i = 0; i < length; ++i) {
        EXPECT_EQ(nums[i], reverseArr[i]);
    }
    delete[]reverseArr;
}

TEST(workshop4,q4_1) /* NOLINT */ {
    int * ptr_array = new int[4]{1,2,3,4};
    EXPECT_EQ(secondSmallestSum(ptr_array,4),2);
    delete []ptr_array;
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}