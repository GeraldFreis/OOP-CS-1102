#include <iostream>
#include "function-1-4.cpp"

extern int sumtwo(int[], int[], int);

int main(int argc, char **arr1, char **arr2)
{   
    int arr_1[argc];
    int arr_2[argc];

    for(int i =0; i < argc; i++){
        arr_1[i] = *(arr1[i]);
        arr_2[i] = *(arr2[i]);
    }
    sumtwo(arr_1, arr_2, argc);
    return 0;
}