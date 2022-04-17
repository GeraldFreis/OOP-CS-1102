#include "interpretingcsv.h"
// constructors
InterpretingCSV::InterpretingCSV(){ // default constructor
    ptr = nullptr;
    day = "";
    int min = 0;
    int max = 0;
};

InterpretingCSV::InterpretingCSV(std::string *_ptr){ // parameterized constructor
    ptr = _ptr;
    day = ptr[0];

    // explicit conversion from string to int
    int min = std::stoi(ptr[1]);
    int max = std::stoi(ptr[2]);
}   

void InterpretingCSV::findingschedule(){
    if(day=="Monday"
        || day == "Tuesday"
        || day == "Wednesday"
        || day == "Thursday"
        || day == "Friday"){

        }
    else if(day == "Saturday" 
        || "Sunday"){

        }
    else{
        
    }
}

void InterpretingCSV::setdata(string _day, string _min, string _max){
    day = _day;
    min = stoi(_min);
    max = stoi(_max);
};

void InterpretingCSV::printdata(){
    cout << day << " " << min << " " << max << "\n";
}
