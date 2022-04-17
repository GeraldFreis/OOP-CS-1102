#include <iostream>
using std::cout; using std::string;

/*
super class that will provide a structure for the weekday and Weekend sub classes
*/
class Day{
    protected:
        string day;
        int mintemp;
        int maxtemp;
        int schedulelowerbnd; // lower boundary of schedule
        int scheduleupperbnd; // upper boundary of schedule
        int *schedule;

    public:
        Day(); // default constructor
        
        void calcschedule(); // calculates the schedule
        int *getschedule();

        ~Day(); // destructor
};