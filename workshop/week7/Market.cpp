#include <iostream>
#include "Market.h"
using namespace std;

Market::Market(){

}

void Market::setName(string name){
	this->name = name;
}

string Market::getName(){
	return this->name;
}

void Market::setAge(int merAge){
	this->age = merAge;
}

int Market::getAge(){
	return this->age;
}