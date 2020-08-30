// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include <iostream>
using namespace std;

class person {
public:
    person();
    person(string myName,int Salary); // a name and salary must be provided to create a person
    void setName(string myName);      // change the person's name
    string getName();
    void setSalary(int mySalary);     // change the person's salary
    int getSalary();
private:
    string name;
    int salary;
};


#endif //CPP_PERSON_H
