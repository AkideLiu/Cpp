#ifndef CPP_BriefCase_H
#define CPP_BriefCase_H

#include <iostream>
#include <vector>
#include "Contract.h"
#include "PDF.h"



using namespace std;

class BriefCase{
public:
BriefCase();                          
/* creates a  briefcase containing pointers to  5 Document objects as an array; 
   the first and the last elements of the array are pointers to PDF objects, 
   the rest of the elements are Contracts
*/

Document **get_documents();      // returns the array of pointers to the five Document objects

private:
	vector<Document*> docs;     



};



#endif //CPP_Contract_H