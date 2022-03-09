#include <iostream>
using namespace std;

int max_integer(int integers[], int length){

    if(length <= 0 ){
        return -1;
    }

    int max = 0;

    for(int i = 0; i < length; i++){

        if(integers[i] > max){
            max = integers[i];
        }
        
    }

    return max;
}

int min_integer(int integers[], int length){

    if(length <= 0 ){
        return -1;
    }

    int min = 0;

    for(int i =0; i < length; i++){

        if(integers[i] < min){
            min = integers[i];
        }

    }

    return min;
}

int sum_min_and_max(int integers[], int length){

    if(length <= 0 ){
        return -1;
    }

    int minimum = min_integer(integers, length);
    int maximum = max_integer(integers, length);

    int sum = minimum + maximum;

    return sum;
}