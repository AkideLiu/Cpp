#include "PDF.h"    
    PDF::PDF():Contract(){};       // inherit from base class default constructor
    PDF::PDF(int v):Contract(5){
        this->version = v;
    }; // sets the version of the pdf
               // calls the Contract constructor with numPage==5
    bool PDF::hasTOCVersion(){
        return this->version > 5;
    }; // checks if there is a Table of Contents feature
    int PDF::get_version(){
        return this->version;
    }; // returns version attribute

    