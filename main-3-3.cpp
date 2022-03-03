#include <iostream>
// #include "function-3-3.cpp"
using namespace std;

extern double weightedaverage(int[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }

    weightedaverage(arr, argc);
    return 0;
}
