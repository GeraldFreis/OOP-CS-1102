#include <iostream>
using namespace std;

void printer(int array[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10 ; j++){
            if( j != 10){
                cout << array[i][j] << " ";
            }
            else if (j == 10){
                cout << array[i][j];
            }
        }
        cout << endl;
    }
}