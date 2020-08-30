// Author : Akide Liu 
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_CART_H
#define CPP_CART_H

#include <iostream>
#include "meerkat.h"
#include <vector>

using namespace std;

class cart {
public:
    cart();                         // create an empty cart object
    bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
    // for each meerkat in the order they were added
private:
    vector<meerkat> meerkat_array;
};


#endif //CPP_CART_H
