#include <iostream>
// #include "function-1-3.cpp"

extern int count(int[], int, int);

int main(int argc, char **argv, int num){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }

    count(arr, argc, num);
    return 0;
}