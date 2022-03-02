#include <iostream>
#include "function-1-1.cpp"
using namespace std;

extern bool fan_array(int[], int);

int main(){
    int arr[6] = {0, 1, 2, 2, 1, 0};
    if(fan_array(arr, 6) == false){
        cout << "The array is not a fan array" << endl;
    }
    else if(fan_array(arr, 6) == true){
        cout << "The array is a fan array" << endl;
    }
    return 0;
}