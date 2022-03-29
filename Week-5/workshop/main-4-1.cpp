#include <iostream>
using namespace std;

extern int secondSmallestSum(int *,int);
extern int *readNumbers();

int main(){
    // int arr[4] = {1, 2, 3, 4};
    int *arr = readNumbers();
    cout << secondSmallestSum(arr, 4) << endl;
    return 0;
}