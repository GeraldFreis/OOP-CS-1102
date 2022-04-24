#include "interpretingcsv.h"

// constructors
InterpretingCSV::InterpretingCSV(){ // default constructor
    ptr = nullptr;
    day = "";
    int min = 0;
    int max = 0;
};

InterpretingCSV::InterpretingCSV(string *_ptr){ // parameterized constructor
    ptr = _ptr;
    day = ptr[0];

    // explicit conversion from string to int
    int min = std::stoi(ptr[1]);
    int max = std::stoi(ptr[2]);
}   

/*
    Planning the findingschedule functions
*/
void InterpretingCSV::findingschedule(){
    if(day=="Monday"
        || day == "Tuesday"
        || day == "Wednesday"
        || day == "Thursday"
        || day == "Friday"){
            Weekdays object(min, max);
            object.calcschedule();
            object.printschedule();
            cout << day << "\n";
        }
    else if(day == "Saturday"
        || day == "Sunday"){
            Weekends object(min, max);
            object.calcschedule();
            object.printschedule();
            cout << day << "\n";
        }

    else{
        cout << "not valid day of the week" << "\n";
    }
}

void InterpretingCSV::setdata(string _day, string _min, string _max){
    day = _day;

    // explicit conversion from string to integer of the min and max values
    min = stoi(_min);
    max = stoi(_max);
};

void InterpretingCSV::printdata(){
    cout << day << " " << min << " " << max << "\n";
}
