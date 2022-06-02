#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"
#include <iostream>

#ifndef STORECHAIN_H
#define STORECHAIN_H
class StoreChain {
   public:
      StoreChain()   ;                       
      /* creates a  store chain containing pointers to 5 BookStore objects as an array; 
         the first and the last elements of the array are pointers to BarnesNoble objects, 
         the rest of the elements are Dymocks
      */
     BookStore **get_bookStores();      // returns the array of pointers to the five BookStore objects
      ~StoreChain();
   private:
      BookStore **stores;
};

#endif