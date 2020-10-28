// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "hunter.h"

hunter::hunter(string n, int v) : animal(n, v) {

    this->animalID = hunter::nextID;

    hunter::nextID++;

}

int hunter::nextID = 1000;


int hunter::get_kills() {
    return kills;
}

void hunter::set_kills(int kills) {
    hunter::kills = kills;
}

string hunter::get_name() {
    return "Hunter: " + this->name;
}




hunter::~hunter() = default;
