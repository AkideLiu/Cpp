// Author : Akide Liu 
// Date : 9/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Stock_item.h"

Stock_item::Stock_item() {}

Stock_item::Stock_item(string description, int codeNumber) {
    this->description = description;
    this->code_number = codeNumber;
}

string Stock_item::get_description() {
    return this->description;
}

int Stock_item::get_item_number() {
    return this->code_number;
}

Stock_item::~Stock_item() {

}

ostream &operator<<(ostream &os, const Stock_item &item) {
    os << "description: " << item.description << " code_number: " << item.code_number;
    return os;
}
