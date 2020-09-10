// Author : Akide Liu 
// Date : 10/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Condo.h"

Condo::Condo() {
    
}

Condo::Condo(int capacity) {
    this->capacity = capacity;
    // unitArray.reserve(capacity);
}

int Condo::get_capacity() {
    return this->capacity;
}

int Condo::get_current_number_of_units() {
    return (int)unitArray.size();
}

Unit *Condo::get_contents() {
    return &unitArray[0];
}

bool Condo::add_unit(Unit unit) {
    if (unitArray.size() == (size_t) this->capacity) {
        return false;
    }
    unitArray.push_back(unit);
    return true;
}

Condo::~Condo() {

}
