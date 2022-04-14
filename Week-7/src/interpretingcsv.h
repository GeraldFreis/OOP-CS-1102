#include <iostream>
using std::cout;


class InterpretingCSV{
    protected:
        std::string *ptr; // point to take the matrix location
        int min; // take the minimum
        int max; // take the maximum
        std::string day; // the day that is being iterated over
        int schedule;

    public:
        // constructors
        InterpretingCSV(std::string * _ptr); // parameterized constructor

        // member functions
        void findingschedule(); // calls either weekends or weekdays dependent on the day
        void setday();
        int getschedule();
};