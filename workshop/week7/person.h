#include <iostream>
#include <string>

using namespace std;

class person
{
public:
	person();
	person(string aname ,int height);
	~person();

private:
	string aname;
	int height;
	
};