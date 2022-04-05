#include "meerkat.h"

meerkat::meerkat(){
    int age = 0;
    std::string name = "";
}
void meerkat::setName(std::string meerName){name = meerName;}
void meerkat::setAge(int meerAge){age = meerAge;}
std::string meerkat::getName(){return name;}
int meerkat::getAge(){return age;}