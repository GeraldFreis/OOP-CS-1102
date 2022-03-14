#include <iostream>
// #include "function-2-4.cpp"

using namespace std;

extern int sum_min_and_max(int[], int);

int main(int array[], int size){
    // int array[10] = {-1, -5, -189, 0, 0, 0, 0, 0, 0, 0};
    cout << sum_min_and_max(array, size) << endl;
    return 0;
}