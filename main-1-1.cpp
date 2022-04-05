#include <iostream>
#include "meerkat.h"

using namespace std;

int main(){
    meerkat *Meerkats = new meerkat[4];

    Meerkats[0].setAge(1);
    std::cout << Meerkats[0].getAge() << "\n";

    Meerkats[0].setName("John");
    Meerkats[0].setName("Eduardo");
    std::cout << Meerkats[0].getName() << "\n";

    Meerkats[1].setAge(120);
    std::cout << Meerkats[1].getAge() << "\n";

    Meerkats[1].setAge(-10);
    Meerkats[1].setName("tinkerbelle");
    Meerkats[1].setName("Stevanovic");
    std::cout << Meerkats[1].getName() << "\n";
    std::cout << Meerkats[1].getAge() << "\n";

    Meerkats[2].setAge(-192);
    std::cout << Meerkats[2].getAge() << "\n";

    Meerkats[2].setName("peter");
    Meerkats[2].setName("ji xiping");
    Meerkats[2].setAge(0);
    std::cout << Meerkats[2].getName() << "\n";
    std::cout << Meerkats[2].getAge() << "\n";

    Meerkats[3].setAge(120);
    std::cout << Meerkats[3].getAge() << "\n";

    Meerkats[3].setAge(-18);
    Meerkats[3].setName("toiletman");
    Meerkats[3].setName("dogwater");
    std::cout << Meerkats[3].getName() << "\n";
    std::cout << Meerkats[3].getAge() << "\n";

    delete [] Meerkats;

}