#include <iostream>
#include "function-3-1.cpp"
using namespace std;

extern bool fanarray(int[], int);

int main(int argc, char **argv){
    int arr[argc];

    for(int i =0; i < argc; i++){
        arr[i] = *(argv[i]);
    }
    // }
    int arr_1[5] = {1, 2, 3, 2, 1};
    if (fanarray(arr_1, 5) == false){
        cout << "False" << endl;
    }
    else{
        cout << "True" << endl;
    }
    // fanarray(arr, argc);
    return 0;
}