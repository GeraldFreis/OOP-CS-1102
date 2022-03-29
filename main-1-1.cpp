#include <iostream>
// #include "function-1-1.cpp"
using namespace std;
extern int *readNumbers();
extern void printNumbers(int *, int);

int main(){
    int *arr = readNumbers();
    printNumbers(arr, 10);
    delete [] arr;
    return 0;
}