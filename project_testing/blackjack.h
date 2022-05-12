#include <iostream>
#include "window.h"
#include "bet.h"

#ifndef BLACKJACK_H
#define BLACKJACK_H

class Blackjack {
    private:
        Window windowtools;
        
    public:
        Blackjack();
        
        WINDOW **start_game(); // returns a pointer to an array of windows
        WINDOW **hit();
        WINDOW **stand();
};

#endif