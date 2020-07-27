// Author : Akide Liu
// Date : 22/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
//

#include <string>
#include <iostream>

using namespace std;

class Person {
private:
    string m_name;
    int m_age;
    string m_lover;

public:
    const string &getMName() const {
        return m_name;
    }

    void setMName(const string &mName) {
        m_name = mName;
    }

    int getMAge() const {
        return m_age;
    }

    void setMAge(int mAge) {
        m_age = mAge;
    }

    const string &getMLover() const {
        return m_lover;
    }

    void setMLover(const string &mLover) {
        m_lover = mLover;
    }

    friend ostream &operator<<(ostream &os, const Person &person) {
        os << "m_name: " << person.m_name << " m_age: " << person.m_age << " m_lover: " << person.m_lover;
        return os;
    }
};

int main(){
    Person p1;
    p1.setMName("Mike");
    cout << p1 << endl;

    Person p2;
    p2.setMAge(50);
    cout << p2 << endl;

}

