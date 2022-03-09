#include <iostream>
// #include "function-2-2.cpp"
using namespace std;

extern int binary_to_number(int [], int);

int main(int array[], int n){
    // int array[8] = {0,1,1,0,0,0,1,0};
    cout << binary_to_number(array, n) << endl;
}