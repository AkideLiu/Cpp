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
    int score;
};

struct teacher {
    string name;
    student studentArray[5];
};

void allocateSpace(teacher tArray[], int length){
    string sName = "student";
    string tName = "teacher";
    string nameSeed = "ABCDEF";
    for (int i = 0; i < length; ++i) {
        tArray[i].name = tName + nameSeed[i];
        for (int j = 0; j < 5; ++j) {
            tArray[i].studentArray[j].name = sName + nameSeed[i];
            tArray[i].studentArray[j].score = rand() % 61 + 40;
        }
    }
};

void printTeachers(teacher tArray[], int length){
    for (int i = 0; i < length; ++i) {
        cout << " teacher's name: " << tArray[i].name << endl;
        for (int j = 0; j < 5; ++j) {
            cout << " student's name: " << tArray[i].studentArray[j].name
            << " student's score: " << tArray[i].studentArray[j].score << endl;
        }
    }
}

int main() {

    srand(time(nullptr));

    teacher tArray[3];

    int len = sizeof(tArray) / sizeof(teacher);

    allocateSpace(tArray, len);

    printTeachers(tArray, len);

}

