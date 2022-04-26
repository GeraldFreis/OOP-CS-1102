#include <iostream>
#include "Orchestra.h"
using std::cout; using std::string;

int main(){
    Orchestra orch(5);

    // initialising musicians
    Musician muso_1("Oboe", 12); 
    Musician muso_2("flute", 2);
    Musician muso_3("Phone", -12);
    Musician muso_4("ED", 122);

    // assigning to orchestra
    orch.add_musician(muso_1);
    orch.add_musician(muso_2);
    orch.add_musician(muso_3);
    orch.add_musician(muso_4);

    cout << orch.get_current_number_of_members() << "\n";
    Musician *orchmembers = orch.get_members();
    cout << orchmembers[1].get_instrument() << "\n";

    // overload:
    Musician muso_5("popsicle", 2);
    orch.add_musician(muso_5);

    Musician muso_6("Bant", 12);
    orch.add_musician();
}
