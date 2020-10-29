#ifndef CPP_Document_H
#define CPP_Document_H

#include <iostream>

using namespace std;

class Document{
public:
    Document();
    Document(string t, string d, int n);   // creates a Document title t, type of document d, and number of pages n
    
    void set_numPages(int n); 
    int get_numPages();

    void set_documentType(string doc);
    string get_documentType();

    void set_title(string title);
    string get_title();

    virtual int typesetMargins() = 0; // sets the margins based on the pages

protected:

    string title;                   // the title of a Document
    string documentType;            // the type of Document
    int numPages;                   // the number of pages; takes only non-negative values

};



#endif //CPP_Document_H