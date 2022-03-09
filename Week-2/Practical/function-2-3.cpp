#include <iostream>
using namespace std;

int sum_if_a_palindrome(int integers[], int length){
    if(length <= 0){
        return false;
    }

    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += integers[i];
    }
    return sum;
}

bool is_a_palindrome(int integers[], int length){
    int array_length = 0;
    if(length <= 0){
        return false;
    }

    if(length %2 == 0){
        array_length = length / 2;
    }
    else{
        array_length = length+1 / 2;
    }

    for(int i = 0; i < array_length; i++){
        if(integers[i] == integers[length-1-i]){
            continue;
        }
        else if(integers[i]!= integers[length-1-i]){
            return false;
        }
    }
    return true;
}

int sum_elements(int integers[], int length){
    if(length <= 0){
        return false;
    }
    int elements_sum = 0;
    if (is_a_palindrome(integers, length) == true){
        elements_sum = sum_if_a_palindrome(integers, length);
    }
    else if(is_a_palindrome(integers, length) != true){
        return -2;
    }
    
    return elements_sum;
}