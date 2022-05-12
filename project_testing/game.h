#include <iostream>
#include <ncurses.h>
#include <form.h>
#include "window.h"

#ifndef GAME_H
#define GAME_H

class Game {
    private:
        int balance;
        int betamount;
        bool game_has_begun;
        int hit_counter;

        // initialising the cards for the screen
        // dealer cards
        WINDOW *card_1; // dealer card 1 
        WINDOW *card_2;  // dealer card 2
        WINDOW *card_3; // dealer card 3
        WINDOW *card_4; // dealer card 4

        // player cards
        WINDOW *card_5; // player card 1
        WINDOW *card_6; // player card 2
        WINDOW *card_7; // player card 3
        WINDOW *card_8; // player card 4;

        // initialising the window object to create the cards
        Window userwindow;

        // initialising the buttons for the game options
        WINDOW *hit_button;
        WINDOW *stand_button;
        WINDOW *double_button;
        WINDOW *start_button;
        
        // initialising the betting window:
        WINDOW *betting_window;
        FIELD *betamount_field[2]; // initialising the field to hold the bet amount
        FORM *betting_form; // initialising the form to hold the bet amount

};
#endif GAME_H