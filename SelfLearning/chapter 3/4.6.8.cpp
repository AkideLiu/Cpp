// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

class Animal {
public:
    int m_age;
};

class Sheep : virtual public Animal {};
class Tuo : virtual public Animal {};
class sheepTuo : public Sheep,public Tuo {};

void test01() {
    sheepTuo st;
    st.Sheep::m_age = 100;
    st.Tuo::m_age = 200;

    cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
    cout << "st.Tuo::m_age = " << st.Tuo::m_age<< endl;
    cout << "st.m_age = " << st.m_age << endl;
}

int main() {
    test01();
}