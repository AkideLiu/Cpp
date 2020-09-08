#include <iostream>

using namespace std;

class Market
{
public:

	Market() ;                      // no name or age is required to create a market
	void setName(string marName);   // change the market's name
	string getName();
	void setAge(int merAge);        // change the market's age
	int getAge();

private:
	int age;
	string name;
	
};