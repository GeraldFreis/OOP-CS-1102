#include <iostream>
#include "animal.h"

using std::string; using std::cout;

#ifndef SORT_BY_ANIMALI_H
#define SORT_BY_ANIMALI_H

class sort_by_name {
    public:
        static void sort(animal **animals,int n);	// sorts the array of n animals into ascending order using their animalIDs
};

#endif