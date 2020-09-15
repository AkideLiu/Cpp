// Author : Akide Liu 
// Date : 15/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_HUNTER_H
#define CPP_HUNTER_H

#include <vector>

#include "Animal.h"

class Hunter : public Animal {
public:

    Hunter(string aSpecies);         // create a hunter of the given species
    void record_kill(string kill);   // add a new kill to the end of the hunter's list of kills
    int numberOfKills();             // how many kills have been recorded

// implement ONE of the following
    vector<string> get_kills();      // return a vector of all kills by this hunter

private:
    vector<string> kills;

};


#endif //CPP_HUNTER_H
