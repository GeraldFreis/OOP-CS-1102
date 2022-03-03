#include <iostream>
#include "function-2-2.cpp"

extern int maximum(int[], int);

int main(int argc, char **argv){
    maximum(argv, argc);
    return 0;
}