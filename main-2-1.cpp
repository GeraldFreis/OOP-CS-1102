#include <iostream>
#include "function-2-1.cpp"
#include <string>

using namespace std;

extern void print_as_binary(string);

int main(){
    string decimal_number = "100";
    print_as_binary(decimal_number);
    return 0;   
}
