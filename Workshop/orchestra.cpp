#include "orchestra.h"
#include <iostream>

Orchestra::Orchestra(){           // default constructor
    musicianarray = new Musician[1];
    maxsize = 0;
};

Orchestra::Orchestra(int size){   // constructor for an orchestra of given size
    maxsize = size;
    musicianarray = new Musician[size];
};

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    int counter = 0;
    for(int i = 0; i < maxsize; i++){
        if(musicianarray[i].get_experience()!=0) // if nothing has been initialised for the musicians
        {
            counter += 1; 
        }
    }   
    return counter;
}; 

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument){
    for(int i = 0; i < maxsize; i++){
        if(musicianarray[i].get_instrument()==instrument){
            return true;
        }
    }
    return false;
} 

Musician *Orchestra::get_members(){        // returns the array of members of the orchestra
    return musicianarray;
}

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician){
    if(musicianarray[maxsize].get_instrument() == "") // if the last musican object is undefined
    {
        // going to the last musician initialised
        for(int i = 0; i < maxsize; i++){
            if(musicianarray[i].get_instrument()== "") // if this object is unitialised
            {
                musicianarray[i] = new_musician;
                return true;
            }
        }
    }
    else{
        return false;
    }
}

Orchestra::~Orchestra(){
    delete [] musicianarray;
}