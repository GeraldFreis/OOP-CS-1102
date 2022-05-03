#include "Player.h"

Player::Player(){
    allmoves = "";
    lastmove = 'r';
};

char Player::getMove(){ //returns the most recent move made
    return lastmove;
}
bool Player::win(Player * opponent){ //compares players’ moves to see who wins
    string oppmoves = opponent->getMoves();
    char opplastmove = oppmoves[oppmoves.size()-1];
    // comparing the players
    if((lastmove == 'r' || lastmove == 'R') && (opplastmove == 's' || opplastmove == 'S')){
        return true;
    }
    else if((lastmove == 'p' || lastmove == 'P') && (opplastmove == 's' || opplastmove == 'S')){
        return false;
    }
    else if((lastmove == 's' || lastmove == 'S') && (opplastmove == 'r' || opplastmove == 'R')){
        return false;
    }
    else if((lastmove == 'r' || lastmove == 'R') && (opplastmove == 'p' || opplastmove == 'P')){
        return false;
    }
    else if((lastmove == 'r' || lastmove == 'R') && (opplastmove == 'r' || opplastmove == 'R')){
        cout << "You and the computer produced the same result" << "\n";
    }
    else if((lastmove == 's' || lastmove == 'S') && (opplastmove == 's' || opplastmove == 'S')){
        cout << "You and the computer produced the same result" << "\n";
    }
     else if((lastmove == 'p' || lastmove == 'p') && (opplastmove == 'p' || opplastmove == 'P')){
        cout << "You and the computer produced the same result" << "\n";
    }
    else{
        cout << "Not a valid combination" << "\n";
        return false;
    }
}