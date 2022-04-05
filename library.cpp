#include <iostream>
#include "library.h"

// constructors

Library::Library(){ // default
    booktypes = 1;
    booknames[0] = std::string("Hitchhikers guide to the galaxy");
    for(int i  = 0; i < booktypes; i++){
        book[i].setName(booknames[i]);
        book[i].setCopies(2);
    }
}

Library::Library(int _booktypes, std::string _booknames[]){
    booktypes = _booktypes;
    booknames = _booknames;

    for(int i  = 0; i < booktypes; i++){
        book[i].setName(booknames[i]);
        book[i].setCopies(2);
    }

};


// member functions
void Library::returnbook(std::string _bookname){
    for(int i = 0; i < booktypes; i++){
        if(book[i].getName() == _bookname){
            int increased_book_amount  = book[i].getCopies() + 1;
            book[i].setCopies(increased_book_amount);
            cout << "There are: "<<book[i].getCopies() << "of " << _bookname << "\n";
        }
    }
};

void Library::borrowbook(std::string _bookname){
    for(int i = 0; i < booktypes; i++){
        if(book[i].getName() == _bookname){
            int decreased_book_amount  = book[i].getCopies() - 1;
            if(decreased_book_amount < 0)
                cout << "There are no more copies" << "\n";
            book[i].setCopies(decreased_book_amount);
        }
    }
};