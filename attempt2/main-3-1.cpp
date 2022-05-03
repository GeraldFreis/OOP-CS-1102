#include <iostream>
#include "Person.h"
using std::cout; using std::string; using std::cin;

int main(){
    Person player1;
    player1.move();

    cout << "\nNew player" << "\n";
    Player *player2 = new Person;
    player2->move();

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