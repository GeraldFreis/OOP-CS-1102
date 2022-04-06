#include "aircraft.h"

aircraft::aircraft(){
    person pilot("", 1);
    Pilot = pilot;
    Co_Pilot = pilot;
    callsign = "";
};

aircraft::aircraft(std::string callsign,person thePilot, person theCoPilot){  // constructor
    callsign = callsign;
    Pilot = thePilot;
    Co_Pilot = theCoPilot;
}
void aircraft::setPilot(person thePilot){  // change the pilot
    Pilot = thePilot;
}

person aircraft::getPilot(){  // returning the pilot
    return Pilot;
}
void aircraft::setCoPilot(person theCoPilot){ // change the co-pilot
    Co_Pilot = theCoPilot;
}

person aircraft::getCoPilot(){  // returning the co-pilot
    return Co_Pilot;
}

void aircraft::printDetails(){ // printing the airplane details
    cout << callsign << "\n" << Pilot.getName() << "\n" << Co_Pilot.getName() << "\n";
}    