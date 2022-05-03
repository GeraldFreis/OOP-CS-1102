#include <iostream>
#include "Person.h"
#include "Computer.h"
using std::cout; using std::string; using std::cin;

int main(){
    Person player1;
    player1.move();

    // cout << "\nComputer plays:" << "\n";
    Player *player2 = new Computer("s");
    
    // cout << "\n" << player2->getMoves() << "\n";

    if(player1.win(player2)==false){
        cout << "Player 1 lost";
    }
    else if(player1.win(player2) == true){
        cout << "Player 2 lost";
    }
    else{
        cout << "The values were not valid" << "\n";
    }

    return 0;
}