#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int sum(int array[], int n){
    int sum_counter = 0;

    if (n <= 0){
        return 0;
    }

    else{
        
        for(int i=0; i < n; i++){
            sum_counter += array[i];
        }

        return sum_counter;
    }
}
