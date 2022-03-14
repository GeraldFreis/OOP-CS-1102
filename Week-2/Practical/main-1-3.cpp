#include <iostream>
// #include "function-1-3.cpp"
using namespace std;

extern void count_numbers(int [4][4]);

int main(int matrix[4][4]){
    // int matrix[4][4] = {{18, 2, 3, 4},
    //                     {1, 23, 0, 4},
    //                     {-1, 100, 3, 4},
    //                     {1, 2, 3, 9}};
    count_numbers(matrix);
    return 0;
}