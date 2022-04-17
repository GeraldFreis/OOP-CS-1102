#include "day.h"

Day::Day(){
    day = "";
    mintemp = 0;
    maxtemp = 0;
    schedulelowerbnd = 0;
    scheduleupperbnd = 0;
    schedule = new int[2];
};

void Day::calcschedule(){

    // finding the upper and lower boundaries when frikki can be walked

    if(maxtemp < 17 || maxtemp > 34){
        return;
    }

    else if(mintemp > 18 && maxtemp < 30){ // frikki can be walked in early arvo
        schedulelowerbnd = 1600; // 4 oclock
        scheduleupperbnd = 1733; // 5:20
    }

    else if(mintemp < 11 && maxtemp < 20){ // frikki doesn't like the cold
        schedulelowerbnd = 1550;
        scheduleupperbnd = 1400;
    }

    else if(mintemp > 20 && maxtemp < 28){ // it is a warmer day and hence frikki can be walked later
        schedulelowerbnd = 1850;
        scheduleupperbnd = 1930;
    }

    // assigning the boundaries to schedule
    schedule[0] = schedulelowerbnd;
    schedule[1] = scheduleupperbnd;

};

int * Day::getschedule(){
    return schedule;
};

Day::~Day(){
    delete [] schedule;
};