// Author : Akide Liu 
// Date : 17/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <gtest/gtest.h>
#include <cstdlib>
#include <random>

using namespace std;

// 1-1
extern void copy_2d_strings(string first[][2], string second[][2], int n);

// 1-3
extern void cpyia(int old_array[],int new_array[],int length);

// 1-4
extern void cpyda(double *old_array, double *new_array, int length);

// 2-1
extern void print_sevens(int *nums, int length);

// 2-2
extern int maximum_sum(int *nums, int length);

// generate random string
// https://stackoverflow.com/a/47978023
// https://inversepalindrome.com/blog/how-to-create-a-random-string-in-cpp

string random_string()
{
    std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(str.begin(), str.end(), generator);

    return str.substr(0, 5);    // assumes 32 < number of characters in str
}

TEST(prac4,q1_1) {
    int n = 3;
    string first_array[3][2] = {};
    string second_array[3][2] = {};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            // first_array[i][j] = rand() % 10;
            first_array[i][j] = random_string();
        }
    }

    copy_2d_strings(first_array, second_array, n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            EXPECT_EQ(first_array[i][j],second_array[i][j]);
        }
    }
}

TEST(prac4,q1_3){
    int n = 10;
    int *old_array = new int[n];
    int *new_array = new int[n];

    for (int i = 0; i < n; ++i) {
        old_array[i] = rand() % 10;
    }

    cpyia(old_array,new_array,n);

    for (int i = 0; i < n; ++i) {
        EXPECT_EQ(old_array[i],new_array[i]);
        // cout << old_array[i] << " || "<< new_array[i] << endl;
    }
}

TEST(prac4,q1_4){
    int n = 10;
    auto *old_array = new double[n];
    auto *new_array = new double[n];

    for (int i = 0; i < n; ++i) {
        // generate random float number
        // https://stackoverflow.com/a/2704552
        old_array[i] = (double)rand() / RAND_MAX;
    }

    cpyda(old_array, new_array, n);
    for (int i = 0; i < n; ++i) {
        EXPECT_EQ(old_array[i],new_array[i]);
        // cout << old_array[i] << " || "<< new_array[i] << endl;
    }

}

TEST(prac4,q2_1){
    for (int i = 0; i < 5; ++i) {
        int n = rand() % 100;
        int *array = new int[n];
        for (int j = 0; j < n; ++j) {
            array[j] = j;
        }

        // call google test function to capture output
        // https://stackoverflow.com/a/33186201
        testing::internal::CaptureStdout();
        print_sevens(array, n);
        string output = testing::internal::GetCapturedStdout();


        // use stringstream to split enter (computer key)
        // https://www.shuzhiduo.com/A/6pdDOj0y5w/
        vector<string> arr;
        istringstream ss(output);
        string final_output;
        while (ss >> final_output) {
            arr.push_back(final_output);
        }

        for(size_t k=0; k<arr.size(); k++) {
            // cout << arr[k] << endl;
            EXPECT_TRUE(stoi(arr[k]) % 7 == 0);
        }

    }
}

TEST(prac4,q2_2_T1){

    // test for all negative numbers in array
    // result should be 0
    vector<int> array;
    array = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};

    //https://stackoverflow.com/a/2923290
    int result = maximum_sum(&array[0], array.size());
    EXPECT_EQ(result,0);

}

TEST(prac4,q2_2_T2){
    // test for given example
    vector<int> array;
    array = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};
    int result = maximum_sum(&array[0], array.size());
    EXPECT_EQ(result,187);

}

// check function found at : https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

TEST(prac4,q2_2_T3){

    //test for 5 unknown case and correct by check function.
    for (int i = 0; i < 5; ++i) {
        vector<int> array;
        int length = rand() % 10;
        for (int j = 0; j < length; ++j) {
            // random number in range of -100 to 100
            array.push_back(rand() % 200 - 100);
        }
        int result1 = maximum_sum(&array[0], array.size());

        int result2 = maxSubArraySum(&array[0], array.size());

        if (result2 < 0){result2 = 0;}

        EXPECT_EQ(result1, result2);
    }

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}