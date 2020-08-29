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
    Person() {

        cout << "无参构造" << endl;
    }

        Person(int age, int height){
            cout << "有参构造" << endl;

            this->m_age = age;
            this->m_height = new int(height);
        }

        Person(const Person &person){
            cout << "拷贝函数" << endl;
            m_age = person.m_age;
            m_height = new int(*person.m_height);

        }

    virtual ~Person() {
        cout << "析构函数" << endl;
        if (m_height != NULL) {
            delete m_height;
        }
    }

public:
    int m_age;
    int *m_height;

    friend ostream &operator<<(ostream &os, const Person &person) {
        os << "age: " << person.m_age << " height: " << *person.m_height;
        return os;
    }

    };

void test01(){
    Person p1(18, 180);
    Person p2(p1);

    cout << p1 << endl;
    cout << p2 << endl;

}

int main(){
    test01();
}