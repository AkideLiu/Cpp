// Author : Akide Liu
// Date : 30/8/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "cart.h"

cart::cart() {

}

bool cart::addMeerkat(meerkat cat) {

    if (meerkat_array.size() >= 4){
        return false;
    }

    meerkat_array.push_back(cat);

    return true;
}

void cart::emptyCart() {
    meerkat_array.clear();
}

void cart::printMeerkats() {
    for (int i = 0; i < meerkat_array.size(); ++i) {
        cout << meerkat_array[i].getName() << " " << meerkat_array[i].getAge() << endl;
    }

}

