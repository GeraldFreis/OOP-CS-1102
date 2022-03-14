#include <iostream>
using namespace std;

void print_summed_matrices(int array_1[3][3], int array_2[3][3]){
    // int summed_matrix[3][3] = {};
    for(int row = 0; row < 3; row++){
        for(int column = 0; column < 3; column++){
            int sum = array_1[row][column] + array_2[row][column];
            if(column != 2){
                cout << sum << " ";
            }
            else{
                cout << sum << endl;
            }
        }
    }

}