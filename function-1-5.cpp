#include <iostream>

int evens(int number){
    int evens_sum = 0;
    for(int i=0; i < number; i++){
        if(i % 2 !=0){
            evens_sum += 1;
        }
    }
    return evens_sum;
}