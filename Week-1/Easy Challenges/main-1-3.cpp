#include <iostream>
#include "function-1-3.cpp"

extern int count(int[], int, int);

int main(int argc, char **argv, int num){
    count(argv, argc, num);
    return 0;
}