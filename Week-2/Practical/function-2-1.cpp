#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

// to convert a decimal number to binary
// We divide by two and if there is a remainder we add 1 to the binary output string
// We keep dividing until our number is less than 2
void print_as_binary(string decimal_number){

    int new_number = 1;
    int decimalnum = stoi(decimal_number);
    string binarynum;

    bool condition = true;

    while(condition == true){

        if(decimalnum > 2){

           if(decimalnum % 2 == 0){
                binarynum += '0';
                decimalnum = round(decimalnum / 2)+1;
                // cout << decimalnum<< endl;
            }
            else if(decimalnum % 2 != 0){
                binarynum += '1';
                decimalnum = round(decimalnum / 2);
                // cout << decimalnum << endl;
            }
        }
        else{
            condition = false;
        }
    }
    binarynum += '1';
    int n;

    if(binarynum.size() > 1){
        int n = binarynum.size() - 1;
    }
    else{
        int n = binarynum.size();
    }
    for(int i = 0; i < n; i++){
        cout << binarynum[n-i];
    }
    cout << endl;

}