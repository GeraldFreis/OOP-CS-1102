#include <iostream>
#include <stdlib.h>
#include <list>
#include <stdio.h>
#include <algorithm>

using namespace std;

// int array_sorting(int array[], int n){

//     // int clean_array[n];

//     // for(int i=0; i < n; i++){
//     //     int tempval = 0;
//     //     if(i == 0){
//     //         clean_array[i] = array[i];
//     //     }

//     //     else if(array[i] >= clean_array[i]){
//     //         tempval = clean_array[i];
//     //         clean_array[i] = array[i];
//     //         clean_array[i+1] = tempval;
//     //     }
//     //     else if(array[i] <= clean_array[i]){
//     //         tempval = clean_array[i-1];
//     //         clean_array[i]

//     //     }
//     // }
// }

int sorting_array(int *array[], int n){

    for(int i=0; i < n; i++){
        for(int i=0; i< n; i++){
            int tempval = 0;

            if(array[i] < array[i-1]){
                tempval = int(array[i-1]);
                array[i-1] = array[i];
                array[i] = array[i-1];
            }


            else if(array[i] >= array[i-1]){
                array[i] = array[i];
            }
         
        }
    }
    // return array;
}

int median(int array[], int n){
    int middle_of_array = n / 2;
    int median = 0;

    // sorting the array
    sort(array, array+n);

    // int sorted_array[n] = sorting_array(array, n);
    // checking whether the number of elements is less than zero or an even number
    
    if(n < 0 || n % 2 == 0){
        return 0;
    }

    else{

        median = array[middle_of_array];
        return median;
    }
}