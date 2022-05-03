#include <iostream>
#include "Computer.h"

Computer::Computer(string letter){                       //set what move the computer will
                                                            //make (rock, paper, or scissors)
                                                            //if the input is not r, R, p, P, s, S or
                                                            //a string starting with one of these letters,
                                                           //set the move to the default ‘r’
    if(letter == "r" || letter =="R" || letter == "p" || letter == "P" || letter == "s" || letter == "S"){
        allmoves += letter;
    }
    else{
        allmoves += "r";
    }

}

string Computer::getMoves(){                              //returns all moves stored in a string
    return allmoves;
}

void Computer::move(){                                       //increments number of moves made
    allmoves += allmoves;
}
