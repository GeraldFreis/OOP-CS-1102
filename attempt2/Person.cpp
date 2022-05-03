#include <iostream>
using std::cout; using std::string; using std::cin;
#include "Person.h"

Person::Person(){
    lastmove = 'r';
    allmoves = "";
}

void Person::move(){                       //allow user to type in a single character to
                                    //represent their move. If a move is impossible,
                                    //“Move unavailable” is outputted and the user is
                                    //asked to input a character again.
                                //Otherwise, their input is stored
    cout << "Enter a turn value (r,sp): ";
    cin >> lastmove;

    while(lastmove != 'r' && lastmove != 'R' && lastmove != 's' && lastmove != 'S' && lastmove != 'p' && lastmove != 'P'){
        cout << "Move unavailable: ";
        cin >> lastmove;
    }
    allmoves.push_back(lastmove);
}

string Person::getMoves(){           //returns all moves stored in a string
    return allmoves;
}
