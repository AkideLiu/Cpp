#include "Book.h"
#include "Library.h"

        int Library::getBookIndexById(int id){
            int book_index = -1;
            for (int i = 0; i < library_book_list.size(); ++i){
                if (library_book_list[i].getId() == id){
                    book_index = i;
                }
            }
            return book_index;
        }

        bool Library::borrow(Book book){
            int book_index = -1;
            for (int i = 0; i < library_book_list.size(); ++i){
                if (library_book_list[i].getId() == book.getId()){
                    book_index = i;
                }
            }
            
            if (book_index == -1){
                cout << "book not found by id , which id is : " << book.getId() << endl;
                return false;
            }


            if (library_book_inStock[book_index] > 0)
            {
                library_book_inStock[book_index] -= 1;
                cout << book.getName() << " " << book.getId() << endl; 
                return true;
            }else{
                cout << "book is not inStock :" << library_book_inStock[book_index] << endl;
                return false;
            }
            
        };
        void Library::returnBook(Book book){
            int book_index = -1;
            for (int i = 0; i < library_book_list.size(); ++i){
                if (library_book_list[i].getId() == book.getId()){
                    book_index = i;
                }
            }

            if (book_index == -1){
                cout << "book not found by id , which id is : " << book.getId() << endl;
            }

            library_book_inStock[book_index] += 1;
            
            cout << "book returned seccuess : " << library_book_inStock[book_index] << endl;
            
        };

        bool Library::borrowById(int id){
            int book_index = getBookIndexById(id);
            if (book_index == -1){
                cout << "book not found by id , which id is : " << id << endl;
                return false;
            }

        if (library_book_inStock[book_index] > 0)
            {
                library_book_inStock[book_index] -= 1;
                cout << library_book_list[book_index].getName() << " " << library_book_list[book_index].getId() << endl; 
                return true;
            }else{
                cout << "book is not inStock :" << library_book_inStock[book_index] << endl;
                return false;
            }
        }
        

        void Library::returnBookById(int id){
            int book_index = getBookIndexById(id);
            if (book_index == -1){
                cout << "book not found by id , which id is : " << id << endl;
            }else
            {
            library_book_inStock[book_index] += 1;
            
            cout << "book returned seccuess : " << library_book_inStock[book_index] << endl;
            }
            

            
        }
        Library::Library(Book book){
            library_book_list.push_back(book);
            library_book_inStock.push_back(1);
        };