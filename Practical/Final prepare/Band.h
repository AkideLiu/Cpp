// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_BAND_H
#define CPP_BAND_H

#include<iostream>

using namespace std;

class Band {

public:
    Band();

    Band(int members, int foundingYear);

    Band(int members);

    int get_members();

    virtual string get_age();



private:
    int members;

    int founding_year;

};


#endif //CPP_BAND_H
