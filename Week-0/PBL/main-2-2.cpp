#include <iostream>
#include "function-2-2.cpp"
using namespace std;

extern int checker(int);

int main(){
    int testable = 45;
    checker(testable);
    return 0;
}