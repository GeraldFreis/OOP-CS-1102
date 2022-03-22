#include <iostream>
using namespace std;

int maximum_sum(int *nums, int length){
    int previous_sum = 0;
    for(int i = 0; i < length; i++){
        int sum = 0;
        int *ptr = nums;
        for(int j = 0; j < length; j++){
            sum += *(ptr+abs(j-i));
        }
        if(sum > previous_sum){
            previous_sum = sum;
            maximum_sum(nums, length);
        }
        else{
            break;
        }
    }
}