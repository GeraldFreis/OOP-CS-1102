#include <iostream>
#include "Weekdays.h"
using std::cout; using std::string;

class Weekends: protected Weekdays{
    public:
        Weekends();
        void calcschedule();
        ~Weekends();
};