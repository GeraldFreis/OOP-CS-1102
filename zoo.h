#include <iostream>
#include "animal.h"
#include "vegie.h"
#include "hunter.h"
using std::string; using std::cout;
#ifndef ZOO_H
#define ZOO_H

class zoo {
    public:
         zoo(string n,int cows,int lions);      // create a zoo with the given number of cows and lions
    
    private:
        string name ;                          // the zoo's name
        int number_of_animals ;                // the number of animals in the zoo
        animal **animals ;                      // the zoo's animals
};

#endif