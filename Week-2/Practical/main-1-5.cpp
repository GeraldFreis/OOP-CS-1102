#include <iostream>
// #include "function-1-5.cpp"
using namespace std;

extern void print_summed_matrices(int [3][3], int [3][3]);

int main(int arr_1[3][3], int arr_2[3][3]){
    print_summed_matrices(arr_1, arr_2);
    return 0;
}