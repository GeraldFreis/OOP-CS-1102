#include <iostream>
#include "function-3-3.cpp"
using namespace std;

extern double weighted_average(int[], int);

int main(){
    int arr[6] = {1, 2, 1, 4, 1, 3};
    weighted_average(arr, 6);
    return 0;
}
