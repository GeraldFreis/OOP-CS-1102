#include <iostream>
using std::cout; using std::string; using std::cin;
#include "Player.h"

#ifndef PERSON_H
#define PERSON_H

class Person: public Player{
    private:
        char lastmove;
        string allmoves;

    public:
        Person();
        void move();    //allow user to type in a single character to
                        //represent their move. If a move is impossible,
                        //“Move unavailable” is outputted and the user is
                        //asked to input a character again.
                        //Otherwise, their input is stored

        string getMoves();           //returns all moves stored in a string
};

#endif 