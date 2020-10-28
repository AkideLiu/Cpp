// Author : Akide Liu 
// Date : 28/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_ZOO_H
#define CPP_ZOO_H

#include <iostream>
#include "animal.h"


using namespace std;

class zoo {
public:

    zoo(string n,int cows,int lions);// create a zoo with the given number of cows and lions

    string get_name() ;

    int get_number_of_animals() ;

    animal **get_animals();

    ~zoo();


private:

    string name ;                          // the zoo's name
    int number_of_animals ;                // the number of animals in the zoo
    animal **animals ;                      // the zoo's animals
};


#endif //CPP_ZOO_H
