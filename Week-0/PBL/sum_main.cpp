#include <iostream>
#include "sum_function.cpp"
using namespace std;

extern int checker(int);

int main(){
    int testable = 45;
    checker(testable);
    return 0;
}