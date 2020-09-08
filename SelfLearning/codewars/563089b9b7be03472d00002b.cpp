// Author : Akide Liu 
// Date : 2/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//https://www.codewars.com/kata/563089b9b7be03472d00002b/train/cpp

#include <iostream>
#include <vector>

std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {

    std::vector<int> result;

    int count = 0;

    for (int integer : integers) {
        count = 0;
        for (int value : values) {
            if (integer != value) {
                count++;
            }
        }
        if (count == values.size()) {
            result.push_back(integer);
        }
    }
    return result;
}