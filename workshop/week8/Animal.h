// Author : Akide Liu 
// Date : 15/9/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include <iostream>

using namespace std;
class Animal {
public:
    Animal(string aSpecies) ;       // animals are allocated a unique ID on creation,
    // the first animal has ID 1, the second animal is 2 and so on

    void set_name(string aName);     // change the animal's name

    string get_species();
    string get_name();
    int get_ID();                    // the animal's unique ID

    static int currentID ;  // the next id number to give out

private:
    string name;
    string species;
    int id;



};


#endif //CPP_ANIMAL_H
