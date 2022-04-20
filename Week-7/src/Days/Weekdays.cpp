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

/* finding the schedule - constraints:
    if its in the week - as it has to be to call this class
        We have to walk in the afternoon (1550 -> 1933){3:30 to 7:20}
        We can not walk 30 mins either side of dinner (1750 -> 1850) {5:30 -> 6:30}

        schedules:

        if the max temp is greater than 30, we have to walk on the later side of dinner (1850 -> 1933)
        if the min temp is less than 14, we have to walk on the earlier side of dinner (1550 -> 1750)
        if the min temp is greater than or equal to 15 and the max temp is less than 27 we should walk closer to dinner (1650 -> 1750)
        if the min temp is 14 then we walk exactly at 1633 to 1675
*/
void Weekdays::calcschedule(){
    if(maxtemp > 30){
        lowerschedbound = 1850;
        upperschedbound = 1933;
    }

    else if(mintemp < 14){
        lowerschedbound = 1550;
        upperschedbound = 1750;
    }

    else if(mintemp >= 15 && maxtemp < 27){
        lowerschedbound = 1650;
        upperschedbound = 1750;
    }

    else if(mintemp == 14){
        lowerschedbound = 1633;
        upperschedbound = 1675;
    }

    else{
        schedule[0] = 0;
        schedule[1] = 0;
        return;
    }

    schedule[0] = lowerschedbound;
    schedule[1] = upperschedbound;
};  

void Weekdays::printschedule(){
    cout << schedule[0] << " " << schedule[1] << "\n"; // no clearing buffers here
};

int Weekdays::getschedule(){
    return schedule[0];
}

Weekdays::~Weekdays(){
    delete [] schedule;
}