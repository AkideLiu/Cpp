// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_MEERKAT_H
#define CPP_MEERKAT_H

#include <iostream>

using namespace std;

class meerkat {
public:

    meerkat();                      // no name or age is required to create a meerkat

    meerkat(meerkat *pMeerkat);

    void setName(string meerName);   // change the meerkat's name

    string getName();

    void setAge(int meerAge);        // change the meerkat's age

    int getAge();

private:
    string name;
    int age;
};

#endif //CPP_MEERKAT_H



