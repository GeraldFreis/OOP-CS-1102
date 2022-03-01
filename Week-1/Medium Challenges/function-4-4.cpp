#include <iostream>
#include <stdlib.h>
using namespace std;

bool ascending(int array[], int n){
    int previous_num = 0;
    if(n < 0){
        cout << "The number of integers is less than 1" << endl;
    }
    else{
        for(int i=0; i < n; i++){
            if(array[i] >= previous_num){
                previous_num = array[i];
            }
            else if(i == (n)){
                return true;
            }
            else{
                return false;
            }
        }
    }
}