#include <iostream>
#include <stdlib.h>
#include "count.cpp"
using namespace std;

int main(){
    int arg[5] = {3, 5, 7, 9, 11};
    // count(arg, 5);
    cout << "The total number of evens is: "<< count(arg, 5) << endl;
    return 0;
}

