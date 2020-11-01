// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Rocket.h"

Rocket::Rocket() {}

const vector<int> &Rocket::getFlowMeters() const {
    return flowMeters;
}

void Rocket::setFlowMeters(const vector<int> &flowMeters) {
    Rocket::flowMeters = flowMeters;
}

const string &Rocket::getName() const {
    return name;
}

void Rocket::setName(const string &name) {
    Rocket::name = name;
}

string Rocket::report(vector<int> flowMeters, string time_stamp) {
    return std::string();
}
