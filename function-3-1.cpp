#include <iostream>
using namespace std;
// function to check whether the array is a fan array
bool fanarray(int array[], int n){
    int sub_arr_size = n/2;
    int array_length = n;
    if(n < 1){
        return false;
    }    
    // if the first element is equal to the last element --> pass
    // if the second (1) element is equal to n-1 --> pass...
    // if the element is not equal to n-element_num --> return false
    // if all numbers were passed -- > return true
    else{
        for(int i=0; i < sub_arr_size; i++){
            // int number_to_match = array[n-i];
            int number_to_match = array[6 - i];
            // cout << array[i] << ": " << number_to_match<< endl;
            if(array[i] == array[n-i]){
                continue;
            }
            else if(array[i] != (array[n])){
                cout << "Falsed " << array[n-i] << endl;
                return false;
            }
        }
        return true;
    }
}