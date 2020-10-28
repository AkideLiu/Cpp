// Author : Akide Liu 
// Date : 27/10/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include <iostream>

using namespace std;

class animal{
public:
    animal();
    ~animal();
    animal(string n, int v) ;

    // creates an animal with name n and body volume v.
    // animals are allocated a unique ID on creation
    virtual string get_name()=0;
    void set_volume(int vol);
    void set_name(string na);
    int get_volume();
    int get_animalID();

protected:
    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body


};



#endif //CPP_ANIMAL_H
