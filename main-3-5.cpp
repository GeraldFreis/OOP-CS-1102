#include <iostream>
#include "function-3-5.cpp"
using namespace std;

extern double sumeven(double[], int);

int main(int argc, char **argv){
    // double arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    sumeven(argv, argc);
    // cout << "the sum of all elements in even positions in the array is: " << sumeven(arr, 10) << endl;
    return 0;
}