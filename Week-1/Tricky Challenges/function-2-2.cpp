#include <iostream>
#include <stdlib.h>
#include <typeinfo>
using namespace std;

int median(int array[], int n){
    int middle_of_array = n / 2;
    int median = 0;
    if(typeid(middle_of_array) == typeid(float)){
        median = (array[n/2+1] + array[n/2-1]) / 2;
    }
    else{
        median = middle_of_array;
    }
    if(n < 0){
        return 0;
    }

    else{
        return median;
    }
}