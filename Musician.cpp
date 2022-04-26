#include "Musician.h"

Musician::Musician(){ // a default constructor 
    instrumentplayed = "";
    yearsofexperience = 0;
};
Musician::Musician(std::string instrument, int experience){ // a constructor that takes the instrument played and the years of experience
    instrumentplayed = instrument;
    yearsofexperience = experience;
};     
std::string Musician::get_instrument(){    // returns the instrument played
    return instrumentplayed;
};
int Musician::get_experience(){      // returns the number of years experience
    return yearsofexperience;
};
