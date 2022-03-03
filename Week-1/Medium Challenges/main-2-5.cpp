#include <iostream>
#include "function-2-5.cpp"
using namespace std;

extern bool descending(int[], int);

int main(int argc, char **argv){
    // int arr[8] = {7, 6, 5, 4, 3, 2, 1, 0};
    // if(descending(arr, 8) == false){
    //     cout << "The array is not descending" << endl;
    // }
    // else if(descending(arr, 8) == true){
    //     cout << "The array is descending" << endl;
    // }
    descending(argv, argc);
    return 0;
}