#include <iostream>
// #include "function-3-2.cpp"
using namespace std;

extern int median(int[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }
    median(arr, argc);
    return 0;
}