#include <iostream>

int minimum(int array[], int n){

    int smallest_num = 0;

    if(n <= 0){
        return 0;
    }
    
    else{
        for(int i=0; i< n; i++){
  
            if(array[i] <= smallest_num){
                smallest_num = array[i];
            }

        }

        return smallest_num;
    }
}
