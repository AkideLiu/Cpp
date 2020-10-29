#ifndef CPP_Contract_H
#define CPP_Contract_H

#include <iostream>
#include "Document.h"

using namespace std;

class Contract : public Document{
public:
    Contract();
    Contract(int n);     // sets number of pages
                        // calls the constructor of the document class with title=="", 
                        //documentType=="Contract" and numPage=n

    int get_docID();
    void set_docID(int di);

    int get_amountDoc();
    void set_amountDoc(int am);
    
    int typesetMargins();

protected:
    int docID;          // unique document id
    static int amountDoc;    
};



#endif //CPP_Contract_H