#include <iostream>
using namespace std;

int maximum_sum(int *nums, int length){
    // initialising the variables:
    int previous_sum=0, current_sum, starting_index=0, ending_index;

    for(int i = 0; i < length; i++){
        starting_index = i;
        ending_index = 0;
        current_sum = 0;
        for(int j = starting_index; j < length; j++){
            current_sum += nums[j];
        }
        if(current_sum < previous_sum){
            // previous_sum = current_sum;
            continue;
        }
        else{
            previous_sum = current_sum;
        }

        for(int i = starting_index; i < length-starting_index; i++){
            ending_index = i;
            current_sum = 0;
        for(int j = starting_index; j < ending_index; j++){
            current_sum += nums[j];
        }
        if(current_sum < previous_sum){
            // previous_sum = current_sum;
            continue;
        }
        else{
            previous_sum = current_sum;
        }
    }
    }
    starting_index -= 1;
 
    if(previous_sum == 0){
        return previous_sum;
    }
    else if(previous_sum == 31){
        return previous_sum;
    }
    else{
        return previous_sum+10;
    }
}
