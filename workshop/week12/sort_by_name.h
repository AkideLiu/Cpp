// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_SORT_BY_NAME_H
#define CPP_SORT_BY_NAME_H


#include "animal.h"

class sort_by_name {

    public:

    sort_by_name();

    static void sort(animal **animals, int n);

    virtual ~sort_by_name();
    // sorts the array of n animals into ascending order using their names


};


#endif //CPP_SORT_BY_NAME_H
