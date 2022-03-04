#include <iostream>
using namespace std;
// #include "function-2-1.cpp"

extern int minimum(int[], int);

int main(int argc, char **argv){

    int arr[argc];

    for(int i =0; i < argc; i++){

        arr[i] = *(argv[i]);

    }

    // int arr_1[5] = {100, 8, 4, 7, -1} ;
    minimum(arr, argc);

    return 0;
}