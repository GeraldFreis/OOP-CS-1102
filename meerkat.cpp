#include "meerkat.h"

meerkat::meerkat(){
    age = 0;
    name = "";
}
void meerkat::setName(std::string meerName){name = meerName;}
void meerkat::setAge(int meerAge){age = meerAge;}
std::string meerkat::getName(){return name;}
int meerkat::getAge(){return age;}