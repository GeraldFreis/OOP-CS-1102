#include <iostream>
#include "aircraft.h"

int main(){
    person initialpilot;
    person initialcopilot;

    // setting up the pilot, copilot and callsign
    initialpilot.setName("George");
    initialpilot.setSalary(100000);
    initialcopilot.setName("Simon");
    initialcopilot.setSalary(10);
    std::string _callsign = std::string("Hi");

    // setting up the aircraft
    aircraft Aircraft(_callsign, initialpilot, initialcopilot);

    // creating the third person
    person newpilot;
    newpilot.setName("Evan");
    newpilot.setSalary(-20);

    Aircraft.setPilot(newpilot);
    Aircraft.setCoPilot(initialpilot);

    Aircraft.printDetails();
    return 0;
}