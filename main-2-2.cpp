#include <iostream>
#include "aircraft.h"

int main(){
    person initialpilot("George", 10000);
    person initialcopilot("Simon", 10);

    std::string _callsign = std::string("Hi");

    // setting up the aircraft
    aircraft Aircraft(_callsign, initialpilot, initialcopilot);

    // creating the third person
    person newpilot("Evan", -20);
    Aircraft.setPilot(newpilot);
    Aircraft.setCoPilot(initialpilot);

    Aircraft.printDetails();
    return 0;
}