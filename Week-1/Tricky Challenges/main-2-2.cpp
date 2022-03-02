#include <iostream>
#include "function-2-2.cpp"
using namespace std;

extern int median(int[], int);

int main(){
    int arr[5] = {1, 3, 5, 2, 5};
    cout << "The median is: " << median(arr, 5) << endl;
    return 0;
}