#include <iostream>
#include "function-2-4.cpp"
#include <stdlib.h>
using namespace std;

extern bool ascending(int[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }

    ascending(arr, argc);
    return 0;
}