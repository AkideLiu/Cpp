// Author : Akide Liu 
// Date : 18/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

int maximum_sum(int *nums,int length) {
    int negative_count = 0;
    for (int i = 0; i < length; ++i) {
        if (nums[i] < 0) {
            negative_count++;
        }
    }
    if (negative_count == length){return 0;}

    int max = 0;

    for (int i = 0; i < length; ++i) {
        int sum = 0;
        for (int j = 0; j < length - i; ++j) {
            sum += nums[i + j];
            if (sum > max){
                max = sum;
            }
        }
    }

    return max;
}
