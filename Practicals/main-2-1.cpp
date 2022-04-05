#include <iostream>
#include "cart.h"
using std::cout;

int main(){
    cart Cart;
    meerkat Meerkat1;
    meerkat Meerkat2;
    meerkat Meerkat3;
    meerkat Meerkat4;
    meerkat Meerkat5;

    // setting up the meerkats
    Meerkat1.setAge(10);
    Meerkat1.setName("Roberto");
    Meerkat2.setAge(11);
    Meerkat2.setName("Romulus");
    Meerkat3.setAge(12);
    Meerkat3.setName("Rostert");
    Meerkat4.setAge(13);
    Meerkat4.setName("Rolep");
    Meerkat5.setAge(14);
    Meerkat5.setName("Rohan");

    // adding each meerkat to the cart
    Cart.addMeerkat(Meerkat1);
    Cart.addMeerkat(Meerkat2);
    Cart.addMeerkat(Meerkat3);
    Cart.addMeerkat(Meerkat4);
    cout << Cart.addMeerkat(Meerkat5) << "\n";

    // Cart.emptyCart();
    // Cart.printMeerkats();

};