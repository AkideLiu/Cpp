// Author : Akide Liu 
// Date : 22/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <string>
#include <iostream>

using namespace std;
class Person {
public:
    string p_name;
protected:
    string p_Car;
private:
    int p_password;

public:
    void func(){
        this->p_name = "Mike";
        this->p_Car = "Audi";
        this->p_password = 1234;
    }
};

int main(){
    Person person;
    person.p_name = "Dannie ";
    // person.p_Car = "123";
}

