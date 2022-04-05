#include <iostream>
#include "books.h"

Books::Books(){  // default constructor
    int id = 0;
    std::string name = "";
    std::string author = "";
    int numberofbook;
};

Books::Books(int _id, std::string _name, std::string _author, int _numberofbook){  // complex constructor
    id = _id;
    name = _name;
    author = _author;
    numberofbook = _numberofbook;
};

std::string Books::getAuthor(){
    return author;
};

std::string Books::getName(){
    return name;
};

int Books::getId(){
    return id;
};

int Books::getCopies(){
    return numberofbook;
}

void Books::setAuthor(std::string _author){
    author = _author;
};

void Books::setCopies(int _numberofbook){
    numberofbook = _numberofbook;
};

void Books::setId(int _id){
    id = _id;
};

void Books::setName(std::string _name){
    name = _name;
};