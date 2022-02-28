#include <iostream>
#include <stdio.h>
using namespace std;

int count(int array[], int n){
    int evens_count = 0;
    if(n > 1){
        for(int i=0; i< n; i++){
            if(array[i] % 2 != 1){
                evens_count+=1;
            }
        }
        
    // cout << "The number of even numbers is: " << count << endl;
    return evens_count;
    }
    else{
        return 0;
    }
}

