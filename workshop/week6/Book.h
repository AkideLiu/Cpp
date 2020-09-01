#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string name;
    int id;
    /* data */
public:
    Book();
    Book(string name,int id);
    string getName();
    int getId() const;
};

