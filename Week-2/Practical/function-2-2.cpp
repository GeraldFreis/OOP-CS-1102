#include <iostream>
#include <cmath>
using namespace std;

int binary_to_number(int binaryarray[], int n){
    int number = 0;
    int reversed_array[n];
    // reversing the binary array
    for(int i = n-1; i >= 0; i--){
        reversed_array[n-1-i] = binaryarray[i];
    }
    for(int i = 0; i < n; i++){
        number +=  reversed_array[i]* pow(2, i);
    }

    return number;
}