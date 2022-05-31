#include <iostream>
#include "animal.h"
using std::string; using std::cout;
#ifndef HUNTER_H
#define HUNTER_H

class hunter: public animal {
    public:
        
        hunter(string n, int v);  // create a hunter with name n and body volume v
        int get_kills();
        void set_kills(int k);
        string get_name();
    private:
        int kills ; // how many kills have been recorded, initialised to 0
        static int nextID ;
};

#endif