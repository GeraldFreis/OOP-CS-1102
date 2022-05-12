#include "bet.h"

Bet::Bet(int _balance){
    balance = _balance;
    raw_bet_amount = "";
    bet_amount = 0;

    betamount_field[0] = new_field(1,1,30,130,0,0);
    set_field_back(betamount_field[0], O_AUTOSKIP);

    betamount_field[1] = NULL;

    betting_form = new_form(betamount_field);
};


Bet::Bet(){
    balance = 0;
    raw_bet_amount = "";
    bet_amount = 0;

    betamount_field[0] = new_field(1,1,30,130,0,0);
    set_field_back(betamount_field[0], O_AUTOSKIP);

    betamount_field[1] = NULL;

    betting_form = new_form(betamount_field);

};

string Bet::bet_interface(){
    bool betting_test = true;
    int betting_input;

    betting_input = getch();

    betamount_field[0] = new_field(1,1,30,130,0,0);
    set_field_back(betamount_field[0], O_AUTOSKIP);

    betamount_field[1] = NULL;

    betting_form = new_form(betamount_field);
    
    post_form(betting_form);
    mvaddch(26, 100, ' ');
    printw("Please enter a bet amount: (press q when finished typing)");

    bool betting_test = true;

    mvaddch(30, 100, ' ');

    while(betting_test == true){
        betting_input = getch();
        
        switch(betting_input){
            case '0':
                raw_bet_amount += '0';
                printw("%c", betting_input);
                break;

            case '1':
                raw_bet_amount += '1';
                printw("%c", betting_input);
                break;

            case '2':
                raw_bet_amount += '2';
                printw("%c", betting_input);
                break;

            case '3':
                raw_bet_amount += '3';
                printw("%c", betting_input);
                break;
                
            case '4':
                raw_bet_amount += '4';
                printw("%c", betting_input);
                break;

            case '5':
                raw_bet_amount += '5';
                printw("%c", betting_input);
                break;

            case '6':
                raw_bet_amount += '6';
                printw("%c", betting_input);
                break;

            case '7':
                raw_bet_amount += '7';
                printw("%c", betting_input);
                break;

            case '8':
                raw_bet_amount += '8';
                printw("%c", betting_input);
                break;

            case '9':
                raw_bet_amount += '9';
                printw("%c", betting_input);
                break;

            case 'q':
                betting_test = false;
                break;

            default:
                break;
        }     
    }
    
    unpost_form(betting_form);
    free_form(betting_form);

    free_field(betamount_field[0]);
    // free_field(betamount_field[1]);
    window_creation.end_win(betting_window);

    return raw_bet_amount;
};

void Bet::set_bet_amount(){
    while(bet_amount == 0){
        betting_window = window_creation.bet_window(10);
        raw_bet_amount = bet_interface();
        bet_amount = std::stoi(raw_bet_amount);

        if(bet_amount > balance){ // if the bet amount is greater than the user's balance
            bet_amount = 0;
        }
        else{
            break;
        }
    }
};

int Bet::get_bet_amount(){
    return bet_amount;
}