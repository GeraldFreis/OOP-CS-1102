#include <iostream>
#include <stdlib.h>
using namespace std;

// function to determine if the array is in descending order or not
bool descending(int array[], int n){
    int previous_num =0;
    if(n < 0){
        return false;
    }
    else{
        for(int i=0; i<n; i++){
            if(i ==0){
                previous_num = array[i];
            }
            else if(array[i] <= previous_num){
                previous_num = array[i];
            }
            else if(array[i] >= previous_num){
                return false;
            }
        }
        return true;
    }
}