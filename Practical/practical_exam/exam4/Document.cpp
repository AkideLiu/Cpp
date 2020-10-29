#include "Document.h"

Document::Document(){};

Document::Document(string t, string d, int n){
	this->title = t;
	this->documentType = d;
	this->numPages = n;
};

    void Document::set_numPages(int n){
    	this->numPages = n;
    }; 
    int Document::get_numPages(){
    	return this->numPages;
    };

    void Document::set_documentType(string doc){
    	this->documentType = doc;
    };
    string Document::get_documentType(){
    	return this->documentType;
    };

    void Document::set_title(string title){
    	this->title = title;
    };
    string Document::get_title(){
    	return this->title;
    };