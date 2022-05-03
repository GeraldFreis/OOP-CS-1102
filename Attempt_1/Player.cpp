#include "Player.h"
#include <iostream>
using std::cout; using std::string;

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
    const char opponentmove = opponent->getMove();
    cout << opponentmove;

    // if((opponentmove == "r" || opponentmove == "R") &&
    // (lastmove == "p" || lastmove == "P")){
    //     cout << "Player wins";
    // }
    // else if((opponentmove == "s" || opponentmove) == "S") &&
    // (lastmove == "R" || lastmove == "R"){
    //     cout << "Player wins";
    // }
    // else if((opponentmove == "p" || opponentmove == "P") &&
    // (lastmove == "s" || lastmove == "s")){
    //     cout << "Player wins";
    // }
    // else{
    //     cout << "Wrong entry" << "\n";
    // }
}
