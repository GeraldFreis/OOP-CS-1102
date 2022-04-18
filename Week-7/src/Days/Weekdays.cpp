#include "Weekdays.h"

// constructors
Weekdays::Weekdays(){
    mintemp = 0;
    maxtemp = 0;
    lowerschedbound = 0;
    upperschedbound = 0;
    schedule = new int[2];
};

Weekdays::Weekdays(int min, int max){
    mintemp = min;
    maxtemp = max;
    lowerschedbound = 0;
    upperschedbound = 0;
    schedule = new int[2];
};


// member functions
void Weekdays::settemps(int min, int max){
    mintemp = min;
    maxtemp = max;
};

void Weekdays::calcschedule(){
    
};  

void Weekdays::printschedule(){
    cout << schedule[0] << " " << schedule[1] << "\n"; // no clearing buffers here
};

int &Weekdays::getschedule(){
    return schedule[0];
}

Weekdays::~Weekdays(){
    delete [] schedule;
}