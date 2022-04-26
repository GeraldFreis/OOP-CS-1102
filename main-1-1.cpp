#include "Musician.h"
#include <iostream>
using std::cout; using std::string;

int main(){
    Musician muso;
    cout << muso.get_experience() << " " << muso.get_instrument() << "\n";

    cout << "Initialised" << "\n";

    Musician maverick("Bongo", 1200);
    cout << maverick.get_experience() << " " << maverick.get_instrument() << "\n";
};