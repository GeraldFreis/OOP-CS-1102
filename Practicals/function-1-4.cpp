#include <iostream>
using namespace std;

void cpyda(double *old_array, double *new_array, int length){
    // double *ptr;
    // ptr = old_array;
    for(int i = 0; i < length; i++){
        new_array[i] = (old_array[i]);
    }
    for(int i = 0; i < length; i++){
        cout << new_array[i] << " ";
    }
    cout << endl;
}