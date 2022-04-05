#include <iostream>
#include "person.h"
using std::cout;

class aircraft{
    private:
        std::string callsign;
        person Pilot;
        person Co_Pilot;
    
    public:
        // a pilot and copilot must be provided when creating an aircraft
        aircraft();
        aircraft(std::string callsign, person thePilot, person theCoPilot);
        void setPilot(person thePilot);  // change the pilot
        person getPilot();  // returning the pilot object
        void setCoPilot(person theCoPilot);  // change the co-pilot
        person getCoPilot(); // returning the copilot object
        void printDetails();  // print the callsign, a new line, the pilot name,
                              // a new line, the co-pilot name and a final newline.
};