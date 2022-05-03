#include <iostream>
#include "Person.h"
#include "Computer.h"
using std::cout; using std::string; using std::cin;

int main(){
    Person player1;
    player1.move();

    cout << "\nComputer plays:" << "\n";
    Player *player2 = new Computer("s");
    
    cout << player2->getMoves() << "\n";

    if(player1.win(player2)==false){
        cout << "\nPlayer 1 lost\n";
    }
    else if(player1.win(player2) == true){
        cout << "\nPlayer 2 lost\n";
    }
    else{
        cout << "\nThe values were not valid\n" << "\n";
    }
    return 0;
}