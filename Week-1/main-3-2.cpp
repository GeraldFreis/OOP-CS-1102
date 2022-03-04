#include <iostream>
// #include "function-3-2.cpp"
using namespace std;

extern int median(int[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }

    // int test_array[5] = {0, 1, 3, 2, 4};
    
    // median(test_array, 5);
    median(arr, argc);
    return 0;
}