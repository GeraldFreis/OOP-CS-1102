#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int sum(char *array[], int n){
    int sum_counter;

    if (n <= 0){
        return 0;
    }

    else{
        
        for(int i=0; i < n; i++){
            sum_counter += *array[i];
        }

        return sum_counter;
    }
}
