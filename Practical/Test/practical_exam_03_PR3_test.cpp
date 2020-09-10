// Author : Akide Liu 
// Date : 9/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>


#include "../practical_exam/exam3-PR3/Store.h"
#include "../practical_exam/exam3-PR3/Stock_item.h"

using namespace std;

string random_string()
{
    std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

    std::random_device rd;
    std::mt19937 generator(rd());

    std::shuffle(str.begin(), str.end(), generator);

    return str.substr(0, 5);    // assumes 32 < number of characters in str
}

TEST(practical_exam_03_pr3,part1){
    vector<string> description_array;
    vector<int> code_number_array;
    vector<Stock_item> stockList;

    for (int i = 0; i < 5; ++i) {
        description_array.push_back(random_string());
        code_number_array.push_back(i + 1);
        stockList.emplace_back(description_array[i], code_number_array[i]);
        EXPECT_EQ(stockList[i].get_description(),description_array[i]);
        EXPECT_EQ(stockList[i].get_item_number(),code_number_array[i]);
    }
}

TEST(practical_exam_03_pr3,part2){
    vector<string> description_array;
    vector<int> code_number_array;
    vector<Stock_item> stockList;

    for (int i = 0; i < 5; ++i) {
        description_array.push_back(random_string());
        code_number_array.push_back(i + 1);
        stockList.emplace_back(description_array[i], code_number_array[i]);
    }

    Store store(4);

    for (int i = 0; i < 5; ++i) {
        if (i == 4) {
            EXPECT_FALSE(store.add_stock(stockList[i]));
        }else{
            EXPECT_TRUE( store.add_stock(stockList[i]));
        }
    }

    EXPECT_EQ(store.get_total_stock_count(),4);
    EXPECT_EQ(store.get_stock_quantity(4),1);
    Stock_item * newStock = store.get_current_stock_list();

    for (int i = 0; i < 5; ++i) {
        cout << newStock[i] << endl;
    }

    EXPECT_EQ(newStock[0].get_description(),description_array[0]);
    // delete [] newStock;
}


int main(int argc, char **argv) {

    // rand seed : https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
    // Use current time as seed for random generator
    srand(time(nullptr));
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
