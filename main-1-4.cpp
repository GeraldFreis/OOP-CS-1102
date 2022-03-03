#include <iostream>
#include "function-1-4.cpp"

extern int sumtwo(int[], int[], int);

int main(int argc, char **arr1, char **arr2)
{
    sumtwo(arr1, arr2, argc);
    return 0;
}