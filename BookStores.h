#include <iostream>
#include "Dymocks.h"
#include <random>
using namespace std;

#ifndef BOOKSTORES_H
#define BOOKSTORES_H

class BookStores {
    public:
        static void sort(Dymocks **store, int n);      // sorts the array of n Dymocks in ascending 
                                              // order base on their storeID
};

#endif