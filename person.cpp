#include "person.h"
person::person(){
    name = "";
    salary = 0;
};
person::person(std::string myName, int Salary){
    name = myName;
    salary = Salary;
};

std::string person::getName(){
    return name;
};

int person::getSalary(){
    return salary;
};

void person::setSalary(int mySalary){
    salary = mySalary;
};
void person::setName(std::string myName){
    name = myName;
};

