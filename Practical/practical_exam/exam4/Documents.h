#ifndef CPP_Documents_H
#define CPP_Documents_H

#include <iostream>
#include <algorithm>
#include <vector>
#include "Document.h"
#include "Contract.h"


using namespace std;

class Documents{
public:
   static void sort(Contract **document, int n);      // sorts the array of n Contract in ascending 
                                              // order base on their docID
};



#endif //CPP_Document_H