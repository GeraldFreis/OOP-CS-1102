#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int median(int array[], int n){
    int middle_of_array = n / 2;
    int median = 0;

    // sorting the array
    sort(array, array+n);

    if(n < 0 || n % 2 == 0){
        return 0;
    }

    else{
        median = array[middle_of_array];
        return median;
    }
}