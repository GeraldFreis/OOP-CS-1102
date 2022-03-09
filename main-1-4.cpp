#include <iostream>
// #include "function-1-4.cpp"

using namespace std;

extern void print_scaled_matrix(int [3][3], int);

int main(int matrix[3][3], int scale){
    // int matrix[3][3] = {{9, 1, 1},
    //                     {1, 21, 1},
    //                     {1, 1, 3}};
    // int scale_to_multiply = 3;
    print_scaled_matrix(matrix, scale);
    return 0;
}