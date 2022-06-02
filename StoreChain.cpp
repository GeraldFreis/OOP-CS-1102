#include "StoreChain.h"
StoreChain::StoreChain(){                          
/* creates a  store chain containing pointers to 5 BookStore objects as an array; 
   the first and the last elements of the array are pointers to BarnesNoble objects, 
   the rest of the elements are Dymocks
*/
    stores = new BookStore*[5];
    stores[0] = new BarnesNoble("Springfield");
    stores[1] = new Dymocks(true);
    stores[2] = new Dymocks(false);
    stores[3] = new Dymocks(true);
    stores[4] = new BarnesNoble("Centerville");
}

BookStore **StoreChain::get_bookStores(){      // returns the array of pointers to the five BookStore objects
    stores[0]->set_numBook(1000);
    stores[1]->set_numBook(1000);
    stores[2]->set_numBook(1000);
    stores[3]->set_numBook(1000);
    stores[4]->set_numBook(1000);
    return stores;
}

StoreChain::~StoreChain(){
    delete [] stores;
}
