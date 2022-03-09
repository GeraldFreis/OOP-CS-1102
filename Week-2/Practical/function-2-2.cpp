#include <iostream>
#include <cmath>
using namespace std;

int binary_to_number(int binaryarray[], int n){
    int number = 0;

    for(int i = 0; i < n; i++){
        number = number +  binaryarray[i] * pow(10, i);
    }
    return number;
}