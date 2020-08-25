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
} student3;

int main(){
    struct student stu1;
    stu1.name = "Student1";
    stu1.age = 18;
    stu1.score = 100;

    cout << "name: " << stu1.name
    << " age: " << stu1.age <<
    " score: " << stu1.score << endl;

    struct student stu2 = { "Student2" , 19 , 99};
    cout << "name: " << stu2.name
         << " age: " << stu2.age <<
         " score: " << stu2.score << endl;

    student3.name = "Student3";
    student3.age = 18;
    student3.score = 80;

    cout << "name: " << student3.name
         << " age: " << student3.age <<
         " score: " << student3.score << endl;



}

