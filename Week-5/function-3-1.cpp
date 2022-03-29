#include <iostream>
using namespace std;

int *readNumbers(){
    int *arr = new int[10];
    cout << "enter 10 numbers: " << endl;

    for(int i = 0; i < 9; i++){
        
        cin >> arr[i];
        cout << endl;
    }
    return arr;
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1){
        return false;
    }
    for(int i = 0; i < length; i++){
        if (numbers1[i] == numbers2[i]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}