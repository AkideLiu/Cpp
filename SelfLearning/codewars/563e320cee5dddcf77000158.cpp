// Author : Akide Liu 
// Date : 2/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//https://www.codewars.com/kata/563e320cee5dddcf77000158/train/cpp

#include <vector>
#include <cstdlib>
#include <ctime>

int get_average(std::vector <int> marks)
{
    int sum = 0;
    for (int i = 0; i < marks.size(); ++i) {
        sum += marks[i];
    }
    return (int)(sum / marks.size());
}

