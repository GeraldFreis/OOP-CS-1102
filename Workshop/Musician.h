#include <iostream>
using std::cout; using std::string;

class Musician{
    protected:
        string instrumentplayed;
        int yearsofexperience;

    public:
        Musician(); // a default constructor 
        // a constructor that takes the instrument played and the years of experience
        Musician(std::string instrument, int experience);      
        std::string get_instrument();    // returns the instrument played
        int get_experience();       // returns the number of years experience
        ~Musician();                //A default destructor
};