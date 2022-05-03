#include <iostream>
using std::cout; using std::string;
using std::cin;

#ifndef PLAYER_H
#define PLAYER_H

class Player{
    protected:
        string lastmove;
        string allmoves;

    public:
        Player(); // default constructor
        Player(string moves);
        virtual void move() = 0;
        virtual string getMoves() = 0;

        char getMove(); //returns the most recent move made
        bool win(Player * opponent); //compares players’ moves to see who wins
        
};

#endif
