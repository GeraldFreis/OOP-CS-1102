#include <iostream>
#include <stdlib.h>

double average(int array[], int n){
    int sum;
    int average;

    if (n <= 0){
        return 0.0;
    }
    
    else{
        for(int i=0; i<n; i++){
            sum += array[i];
        }
        average = sum / n;
        return average;
    }
}