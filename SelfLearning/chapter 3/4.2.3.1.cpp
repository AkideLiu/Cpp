// Author : Akide Liu 
// Date : 23/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
#include <string>

using namespace std;
class Person {
public:
    Person(){
        cout << "无参构造" << endl;
    };

    int mAge;

    Person(int mAge) : mAge(mAge) {
        cout << "有参构造" << endl;
    }

    Person(const Person &person){
        cout << "拷贝构造函数" << endl;
    }

    virtual ~Person() {
        cout << "析构函数" << endl;
    }
};

void test01(){

    Person man(100);
    Person newman(man);
    Person newman2 = man;

}

void doWork(Person p1) {

}

void test02(){
    Person person;
    doWork(person);
}

Person doWork2(){
    Person person;
    cout << (int *) &person << endl;
    return person;
};

void test03(){
    Person p = doWork2();
    cout << (int *) &p << endl;
}

int main(){
    test01();
    test02();
    test03();
}