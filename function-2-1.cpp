#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

// using successive division we will iterate from the number to 2 and that final number that is less than 2 will be divided as well

void print_as_binary(string decimal_number){

    //variables
    int number = stoi(decimal_number);
    // cout << number << endl;
    string binarynumber;

    for(int i =0; i < 10000000; i++){
        if(number >= 2){
            if(number % 2 ==0){
                binarynumber += '0';
                number = number / 2;
            }
            else if(number % 2 != 0){
                binarynumber += '1';
                number = round(number / 2);
            }
        }

        else if(number < 2){
            if(number %  2 == 0){
                binarynumber += '0';
                break;
            }
            else if(number % 2 != 0){
                binarynumber += '1';
                break;
            }
        }
    }

    // reversing the string
    for(int i = binarynumber.size() - 1; i > 0; i--){
        cout << binarynumber[i];
    }
    cout << endl;
}
