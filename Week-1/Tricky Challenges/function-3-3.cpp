#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

double weighted_average(int array[], int n){
    int weighted_average_counter = 0;

    if(n < 1){
        return 0;
    }

    else{
        for(int i=0; i < n; i++){
            int this_num_counter = 0;

            for(int j=0; j < n; j++){
                if(array[i] == array[j]){
                    this_num_counter += 1;
                }
            }
            weighted_average_counter += array[i]*this_num_counter *100 /n ;
        }
        weighted_average_counter = weighted_average_counter;
        // weighted_average_counter = (weighted_average_counter);
        // printf("The weighted average: %d", weighted_average_counter);
        return weighted_average_counter;
    }
}