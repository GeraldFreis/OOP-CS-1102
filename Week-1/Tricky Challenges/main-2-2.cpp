#include <iostream>
#include "function-2-2.cpp"
using namespace std;

extern int median(int[], int);

int main(){
    int arr[5] = {0, 1, 2, 3, 4};
    cout << "The median is: " << median(arr, 5) << endl;
    return 0;
}