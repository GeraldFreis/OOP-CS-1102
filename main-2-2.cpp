#include <iostream>
#include "function-2-2.cpp"
using namespace std;

extern int maximum_sum(int *, int);

int main(){
    int arr[10] = {31, -41, 59, 26, -53, 58, 97, -93, -23, 84};

    cout << maximum_sum(arr, 10) << endl;
    return 0;
}

// my code's output:
// my problem is that my code always will pick the first address
