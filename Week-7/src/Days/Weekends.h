#include <iostream>
#include "Weekdays.h"
using std::cout; using std::string;

/*
Class weekends:
Attrs:
    Protected attrs inherited from Weekdays:
        mintemp, maxtemp, schedlowerbound, schedupperbound, *schedule
Behaviours
    constructor, destructor, findingschedule which differs from weekdays
    setdata (takes params mintemp, maxtemp)
    findingschedule()
    getschedule() returns the address of the first element in the schedule array 
    printschedule() prints schedule
*/
class Weekends: public Weekdays{
    protected:
        //arrays and pointers
        int *schedule_array_1; // array to hold the first time period
        int *schedule_array_2; // array to hold the second time period
        int *schedule; // array to hold both schedules if required
        
        // vars
        int mintemp, maxtemp, lowerschedbound, upperschedbound;
    public:
        // constructor
        Weekends(); // default constructor
        Weekends(int min, int max); // parameterized constructor

        //member functions
        void calcschedule(); // overriden findingschedule from superclass
        void printschedule();
        ~Weekends();
};