// Author : Akide Liu 
// Date : 22/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>

using namespace std;
class Person{
public:
    int age;

    Person(int age) : age(age) {
        cout << "constructor with parameters called  ..." << endl;
    }
    // Person(int a){
    //
    //     this->age = a;
    //     cout << "constructor with parameters called  ..." << endl;
    //
    // }

    Person() {
        cout << "constructor without parameters called  ..." << endl;

    }

    Person(const Person &person){
        this->age = person.age;
        cout << "constructor with deep copy  " << endl;

    }

    virtual ~Person() {
        cout << "destructor called ";
    }




};

void test01(){
    Person P;
}
void test02(){
    Person p1(10);
    Person P2 = Person(10);
    Person p3 = Person(p1);

    Person p4 = 10;
    Person p5 = p4;
}

int main(){

    test01();
    test02();

    return 0;
}

