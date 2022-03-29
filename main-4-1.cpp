#include <iostream>
using namespace std;

extern int secondSmallestSum(int *,int);

int main(){
    int arr[4] = {1, 2, 3, 4};
    cout << secondSmallestSum(arr, 4) << endl;
    return 0;
}