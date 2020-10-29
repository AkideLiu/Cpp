#include "Contract.h"

int Contract::amountDoc = 0;


    Contract::Contract(){};
    Contract::Contract(int n):Document("","Contract",n){

    	set_numPages(n);
    	this->docID = Contract::amountDoc;
    	Contract::amountDoc ++;


    };     // sets number of pages
                        // calls the constructor of the document class with title=="", 
                        //documentType=="Contract" and numPage=n

    int Contract::get_docID(){
    	return docID;
    };
    void Contract::set_docID(int di){
    	this->docID = di;
    };

    int Contract::get_amountDoc(){
    	return Contract::amountDoc;
    };
    void Contract::set_amountDoc(int am){
    	Contract::amountDoc = am;
    };

int Contract::typesetMargins(){
	if (this->numPages == 1 ){
		return Contract::amountDoc;
	};

	if (this->numPages > 1 ){
		return (int)(this->numPages / 2);
	};
};