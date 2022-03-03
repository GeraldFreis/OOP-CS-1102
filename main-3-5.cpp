#include <iostream>
#include "function-3-5.cpp"
using namespace std;

extern double sumeven(double[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }
    
    sumeven(arr, argc);

    return 0;
}