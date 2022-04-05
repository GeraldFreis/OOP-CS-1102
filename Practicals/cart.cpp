#include <iostream>
#include "cart.h"


cart::cart(){  // create an empty cart object
            meerkat *meerkats = new meerkat[4];
};         

bool cart::addMeerkat(meerkat cat){ // adds a meerkat to the cart, returns false if full
    for(int i = 0; i < 4; i++){
        if(meerkats[i].getName()==""){
            meerkats[i].setName(cat.getName());
            meerkats[i].setAge(cat.getAge());
            return true;
        }
    }
    return false;
}   // adds a meerkat to the cart, returns false if full
void cart::emptyCart(){ // remove all meerkats from the cart
    for(int i = 0; i < 4; i++){
        meerkats[i].setAge(0);
        meerkats[i].setName("");
    }
};              
void cart::printMeerkats(){  // print the name, a space, the age, then a new line
    for(int i = 0; i < 4; i++){
        cout << meerkats[i].getName() << " " << meerkats[i].getAge() << "\n";
    }
}         

cart::~cart(){delete [] meerkats;}