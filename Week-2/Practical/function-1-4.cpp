#include <iostream>
using namespace std;

void print_scaled_matrix(int array[3][3], int scale){
    for(int row = 0; row < 3; row++){
        for(int column = 0; column < 3; column++){
            if(column != 2){
                cout << array[row][column]*scale << " ";
            }
            else{
                cout << array[row][column]*scale;
            }
        }
        cout << endl;
    }
}