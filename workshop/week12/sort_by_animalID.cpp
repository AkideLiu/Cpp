// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <algorithm>
#include <vector>
#include "sort_by_animalID.h"
#include "animal.h"

bool compByID(animal * a1, animal * a2){
    return a1->get_animalID() < a2->get_animalID();
}

void sort_by_animalID::sort(animal **animals, int n) {

    vector<animal *> tmp;

    tmp.reserve(n);

    for (int i = 0; i < n; ++i) {
        tmp.push_back(animals[i]);
    }


    //https://stackoverflow.com/a/26295515/14207562

    std::sort(tmp.begin(), tmp.end(),
              compByID);

    for (int i = 0; i < tmp.size(); ++i) {
        animals[i] = tmp[i];
    }

}
