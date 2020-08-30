// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "aircraft.h"

aircraft::aircraft(string callsign, person thePilot, person theCoPilot) {
    this->callsign = callsign;
    this->pilot = thePilot;
    this->coPilot = theCoPilot;
}

void aircraft::setPilot(person thePilot) {
    this->pilot = thePilot;
}

person aircraft::getPilot() {
    return this->pilot;
}

void aircraft::setCoPilot(person theCoPilot) {
    this->coPilot = theCoPilot;
}

person aircraft::getCoPilot() {
    return this->coPilot;
}

void aircraft::printDetails() {
    cout << this->callsign << endl;
    cout << this->getPilot().getName() << endl;
    cout << this->getCoPilot().getName() << endl;
}

