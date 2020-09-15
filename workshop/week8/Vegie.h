// Author : Akide Liu 
// Date : 15/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_VEGIE_H
#define CPP_VEGIE_H


#include "Animal.h"

class Vegie : public Animal{
public:
    Vegie(string aSpecies);  // create a vegie of the given species, its favourite food is "Grass"
    void set_favourite_food(string aVegie); // change the vegie's favourite food
    string getFavouriteFood();

private:
    string food;
};


#endif //CPP_VEGIE_H
