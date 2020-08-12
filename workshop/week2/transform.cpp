// Author : Akide Liu 
// Date : 4/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
#include <bitset>

using namespace std;

int main() {

    int formatted_dec = 74;
    string binary = bitset<10>(formatted_dec).to_string();
    cout << stoi(binary) << endl;
}

