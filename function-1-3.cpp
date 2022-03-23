#include <iostream>
#include <iostream>
using namespace std;

void cpyia(int old_array[], int new_array[], int length){
    // creating the pointers
    for(int i = 0; i < length; i++){
        int *ptr = &old_array[i];
        new_array[i] = *ptr;
    }
    // cout << new_array[0] << " " << new_array[1] << " "<< new_array[2] << endl;
}