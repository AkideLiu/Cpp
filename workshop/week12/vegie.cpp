// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "vegie.h"

vegie::vegie(string n, int v) : animal(n, v) {
    this->animalID = vegie::nextID;
    vegie::nextID++;
}

int vegie::nextID = 100;

string vegie::get_favourite_food() {
    return favourite_food;
}

void vegie::set_favourite_food(string favouriteFood) {
    favourite_food = favouriteFood;
}

 string vegie::get_name()  {
    return "Safe: " + this->name;
}
