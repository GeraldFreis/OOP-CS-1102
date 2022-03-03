#include <iostream>
#include <stdlib.h>
using namespace std;

bool ascending(int array[], int n){
    int previous_num = 0;
    if(n < 0){
        cout << "The number of integers is less than 0" << endl;
    }
    else{
        for(int i=0; i < n; i++){
            if(array[i] >= previous_num){
                previous_num = array[i];
            }
            else if(array[i] < previous_num){
                return false;
            }
        }
        return true;
    }
}