#include <iostream>
using namespace std;

int identity(int array[10][10]){
    for(int row = 0; row < 10; row++){
        for(int column = 0; column < 10; column++){
            if(row==column){
                if(array[row][column]==1){
                    // cout << array[row][column] << endl;
                    continue;
                }
                else{
                    return 0;
                }
            }
            else if(row != column){
                if(array[row][column] == 0){
                    continue;
                }
                else{
                    return 0;
                }
            }   
        }
    }
    return 1;
}