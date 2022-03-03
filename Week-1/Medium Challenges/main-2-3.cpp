#include <iostream>
#include "function-3-3.cpp"

extern void two_five_nine(int[], int);

int main(int argc, char **argv){
    // int array[6] = {2,2,5,5,9,9};
    two_five_nine(argv, argc);
    return 0;
}