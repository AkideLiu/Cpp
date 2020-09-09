// Author : Akide Liu 
// Date : 9/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_STOCK_ITEM_H
#define CPP_STOCK_ITEM_H

#include <iostream>

using namespace std;

class Stock_item {
public:
    Stock_item();
    Stock_item(string description, int codeNumber);
    string get_description();
    int get_item_number();

    friend ostream &operator<<(ostream &os, const Stock_item &item);

    virtual ~Stock_item();

private:
    string description;
    int code_number;

};


#endif //CPP_STOCK_ITEM_H
