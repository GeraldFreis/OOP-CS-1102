#include <iostream>
// #include "function-3-3.cpp"

extern void twofivenine(int[], int);

int main(int argc, char **argv){
    // int array[6] = {2,2,5,5,9,9};
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }

    twofivenine(arr, argc);
    return 0;
}