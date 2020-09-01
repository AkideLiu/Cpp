#include "Book.h"

Book::Book(string name,int id){
    this->name = name;
    this->id = id;
}

string Book::getName(){
    return this->name;
}

int Book::getId(){
    return this->id;
}