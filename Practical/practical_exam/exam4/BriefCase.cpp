#include "BriefCase.h"
#include <iostream>
#include <vector>
#include "Contract.h"
#include "PDF.h"

BriefCase::BriefCase(){
	this->docs.reserve(5);
	docs.push_back(new PDF(5));
	docs.push_back(new Contract(10));
	docs.push_back(new Contract(3));
	docs.push_back(new Contract(11));
	docs.push_back(new PDF(6));

};                          
/* creates a  briefcase containing pointers to  5 Document objects as an array; 
   the first and the last elements of the array are pointers to PDF objects, 
   the rest of the elements are Contracts
*/

Document ** BriefCase::get_documents(){
	return &docs[0];
};  