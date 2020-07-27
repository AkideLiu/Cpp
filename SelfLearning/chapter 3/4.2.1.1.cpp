// Author : Akide Liu 
// Date : 22/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person() {
        cout << "constructor called ..." << endl;
    }

    virtual ~Person() {
        cout << "destructor called ..." << endl;
    }
};

void test01(){
    Person person;
}

int main(){
    test01();
    return 0;
}
