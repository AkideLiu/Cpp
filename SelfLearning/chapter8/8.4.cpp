// Author : Akide Liu 
// Date : 22/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

int main() {
    struct student stu = { "Student", 19, 99};

    struct student * p = &stu;

    p->score = 80;

    cout << "name: " << p->name << "age: " << p->age << " score: " << p->score << endl;

}

