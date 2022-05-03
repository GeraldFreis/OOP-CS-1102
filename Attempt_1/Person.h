#include <iostream>
#include "Player.h"
using std::string; using std::cout; using std::cin;

#ifndef PERSON_H
#define PERSON_H

class Person: public Player{
    private:
        string lastmove;
        string allmoves;

    public:
        Person();
        void move();                       //allow user to type in a single character to
                                          //represent their move. If a move is impossible,
                                         //“Move unavailable” is outputted and the user is
                                         //asked to input a character again.
                                        //Otherwise, their input is stored

        string getMoves();           //returns all moves stored in a string
};

#endif