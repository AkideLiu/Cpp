// Author : Akide Liu 
// Date : 10/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_UNIT_H
#define CPP_UNIT_H
#include <iostream>
using namespace std;

class Unit {
public:

    Unit();          // a default constructor
    Unit(int bedrooms, double space , int price); // a constructor that takes: the number of bedrooms,
    //number of square meters, and value in dollars as parameters

    int get_bedrooms();  // returns the number of bedrooms for the unit
    int get_value();    // returns the value in dollars of the Unit
    double get_area();    // returns the number of square meters in the unit

private:
    int bedrooms;
    double space;
    int price;
};


#endif //CPP_UNIT_H
