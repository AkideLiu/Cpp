// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

class Person {
    public:

    Person(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {

    }

    friend ostream &operator<<(ostream &os, const Person &person) {
        os << "m_a: " << person.m_a << " m_b: " << person.m_b << " m_c: " << person.m_c;
        return os;
    }

private:
        int m_a;
        int m_b;
        int m_c;



};

int main() {
    Person person(1, 2, 3);
    cout << person << endl;
}