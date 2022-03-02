#include <iostream>

double sumeven(double array[], int n){
    int sum=0;

    if(n < 1){
        return 0;
    }

    else{
        for(int i =0; i < n; i++){
            if(i % 2 == 0){
                sum += array[i];
            }
        }
    }
    return sum;
}