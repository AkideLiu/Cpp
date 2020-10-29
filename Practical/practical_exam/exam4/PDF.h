#ifndef CPP_PDF_H
#define CPP_PDF_H

#include <iostream>
#include "Contract.h"


using namespace std;

class PDF: public Contract{
public:
    PDF();       // inherit from base class default constructor
    PDF(int v); // sets the version of the pdf
               // calls the Contract constructor with numPage==5
    bool hasTOCVersion(); // checks if there is a Table of Contents feature
    int get_version(); // returns version attribute

    

private:
    int version;  // stores the pdf version attribute  


};



#endif //CPP_Contract_H