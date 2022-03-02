#include <iostream>

// Iterating through and returning the number of elements in the array which match the given test number
int count(char *array[], int n, int number){
    int number_of_matches;  // variable which count the amount of array elements which match the number
    if(n < 1){
        return 0;
    }
    else{
        for(int i=0; i<n; i++){
            if (*array[i]==number){
                number_of_matches += 1;
            }
        }
    return number_of_matches;
    }
}