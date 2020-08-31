// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>


#include "../week6/meerkat.h"
#include "../week6/person.h"
#include "../week6/cart.h"
#include "../week6/aircraft.h"


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

using namespace std;
TEST(prac6,q1_1) /* NOLINT */ {
    vector<meerkat> obj_array(4);
    vector<string> name_array;
    vector<int> age_array;

    srand(time(nullptr));

    for (int i = 0; i < 4; ++i) {

        name_array.push_back(random_string());
        age_array.push_back(rand() % 80 + 10);

        obj_array[i].setName(name_array[i]);
        obj_array[i].setAge(age_array[i]);

    }

    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(obj_array[i].getName(), name_array[i]);
        EXPECT_EQ(obj_array[i].getAge(),age_array[i]);
    }

}

TEST(prac6,q1_2) /* NOLINT */ {
    vector<person> obj_array;
    vector<string> name_array;
    vector<int> salary_array;

    srand(time(nullptr));

    for (int i = 0; i < 4; ++i) {
        name_array.push_back(random_string());
        salary_array.push_back(rand() % 9000 + 1000);

        if (i % 2 == 0) {
            obj_array.emplace_back(name_array[i],salary_array[i]);
        } else {
            obj_array.emplace_back();
            obj_array[i].setName(name_array[i]);
            obj_array[i].setSalary(salary_array[i]);
        }
    }

    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(obj_array[i].getName(), name_array[i]);
        EXPECT_EQ(obj_array[i].getSalary(),salary_array[i]);
    }
}

TEST(prac6,q2_1) /* NOLINT */{
    vector<meerkat> meerkat_array(5);
    vector<string> name_array;
    vector<int> age_array;
    cart cart_obj;

    srand(time(nullptr));

    for (int i = 0; i < meerkat_array.size(); ++i) {

        name_array.push_back(random_string());
        age_array.push_back(rand() % 80 + 10);

        meerkat_array[i].setName(name_array[i]);
        meerkat_array[i].setAge(age_array[i]);

    }

    for (auto & i : meerkat_array) {
        cart_obj.addMeerkat(i);
    }

    testing::internal::CaptureStdout();
    cart_obj.printMeerkats();
    string output = testing::internal::GetCapturedStdout();


    // use stringstream to split enter (computer key)
    // https://www.shuzhiduo.com/A/6pdDOj0y5w/
    vector<string> arr;
    stringstream ss(output);
    string final_output;
    while (std::getline(ss, final_output, '\n')){
        arr.push_back(final_output);
    }

    for (int i = 0; i < arr.size(); ++i) {
        string test_str = name_array[i] + " " + to_string(age_array[i]);
        EXPECT_EQ(arr[i], test_str);
    }

    cart_obj.emptyCart();
    testing::internal::CaptureStdout();
    cart_obj.printMeerkats();
    string output1 = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output1,"");

}

TEST(prac6,q2_2)/* NOLINT */{
    vector<person> person_array;
    vector<string> name_array;
    vector<int> salary_array;

    srand(time(nullptr));

    for (int i = 0; i < 3; ++i) {
        name_array.push_back(random_string());
        salary_array.push_back(rand() % 9000 + 1000);

        if (i % 2 == 0) {
            person_array.emplace_back(name_array[i], salary_array[i]);
        } else {
            person_array.emplace_back();
            person_array[i].setName(name_array[i]);
            person_array[i].setSalary(salary_array[i]);
        }
    }

    string callsign = "aircraft1";

    aircraft aircraft1(callsign, person_array[0], person_array[1]);

    EXPECT_EQ(aircraft1.getPilot().getName(),person_array[0].getName());
    EXPECT_EQ(aircraft1.getCoPilot().getName(),person_array[1].getName());

    aircraft1.setPilot(person_array[2]);
    aircraft1.setCoPilot(person_array[0]);

    testing::internal::CaptureStdout();
    aircraft1.printDetails();
    string output = testing::internal::GetCapturedStdout();


    // use stringstream to split enter (computer key)
    // https://www.shuzhiduo.com/A/6pdDOj0y5w/
    vector<string> arr;
    stringstream ss(output);
    string final_output;
    while (std::getline(ss, final_output, '\n')){
        arr.push_back(final_output);
    }

    EXPECT_EQ(arr[0],callsign);
    EXPECT_EQ(arr[1],person_array[2].getName());
    EXPECT_EQ(arr[2],person_array[0].getName());


}

int main(int argc, char **argv) {

    // rand seed : https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
    // Use current time as seed for random generator
    srand(time(nullptr));
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

