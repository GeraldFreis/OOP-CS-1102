#include <iostream>
#include "Person.h"
#include "Computer.h"
#include "Player.h"
using std::cout; using std::string;

int main(){
    Person player1;
    player1.move(); // asking the player for the input
    
    Player *comp = new Computer("S");
    player1.win(comp);

    delete comp;
}