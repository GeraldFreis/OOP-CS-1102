#include <iostream>
#include "meerkat.h"
using std::cout;

class cart{
    private:
        meerkat *meerkats = new meerkat[4];
    
    public:
        cart();  // default constructor  
        bool addMeerkat(meerkat cat);  // adds a meerkat to the cart, returns false if full   // adds a meerkat to the cart, returns false if full
        void emptyCart();  // remove all meerkats from the cart
                
        void printMeerkats();  // print the name, a space, the age, then a new line

        ~cart();  // default destructor
};