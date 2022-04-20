#include <iostream>
using std::cout;

/*
Weekdays class will be the super class of Weekends
Attrs:
    int mintemp
    int maxtemp
    int lowerschedbound {controls the lower boundary of the schedule}
    int upperschedbound  {controls the upper boundary of the schedule}
    int schedule[2] {lower bound is element 1, upper bound is element 2}
Behaviours
    settemps {takes mintemp and maxtemp as parameters and assigns them to member vars}
    calcschedule {takes the set mintemp and maxtemp and produces a upper and lower schedule boundary and then assigns this to the respective element index}
    getschedule {takes the schedule and returns the address of the array}
    printschedule {prints the calculated schedule}
*/

class Weekdays{
    protected:
        int mintemp;
        int maxtemp;
        int lowerschedbound;
        int upperschedbound;
        int *schedule; // calculated schedule

    public:
        // constructors
        Weekdays(); // default constructor
        Weekdays(int min, int max); // parameterized constructor

        // member functions
        void settemps(int min, int max); // sets the min and max temp
        virtual void calcschedule(); // calculates the schedule and assigns it to schedule var
        int &getschedule(); // returns address of schedule
        void printschedule(); // prints schedule


        // destructor {virtual as its a superclass (we want dynamic binding)}
        ~Weekdays();
};