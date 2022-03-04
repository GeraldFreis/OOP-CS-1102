#include <iostream>
// #include "function-1-1.cpp"
using namespace std;

extern int sum_array(int[], int);

int main(int argc, char **argv)
{   
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }

    sum_array(arr, argc);
    return 0 ;
}
