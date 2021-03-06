// Author : Akide Liu 
// Date : 10/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Unit.h"

Unit::Unit() {

}

Unit::Unit(int bedrooms, double space, int price) {

    if (bedrooms < 0 || space < 0 || price < 0) {
        this->bedrooms = 0;
        this->space = 0;
        this->price = 0;
    }else{
        this->bedrooms = bedrooms;
        this->space = space;
        this->price = price;
    }


}

int Unit::get_bedrooms() {
    return this->bedrooms;
}

int Unit::get_value() {
    return this->price;
}

double Unit::get_area() {
    return this->space;
}
