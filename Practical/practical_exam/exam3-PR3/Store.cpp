// Author : Akide Liu 
// Date : 9/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include "Store.h"

Store::Store() {}

Store::Store(int capacity) : capacity(capacity) {
    // stockList.reserve(capacity);
}

int Store::get_total_stock_count() {
    return (int)stockList.size();
}

int Store::get_stock_quantity(int item_number) {
    int count = 0;

    for (int i = 0; i < stockList.size(); ++i) {
        if (stockList[i].get_item_number() == item_number) {
            count++;
        }
    }
    return count;
}

Stock_item *Store::get_current_stock_list() {
    return &stockList[0];
}

bool Store::add_stock(Stock_item new_stock) {

    if (this->stockList.size() == capacity) {
        return false;
    }

    stockList.push_back(new_stock);


    return true;
}

Store::~Store() {

}
