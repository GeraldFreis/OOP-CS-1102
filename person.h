#include <iostream>

class person{
    private:
        std::string name;
        int salary;
    public:
        person(){name=""; salary=0;}
        person(std::string myName,int Salary);// a name and salary must be provided to create a person
        void setName(std::string myName);     // change the person's name
        std::string getName();
        void setSalary(int mySalary);  // change the person's salary
        int getSalary();
};