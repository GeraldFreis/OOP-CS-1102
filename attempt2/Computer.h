#include <iostream>
using std::cout; using std::string; using std::cin;
#include "Player.h"

#ifndef COMPUTER_H
#define COMPUTER_H

class Computer: public Player {
    private:
       char lastmove;
        string allmoves;
        int numberofmoves;

    public:
        Computer(string letter);                       //set what move the computer will
                                                            //make (rock, paper, or scissors)
                                                            //if the input is not r, R, p, P, s, S or
                                                            //a string starting with one of these letters,
                                                           //set the move to the default ‘r’

        string getMoves();                              //returns all moves stored in a string

        void move();                                       //increments number of moves made
};

#endif