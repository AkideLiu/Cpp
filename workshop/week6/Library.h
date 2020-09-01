#include <iostream>
#include <vector>
using namespace std;

#include "Book.h"

class Library
{
private:
    vector<Book> library_book_list;
    vector<int> library_book_inStock;
public:
    Library(/* args */) {};
    Library(Book book);
    bool borrow(Book book);
    void returnBook(Book book);
    bool borrowById(int id);
    void returnBookById(int id);
    int getBookIndexById(int id);
    ~Library() {}
};