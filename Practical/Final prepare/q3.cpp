// Author : Akide Liu 
// Date : 1/11/20
// License and copyright notice: GNU General Public License v3.0 
// https://www.gnu.org/licenses/gpl-3.0.en.html
// Description : 

//

#include <string>
#include <iostream>

using namespace std;

// class definition for Quadraped
class Quadruped{
protected:
    int height; // height of the quadruped in hands
public:
    Quadruped(int height); // constructor
    int get_height();  // get the height
};

Quadruped::Quadruped(int hands){   // implementation of constructor
    height=hands;
}

int Quadruped::get_height(){  // implementation of get_height
    return height;
}

// ------------------------------------------------------------


// abstract class for Equines
class Equine:public Quadruped{
public:
    Equine(int hands); // constructor
    virtual void ride() =0;  // not implemented here
};

// constructor
Equine::Equine(int hands):Quadruped(hands){
    return; // nothing more to do
}

// ------------------------------------------------------------


class Horse:public Equine{
public:
    Horse(int hands); // constructor
    virtual void ride();  // will define
};

Horse::Horse(int hands):Equine(hands){
    return; // nothing more to do
}

void Horse::ride(){
    cout << "You ride off into the sunset" << endl;
}


// ------------------------------------------------------------

class Zebra:public Equine{
private:
    int stripes;
public:
    Zebra(int hands); // constructor
    virtual void ride();  // will define
    void setStripes(int strs);
    int getStripes();
};

Zebra::Zebra(int hands):Equine(hands){
    stripes=0;
    return;
}


void Zebra::ride(){
    cout << "The Zebra bites you and does not let go." << endl;
}

void Zebra::setStripes(int strs) {
    stripes=strs;
}

int Zebra::getStripes() {
    return(stripes);
}

// ------------------------------------------------------------

int main(){
    //collection of assets
    int num=4;
    Quadruped* my_things[num];

    // complete the code below

    // (1) add two horses and two zebras to my_things, all of different heights.

    for (int i = 0; i < num; i++) {
        if (i < 2) {
            my_things[i] = new Horse(100 + i * 10);
        } else {
            my_things[i] = new Zebra(100 + i * 10);
        }
    }

    // (2) call ride on each of the items in my_things

    Equine * temp[num] ;

    for (int i = 0; i < num; ++i) {

        temp[i] = static_cast<Equine *>(my_things[i]);

        temp[i]->ride();

    }



    // (3) add code to set the number of stripes on any zebras to 13.

    for (int i = 0; i < num; ++i) {

        if (Zebra * temp_zebra = dynamic_cast<Zebra*>(temp[i])) {

            temp_zebra->setStripes(13);

            cout << temp_zebra->getStripes() << endl;

        }
    }


    // clean up

    for (int i = 0; i < num ; ++i) {
        delete temp[i];
    }


}