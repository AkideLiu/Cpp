// Author : Akide Liu 
// Date : 31/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description :


//

#ifndef CPP_METAL_H
#define CPP_METAL_H


#include "Band.h"
#include <iostream>

using namespace std;

class Metal : public Band {
public:
    Metal();

    Metal(int darkness , int members , int foundingYear);

    string get_age() override;

private:
    int darkness; // max 1000, min 0
};


#endif //CPP_METAL_H
