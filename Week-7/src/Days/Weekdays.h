#include <iostream>
#include "day.h"
using std::cout; using std::string;

class Weekdays: protected Day{
    public:
        Weekdays();
        void calcschedule();
        ~Weekdays();
};