// Author : Akide Liu 
// Date : 22/7/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

class Student {
public:
    void setName(string name){
        this->m_name = name;
    }

    void setID(int id){
        this->m_id = id;
    }

    void showStudent() const{
        cout << "name:" << m_name << "ID:" << m_id << endl;
    }

public:
    string m_name;
    int m_id;
};

int main(){
    Student student;
    student.setName("Mike ");
    student.setID(1234);

    student.showStudent();
    return 0;
}