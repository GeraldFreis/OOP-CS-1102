#include <iostream>
#include <stdlib.h>
// #include "count.cpp"
using namespace std;

extern int count(int[], int);

int main(){
    int arg[5] = {4, 5, 6, 7, 8};
    // count(arg, 5);
    cout << "The number is: " << count(arg, 5) << endl;
    return 0;
}