#include <iostream>
#include "day.h"
using std::cout; using std::string;

class Weekends: protected Day{
    public:
        Weekends();
        void calcschedule();
        ~Weekends();
};