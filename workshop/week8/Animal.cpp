// Author : Akide Liu 
// Date : 15/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Animal.h"

Animal::Animal(string aSpecies) {
    this->species = aSpecies;
    Animal::currentID++;
    this->id = currentID;
}

void Animal::set_name(string aName) {
    this->name = aName;
}

string Animal::get_species() {
    return this->species;
}

string Animal::get_name() {
    return this->name;
}

int Animal::get_ID() {
    return Animal::currentID;
}

int Animal::currentID = 0 ;
