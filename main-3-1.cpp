#include <iostream>
#include "Person.h"
#include "Computer.h"
#include "Player.h"
using std::cout; using std::string;

int main(){
    Person player1;
    player1.move(); // asking the player for the input
    
    Computer comp("s");
    player1.win(comp);
}