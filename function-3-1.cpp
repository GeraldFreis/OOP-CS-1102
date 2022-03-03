#include <iostream>
using namespace std;

// function to check whether the array is a fan array
bool fanarray(int array[], int n){

    float sub_arr_size = n /2;
    int previous_num = 0;

    if(n <= 0){
        return false;
    }    
    // if the first element is equal to the last element --> pass
    // if the second (1) element is equal to n-1 --> pass...
    // if the element is not equal to n-element_num --> return false
    // if all numbers were passed -- > return true
    else{
        for(int i=0; i < sub_arr_size; i++){
            if(i == 0){
                previous_num = array[i];
            }
            else if(array[i] >= previous_num){
                previous_num = array[i];
            }
            else{
                return false;
            }

            if(array[i] != int(array[n-1-i])){
                return false;
            }
            
        }

        return true;
    }
}