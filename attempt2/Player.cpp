#include "Player.h"

Player::Player(){
    allmoves = "";
    lastmove = 'r';
};

char Player::getMove(){ //returns the most recent move made
    return lastmove;
}
bool Player::win(Player * opponent){ //compares players’ moves to see who wins
    char opplastmove = opponent->getMove();
    cout << opplastmove;

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
        return true;
    }
    else{
        cout << "Not a valid combination" << "\n";
        return false;
    }
}