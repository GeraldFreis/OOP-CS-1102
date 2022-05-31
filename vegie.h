#include <iostream>
#include "animal.h"
using std::cout; using std::string;
#ifndef VEGIE_H
#define VEGIE_H

class vegie: public animal {
    public:
        vegie(string n,int v);      // create a vegie with name n and body volume v
        string get_name();
        string get_favourite_food();
        void set_favourite_food(string food);
    private:
        string favourite_food ;     // the vegie's favourite food, initialise to "grass"
        static int nextID;
};

#endif