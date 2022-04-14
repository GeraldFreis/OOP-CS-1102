#include <iostream>

class Weekdays{
    protected:
        int max;
        int min;
        int *schedule_array = new int[3];

    public:
        Weekdays();
        Weekdays(int _max, int _min);
        void calculate_schedule();
            
};