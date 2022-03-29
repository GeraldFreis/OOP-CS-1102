#include <iostream>
using namespace std;

int secondSmallestSum(int *numbers,int length){
    int smallestsum = numbers[0];
    int secondsmallestsum = numbers[1];
    for(int i = 0; i < length; i++){
        int newsum = 0;
        int counter  = length;

        for(int j = 0; j < length; j++){
            for(int k = 0; k < counter; k++){
                newsum += numbers[k];
            }
        counter --;
        if(i == 1 && newsum <smallestsum){
            secondsmallestsum = smallestsum;
            smallestsum = newsum;
        }

        if(newsum < smallestsum){
            smallestsum = newsum;
        }
        if(newsum > smallestsum && newsum < secondsmallestsum){
            secondsmallestsum = newsum;
        }
        }
    }
    return secondsmallestsum;

}

int *readNumbers(){
    int *arr = new int[10];
    // cout << "enter 10 numbers: " << endl;

    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    return arr;
}