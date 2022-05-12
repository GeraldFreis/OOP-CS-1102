#include "blackjack.h"

Blackjack::Blackjack(){

};

WINDOW **Blackjack::start_game(){
    
    // creating the dealers cards
    WINDOW *dealer_card_1 = windowtools.create_cards(10, 70);
    WINDOW *dealer_card_2 = windowtools.create_cards(10, 100);

    // creating the players cards
    WINDOW *player_card_1 = windowtools.create_cards(40, 70);
    WINDOW *player_card_2 = windowtools.create_cards(40, 100);

    // creating the buttons
    // start button
    WINDOW *start_button = windowtools.create_buttons(10, 10);

    // hit button
    WINDOW *hit_button = windowtools.create_buttons(10, 15);

    // stand button
    WINDOW *stand_button = windowtools.create_buttons(10, 20);

    // double button
    WINDOW *double_button = windowtools.create_buttons(10, 25);
}

WINDOW **Blackjack::hit(){

}

WINDOW **Blackjack::stand(){

};