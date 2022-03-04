#include <iostream>
// #include "function-2-5.cpp"
using namespace std;

extern bool descending(int[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }

    descending(arr, argc);
    return 0;
}