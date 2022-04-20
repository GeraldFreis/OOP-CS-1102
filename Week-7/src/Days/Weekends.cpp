#include "Weekends.h"

Weekends::Weekends(){
    schedule_array_1 = new int[2];
    schedule_array_2 = new int[2];
    schedule = new int[2];

    lowerschedbound = 0;
    upperschedbound = 0;

    mintemp = 0;
    maxtemp = 0;
};

Weekends::Weekends(int min, int max){
    schedule_array_1 = new int[2];
    schedule_array_2 = new int[2];
    schedule = new int[2];

    lowerschedbound = 0;
    upperschedbound = 0;
    mintemp = min;
    maxtemp = max;
    // cout << mintemp << " " << maxtemp <<"\n";
};


/*
Rules for finding schedule on weekends:
    - on weekends frikki can be walked during the whole day
    - however, he can not be walked at breakfast 7 - 9
        lunch (12:30-1:30)
        dinner (5:30-6:45)
    
    if it is a cold day (mintemp < 13 and maxtemp < 20)
        we should walk frikki around midday (11->3:30)
    if it is a moderately weathered day (18 < mintemp < 22 && maxtemp > 26)
        we can walk frikki from 10 am to 12 or 3:30 to 5:30
    if it is a warm day (mintemp >= 23 && maxtemp > 29)
        we can walk frikki from 9:30 - 11:30 and after dinner (6:30-8)
*/
void Weekends::calcschedule(){
    // cold day
    if(mintemp <= 14 && maxtemp <= 20){
        lowerschedbound = 1100;
        upperschedbound = 1550;

        // assigning the bounds to the schedule
        schedule[0] = lowerschedbound;
        schedule[1] = upperschedbound; 
    }

    // medium temp day
    else if(15 < mintemp && mintemp < 21 && maxtemp >= 21 && maxtemp <= 26){
        // separating the schedules into two arrays
        int lowerschedbound_1 =  1000;
        int upperschedbound_1 = 1200;
        schedule_array_1[0] = lowerschedbound_1;
        schedule_array_1[1] = upperschedbound_1;
        
        lowerschedbound = 1550;
        upperschedbound = 1750;

        schedule_array_2[0] = lowerschedbound; 
        schedule_array_2[1] = upperschedbound;

        schedule[0] = *schedule_array_1;
        schedule[1] = *schedule_array_2;
    }

    // warm day
    else if(mintemp >= 23 && maxtemp >= 26){
        // separating the schedules into two arrays
        int lowerschedbound_1 =  950;
        int upperschedbound_1 = 1150;
        schedule_array_1[0] = lowerschedbound_1;
        schedule_array_1[1] = upperschedbound_1;
        
        lowerschedbound = 1850;
        upperschedbound = 2050;

        schedule_array_2[0] = lowerschedbound; 
        schedule_array_2[1] = upperschedbound;

        schedule[0] = *schedule_array_1;
        schedule[1] = *schedule_array_2;
    }
    else{

        cout << mintemp <<" " << maxtemp << "\n";
    }
};

Weekends::~Weekends(){
    if(schedule_array_1[0]!=0){
        delete [] schedule_array_1;
        delete [] schedule_array_2;
        delete [] schedule;
    }

    else{
        delete [] schedule;
    }
}