#include <iostream>
#include "function-4-4.cpp"
#include <stdlib.h>
using namespace std;
extern bool ascending(int[], int);

int main(){
    int arr[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    
    if(ascending(arr, 8) == true){
        cout << "The array is ascending" << endl;
    }
    else if(ascending(arr, 8) == false){
        cout << "The array is not ascending" << endl;
    }
    return 0;
}