#include <iostream>
// #include <charconv>
// #include <string_view>
// #include "function-1-2.cpp"
using namespace std;

extern double average(int[], int);

int main(int argc, char **argv)
{
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }
    average(arr, argc);
    return 0;
}