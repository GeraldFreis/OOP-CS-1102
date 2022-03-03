#include <iostream>
#include "function-2-1.cpp"

extern int minimum(int[], int);

int main(int argc, char **argv){
    minimum(argv, argc);
    return 0;
}