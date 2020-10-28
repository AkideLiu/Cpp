// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_VEGIE_H
#define CPP_VEGIE_H


#include "animal.h"

class vegie : public animal {

public:

    vegie(string n,int v);      // create a vegie with name n and body volume v

    string get_favourite_food() ;

    void set_favourite_food(string favouriteFood);

    string get_name() override  ;

private:

    string favourite_food = "grass" ;     // the vegie's favourite food, initialise to "grass"

    static int nextID;


};


#endif //CPP_VEGIE_H
