
#include "Library.h"

using namespace std;

int main(){

    Library lib;
    for (int i = 0; i < 5; ++i) {
        lib.addBook(Book("Book"+to_string(i),i));
    }

    lib.borrowById(4);
    lib.displayBooks(4);

    lib.borrowById(4);
    lib.displayBooks(4);

    lib.returnBookById(4);
    lib.displayBooks();

    lib.searchBooks(2);
    lib.searchBooks("Book");
    lib.searchBooks(7);
    

}