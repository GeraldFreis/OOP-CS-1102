#include <iostream>
#include "Person.h"

Person::Person(){
    lastmove = "";
    allmoves = "";
}

void Person::move(){                       //allow user to type in a single character to
                                          //represent their move. If a move is impossible,
                                         //“Move unavailable” is outputted and the user is
                                         //asked to input a character again.
                                        //Otherwise, their input is stored
    cout << "Enter a move (r,p,s): " << "\n";
    cin >> lastmove;
    
    if(lastmove == "r" || lastmove == "R" || lastmove == "p" || lastmove == "P" || lastmove == "s" || lastmove == "S"){
        cout << "Incorrect input" << "\n";
        allmoves += lastmove;
    }
    else{
        cout << "Incorrect input" << "\n";
    }
}

string Person::getMoves(){           //returns all moves stored in a string
    return allmoves;
}