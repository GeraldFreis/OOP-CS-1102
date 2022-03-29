#include <iostream>
using namespace std;

int secondSmallestSum(int *numbers,int length){
    int smallestsum = 0;
    int secondsmallestsum = 0;
    for(int i = 0; i < length; i++){
        int newsum = 0;
        for(int j = 0; j < length; j++){
            int counter  = length - i;
            for(int k = 0; k < counter; k++){
                newsum += numbers[k];
            }
        if(newsum < smallestsum){
            smallestsum = newsum;
        }
        else if(newsum > smallestsum && newsum < secondsmallestsum){
            secondsmallestsum = newsum;
        }
        }
    }
    return secondsmallestsum;

}

int *readNumbers(){
    int *arr = new int[10];
    cout << "enter 10 numbers: " << endl;

    for(int i = 0; i < 9; i++){
        
        cin >> arr[i];
        cout << endl;
    }
    return arr;
}