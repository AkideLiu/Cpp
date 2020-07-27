// Author : Akide Liu 
// Date : 22/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;
const double PI = 3.14;

class Circle{
public:
    int m_r;
    double calculateZC(){
        return 2 * PI * m_r;
    }

};

int main(){
    Circle c1;
    c1.m_r = 10;
    cout << "perimeter：" << c1.calculateZC() << endl;
    return 0;
}