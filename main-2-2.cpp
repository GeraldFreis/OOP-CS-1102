#include <iostream>
#include "function-2-2.cpp"

extern int maximum(int[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }
    
    maximum(arr, argc);
    return 0;
}