#include "interpretingcsv.h"
// constructors

InterpretingCSV::InterpretingCSV(std::string *_ptr){
    ptr = _ptr;
    day = ptr[0];

    // explicit conversion from string to int
    int min = std::stoi(ptr[1]);
    int max = std::stoi(ptr[2]);
}   

void findingschedule(std::string day){
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