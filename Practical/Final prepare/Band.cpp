// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Band.h"

Band::Band() {}

Band::Band(int members, int foundingYear) : members(members), founding_year(foundingYear) {}

Band::Band(int members) {

    this->members = members;
    this->founding_year = 2020;

}

int Band::get_members() {
    return this->members;
}

string Band::get_age() {

    if ((2020 - this->founding_year) < 5){
        return "young";
    } else {
        return "old";
    }

}
