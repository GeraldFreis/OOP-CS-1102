#include "meerkat.h"

meerkat::meerkat(){
    std::string name;
    int age;
};
void meerkat::setName(std::string meerName){name = meerName;}
void meerkat::setAge(int meerAge){age = meerAge;}
std::string meerkat::getName(){return name;}
int meerkat::getAge(){return age;}