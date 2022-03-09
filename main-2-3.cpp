#include <iostream>
// #include "function-2-3.cpp"
using namespace std;

extern int sum_elements(int [], int);

int main(int array[], int size){
    // int array[5] = {1, 2, 0, 2, 1};
    cout << sum_elements(array, size) << endl;
}