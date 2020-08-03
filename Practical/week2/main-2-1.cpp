// Author : Akide Liu
// Date : 30/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

extern void print_as_binary(std::string decimal_number);

using namespace std;

int main(){
    print_as_binary("123");
    print_as_binary("6");
}