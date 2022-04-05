#include <iostream>
#include "books.h"
using namespace std;

class Library{
    private:
        int booktypes;
        std::string *booknames = new std::string[booktypes];
        Books *book = new Books[booktypes];
    
    public:
        Library();
        Library(int _booktypes, std::string _booknames[]);
        void returnbook(std::string _bookname);
        void borrowbook(std::string _bookname);

        ~Library(){delete [] book; delete [] booknames;};
};
