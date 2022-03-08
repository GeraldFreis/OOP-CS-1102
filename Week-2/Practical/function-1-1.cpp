#include <iostream>
using namespace std;

// function to return the sum of elements along the main diagonal of the matrices
int diagonal(int array[4][4]){
    int diagonal_sum = 0;
    for(int row = 0; row < 4; row++){
        for(int column = 0; column < 4; column++){
            if(row==column){
                cout << array[row][column] << endl;
                diagonal_sum += array[row][column];
            }
        }
    }
    return diagonal_sum;
}