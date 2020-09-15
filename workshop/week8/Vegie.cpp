// Author : Akide Liu 
// Date : 15/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Vegie.h"

Vegie::Vegie(string aSpecies) : Animal(aSpecies) {

}

void Vegie::set_favourite_food(string aVegie) {
    this->food = aVegie;
}

string Vegie::getFavouriteFood() {
    return this->food;
}
