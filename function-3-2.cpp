#include <iostream>
#include <stdlib.h>
#include <list>
#include <stdio.h>
using namespace std;

int median(int array[], int n){
    int middle_of_array = n / 2;
    int median = 0;

    // sorting the array
    sort(array, array+n);
    
    // checking whether the number of elements is less than zero or an even number
    if(n < 0 || n % 2 == 0){
        return 0;
    }

    else{
        
        median = array[middle_of_array];
        return median;
    }
}