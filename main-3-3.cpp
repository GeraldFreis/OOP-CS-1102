#include <iostream>
#include "function-3-3.cpp"
using namespace std;

extern double weightedaverage(int[], int);

int main(int argc, char **argv){
    // int arr[6] = {1, 2, 1, 4, 1, 3};
    weightedaverage(argv, argc);
    return 0;
}
