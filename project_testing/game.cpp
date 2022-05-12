#include "game.h"


Game::Game(){
    balance = 0;
    betamount = 0;
    game_has_begun = false;
    hit_counter = 0;

    WINDOW *card_1; // dealer card 1 
    WINDOW *card_2;  // dealer card 2
    WINDOW *card_3; // player card 1
    WINDOW *card_4; // player card 2
    WINDOW *card_5; // dealer card 3
    WINDOW *card_6; // dealer card 4
    WINDOW *card_7; // player card 3
    WINDOW *card_8; // player card 4;

    Window userwindow;

    // creating the buttons in the window
    WINDOW *hit_button;
    WINDOW *stand_button;
    WINDOW *double_button;
    WINDOW *start_button;
}





Game::~Game(){
    cout << "Thanks for playing" << "\n";
};
