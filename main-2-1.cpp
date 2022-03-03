#include <iostream>
#include "function-2-1.cpp"

extern int minimum(int[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }
    minimum(arr, argc);
    return 0;
}