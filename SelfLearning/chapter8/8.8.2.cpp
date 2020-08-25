// Author : Akide Liu 
// Date : 22/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//
#include <iostream>
using namespace std;

struct hero {
    friend ostream &operator<<(ostream &os, const hero &hero);

    string name;
    int age;
    string gander;
};

void bubbleSort(hero arr[], int length){
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - 1 - i; ++j) {
            if (arr[j].age > arr[j + 1].age) {
                hero tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    struct hero arr[5] = {
            {"刘备",23,"男"},
            {"关羽",22,"男"},
            {"张飞",20,"男"},
            {"赵云",21,"男"},
            {"貂蝉",19,"女"},
    };

    int length = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, length);

    for (int i = 0; i < length; ++i) {
        cout << arr[i] << endl;
    }
}

ostream &operator<<(ostream &os, const hero &hero) {
    os << "name: " << hero.name << " age: " << hero.age << " gander: " << hero.gander;
    return os;
}

