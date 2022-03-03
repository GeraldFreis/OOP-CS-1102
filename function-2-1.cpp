#include <iostream>

int minimum(int array[], int n){
    int smallest_num;
    if(n < 1){
        return 0;
    }
    else{
        for(int i=0; i< n; i++){
            if(i==0){
                smallest_num += array[i];
            }
            else{
                if(array[i] < smallest_num){
                    smallest_num = array[i];
                }
            }
        }
    }
}