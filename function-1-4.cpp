#include <iostream>

int sumtwo(int array1[], int array2[], int n){
    int sum_of_both = 0;
    if(n < 1){
        return 0;
    }
    
    else{
        for(int i=0; i< n; i++){
            sum_of_both += array1[i] + array2[i];
        }
        return sum_of_both;
    }
}