#include <iostream>
#include "function-2-2.cpp";

extern int max(int[], int);

int main(int argc, char **argv){
    max(argv, argc);
    return 0;
}