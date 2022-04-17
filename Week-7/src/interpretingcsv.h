#include <iostream>
using std::cout;
using std::string;


class InterpretingCSV{
    protected:
        string *ptr; // point to take the matrix location
        int min; // take the minimum
        int max; // take the maximum
        string day; // the day that is being iterated over
        int schedule;

    public:
        // constructors
        InterpretingCSV(); // default constructor
        InterpretingCSV(string * _ptr); // parameterized constructor

        // member functions
        void findingschedule(); // calls either weekends or weekdays dependent on the day
        void setdata(string _day, string _min, string _max); // enables me to set the data for each variable
        int getschedule();
        void printdata();
};