#include <iostream>

int maximum(int array[], int n){
    int max = 0;
    if(n < 1){
        return 0;
    }
    else{
        for(int i=0; i < n; i++){
            if(i==1){
                max += array[i];
            }
            else{
                if(array[i] > max){
                    max = array[i];
                }
            }
        }
        return max;
    }
}