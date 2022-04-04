#include <iostream>
using namespace std;

class person{
    private:
        std::string name;
        int salary;
    public:
    person(){
        std::string name = "";
        int salary = 0;
    };
    person(std::string myName,int Salary){name = myName; salary = Salary;} // a name and salary must be provided to create a person
    void setName(std::string myName){name = myName;}      // change the person's name
    std::string getName(){return name;}
    void setSalary(int mySalary){salary = mySalary;}     // change the person's salary
    int getSalary(){return salary;}
};