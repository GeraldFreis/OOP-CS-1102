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

class Weekends: protected Weekdays{
    protected:
        int *schedule_array_1; // array to hold the first time period
        int *schedule_array_2; // array to hold the second time period

    public:
        // constructor
        Weekends(); // default constructor
        Weekends(int min, int max); // parameterized constructor

        //member functions
        void findingschedule(); // overriden findingschedule from superclass
        ~Weekends();
};