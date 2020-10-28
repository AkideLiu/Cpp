// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <vector>
#include <algorithm>
#include "sort_by_name.h"
#include "animal.h"

bool compByName(animal * a1, animal * a2){
    return a1->get_name() < a2->get_name();
}

void sort_by_name::sort(animal **animals, int n) {
        vector<animal *> tmp;

        tmp.reserve(n);

        for (int i = 0; i < n; ++i) {
            tmp.push_back(animals[i]);
        }


        std::sort(tmp.begin(), tmp.end(),
                  compByName);

        for (int i = 0; i < tmp.size(); ++i) {
            animals[i] = tmp[i];
        }

}


sort_by_name::~sort_by_name() {

}
