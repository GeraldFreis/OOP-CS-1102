#include <iostream>
#include "function-1-5.cpp"
using namespace std;

extern void print_summed_matrix(int [], int []);

int main(){
    int arr_1[3][3] = {{0, 0, 0},
                        {1, 1, 1},
                        {0, 0, 0}};
    int arr_2[3][3] = {{-11, 1, 1},
                        {0, 0, 0},
                        {1, 1, 1}};

    print_summed_matrices(arr_1, arr_2);
    return 0;
}