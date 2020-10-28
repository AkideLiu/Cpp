// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_HUNTER_H
#define CPP_HUNTER_H

#include "animal.h"

class hunter : public animal {

public:


    hunter(string n, int v);  // create a hunter with name n and body volume v

    int get_kills();

    void set_kills(int kills);

    virtual ~hunter();

    string get_name() override;

private:

    int kills = 0;               // how many kills have been recorded, initialised to 0

    static int nextID ;



};


#endif //CPP_HUNTER_H
