// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <vector>
#include "zoo.h"
#include "vegie.h"
#include "hunter.h"
#include "animal.h"

 string zoo::get_name()  {
    return name;
}

int zoo::get_number_of_animals()  {
    return number_of_animals;
}

animal **zoo::get_animals() {
    return this->animals;
}

zoo::zoo(string n, int cows, int lions) {

    this->name = n;

    for (int i = 0; i < cows; ++i) {
        tmp.push_back(new vegie("Daisy", 100));
    }

    for (int i = 0; i < lions; ++i) {
        tmp.push_back(new hunter("Clarence", 50));
    }

    this->animals = &tmp[0];

    this->number_of_animals = cows + lions;

}

zoo::~zoo() {
    // delete animals;
}

