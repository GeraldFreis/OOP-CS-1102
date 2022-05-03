#include <iostream>
#include "Computer.h"

Computer::Computer(string letter){                       //set what move the computer will
                                                            //make (rock, paper, or scissors)
                                                            //if the input is not r, R, p, P, s, S or
                                                            //a string starting with one of these letters,
                                                           //set the move to the default ‘r’
    if(letter == "r" || letter == "R" || letter == "s" || letter == "S" || letter == "p" || letter == "P") {
        lastmove = letter[0];
    }
    else {
        lastmove = 's';
    }
    allmoves += lastmove;
}

string Computer::getMoves(){                              //returns all moves stored in a string
    return allmoves;
}

void Computer::move(){                                       //increments number of moves made
    for(int i = 0; i < numberofmoves; i++){
        allmoves += allmoves[allmoves.size()-1];
    }
}