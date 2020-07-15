// Author : Akide Liu 
// Date : 15/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <cstdio>

namespace Diy {
    class Student {

    public:
        char *name;
        int age;
        float score;
    public:
        void say() {
            printf("name is %s , age is %d, score is %f", name, age, score);
        }
    };
}

int main(){
    Diy::Student student{};
    student.name = "jack";
    student.age = 15;
    student.score = 92.5f;
    student.say();
}