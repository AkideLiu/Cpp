// Author : Akide Liu 
// Date : 10/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_CONDO_H
#define CPP_CONDO_H
#include <iostream>

using namespace std;
#include <vector>
#include "Unit.h"

class Condo {
public:

    Condo();  // default constructor allocates capacity for 10 units
    Condo(int capacity);  // constructor for condo with given num units
    int get_capacity();  // returns the  number of units allowed

// returns the current number of units in the condo
    int get_current_number_of_units();

// returns a dynamic array of the units in the condo
    Unit * get_contents();

// returns true and adds unit to the condo if there is sufficient space
// otherwise returns false
    bool add_unit(Unit unit);

// destructor
    ~Condo();

private:
    int capacity;
    vector<Unit> unitArray;
};


#endif //CPP_CONDO_H
