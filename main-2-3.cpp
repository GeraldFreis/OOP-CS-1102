#include <iostream>
#include "function-3-3.cpp"

extern void twofivenine(int[], int);

int main(int argc, char **argv){
    // int array[6] = {2,2,5,5,9,9};
    twofivenine(argv, argc);
    return 0;
}