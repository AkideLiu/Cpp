// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Metal.h"

Metal::Metal() {}

Metal::Metal( int darkness , int members , int foundingYear) : Band(members, foundingYear) {
    if (darkness <= 1000 && darkness >= 0) {
        this->darkness = darkness;
    }
}

string Metal::get_age() {

    string darkness_string;

    if (this->darkness > 800) {
        darkness_string = "profoundly dark!!!";
    } else if (this->darkness >= 200) {
        darkness_string = "extremely dark!!";
    } else if (this->darkness >= 100) {
        darkness_string = "very dark!";
    } else if (this->darkness >= 10) {
        darkness_string = "dark.";
    } else if (this->darkness >= 0) {
        darkness_string = "not very dark at all.";
    }

    string temp = "This " + Band::get_age() + " metal band is " + darkness_string;

    return temp;

}
