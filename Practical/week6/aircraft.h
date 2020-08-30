// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_AIRCRAFT_H
#define CPP_AIRCRAFT_H


#include <vector>
#include "person.h"



class aircraft {
public:
// a pilot and copilot must be provided when creating an aircraft
    aircraft(string callsign,person thePilot,person theCoPilot);
    void setPilot(person thePilot);      // change the pilot
    person getPilot();
    void setCoPilot(person theCoPilot);  // change the co-pilot
    person getCoPilot();
    void printDetails();                 // print the callsign, a new line, the pilot name,
    // a new line, the co-pilot name and a final newline.
private:
    person pilot;
    person coPilot;
    string callsign;
};


#endif //CPP_AIRCRAFT_H
