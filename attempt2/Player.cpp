#include "Player.h"

Player::Player(){
    allmoves = "";
    lastmove = 'r';
};

char Player::getMove(){ //returns the most recent move made
    return lastmove;
}
bool Player::win(Player * opponent){ //compares players’ moves to see who wins

}