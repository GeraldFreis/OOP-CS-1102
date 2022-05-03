#include "Player.h"
#include <iostream>

Player::Player(){ // default constructor
    lastmove = "";
    allmoves = "";
}

Player::Player(string move){
    lastmove = move;
    allmoves += lastmove;
}

char Player::getMove(){
   return  allmoves[allmoves.size()-1];
}

bool Player::win(Player * opponent){ //compares players’ moves to see who wins
    if((opponent->getMove() == "r" || opponent->getMove() == "R") &&
    (lastmove == "p" || lastmove == "P")){
        cout << "Player wins";
    }
    else if((opponent->getMove() == "s" || opponent->getMove() == "S") &&
    (lastmove == "R" || lastmove == "R")){
        cout << "Player wins";
    }
    else if((opponent->getMove() == "p" || opponent->getMove() == "P") &&
    (lastmove == "s" || lastmove == "s")){
        cout << "Player wins";
    }
    else{
        cout << "Wrong entry" << "\n";
    }
}
