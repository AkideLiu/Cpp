// Author : Akide Liu 
// Date : 18/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
#include <string>

using namespace std;

float add_op(float left, float right){
    return left + right;
}

float subtract_op(float left, float right){
    return left - right;
}

float arithmetic_ops(float left, float right, std::string op){
    if(op == "+") return add_op(left, right);
    if(op == "-") return subtract_op(left, right);
    return 0;
}