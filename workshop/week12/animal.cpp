// Author : Akide Liu
// Date : 27/10/20
// License and copyright notice: GNU General Public License v3.0
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description :

//

#include "animal.h"

string animal::get_name() {
    return name;
}

void animal::set_name(string name) {
    animal::name = name;
}

int animal::get_volume() {
    return volume;
}

void animal::set_volume(int volume) {
    animal::volume = volume;
}

int animal::get_animalID() {
    return animalID;
}

animal::animal(string n, int v) {
    this->name = n;
    this->volume = v;
}

animal::animal() {}

animal::~animal() {

}
