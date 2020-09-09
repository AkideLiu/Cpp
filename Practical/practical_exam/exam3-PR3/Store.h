// Author : Akide Liu 
// Date : 9/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_STORE_H
#define CPP_STORE_H

#include <iostream>
#include <vector>
#include "Stock_item.h"

using namespace std;

class Store {
public:
    Store();
    Store(int capacity);
    int get_total_stock_count();
    int get_stock_quantity(int item_number);
    Stock_item * get_current_stock_list();
    bool add_stock(Stock_item new_stock);
    virtual ~Store();

private:
    int capacity;
    vector<Stock_item> stockList;
};


#endif //CPP_STORE_H
