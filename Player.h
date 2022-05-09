#include <iostream>
using std::string; using std::cout; using std::cin;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
        char lastmove;
        std::string allmoves;

    public:
        Player();
        virtual void move() = 0;
        virtual std::string getMoves() = 0;
        char getMove(); //returns the most recent move made
        bool win(Player * opponent); //compares players’ moves to see who wins
};

#endif

class Card1{
    public:
    string name;
};

struct Cards{
    Card1 card;
    int type;
    int string;
};
